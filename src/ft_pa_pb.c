/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:35:18 by icastell          #+#    #+#             */
/*   Updated: 2022/02/14 13:19:46 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static t_nodo	*ft_new_nodo_to_stack(int content, int index)
{
	t_nodo	*nodo;

	nodo = (t_nodo *)malloc(sizeof(t_nodo));
	if (nodo)
	{
		nodo->value = content;
		nodo->index = index;
		nodo->next = NULL;
	}
	return (nodo);
}

static void	ft_add_front_to_stack(t_lista *lista, int content, int index)
{
	t_nodo	*nodo;

	nodo = ft_new_nodo_to_stack(content, index);
	nodo->next = lista->head;
	lista->head = nodo;
	lista->length++;
	return ;
}

void	ft_lst_pa(t_lista *lista_a, t_lista *lista_b, char *str)
{
	t_nodo	*puntero_tmp;

	if (str != NULL)
		ft_putstr_fd(str, 1);
	if (lista_b->head)
	{
		puntero_tmp = lista_b->head;
		ft_add_front_to_stack(lista_a, puntero_tmp->value, puntero_tmp->index);
		ft_lst_delete_from_first_one(lista_b);
	}
	return ;
}

void	ft_lst_pb(t_lista *lista_a, t_lista *lista_b, char *str)
{
	t_nodo	*puntero_tmp;

	if (str != NULL)
		ft_putstr_fd(str, 1);
	if (lista_a->head)
	{
		puntero_tmp = lista_a->head;
		ft_add_front_to_stack(lista_b, puntero_tmp->value, puntero_tmp->index);
		ft_lst_delete_from_first_one(lista_a);
	}
	return ;
}
