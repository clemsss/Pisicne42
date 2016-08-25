/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 15:24:45 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/22 19:50:16 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int plus;
	int minus;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i]) - tab[i + 1] > 0)
			plus++;
		if (f(tab[i]) - tab[i + 1] < 0)
			minus++;
		i++;
	}
	if (plus > 0 && minus > 0)
		return (0);
	else
		return (1);
}
