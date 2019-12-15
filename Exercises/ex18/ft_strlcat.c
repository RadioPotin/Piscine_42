/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:29:06 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/11 22:00:10 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int				i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_length;

	i = 0;
	dest_length = ft_strlen(dest);
	while (dest[i])
		i++;
	if (size <= dest_length)
		return (size + ft_strlen(src));
	j = 0;
	while (i + j + 1 < size)
	{
		dest[i + j] = src[j];
		j += 1;
	}
	dest[i + j] = '\0';
	return (dest_length + (ft_strlen(src)));
}
