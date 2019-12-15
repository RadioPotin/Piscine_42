/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 06:50:11 by dapinto           #+#    #+#             */
/*   Updated: 2018/08/30 18:52:36 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int c);

void	printpairs(char *a, char *b)
{
	ft_putchar(a[0]);
	ft_putchar(a[1]);
	ft_putchar(' ');
	ft_putchar(b[0]);
	ft_putchar(b[1]);
	if ((a[0] == '9' && a[1] == '8') && (b[0] == '9' && b[1] == '9'))
	{
		return ;
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	processpairs(char *a, char *b)
{
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			while (b[0] <= '9')
			{
				while (b[1] <= '9')
				{
					printpairs(a, b);
					b[1]++;
				}
				b[0]++;
				b[1] = '0';
				(a[0] == b[0] && a[1] == b[1]) ? b[1]++ : b[1];
			}
			a[1]++;
			b[0] = a[0];
			b[1] = a[1] + 1;
		}
		a[0]++;
		a[1] = '0';
	}
}

void	ft_print_comb2(void)
{
	char a[2];
	char b[2];

	a[0] = '0';
	a[1] = '0';
	b[0] = '0';
	b[1] = '1';
	processpairs(a, b);
}
