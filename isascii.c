/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adoussau <antoine@doussaud.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:32:15 by adoussau          #+#    #+#             */
/*   Updated: 2014/11/04 10:42:17 by adoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isascii(int c)
{
	return (c >= 0 && c <= 127);
}
