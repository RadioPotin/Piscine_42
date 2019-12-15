/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:11:59 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/18 01:59:16 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

void	ft_do_op(int nb1, char op, int nb2)
{
	void	(*do_op[6])(int, int);

	do_op[0] = &ft_add;
	do_op[1] = &ft_sub;
	do_op[2] = &ft_mul;
	do_op[3] = &ft_div;
	do_op[4] = &ft_mod;
	if (op == '\0')
		return ;
	if (op == '+')
		do_op[0](nb1, nb2);
	if (op == '-')
		do_op[1](nb1, nb2);
	if (op == '*')
		do_op[2](nb1, nb2);
	if (op == '/')
		do_op[3](nb1, nb2);
	if (op == '%')
		do_op[4](nb1, nb2);
	else if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}
