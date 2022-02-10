/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_radix_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:17:34 by icastell          #+#    #+#             */
/*   Updated: 2022/02/10 21:32:11 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_assign_index(t_lista *lista)
{
	int		value_min;
	int		value;
	int		index;
	t_nodo	*puntero;

	value_min = INT_MIN;
	value = 0;
	index = 0;
	if (lista->head)
	{
		while (index < lista->length)
		{
			puntero = lista->head;
			while (puntero)
			{
				value = ft_lst_find_min(lista, value_min);
				if (value == puntero->value)
				{
					puntero->index = index;
					value_min = puntero->value;
					break ;
				}
				puntero = puntero->next;
			}
			index++;
		}
	}

}

void	ft_radix_sort(t_lista *lista_a, t_lista *lista_b)
{
	int		i;
	int		j;
	int		size;

	i = 0;
	j = 0;
	if (lista_a->head)
	{
		size = lista_a->length;  
		while (!ft_lst_is_sorted(lista_a))
		{
			while (j++ < size)
			{
				if (((lista_a->head->index >> i) & 1) == 1)
					ft_lst_ra_rb(lista_a, "ra\n");
				else
					ft_lst_pb(lista_a, lista_b, "pb\n");
			}
			while (lista_b->length > 0)
				ft_lst_pa(lista_a, lista_b, "pa\n");
			i++;
			j = 0;
		}
	}
	return ;
}