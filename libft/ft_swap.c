/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalliot <aalliot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/16 23:30:57 by aalliot           #+#    #+#             */
/*   Updated: 2014/12/16 23:30:59 by aalliot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void        ft_swap(void **a, void **b)
{
    void    *tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
