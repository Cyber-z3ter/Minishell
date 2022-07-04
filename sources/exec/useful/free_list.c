// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   free_list.c                                        :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2022/06/09 08:57:39 by houazzan          #+#    #+#             */
// /*   Updated: 2022/06/09 09:08:12 by houazzan         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */


# include "../../../includes/minishell.h"

void    free_all()
{
// 	t_env     *ptr;
	int		i;

	i = 0;
	while (g_msh.separ_path[i])
	{
		free(g_msh.separ_path[i]);
		i++;
	}
	free(g_msh.separ_path);
	free(g_msh.pipefd);
// 	ptr = g_msh.dup_envp;
// 	while (ptr)
// 	{
// 		free(ptr->key);
// 		free(ptr->value);
// 		ptr = ptr->next;
// 	}
// 	free(ptr->key);
// 	free(ptr->value);
// 	while (g_msh.my_env[i])
// 	{
// 		free(g_msh.my_env[i]);
// 		i++;
// 	}
// 	free(g_msh.my_env);
// 	i = 0;
// 	while (g_msh.separ_path[i])
// 	{
// 		free(g_msh.separ_path[i]);
// 		i++;
// 	}
// 	free(g_msh.separ_path);
// 	free(g_msh.cmd);
// 	free(g_msh.token);
// 	free(g_msh.dup_envp);
}