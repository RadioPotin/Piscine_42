/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:31:13 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/12 07:55:31 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int size;
	int *intab;
	int i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	if (!(intab = malloc(sizeof(int) * size)))
		return (0);
	while (min < max)
	{
		intab[i] = min++;
		i++;
	}
	*range = intab;
	return (size);
}
