/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@student.42Lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 22:52:45 by tpereira          #+#    #+#             */
/*   Updated: 2021/02/20 10:37:20 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int	last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			last = i;
		}
		i++;
	}
	if (c == '\0')
		return ((char *)(s + last + 1));
	return ((char *)(s + last));
}
