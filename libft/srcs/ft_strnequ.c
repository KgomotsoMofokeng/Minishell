/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmofoken <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 12:35:45 by gmofoken          #+#    #+#             */
/*   Updated: 2016/07/28 12:40:24 by gmofoken         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;
	int			b;

	i = 0;
	b = 1;
	while (i <= n && b != 0)
	{
		if (s1[i] != s2[i])
			b = 0;
		i++;
	}
	return (b);
}