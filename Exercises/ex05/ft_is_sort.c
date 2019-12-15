/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 07:39:21 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/18 20:02:13 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int croissant;
	int decroissant;

	croissant = 0;
	decroissant = 0;
	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			croissant++;
		if ((*f)(tab[i], tab[i + 1]) > 0)
			decroissant++;
		i++;
	}
	if (croissant != 0 && decroissant != 0)
		return (0);
	return (1);
}
