/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 12:52:19 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/20 13:09:00 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t ii;
	size_t size;

	i = 0;
	ii = 0;
	size = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (little[ii] && big[i] == little[ii])
		{
			i++;
			ii++;
			size++;
		}
		if (ii == ft_strlen(little))
			return ((char *)big + (i - size));
		i++;
	}
	return (0);
}
