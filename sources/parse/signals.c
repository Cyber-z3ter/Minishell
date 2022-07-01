/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:56:36 by aouhadou          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/07/01 17:34:10 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



=======
/*   Updated: 2022/07/01 12:02:42 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

>>>>>>> a4a6daeb8c1874fc95c99ce0a642045899fbd199
#include "../../includes/minishell.h"

void	handle_sig(int sig)
{
	if (sig == SIGINT)
	{
		printf("\033[K$>\n");
<<<<<<< HEAD

		rl_replace_line("", 0);
		rl_replace_line("", 0);

=======
		rl_replace_line("", 0);
>>>>>>> a4a6daeb8c1874fc95c99ce0a642045899fbd199
		rl_on_new_line();
		rl_redisplay();
	}
	if (sig == SIGQUIT)
	{
		rl_on_new_line();
		rl_replace_line("", 0);
		rl_redisplay();
	}
}

void	ctrl_d(char *str)
{
	printf("\033[1A\033[3Cexit\n");
	free(str);
	exit(0);
}
