/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 09:52:33 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/06 10:11:22 by dapinto          ###   ########.fr       */
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

	i = 0;
	if (argc > 0)
	{
		while (argv[i])
			i++;
		i--;
		while (i > 0)
		{
			ft_putstr(argv[i--]);
			ft_putchar('\n');
		}
		return (0);
	}
	return (0);
}
