/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/07 22:06:28 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/09 21:49:17 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 46)
		return (0);
	else if (index <= 1)
		return (index);
	else
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (index);
}
