/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 15:40:28 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/25 16:52:17 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_stock_par
{
	int			size_param;
	char		*str;
	char		*copy;
	char		**tab;
}				t_stock_par;
void			ft_putchar(char c);
t_stock_par		*ft_param_to_tab(int ac, char **av);
void			ft_show_tab(struct s_stock_par *par);
char			**ft_split_whitespaces(char *str);
#endif
