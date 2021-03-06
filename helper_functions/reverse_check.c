/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 10:26:50 by khafni            #+#    #+#             */
/*   Updated: 2021/02/11 10:36:03 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "helper_functions.h"

int		reverse_check(const char *haystack, const char *needle)
{
	int i;
	int	j;

	i = ft_strlen(haystack);
	j = ft_strlen(needle);
	while (j >= 0)
	{
		if (haystack[i] != needle[j])
			return (0);
		i--;
		j--;
	}
	return (1);
}
