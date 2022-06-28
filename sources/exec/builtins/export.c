 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   export.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 16:49:09 by houazzan          #+#    #+#             */
/*   Updated: 2022/06/06 14:01:54 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../../../includes/minishell.h"


// int already_exist(t_list *command_list, t_env *env_list)
// {
// 	int add_to;

// 	add_to = 0;
// 	if (ft_strchr(command_list->content, '+'))
// 	{
// 		command_list->content = ft_strtrim(command_list->content, "+");
// 		add_to = 1;
// 	}
// 	while (env_list != NULL)
// 	{
// 		if (ft_strcmp(command_list->content, env_list->key) == 0)
// 		{
// 			command_list = command_list->next;
// 			if (command_list->content[0] == '\0' && add_to == 0)
// 				return(0);
// 			if (add_to == 1)
// 			{
// 				if (ft_strlen(ft_strchr(command_list->content, '=')) ==  1)
// 					return (0);
// 				env_list->value = ft_strjoin(env_list->value, command_list->content);
// 			}
// 			else
// 				env_list->value = ft_strdup(command_list->content);
// 			return(0);
// 		}
// 		env_list = env_list->next;
// 	}
// 	return (1);
// }

/* **************************************************** */
/*                  🅸🅽🆅🅰🅻🅸🅳_🆅🅽                    */
/* **************************************************** */

// int	invalid_vn(char	*table)
// {
// 	int i;
	
// 	i = 1;
// 	if (ft_strlen(ft_strchr(table, '+')) >  1 || !ft_isalpha(table[0]) && table[0] != '_')
// 		quit_minishell(EXIT_FAILURE, ft_strjoin(ft_strjoin("export", table),": not a valid identifier"));
// 	while (table[i])
// 	{
// 		if (!ft_isdigit(table[i]) && !ft_isalpha(table[i]) && table[i] != '_')
// 			quit_minishell(EXIT_FAILURE, ft_strjoin(ft_strjoin("export", table),": not a valid identifier"));
// 		i++;
// 	}
// 	return (0);
// }


// // /* **************************************************** */
// // /*                 🅴🆇🅿🅾🆁🆃_🆅🅽🅰🅼🅴                  */
// // /* **************************************************** */


// int	export_vname()
// {
// 	char 	**table;
// 	t_env 	*node;
// 	int 	i;

// 	i = 1;
// 	table = ft_fo_split(g_msh.cmd[0], '=');
// 	while (command_list != NULL)
// 	{
// 		invalid_vn(table[0]);
// 	// 	{
// 	// 		if (already_exist(command_list, env_list))
// 	// 		{
// 	// 			node = create_node(table);
// 	// 			add_back(&env_list, node);
// 	// 		}
// 	// 		free(table);
// 	// 		command_list = command_list->next;
// 	// 	}
// 	// 	else
// 	// 		return (1);
// 	// }
// 	 return (0);
// }

/* **************************************************** */
/*                    🅴🆇🅿🅾🆁🆃                        */
/* **************************************************** */

int	export()
{
	if (g_msh.cmd->cmd[1] == NULL)
		env(ADD_FUTERS);
	// else
	// 	if (export_vname())
	// 		quit_minishell(EXIT_FAILURE, "variable name undefined");
	return (EXIT_SUCCESS);
}


// ! If variable is assigned (has equal sign) then we need to add double quotes

//!  - If no arguments print all environment variables (including unnassigned
//!  ones(e.g. VAR instead of VAR=10))
//!  - If there are arguments each argument is a potential environment variable
//!  to be added to the environment variable linked list
//!  @param:	- [t_list *] list of tokens in a command
//! 			- [t_list **] pointer to envp linked list
//!  @return:	[int] exit status
//!  Line-by-line comments:
//!  @16-17	In case the variable already exists we just need to update it in 
//! 			the list and only if it is assigned: (e.g. If in envp ENVVAR=5
//! 			export ENVVAR has no effect)
//!  @20		If the variable doesn't exist we create a new node in the envp
//! 			linked list

 
 
