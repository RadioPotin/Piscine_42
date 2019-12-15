/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:12:34 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 11:00:37 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *newnode;

	newnode = ft_create_elem(data);
	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else if (begin_list != NULL)
	{
		newnode->next = *begin_list;
		*begin_list = newnode;
	}
}
