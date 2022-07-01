/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   her_doc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:03:52 by houazzan          #+#    #+#             */
/*   Updated: 2022/07/01 10:15:10 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/minishell.h"

// void	her_handle(int sig)
// {
// 	if (sig == SIGINT)
// 		g_msh.her_signal = 1;
// 		//handle_sig(SIGQUIT);
// }

char *buff_check(char *str)
{
	if ((ft_strlen(ft_strchr(str, '\'')) == ft_strlen(str) - 1))
		printf("here\n");
	return (str);
}



void	her_doc(char *argv)
{
	int		fd;
	char	*buff;

	g_msh.fd = open("/tmp/file", O_CREAT | O_RDWR | O_TRUNC, 0666);
	while (1)
	{
		//signal(SIGINT, her_handle);
		buff = readline("heredoc> ");
		if (g_msh.her_signal == 1)
			break ;
		if (!buff || !ft_strcmp(buff, argv))
			break ;
		//buff = buff_check(buff);
		write(g_msh.fd, buff, ft_strlen(buff));
		write(g_msh.fd, "\n", 1);
		//free(buff);
	}
	g_msh.cmd->infile = open("/tmp/file", O_RDWR);
	if (g_msh.cmd->infile  < 0)
		quit_minishell(1, strerror(1));
}


void	run_her_doc()
{
	int i;
	i = 0;
	while (g_msh.cmd->delims[i])
	{
		her_doc(g_msh.cmd->delims[i]);
		i++;
	}
}