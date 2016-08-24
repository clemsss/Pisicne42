/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 23:18:21 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/14 13:58:30 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_y(int grille[9][9], int y, int x, int k);
int		ft_x(int grille[9][9], int y, int x, int k);
int		ft_kaz(int grille[9][9], int y, int x, int k);
int		ft_sudoku(int grille[9][9], int position);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_kaz(int grille[9][9], int y, int x, int k)
{
	int rx = x - (x % 3);
	int ry = y - (y % 3);

	x = rx;
	y = ry;
	for (y = ry; y < ry + 3; y++)
		for (x = rx; x < rx + 3; x++)
			if (grille[y][x] == k)
			   return (0);	
	return (1);
}

int		ft_y(int grille[9][9], int y, int x, int k)
{
	while (y < 9)
	{
		if (grille[y][x] == k)
			return (0);
		y++;
	}
	return (1);
}

int		ft_x(int grille[9][9], int y, int x, int k)
{
	while (x < 9)
	{
		if (grille[y][x] == k)
			return (0);
		x++;
	}
	return (1);
}

int		ft_sudoku(int grille[9][9],int position)
{

	int k;
	k = 1;

	int y = position / 9, x = position % 9;

	if (9 * 9 == position)
		return (1);

	if (grille[y][x] != 0)
		return ft_sudoku(grille, position +1);


	while (k <= 9)
	{
		if (ft_x(grille, y, x, k) == 1 && ft_y(grille, y, x, k) == 1
		&& ft_kaz(grille, y, x, k) == 1)
		{
			grille[y][x] = k;
			if (ft_sudoku(grille, position +1) == 1)
				return (1);
		}
		k++;
	
	}
	grille[y][x] = 0;
	return (0);
}

int		main(void)
{
	int grille[9][9] =
	 {
		{9, 0, 0, 1, 0, 0, 0, 0, 5},
   		{0, 0, 5, 0, 9, 0, 2, 0, 1},
		{8, 0, 0, 0, 4, 0, 0, 0, 0},
		{0, 0, 0, 0, 8, 0, 0, 0, 0},
		{0, 0, 0, 7, 0, 0, 0, 0, 0},
		{0, 0, 0, 0, 2, 6, 0, 0, 9},
		{2, 0, 0, 3, 0, 0, 0, 0, 6},
		{0, 0, 0, 2, 0, 0, 9, 0, 0},
		{0, 0, 1, 9, 0, 4, 5, 7, 0}
	  };

	ft_sudoku(grille, 0);

    for (int y = 0; y < 9; y++)
	{
      for (int x = 0; x < 9; x++)
	  {
       printf( ((x + 1)% 3) ? "%d " : "%d|", grille[y][x]);
	     }
	        putchar('\n');
		        if (!((y + 1)% 3))
	            puts("------------------");
	}
			    puts("\n\n");
	return (0);
}
