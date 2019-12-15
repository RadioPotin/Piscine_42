/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 09:00:19 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 23:38:49 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *ptr_list;
	t_list *linker;
	t_list *holder;

	if (*begin_list == NULL)
		return ;
	ptr_list = *begin_list;
	while (ptr_list != NULL)
	{

		if (cmp(ptr_list->data, data_ref) == 0)
			free(ptr_list);
		ptr_list = ptr_list->next;
	}
}
