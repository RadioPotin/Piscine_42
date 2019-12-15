/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:39:15 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 15:16:38 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] && str)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_print_next(int hour)
{
	if (hour > 12 && hour < 24)
	{
		hour = hour - 12;
		ft_putnbr(hour);
		ft_putstr(".00 P.M. AND ");
		if (hour != 23)
		{
			ft_putnbr(hour + 1);
			ft_putstr(".00 A.M.\n");
		}
		else
		{
			ft_putnbr(12);
			ft_putstr(".00 A.M.\n");
		}
	}
	if (hour == 24 || !hour)
	{
		ft_putnbr(12);
		ft_putstr(".00 A.M. AND ");
		ft_putnbr(1);
		ft_putstr(".00 A.M.\n");
	}
}

void	ft_takes_place(int hour)
{
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour < 12 && hour > 0)
	{
		ft_putnbr(hour);
		ft_putstr(".00 A.M. AND ");
		if (hour != 11)
		{
			ft_putnbr(hour + 1);
			ft_putstr(".00 A.M.\n");
		}
		else
		{
			ft_putnbr(12);
			ft_putstr(".00 P.M.\n");
		}
	}
	if (hour == 12)
	{
		ft_putnbr(hour);
		ft_putstr(".00 P.M. AND ");
		ft_putnbr(1);
		ft_putstr(".00 P.M.\n");
	}
	ft_print_next(hour);
}
