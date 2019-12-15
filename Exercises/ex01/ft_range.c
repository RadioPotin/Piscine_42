/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:57:00 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/11 16:30:36 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *intab;
	int i;

	i = 0;
	size = max - min;
	if (min >= max)
		return (NULL);
	if (!(intab = malloc(sizeof(int) * size)))
		return (NULL);
	while (min < max)
	{
		intab[i] = min++;
		i++;
	}
	return (intab);
}
