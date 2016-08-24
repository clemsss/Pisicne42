/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clgirard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/10 02:41:23 by clgirard          #+#    #+#             */
/*   Updated: 2016/08/15 14:59:59 by clgirard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	char	*result;
	int		save;

	i = 0;
	result = 0;
	if (to_find[0] != '\0')
	{
		while (str[i] != '\0')
		{
			k = 0;
			save = i;
			while (str[i++] == to_find[k++])
				if (to_find[k] == '\0')
					return (str + save);
			if (to_find[k] != str[i])
				i = (i - k) + 1;
		}
	}
	else if (to_find[0] == '\0')
		result = str;
	return (result);
}
