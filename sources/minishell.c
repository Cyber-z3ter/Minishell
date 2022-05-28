/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:08:16 by houazzan          #+#    #+#             */
/*   Updated: 2022/05/28 13:20:04 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/* **************************************************** */
/*             🅿🅰🆁🆂🅸🅽🅶_🅲🅾🅼🅼🅰🅽🅳                 */
/* **************************************************** */

int	parsing_command(char *command)
{
	int	i;
	int	quotes;

	i = -1;
	quotes = 0;
	while (command[++i])
	{
		if (quotes == 0 && command[i] == '"')
			quotes = 2;
		else if (quotes == 2 && command[i] == '"')
			quotes = 0;
		else if (quotes == 0 && command[i] == '\'')
			quotes = 1;
		else if (quotes == 1 && command[i] == '\'')
			quotes = 0;
		else if (quotes == 0 && command[i] == '\\')
			printf("%s", "Error");
		else if (quotes == 0 && command[i] == ';')
			printf("%s", "Error");
	}
	if (quotes != 0)
		return (printf("%s\n", "Error"), -1);
	return (0);
}
/* **************************************************** */
/*                🆁🅴🅰🅳_🅲🅾🅼🅼🅰🅽🅳                   */
/* **************************************************** */

char	*read_command(char *command)
{
	while (1)
	{
		command = readline("> ");
		if (!command || !strcmp(command, "exit"))
		{
			printf("exit");
			exit (0);
		}
		else if (command[0] != '\0')
			add_history(command);
		if (parsing_command(command) != 0)
			break ;
		free (command);
	}
	return (command);
}

/* **************************************************** */
/*                        🅼🅰🅸🅽                       */
/* **************************************************** */

int	main(void)
{
	char	*command;

	read_command(command);
	return (0);
}
