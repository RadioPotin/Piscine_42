/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:51:45 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/12 18:17:08 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strwords(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	if (str == 0)
		return (0);
	while (str[i])
	{
		if (str[i] != ' ' || str[i] != '\t' || str[i] != '\n')
			i++;
		if ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
					str[i] == '\0') && (str[i - 1] >= 33 && str[i - 1] <= 122))
			words++;
	}
	return (words);
}

int		ft_wlen(char *str, int i)
{
	int letters;

	letters = 0;
	while (str[i] && (str[i] != '\t' || str[i] != '\n' || str[i] != ' '))
	{
		i++;
		letters++;
	}
	return (letters);
}

char	**ft_split_whitespaces(char *str)
{
	char	**graal;
	int		i;
	int		j;
	int		o;

	i = 0;
	j = 0;
	if (!(graal = malloc(sizeof(char*) * ft_strwords(str) + 1)))
		return (NULL);
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		graal[j] = malloc(sizeof(char) * ft_wlen(str, i) + 1);
		o = 0;
		if (str[i])
		{
			while (str[i] && (str[i] != '\t'
						&& str[i] != '\n' && str[i] != ' '))
				graal[j][o++] = str[i++];
			graal[j++][o] = '\0';
		}
	}
	graal[j] = 0;
	return (graal);
}
