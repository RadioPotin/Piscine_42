/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 00:21:24 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 15:15:40 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *ptr1;
	t_list *ptr2;

	ptr1 = *begin_list1;
	ptr2 = begin_list2;
	if (begin_list1 == NULL)
		*begin_list1 = begin_list2;
	while (ptr1->next == NULL)
		ptr1 = ptr1->next;
	ptr1->next = ptr2;
}
