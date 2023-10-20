/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhlel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:07:07 by obouhlel          #+#    #+#             */
/*   Updated: 2023/10/20 10:40:38 by obouhlel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "utils.h"
# include "structs.h"

t_list	*lst_new(char move[SIZE_MOVE]);
t_list	*last_node(t_list *lst);
size_t	lst_size(t_list *lst);
int		add_back(t_list **lst, char move[SIZE_MOVE]);
void	lst_clear(t_list **lst);

#endif