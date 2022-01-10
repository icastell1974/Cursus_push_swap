/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 17:25:09 by icastell          #+#    #+#             */
/*   Updated: 2022/01/04 18:53:41 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

t_Nodo	*ft_lst_new_nodo(int content)
{
	t_Nodo	*nodo;

	nodo = (t_Nodo *)malloc(sizeof(t_Nodo));
	if (nodo)
	{
		nodo->value = content;
		nodo->index = 0;
		nodo->next = NULL;
	}
	return (nodo);
}

void	ft_lst_free_nodo(t_Nodo *nodo)
{
	free(nodo);
	return ;
}

void	ft_lst_add_front(t_Lista *lista, int content)
{
	t_Nodo	*nodo;

	nodo = ft_lst_new_nodo(content);
	nodo->next = lista->head;
	lista->head = nodo;
	lista->length++;
	return ;
}

void	ft_lst_add_back(t_Lista *lista, int content)
{
	t_Nodo	*nodo;
	t_Nodo	*puntero;

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

void	ft_lst_delete_from_first_one(t_Lista *lista)
{
	t_Nodo	*deleted_nodo;

	if (lista->head)
	{
		deleted_nodo = lista->head;
		lista->head = lista->head->next;
		ft_lst_free_nodo(deleted_nodo);
		lista->length--;
	}
	return ;
}

void	ft_lst_delete_form_last_one(t_Lista *lista)
{
	t_Nodo	*puntero;
	t_Nodo	*deleted_nodo;

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

int	ft_lst_repeated_num(t_Lista *lista, int num)
{
	t_Nodo	*puntero;

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
