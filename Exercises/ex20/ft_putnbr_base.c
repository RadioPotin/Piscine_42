/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 19:22:10 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/11 22:16:25 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_base_check_and_strlen(char *str)
{
	int		i;
	int		length;

	length = 0;
	while (str[length])
	{
		if (str[length] == '-' || str[length] == '+')
			return (0);
		i = length;
		while (i-- >= 0)
			if (str[i] == str[length])
				return (0);
		length++;
	}
	return (length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		nbase;

	nbase = ft_base_check_and_strlen(base);
	if (nbase > 1)
	{
		if (nbr == -2147483648)
		{
			ft_putchar('-');
			ft_putnbr_base(-1 * (nbr / nbase), base);
			ft_putchar(base[-1 * (nbr % nbase)]);
		}
		else if (nbr < 0)
		{
			ft_putchar('-');
			nbr = -nbr;
			ft_putnbr_base(nbr, base);
		}
		else if (nbr >= nbase)
		{
			ft_putnbr_base(nbr / nbase, base);
			ft_putnbr_base(nbr % nbase, base);
		}
		else
			ft_putchar(base[nbr]);
	}
}
