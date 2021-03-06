/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pchartie <pchartie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/17 23:13:47 by pchartie          #+#    #+#             */
/*   Updated: 2016/02/18 15:36:59 by pchartie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t index1;
	size_t index2;

	index1 = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[index1])
	{
		index2 = 0;
		while (s1[index1 + index2] &&
			s2[index2] && s2[index2] == s1[index1 + index2])
			index2++;
		if (!s2[index2])
			return (char*)(s1 + index1);
		index1++;
	}
	return (NULL);
}
