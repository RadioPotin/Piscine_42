/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 08:55:03 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/10 13:21:15 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	if (to_find[k] == '\0')
		return (0);
	while (str[i])
	{
		j = i;
		k = 0;
		while (str[j] == to_find[k])
		{
			j++;
			k++;
			if (to_find[k] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
