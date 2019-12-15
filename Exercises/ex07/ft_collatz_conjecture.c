/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 09:36:26 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 15:18:59 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int		ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	else if (!(base % 2))
		return (1 + ft_collatz_conjecture(base / 2));
	else
		return (1 + ft_collatz_conjecture((base * 3) + 1));
}
