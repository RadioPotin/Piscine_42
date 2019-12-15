/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 11:33:33 by dapinto           #+#    #+#             */
/*   Updated: 2018/08/30 07:27:49 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		lth;
	char	r;

	i = 0;
	lth = ft_strlen(str) - 1;
	while (lth >= i)
	{
		r = str[lth];
		str[lth] = str[i];
		str[i] = r;
		lth--;
		i++;
	}
	return (str);
}
