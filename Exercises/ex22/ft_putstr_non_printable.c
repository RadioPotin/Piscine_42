/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:43:52 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/12 07:45:42 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_non_print_hexa(int nbr)
{
	char	*base;

	base = "0123456789ABCDEF";
	ft_putchar('\\');
	ft_putchar(base[nbr / 16]);
	ft_putchar(base[nbr % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			ft_non_print_hexa(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}
