/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 15:54:55 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/23 19:19:19 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nbr_words(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			if (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t')
				nbr++;
		i++;
		if (!str[i])
			if (str[i - 1] != ' ' && str[i - 1] != '\n' && str[i - 1] != '\t')
				nbr++;
	}
	return (nbr);
}

char	*ft_strcopy(char *str, int start, int end)
{
	char	*tab;
	int		i;

	tab = (char*)malloc(sizeof(char) * (end - start));
	i = 0;
	while ((str[start] != ' ' && str[start] != '\n' && str[start] != '\t')
	&& (str[start] != '\0'))
	{
		tab[i] = str[start];
		i++;
		start++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		j;
	int		start;
	int		end;

	tab = (char**)malloc(sizeof(char*) * (ft_nbr_words(str) + 1));
	j = 0;
	i = 0;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t') && str[i])
			i++;
		start = i;
		if (str[i])
		{
			while ((str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			&& str[i])
				i++;
			end = i;
			tab[j++] = ft_strcopy(str, start, end);
		}
	}
	tab[j] = NULL;
	return (tab);
}
