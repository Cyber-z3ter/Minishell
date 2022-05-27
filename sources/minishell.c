/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:08:16 by houazzan          #+#    #+#             */
/*   Updated: 2022/05/27 19:00:19 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int	main(void)
{
	char	*command;

	while (1)
	{
		command = readline("> ");
		if (command == NULL || !ft_strncmp(command, "exit", 4))
		{
			printf("exit");
			exit (0);
		}
		else if (command[0] != '\0')
			add_history(command);
		free (command);
	}
	return (0);
}
