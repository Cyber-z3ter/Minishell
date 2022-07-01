/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expander_utils2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouhadou <aouhadou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/01 10:08:19 by aouhadou          #+#    #+#             */
/*   Updated: 2022/07/01 10:09:35 by aouhadou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int check_dollar(t_command	*list)
{
	t_command	*tmp;
	int			i;

	tmp = list;
	while (tmp)
	{
		i = 0;
		while (tmp->cmd[i])
		{
			if (is_dollar(tmp->cmd[i]) != -1)
				return (1);
			i++;
		}
		tmp = tmp->next;
	}
	return (0);
}