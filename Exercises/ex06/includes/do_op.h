/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:31:29 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/18 01:23:06 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_strlen(char *s);
int		ft_atoi(char *str);
int		check_nbr(char *str);
void	ft_do_op(int nb1, char c, int nb2);
void	ft_putnbr(int nbr);
void	ft_putchar(char c);
void	ft_add(int nb1, int nb2);
void	ft_sub(int nb1, int nb2);
void	ft_div(int nb1, int nb2);
void	ft_mod(int nb1, int nb2);
void	ft_mul(int nb1, int nb2);
void	err_out(int err);

#endif
