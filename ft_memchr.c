/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:29:03 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/13 12:51:10 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
    const char 	*p;

	p =	(const char *) s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char) c)
		{
			return ((void *) (p + i));
		}
		i++;
	}
    return NULL;
}
