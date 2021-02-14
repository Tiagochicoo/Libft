/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@student.42Lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 18:18:57 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/14 18:25:23 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srcSize;
	size_t	destSize;
	size_t	i;

	i = 0;
	srcSize = 0;
	destSize = 0;
	while (src[srcSize])
		srcSize++;
	if (size == 0)
		return (srcSize);
	while (destSize < size && dst[destSize])
		destSize++;
	if (size <= destSize)
		return (size + srcSize);
	i = 0;
	while (size && (--size - destSize) && src[i])
	{
		dst[destSize + i] = src[i];
		i++;
	}
	dst[destSize + i] = '\0';
	return (srcSize + destSize);
}