/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:50:53 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 22:00:36 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *ptr;

	ptr = *begin_list;
	if (begin_list == NULL)
		*begin_list = ft_create_elem(data);
	else
		while (ptr->next != NULL)
			ptr = ptr->next;
	ptr->next = ft_create_elem(data);
}
