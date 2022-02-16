/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:32:50 by icastell          #+#    #+#             */
/*   Updated: 2022/02/15 14:34:15 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

t_nodo	*ft_lst_new_nodo(int content)
{
	t_nodo	*nodo;

	nodo = (t_nodo *)malloc(sizeof(t_nodo));
	if (nodo)
	{
		nodo->value = content;
		nodo->index = 0;
		nodo->next = NULL;
	}
	return (nodo);
}

void	ft_lst_free_nodo(t_nodo *nodo)
{
	free(nodo);
	return ;
}

int	ft_lst_find_min(t_lista *lista, int min_value)
{
	t_nodo	*puntero;
	int		min;

	min = INT_MAX;
	if (lista->head)
	{
		puntero = lista->head;
		while (puntero)
		{
			if ((puntero->value < min) && (puntero->value > min_value))
				min = puntero->value;
			puntero = puntero->next;
		}
	}
	return (min);
}

int	ft_lst_find_max(t_lista *lista)
{
	t_nodo	*puntero;
	int		max;

	max = INT_MIN;
	if (lista->head)
	{
		puntero = lista->head;
		while (puntero)
		{
			if (puntero->value > max)
				max = puntero->value;
			puntero = puntero->next;
		}
	}
	return (max);
}
