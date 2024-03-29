/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccarnot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:33:48 by ccarnot           #+#    #+#             */
/*   Updated: 2024/03/07 10:33:55 by ccarnot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D_bonus.h"

int	close_if(int *fd)
{
	if (*fd > 0)
	{
		if (close(*fd) < 0)
			return (-1);
		*fd = -1;
	}
	return (0);
}

void	free_if(char *str)
{
	if (str)
		free(str);
}

void	free_img(t_game *game, t_img *img)
{
	if (game && img->img_ptr)
		mlx_destroy_image(game->mlx_ptr, img->img_ptr);
	img->img_ptr = NULL;
	free(img);
	img = NULL;
}

void	free_game2(t_game *game)
{
	if (game->door)
		free_img(game, game->door);
	if (game->spr)
		free_img(game, game->spr);
	if (game->sprite)
		free(game->sprite);
	if (game->sprite_order)
		free(game->sprite_order);
	if (game->sprite_distance)
		free(game->sprite_distance);
	if (game->anim)
		(ft_lstfree_int(&game->anim->imgs), free(game->anim));
	if (game->buf)
		free_buffer(game);
	if (game->win_ptr)
		mlx_destroy_window(game->mlx_ptr, game->win_ptr);
	if (game->mlx_ptr)
		mlx_destroy_display(game->mlx_ptr);
	if (game->mlx_ptr)
		free(game->mlx_ptr);
	if (game)
		free(game);
}

int	free_game(t_game *game)
{
	if (game->tex)
		free_tab_int(game->tex, game->nb_tex);
	if (game->type)
		free_tab(game->type);
	if (game->map)
		free_tab(game->map);
	if (game->no)
		free_img(game, game->no);
	if (game->so)
		free_img(game, game->so);
	if (game->we)
		free_img(game, game->we);
	if (game->ea)
		free_img(game, game->ea);
	if (game->f)
		free(game->f);
	if (game->c)
		free(game->c);
	if (game->image)
		free_img(game, game->image);
	free_game2(game);
	return (0);
}
