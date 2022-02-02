/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:25:09 by icastell          #+#    #+#             */
/*   Updated: 2022/02/02 20:58:55 by icastell         ###   ########.fr       */
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
	
	/*if (lista->length == 1)
	{
		if (puntero->value == num)
				return (0);
	}
	else if (lista->length > 1)
	{
		while (puntero)
		{
			if (puntero->value == num)
				return (0);
			else
				puntero = puntero->next;
		}*/
		//if (puntero->value == num)
		//	return (0);
		/*while (puntero->next)
		{
			if (puntero->value == num)
				return (0);
			else
				puntero = puntero->next;
		}
		if (puntero->value == num)
			return (0);*/
	//}
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
				break;
			puntero = puntero->next;
			position++;
		}
	}
	return (position);
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