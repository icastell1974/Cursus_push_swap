/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:35:18 by icastell          #+#    #+#             */
/*   Updated: 2022/01/27 21:56:19 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_lst_pa(t_lista *lista_a, t_lista *lista_b, char *str)
{
	t_nodo	*puntero_tmp;
	
	if (str != NULL)
		ft_putstr_fd(str, 1);
	if (lista_b->head)
	{
		puntero_tmp = lista_b->head;
		ft_lst_add_front(lista_a, puntero_tmp->value);
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
		ft_lst_add_front(lista_b, puntero_tmp->value);
		ft_lst_delete_from_first_one(lista_a);
	}
	return ;
}
