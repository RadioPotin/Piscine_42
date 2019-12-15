/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapinto <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:18:18 by dapinto           #+#    #+#             */
/*   Updated: 2018/09/07 15:18:23 by dapinto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

# define SAVE_THE_WORLD "jack"

typedef	struct		s_perso
{
	char		*name;
	float		life;
	int			age;
	char		*profession;
}					t_perso;

#endif
