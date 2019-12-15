/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:49:32 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/18 01:52:28 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/do_op.h"

int		main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (argc == 4 && ft_strlen(argv[2]) == 1)
	{
		ft_do_op(ft_atoi(argv[1]), argv[2][0], ft_atoi(argv[3]));
		return (0);
	}
	if (check_nbr(argv[1]) == 0 || check_nbr(argv[2]) == 0
			|| ft_strlen(argv[2]) != 1)
	{
		ft_putnbr(0);
		ft_putchar('\n');
		return (0);
	}
	return (0);
}
