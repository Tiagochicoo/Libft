/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@student.42Lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:18:08 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/11 14:33:30 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest2;
	const char	*src2;

	dest2 = (char *)dest;
	src2 = (const char*)src;
	if ((dest2 != NULL) && (src2 != NULL))
	{
		while (n)
		{
			*(dest2++) = *(src2++);
			--n;
		}
	}
	return (dest);
}
