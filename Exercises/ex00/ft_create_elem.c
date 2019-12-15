/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 11:43:06 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/18 22:34:38 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *newnode;

	if (!(newnode = malloc(sizeof(t_list) * 1)))
		return (NULL);
	newnode->data = data;
	newnode->next = NULL;
	return (newnode);
}
