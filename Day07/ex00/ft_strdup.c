/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 19:36:56 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/20 14:06:25 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

int		ft_strlen(char *str)
{
	int len;
	int i;

	len = 0;
	i = 0;
	while (*str++ != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		len;

	len = ft_strlen(src);
	cpy = (char*)malloc(sizeof(*src) * (len + 1));
	ft_strcpy(cpy, src);
	return (cpy);
}
