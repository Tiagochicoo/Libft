/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@student.42Lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 22:16:47 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/11 14:26:24 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	src[20];

	src[0] = 'H';
	src[1] = 'e';
	src[2] = 'l';
	src[3] = 'l';
	src[4] = 'o';
	src[5] = ' ';
	src[6] = 'u';
	src[7] = '!';
	src[0] = '\0';
	ft_bzero(src, sizeof(src));
	printf("src = %s\n", src);
	return (0);
}
