/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 16:14:16 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/14 09:32:50 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_par.h"

int						ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char					*ft_strdup(char *src)
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

struct s_stock_par		*ft_param_to_tab(int ac, char **argv)
{
	int			i;
	t_stock_par *board;

	if (!(board = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	i = 0;
	while (argv[i])
	{
		board[i].size_param = ft_strlen(argv[i]);
		board[i].str = argv[i];
		board[i].copy = ft_strdup(argv[i]);
		board[i].tab = ft_split_whitespaces(argv[i]);
		i++;
	}
	board[i].str = 0;
	return (board);
}
