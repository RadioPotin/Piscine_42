/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 07:23:21 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/17 09:51:49 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *retour;
	int i;

	i = 0;
	if (!(retour = malloc(sizeof(int) * length)))
		return (NULL);
	while (i < length)
	{
		retour[i] = f(tab[i]);
		i++;
	}
	return (retour);
}
