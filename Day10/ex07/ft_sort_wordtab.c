/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:02:19 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/24 16:20:11 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int		ft_len_tab(char **tab)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (tab[i])
	{
		i++;
		len++;
	}
	return (len);
}

void	ft_sort_wordtab(char **tab)
{
	int 	i;
	int		len;
	int 	trie;
	char	*stock;

	len = ft_len_tab(tab);
	trie = 0;
	while (len > 1)
	{
		while (trie == 0)
		{	
			i = - 1;
			trie = 1;
			while (++i < len - 1)
			{
				if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				{
					stock = tab[i + 1];
					tab[i + 1] = tab[i];
					tab[i] = stock;
					trie = 0;
				}
			}
		}
	}
}
