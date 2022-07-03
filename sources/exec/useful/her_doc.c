/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   her_doc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:03:52 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/03 18:16:37 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

char 	*buff_check(char *str)
{	
	int 	i;
	char	*sub;
	char	*env;

	i = 0;
	while (str[++i])
	{
		if (is_dollar(str) >= 0 && str[0] != '\'')
		{
			sub = dollar_substr(str);
			env = dollar_substr1(str);
			if (get_env1(env))
				replace_sub(&str, sub, get_env1(env));
			else if (!get_env1(env))
				replace_sub(&str, sub, "");
			ft_expand(&str, sub, env);
		}
	}
	return(str);
	//printf("%s\n", str);
}



void	her_handle(int sig)
{
	if (sig == SIGINT)
	{
		printf("\033[K$>\n");
		exit(0);
	}
}
void	her_doc(char *argv, int fd)
{
	char	*buff;
	char	*str;

	while (1)
	{
		signal(SIGINT, her_handle);
		 buff = readline("heredoc> ");
		if (!buff || !ft_strcmp(buff, argv))
			break ;
		buff = ft_strdup (buff_check(buff));
		write(fd, buff, ft_strlen(buff));
		write(fd, "\n", 1);
		free(buff);
	}
	close(fd);
	exit (0);
}

void	run_her_doc(char **argv, int fd)
{

	int i;
	int	pid;
	i = 0;
	pid = fork();
	if (pid == 0)
	{
		while (argv[i])
		{
			if (fd  < 0)
				quit_minishell(1, strerror(1));
			her_doc(argv[i], fd);
			i++;
		}
	}
	waitpid(pid, (int *)&g_msh.exit_status, 0);
}