/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:24:38 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/18 20:36:17 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	return (0);
}

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

int		ft_ecrire(char **argv, int k)
{
	k = 1;
	while (argv[k] != '\0')
	{
		ft_putstr(argv[k]);
		ft_putchar('\n');
		k++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		k;
	int		count;
	char	*stock;

	count = 0;
	while (count < argc)
	{
		k = 0;
		while (k < argc - 1)
		{
			if (ft_strcmp(argv[k], argv[k + 1]) > 0)
			{
				stock = argv[k + 1];
				argv[k + 1] = argv[k];
				argv[k] = stock;
			}
			k++;
		}
		count++;
	}
	ft_ecrire(argv, k);
	return (0);
}
