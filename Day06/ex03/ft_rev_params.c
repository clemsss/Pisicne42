/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 22:02:05 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/18 20:27:44 by clgirard         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	argc = 1;
	while (argv[argc] != '\0')
		argc++;
	argc--;
	while (argv[argc] != argv[0])
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
