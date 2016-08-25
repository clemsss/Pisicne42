/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 15:30:10 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/24 18:35:54 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct		s_stock_par
{
	int				size_params;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;
void				ft_show_tab(struct s_stock_par *par);
char				**ft_split_whitespaces(char *str);

#endif
