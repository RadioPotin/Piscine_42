/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 19:32:42 by dapinto           #+#    #+#             */
/*   Updated: 2018/08/30 07:10:18 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int cnt;
	int val;
	int toi;

	cnt = 0;
	val = 1;
	toi = 0;
	while (str[cnt] <= 32)
		cnt++;
	if (str[cnt] == '-')
	{
		val *= -val;
		cnt++;
	}
	else if (str[cnt] == '+')
		cnt++;
	while (str[cnt] >= 48 && str[cnt] <= 57)
	{
		toi = toi * 10 + (str[cnt] - '0');
		cnt++;
	}
	return (toi * val);
}
