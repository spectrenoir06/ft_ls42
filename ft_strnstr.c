/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <antoine@doussaud.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 19:46:05 by adoussau          #+#    #+#             */
/*   Updated: 2014/11/05 15:29:56 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	scan(char *str, const char *to_find)
{
	int		i;

	i = 0;
	while (to_find[i])
	{
		if (str[i] != to_find[i])
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int		i;
	char	*ptrstr;

	ptrstr = (char *)str;
	if (!*to_find)
		return (ptrstr);
	i = 0;
	if (n < ft_strlen(to_find))
		return (NULL);
	while (ptrstr[i] && n--)
	{
		if (ptrstr[i] == to_find[0])
			if (scan(&ptrstr[i], to_find))
				return (&ptrstr[i]);
		i++;
	}
	return (NULL);
}
