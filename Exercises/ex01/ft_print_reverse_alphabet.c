/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 14:45:42 by dapinto           #+#    #+#             */
/*   Updated: 2018/08/29 10:26:29 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char z;
	char a;

	z = 'z';
	a = 'a';
	while (z >= a)
	{
		ft_putchar(z--);
	}
}
