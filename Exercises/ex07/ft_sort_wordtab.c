/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:08:02 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/17 09:51:37 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[0] == '\0' || s2[0] == '\0')
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_wordtab(char **tab)
{
	char	*swap;
	int		parnmb;
	int		i;

	i = 0;
	parnmb = 0;
	while (tab[parnmb++])
		while (i < parnmb - 1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
