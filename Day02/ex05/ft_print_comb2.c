/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 22:41:11 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/06 17:33:40 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int		ft_print_two_int(int a, int b)
{
	int first;
	int second;

	first = '0' + a / 10;
	second = '0' + a % 10;
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(' ');
	first = '0' + b / 10;
	second = '0' + b % 10;
	ft_putchar(first);
	ft_putchar(second);
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	return (0);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			if (a < b)
				ft_print_two_int(a, b);
			b++;
		}
		a++;
	}

}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
