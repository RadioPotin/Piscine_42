/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:03:28 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 13:03:39 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int		ft_active_bits(int value)
{
	unsigned int	count;

	count = 0;
	if (value >= 0)
	{
		while (value > 0)
		{
			if ((value & 1) == 1)
				count++;
			value >>= 1;
		}
		return (count);
	}
	else
	{
		value = 4294967296 - value;
		while (value > 0)
		{
			if ((value & 1) == 1)
				count++;
			value >>= 1;
		}
		return (count);
	}
}
