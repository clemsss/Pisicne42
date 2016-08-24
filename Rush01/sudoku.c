/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:18:21 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/14 20:36:38 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_kaz(int grille[9][9], int y, int x, int k)
{
	int rx;
	int ry;

	ry = y - (y % 3);
	rx = x - (x % 3);
	x = rx;
	y = ry;
	while (y < ry + 3)
	{
		while (x < rx + 3)
		{
			if (grille[y][x] == k)
				return (0);
			x++;
		}
		x = rx;
		y++;
	}
	return (1);
}

int		ft_y(int grille[9][9], int x, int k)
{
	int i = 0;
	while (i < 9)
	{
		if (grille[i][x] == k)
			return (0);
		i++;
	}
	return (1);
}

int		ft_x(int grille[9][9], int y, int k)
{
	int i = 0;
	while (i < 9)
	{
		if (grille[y][i] == k)
			return (0);
		i++;
	}
	return (1);
}

int		ft_sudoku(int grille[9][9],int position)
{
	int k;
	int y;
	int x;

	y = position / 9;
	x = position % 9;
	k = '1';
	if (9 * 9 == position)
		return (1);
	if (grille[y][x] != '.')
		return ft_sudoku(grille, position +1);
	while (k <= '9')
	{
		if (ft_x(grille, y, k) == 1 && ft_y(grille, x, k) == 1 && ft_kaz(grille, y, x, k) == 1)
		{
			grille[y][x] = k;
			if (ft_sudoku(grille, position +1) == 1)
				return (1);
		}
		k++;
	}
	grille[y][x] = '.';
	return (0);
}

void	affiche(char grille[9][9])
{
	int n;
	int m;
	n = 0;
	m = 0;
	while (n < 9)
	{
		while (m < 9)
			{
				ft_putchar(grille[n][m]);
				ft_putchar(' ');
				m++;
			}
			ft_putchar('\n');
			m = 0;
			n++;
	}
}

int		main(int argc, char **argv)
{
	char grille[9][9];
	int n;
	int m;

	ft_sudoku(grille, 0);
	n = 1;
	m = 0;
	while (n < argc)
	{
		while (m < 9)
			{
				grille[n-1][m] = argv[n][m];
				m++;
			}
			m = 0;
			n++;
	}
	return (0);
}
