/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 18:59:10 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 21:42:00 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	if (list_ptr == NULL)
		return (0);
	while (list_ptr != NULL)
	{
		if (cmp(data_ref, list_ptr->data) == 0)
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (0);
}
