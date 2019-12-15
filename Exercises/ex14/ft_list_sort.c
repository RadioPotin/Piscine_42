/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 08:55:59 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 11:49:45 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	data_switcher(t_list *ptr1, t_list *ptr2)
{
	void *bag;

	bag = ptr1->data;
	ptr1->data = ptr2->data;
	ptr2->data = bag;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list *ptr;

	ptr = *begin_list;
	if (ptr == NULL)
		return ;
	while (ptr->next != NULL)
	{
		if (cmp(ptr->data, ptr->next->data) > 0)
			data_switcher(ptr, ptr->next);
		ptr = ptr->next;
	}
}
