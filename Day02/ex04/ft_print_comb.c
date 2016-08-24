/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/04 21:03:01 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/05 15:05:57 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		ft_print_quotespace_char(int a, int b)
{
	ft_putchar(a);
	ft_putchar(b);
	return (0);
}

int		ft_print_putchar(int a, int b, int c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	return (0);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_print_putchar(a, b, c);
				if (a != '7')
					ft_print_quotespace_char(',', ' ');
				c++;
			}
			b++;
		}
		a++;
	}
}
