/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 09:20:04 by dapinto           #+#    #+#             */
/*   Updated: 2018/08/30 11:06:03 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int sw;
	int i;
	int j;

	i = 0;
	j = 1;
	while (size != 0)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				sw = tab[j];
				tab[j] = tab[i];
				tab[i] = sw;
			}
			i++;
			j++;
		}
		i = 0;
		j = 1;
		size--;
	}
}
