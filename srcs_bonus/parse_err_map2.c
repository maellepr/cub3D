/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_err_map2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:35:14 by ccarnot           #+#    #+#             */
/*   Updated: 2024/03/07 10:35:16 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D_bonus.h" 

int	valid_char(char c)
{
	if (c != '0' && c != '1'
		&& c != 'N' && c != 'S'
		&& c != 'E' && c != 'W'
		&& c != '\n')
	{
		return (-1);
	}
	return (0);
}

int	valid_char_bonus(t_game *game, char c)
{
	if (c != '0' && c != '1'
		&& c != 'N' && c != 'S'
		&& c != 'E' && c != 'W'
		&& c != '\n' && c != 'D'
		&& c != 'A')
	{
		return (-1);
	}
	if (c == 'A')
	{
		game->anim_flag = 1;
		game->num_sprites++;
	}
	return (0);
}
