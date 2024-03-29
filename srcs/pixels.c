/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pixels.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapoirie <mapoirie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:34:11 by mapoirie          #+#    #+#             */
/*   Updated: 2024/03/07 10:34:12 by mapoirie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3D.h"

unsigned int	get_pixel_img(t_img src, int x, int y)
{
	return (*(unsigned int *)((src.addr
			+ (y * src.line_len) + (x * src.bpp / 8))));
}

void	put_pixel_img_anims(t_img dst, int x, int y, int color)
{
	char	*img;

	if (x >= 0 && y >= 0 && x < dst.w && y < dst.h)
	{
		img = dst.addr + (y * dst.line_len + x * (dst.bpp / 8));
		*(unsigned int *) img = color;
	}
}
