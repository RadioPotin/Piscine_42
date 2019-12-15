/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 18:05:51 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/12 17:25:46 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		param_size;
	char	*param_string;

	i = 1;
	j = 1;
	param_size = 0;
	while (argv[j])
	{
		param_size += ft_strlen(argv[j]);
		j++;
	}
	if (argc == 1 || !argv[1])
		return ("\0");
	if (!(param_string = malloc(sizeof(char) * (param_size + argc))))
		return (0);
	while (i < argc)
	{
		ft_strcat(param_string, argv[i]);
		if (i < argc - 1)
			ft_strcat(param_string, "\n");
		i++;
	}
	return (param_string);
}
