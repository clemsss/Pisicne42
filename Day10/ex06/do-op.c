/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 20:04:47 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/24 11:16:38 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"

int		ft_error(char opp, int b)
{
	if (b == 0)
	{
		if (opp == '/')
		{
			ft_putstr("Stop : division by zero\n");
			return (1);
		}
		if (opp == '%')
		{
			ft_putstr("Stop : modulo by zero\n");
			return (1);
		}
	}
	return (0);
}


int		main(int ac, char **av)
{
	int		i;
	char	*op;

	op = "+-*/%\0";
	if (ac != 4)
		return (0);
	if (ft_error(av[2][0], ft_atoi(av[3])))
		return (0);
	i = 0;
	while (op[i])
	{
		if (op[i] == av[2][0])
		{
			ft_putnbr(opperator[i](ft_atoi(av[1]), ft_atoi(av[3])));
			ft_putchar('\n');
			return (0);
		}
		i++;
	}
	ft_putchar('0');
	ft_putchar('\n');
	return (0);
}	
