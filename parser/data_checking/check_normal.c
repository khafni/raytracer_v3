/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_normal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/30 15:56:18 by khafni            #+#    #+#             */
/*   Updated: 2021/02/11 17:36:27 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../parser.h"

void	is_vec_normalized(double x, double y, double z, t_sxb sxb)
{
	if (x < -1 || x > 1.0)
	{
		sxb->is_error = 1;
		sxb->error_message = ft_strdup("Error\nnormal vector not normalized!");
		return ;
	}
	if (y < -1 || y > 1.0)
	{
		sxb->is_error = 1;
		sxb->error_message = ft_strdup("Error\nnormal vector not normalized!");
		return ;
	}
	if (z < -1 || z > 1.0)
	{
		sxb->is_error = 1;
		sxb->error_message = ft_strdup("Error\nnormal vector not normalized!");
		return ;
	}
}

void	check_normal(char *normal_vec, t_sxb sxb)
{
	char	**xyz;
	int		i;

	i = 0;
	xyz = ft_split(normal_vec, ',');
	while (xyz[i])
	{
		if (!check_f_number(xyz[i]))
		{
			sxb_set_error(sxb, "Error\nnormal vector bad formatted");
			free_split(xyz);
			return ;
		}
		i++;
	}
	if (!check_num_of_commas(normal_vec) || i != 3)
	{
		sxb_set_error(sxb, "Error\nnormal vector bad formatted");
		free_split(xyz);
		return ;
	}
	is_vec_normalized(ft_atof(xyz[0]), ft_atof(xyz[1]), ft_atof(xyz[2]), sxb);
	free_split(xyz);
}
