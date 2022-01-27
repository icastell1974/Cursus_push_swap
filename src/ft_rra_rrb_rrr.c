/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rra_rrb_rrr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 20:47:59 by icastell          #+#    #+#             */
/*   Updated: 2022/01/27 21:03:41 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_lst_rra_rrb(t_lista *lista, char *str)
{
	t_nodo	*puntero_tmpa;
	t_nodo	*puntero_tmpb;
	t_nodo	*puntero_tmpc;

	if (str != NULL)
		ft_putstr_fd(str, 1);
	if (lista->head)
	{
		if (lista->length == 1)
			return ;
		else if (lista->length > 1)
		{
			puntero_tmpa = lista->head;
			puntero_tmpb = lista->head->next;
			puntero_tmpc = puntero_tmpa;
			while (puntero_tmpa->next->next)
				puntero_tmpa = puntero_tmpa->next;
			while (puntero_tmpb->next)
				puntero_tmpb = puntero_tmpb->next;
			puntero_tmpb->next = puntero_tmpc;
			lista->head = puntero_tmpb;
			puntero_tmpa->next = NULL;
		}
	}
	return ;
}

void    ft_lst_rrr(t_lista *lista_a, t_lista *lista_b, char *str)
{
    ft_putstr_fd(str, 1);
    ft_lst_rra_rrb(lista_a, "");
    ft_lst_rra_rrb(lista_b, "");
    return ;
}
