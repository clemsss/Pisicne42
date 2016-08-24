/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 19:45:49 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/20 13:56:10 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int nb_carac;
	int j;

	nb_carac = 0;
	j = 0;
	while (dest[nb_carac] != '\0')
		nb_carac++;
	while (src[j])
	{
		dest[nb_carac] = src[j];
		nb_carac++;
		j++;
	}
	dest[nb_carac] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	char	*concat;

	concat = malloc(sizeof(concat) * (argc - 1));
	i = 1;
	while (i < argc)
	{
		ft_strcat(concat, argv[i]);
		if (i < argc - 1)
			ft_strcat(concat, "\n");
		i++;
	}
	return (concat);
}
