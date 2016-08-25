/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/22 20:16:21 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/23 17:49:38 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

typedef int		(*t_fonction)(int, int);
int				ft_atoi(char *str);
void			ft_putnbr(int nb);
void			ft_putstr(char *str);
void			ft_putchar(char c);
int				addition(int x, int y);
int				soustraction(int x, int y);
int				produit(int x, int y);
int				division(int x, int y);
int				modulo(int x, int y);
t_fonction		opperator[] = { addition, soustraction, produit, division, modulo };
#endif
