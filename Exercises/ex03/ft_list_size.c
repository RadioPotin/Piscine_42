/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:32:46 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 14:31:27 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*ptr;

	i = 0;
	ptr = begin_list;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
