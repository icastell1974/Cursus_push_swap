/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:35:22 by icastell          #+#    #+#             */
/*   Updated: 2022/02/15 14:36:32 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_lst_add_front(t_lista *lista, int content)
{
	t_nodo	*nodo;

	nodo = ft_lst_new_nodo(content);
	nodo->next = lista->head;
	lista->head = nodo;
	lista->length++;
	return ;
}

void	ft_lst_add_back(t_lista *lista, int content)
{
	t_nodo	*nodo;
	t_nodo	*puntero;

	nodo = ft_lst_new_nodo(content);
	if (lista->head == NULL)
		lista->head = nodo;
	else
	{
		puntero = lista->head;
		while (puntero->next)
			puntero = puntero->next;
		puntero->next = nodo;
	}	
	lista->length++;
	return ;
}

void	ft_lst_delete_from_first_one(t_lista *lista)
{
	t_nodo	*deleted_nodo;

	if (lista->head)
	{
		deleted_nodo = lista->head;
		lista->head = lista->head->next;
		ft_lst_free_nodo(deleted_nodo);
		lista->length--;
	}
	return ;
}

void	ft_lst_delete_form_last_one(t_lista *lista)
{
	t_nodo	*puntero;
	t_nodo	*deleted_nodo;

	if (lista->head)
	{
		if (lista->head->next)
		{
			puntero = lista->head;
			while (puntero->next->next)
				puntero = puntero->next;
			deleted_nodo = puntero->next;
			puntero->next = NULL;
			ft_lst_free_nodo(deleted_nodo);
			lista->length--;
		}
		else
		{
			deleted_nodo = lista->head;
			lista->head = NULL;
			ft_lst_free_nodo(deleted_nodo);
			lista->length--;
		}
	}
	return ;
}
