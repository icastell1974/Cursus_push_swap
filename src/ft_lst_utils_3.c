/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils_3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:37:15 by icastell          #+#    #+#             */
/*   Updated: 2022/02/15 19:30:28 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	ft_lst_repeated_num(t_lista *lista, int num)
{
	t_nodo	*puntero;

	puntero = lista->head;
	while (puntero)
	{
		if (puntero->value == num)
			return (0);
		else
			puntero = puntero->next;
	}
	return (1);
}

int	ft_lst_is_sorted(t_lista *lista)
{
	t_nodo	*puntero;

	if (lista->head)
	{
		puntero = lista->head;
		while (puntero->next)
		{
			if (puntero->value > puntero->next->value)
				return (0);
			puntero = puntero->next;
		}
	}
	return (1);
}

int	ft_lst_position(t_lista *lista, int num)
{
	t_nodo	*puntero;
	int		position;

	position = 0;
	if (lista->head)
	{
		puntero = lista->head;
		while (puntero->next)
		{
			if (puntero->value == num)
				break ;
			puntero = puntero->next;
			position++;
		}
	}
	return (position);
}

void	ft_lst_rotate(t_lista *lista_a, int value)
{
	int	position;
	int	rotation_num;

	rotation_num = 0;
	position = ft_lst_position(lista_a, value);
	if (position < lista_a->length - position)
	{
		rotation_num = position;
		while (rotation_num-- > 0)
			ft_lst_ra_rb(lista_a, "ra\n");
	}
	else
	{
		rotation_num = lista_a->length - position;
		while (rotation_num-- > 0)
			ft_lst_rra_rrb(lista_a, "rra\n");
	}
	return ;
}
