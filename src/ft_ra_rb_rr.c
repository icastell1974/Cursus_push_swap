/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra_rb_rr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:57:03 by icastell          #+#    #+#             */
/*   Updated: 2022/02/14 13:21:25 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_lst_ra_rb(t_lista *lista, char *str)
{
	t_nodo	*puntero_tmpa;
	t_nodo	*puntero_tmpb;

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
			while (puntero_tmpb->next)
				puntero_tmpb = puntero_tmpb->next;
			puntero_tmpb->next = puntero_tmpa;
			lista->head = puntero_tmpa->next;
			puntero_tmpa->next = NULL;
		}
	}
	return ;
}

void	ft_lst_rr(t_lista *lista_a, t_lista *lista_b, char *str)
{
	ft_putstr_fd(str, 1);
	ft_lst_ra_rb(lista_a, NULL);
	ft_lst_ra_rb(lista_b, NULL);
	return ;
}
