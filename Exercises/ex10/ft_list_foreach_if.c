/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:39:12 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 21:40:01 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)(void *, void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	if (list_ptr == NULL)
		return ;
	while (list_ptr != NULL)
	{
		if (cmp(list_ptr->data, data_ref) == 0)
			f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
