/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:46:45 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/13 12:24:59 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char 			*temp;
	char 			*dest2;
	const char 		*src2;
	unsigned int 	i;

	dest2 = (char *)dest;
	src2 = (const char *)src;

	temp = (char *)malloc(sizeof(char) * n);
	if (temp == NULL)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (i < n)
		{
			*(temp + i) = *(src2 +i);
			i++;
		}
		i = 0;
		while (i < n)
		{
			*(dest2 + i) = *(temp + i);
			i++;
		}
		free(temp);
	}
	return (dest);
}
