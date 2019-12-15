/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 01:00:18 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/10 01:23:58 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define MIN(c) (c >= 'a' && c <= 'z' ? 1 : 0)
#define MAJ(c) (c >= 'A' && c <= 'Z' ? 1 : 0)
#define NBR(c) (c >= '0' && c <= '9' ? 1 : 0)

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (MAJ(str[i]))
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if ((!MIN(str[i - 1]) && !MAJ(str[i - 1])
					&& !NBR(str[i - 1])) && (MIN(str[i]) && MIN(str[i + 1])))
			str[i] -= 32;
		i++;
	}
	return (str);
}
