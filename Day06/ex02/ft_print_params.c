/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 21:29:52 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/18 20:25:43 by clgirard         ###   ########.fr       */
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
	{
		ft_putstr(argv[argc]);
		ft_putchar('\n');
		argc++;
	}
	return (0);
}
