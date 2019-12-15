/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:38:04 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/12 18:03:27 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (!(s = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (i <= len)
	{
		s[i] = src[i];
		i++;
	}
	s[len + 1] = '\0';
	return (s);
}
