/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:08:02 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/17 23:02:10 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	char	*swap;
	int		parnmb;
	int		i;

	i = 0;
	parnmb = 0;
	while (tab[parnmb++])
		while (i < parnmb - 1)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				swap = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = swap;
				i = 0;
			}
			else
				i++;
		}
}
