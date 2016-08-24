/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 15:05:51 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/10 05:48:11 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int nb2;

	nb2 = nb - 1;
	if (nb == 0)
		return (1);
	if (nb > 13)
		return (0);
	if (nb > 0)
	{
		while (nb2 > 0)
		{
			nb = nb * nb2;
			nb2--;
		}
		return (nb);
	}
	else
		return (0);
}
