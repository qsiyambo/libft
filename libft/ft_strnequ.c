/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qsiyambo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 11:21:09 by qsiyambo          #+#    #+#             */
/*   Updated: 2019/06/26 15:39:07 by qsiyambo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1) && (s2))
	{
		while ((n--) && (*s1 == *s2))
		{
			if ((!(*s1) && !(*s2)) || (n - 1 == 0))
				return (1);
			s1++;
			s2++;
		}
	}
	return (0);
}
