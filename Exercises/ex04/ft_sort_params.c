/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 10:11:39 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/12 20:27:33 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	if (str == 0)
		return ;
	while (str[i])
	{
		ft_putchar(str[i++]);
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	while (s1[i] == s2[i] && (s1[i] != 0 || s2[i] != 0))
	{
		if (s1[i] - s2[i] == 0)
			i++;
		if (s2[i] > s1[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] + s2[i]);
	}
	return (0);
}

void	print_args(char **av, int ac)
{
	int i;

	i = 1;
	if (ac == 1)
		return ;
	while (i < ac)
	{
		ft_putstr(av[i++]);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*swap;

	i = 1;
	if (argc > 1)
	{
		while (argv[i + 1])
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				swap = argv[i + 1];
				argv[i + 1] = argv[i];
				argv[i] = swap;
				i = 1;
			}
			else
				i++;
		}
		print_args(argv, argc);
		return (0);
	}
	else if (argc == 1)
		return (0);
}
