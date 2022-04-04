/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achopper <achopper@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:03:48 by achopper          #+#    #+#             */
/*   Updated: 2020/11/25 15:04:16 by achopper         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	i = 0;
	if (NULL == s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		if (!(res = (char *)malloc(sizeof(char) * 1)))
			return (NULL);
		*res = '\0';
		return (res);
	}
	if (!(res = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (start--)
		s++;
	while (i != len)
	{
		*res++ = *s++;
		i++;
	}
	*res = '\0';
	return (res - len);
}
