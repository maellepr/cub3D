/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:30:52 by mapoirie          #+#    #+#             */
/*   Updated: 2024/03/07 10:30:53 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

void	free_buffer(t_game *game)
{
	int	i;

	i = 0;
	while (i < game->screen_h && game->buf && game->buf[i])
	{
		free(game->buf[i]);
		i++;
	}
	free(game->buf);
	game->buf = NULL;
}

int	ft_exit(t_game *game)
{
	free_game(game);
	exit (0);
}
