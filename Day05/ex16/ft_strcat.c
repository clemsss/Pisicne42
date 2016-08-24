/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 14:01:56 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/15 11:55:25 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
