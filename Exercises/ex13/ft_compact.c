/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:05:15 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 15:46:46 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_treatment(char **tab, int i, int o, int length)
{
	int j;
	int flag;

	flag = 0;
	i = 0;
	while (i < length)
	{
		j = i;
		if (tab[i][o] == 0)
		{
			tab[i] = tab[i + 1];
			flag += 1;
		}
		while (tab[j] == tab[j + 1] && tab[j + 1] != '\0')
		{
			tab[j] = tab[j + 1];
			j++;
		}
		i++;
	}
	tab[i][0] = '\0';
	return (length - flag);
}

int		ft_compact(char **tab, int length)
{
	int i;
	int o;

	i = 0;
	o = 0;
	if (tab == 0)
		return (0);
	return (ft_treatment(tab, i, o, length));
}
