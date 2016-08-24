/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 18:48:48 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/18 20:23:57 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
	return (0);
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_putstr(argv[argc]);
	ft_putchar('\n');
	return (0);
}
