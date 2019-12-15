/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:37:19 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 21:49:03 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tonull;
	t_list *mid;
	t_list *right;

	tonull = NULL;
	right = NULL;
	mid = *begin_list;
	if (*begin_list == NULL || (*begin_list)->next == NULL)
		return ;
	while (mid != NULL)
	{
		right = mid->next;
		mid->next = tonull;
		tonull = mid;
		mid = right;
	}
	*begin_list = tonull;
}
