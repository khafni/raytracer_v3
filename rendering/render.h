/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:19:20 by khafni            #+#    #+#             */
/*   Updated: 2021/02/11 18:54:00 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RENDER_H
# define RENDER_H
# include "../world/world.h"
# include "../shading/shading.h"
# include "../bmp.h"
# include "mlx_image.h"

t_tup		color_at(t_world w, t_ray r);
void		render_bmp(t_world w);
int			key_pressed(int keycode, t_world w);
int			red_cross(t_world w);
t_image		render_mlx_image(t_camera c, t_world w, void *mlx_ptr);
void		render_mlx_generate_imgs(t_world w);
void		render_mlx(t_world w);
void		render(int argc, t_world w);
#endif
