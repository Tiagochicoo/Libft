/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:11:17 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/20 13:38:28 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_in_string(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int	has_space(char c)
{
	if (is_in_string(c, "\t\n\v\f\r "))
		return (1);
	return(0);
}

int		ft_atoi(const char *str)
{
	size_t 	i;
	int		sign;
	int		num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] != '\0')
	{
		while (has_space(str[i]))
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i++] == '-')
				sign *= -1;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = num * 10 + (str[i] - '0');
			i++;
		}
		return (num * sign);
		i++;
	}
	return (0);
}

