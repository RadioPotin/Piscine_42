/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:21:52 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/19 23:03:56 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *laser;
	t_list *target;

	laser = *begin_list;
	target = NULL;
	if (*begin_list == NULL)
		return ;
	while (laser)
	{
		target = laser->next;
		free(laser);
		laser = target;
	}
	begin_list = NULL;
}
