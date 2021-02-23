/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 21:26:41 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/23 22:04:25 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_get_next_str(char **pos_in_str, char *charset, int *next_str_len)
{
	int		i;
	char	*str_start;

	*next_str_len = 0;
	str_start = 0;
	i = 0;
	while ((*pos_in_str)[i])
	{
		if (ft_strchr((*pos_in_str)[i], charset) != 0 && str_start != 0)
		{
			*pos_in_str = str_start + *next_str_len;
			return (str_start);
		}
		else if (!ft_strchr((*pos_in_str)[i], charset) && str_start == 0)
			str_start = &(*pos_in_str)[i];
		if (!ft_strchr((*pos_in_str)[i], charset))
			*next_str_len = *next_str_len + 1;
		i++;
	}
	*pos_in_str = str_start + *next_str_len;
	if (*next_str_len == 0)
		return (0);
	return (str_start);
}

char	**ft_build_tab(char *str, char *charset)
{
	int		nb_str;
	char	**strs;
	int		next_str_len;
	char	*pos_in_str;

	nb_str = 0;
	next_str_len = 0;
	pos_in_str = str;
	while (ft_get_next_str(&pos_in_str, charset, &next_str_len))
		nb_str++;
	if (!(strs = (char **)malloc(sizeof(char *) * (nb_str + 1))))
		return (0);
	return (strs);
}

char	**ft_split(char *str, const char *charset)
{
	char	**strs;
	int		next_str_len;
	char	*next_str;
	char	*pos_in_str;
	int		i;

	if (!(strs = ft_build_tab(str, charset)))
		return (0);
	i = 0;
	pos_in_str = str;
	while ((next_str = ft_get_next_str(&pos_in_str, charset, &next_str_len)))
	{
		if (!(strs[i] = (char *)malloc(sizeof(char) * next_str_len + 1)))
			return (0);
		ft_strlcpy(strs[i], next_str, next_str_len);
		i++;
	}
	strs[i] = 0;
	return (strs);
}