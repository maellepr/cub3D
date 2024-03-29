/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:34:08 by mapoirie          #+#    #+#             */
/*   Updated: 2024/03/07 10:34:09 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

int	tab_size(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	parse_content(t_game *game)
{
	if (redef_types(game) == -1)
		return (1);
	if (check_err_types(game) == -1)
		return (1);
	if (redef_map(game) == -1)
		return (1);
	if (check_err_map(game) == -1)
		return (1);
	if (BONUS)
	{
		if (bonus_contents(game) == -1)
			return (1);
	}
	return (0);
}
