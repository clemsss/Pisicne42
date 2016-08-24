/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle04.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 11:37:41 by estephan          #+#    #+#             */
/*   Updated: 2016/08/09 15:33:54 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	colle_part2(int x, int y, int i, int j);
void	colle_part3(int x, int y, int i, int j);
void	ft_putchar(char c);

void	colle(int x, int y)
{
	int j;
	int i;

	i = 0;
	j = x - 2;
	if (x > 0 && y > 0)
	{
		ft_putchar('A');
		x--;
		y--;
	}
	while (x > 0)
	{
		if (x == 1)
		{
			ft_putchar('C');
			x--;
		}
		else
		{
			ft_putchar('B');
			x--;
		}
	}
	colle_part2(x, y, i, j);
}

void	colle_part2(int x, int y, int i, int j)
{
	while (y > 0)
	{
		if (y == 1)
		{
			ft_putchar('\n');
			ft_putchar('C');
			while (i < j)
			{
				ft_putchar('B');
				i++;
			}
			if (i <= j)
				ft_putchar('A');
			y--;
		}
		else
		{
			colle_part3(x, y, i, j);
		}
		y--;
	}
	ft_putchar('\n');
}

void	colle_part3(int x, int y, int i, int j)
{
	ft_putchar('\n');
	ft_putchar('B');
	i = 0;
	while (i < j)
	{
		ft_putchar(' ');
		i++;
	}
	if (i <= j)
	{
		ft_putchar('B');
	}
}
