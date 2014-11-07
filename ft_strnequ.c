/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <antoine@doussaud.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:28:17 by adoussau          #+#    #+#             */
/*   Updated: 2014/11/07 13:14:59 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(const char *s1, const char *s2, size_t i)
{
	if (!s1 || !s2)
		return (0);
	while (*s1 && *s2 && i--)
		if (*s1++ != *s2++)
			return (0);
	return (1);
}
