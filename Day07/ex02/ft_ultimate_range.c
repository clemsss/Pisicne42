/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 13:13:30 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/21 22:33:24 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
		return (0);
	*range = (int*)malloc(sizeof(int) * (max - min + 1));
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	(*range)[i] = '\0';
	return (max - min);
}
