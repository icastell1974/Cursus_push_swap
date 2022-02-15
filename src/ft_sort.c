/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:30:15 by icastell          #+#    #+#             */
/*   Updated: 2022/02/14 13:26:59 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_sort_elements(t_lista *lista_a, t_lista *lista_b)
{
	if (lista_a->head)
	{
		if (lista_a->length <= 9)
		{
			ft_simple_sort(lista_a, lista_b);
			ft_min_return(lista_a, lista_b);
		}
		else if (lista_a->length > 9)
		{
			ft_assign_index(lista_a);
			ft_radix_sort(lista_a, lista_b);
		}
	}
	return ;
}
