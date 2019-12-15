/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:02:51 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 14:31:54 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*ptr;

	i = 0;
	ptr = begin_list;
	if (ptr == NULL)
		return (ptr);
	while (i < nbr)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
