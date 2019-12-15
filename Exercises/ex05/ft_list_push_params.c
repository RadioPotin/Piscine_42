/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:51:25 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 22:57:25 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list	*head;
	t_list	*ptr;
	int		i;

	i = 0;
	head = NULL;
	while (i < ac)
	{
		ptr = ft_create_elem(av[i]);
		ptr->next = head;
		head = ptr;
		i++;
	}
	return (head);
}
