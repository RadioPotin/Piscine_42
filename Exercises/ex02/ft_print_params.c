/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 09:46:50 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/06 11:39:15 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 0)
	{
		while (argv[i])
		{
			ft_putstr(argv[i++]);
			ft_putchar('\n');
		}
		return (0);
	}
	return (0);
}
