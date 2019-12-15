/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:46:59 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/18 22:42:20 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *ptr;

	ptr = begin_list;
	if (ptr == NULL)
		return (NULL);
	else
		while (ptr->next != NULL)
			ptr = ptr->next;
	return (ptr);
}
