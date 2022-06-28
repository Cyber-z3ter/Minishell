/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signals.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 13:56:36 by aouhadou          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/06/28 13:53:56 by aouhadou         ###   ########.fr       */
=======
/*   Updated: 2022/06/28 17:30:56 by houazzan         ###   ########.fr       */
>>>>>>> 8057c3a515dab0d19ecd27d0bdaecec61d0046ad
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	handle_sig(int sig)
{
	if (sig == SIGINT)
	{
		printf("\033[K$>\n");
		rl_replace_line("", 0);
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

void	ctrl_d(void)
{
	printf("\033[1A\033[3Cexit\n");
	exit(1);
}
