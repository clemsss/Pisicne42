/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: estephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 11:37:41 by estephan          #+#    #+#             */
/*   Updated: 2016/08/06 15:37:40 by estephan         ###   ########.fr       */
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
		ft_putchar(47);
		x--;
		y--;
	}
	while (x > 0)
	{
		if (x == 1)
		{
			ft_putchar(92);
			x--;
		}
		else
		{
			ft_putchar('*');
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
			ft_putchar(92);
			while (i < j)
			{
				ft_putchar('*');
				i++;
			}
			if (i <= j)
				ft_putchar(47);
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
	ft_putchar('*');
	i = 0;
	while (i < j)
	{
		ft_putchar(' ');
		i++;
	}
	if (i <= j)
	{
		ft_putchar('*');
	}
}
