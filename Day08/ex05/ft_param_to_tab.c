/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 15:21:23 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/25 16:52:31 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char				*ft_strdup(char *src)
{
	int		len;
	char	*copy;

	len = ft_strlen(src);
	copy = (char*)malloc(sizeof(*src) * (len + 1));
	ft_strcpy(copy, src);
	return (copy);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int			i;
	t_stock_par	*s;

	s = (t_stock_par*)malloc(sizeof(*s) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		s[i].size_param = ft_strlen(av[i]);
		s[i].str = NULL;
		s[i].str = av[i];
		s[i].copy = NULL;
		s[i].copy = ft_strdup(av[i]);
		s[i].tab = NULL;
		s[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	s[i].str = NULL;
	return (s);
}
