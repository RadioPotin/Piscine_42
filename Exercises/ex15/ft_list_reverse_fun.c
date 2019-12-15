/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:47:12 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 14:32:27 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list *tonull;
	t_list *mid;
	t_list *right;

	tonull = NULL;
	mid = begin_list;
	if (begin_list == NULL || begin_list->next == NULL)
		return ;
	while (mid->next != NULL)
	{
		right = mid->next;
		mid->next = tonull;
		tonull = mid;
		mid = right;
	}
	begin_list = tonull;
}
