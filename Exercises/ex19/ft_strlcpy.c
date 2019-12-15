/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:28:16 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/12 07:43:43 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int			i;
	int			size_int;

	size_int = size;
	i = -1;
	if (size == 0)
		return (ft_strlen(src));
	while (++i < size_int - 1 && src[i] != '\0')
		dest[i] = src[i];
	dest[i] = '\0';
	return (ft_strlen(src));
}
