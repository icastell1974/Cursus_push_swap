/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa_sb_ss.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:40:47 by icastell          #+#    #+#             */
/*   Updated: 2022/01/28 20:48:55 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void    ft_lst_sa_sb(t_lista *lista, char *str)
{
    t_nodo  *puntero_tmpa;
    t_nodo  *puntero_tmpb;
    //t_nodo  *puntero;
    //int     aux;

    if (str != NULL)
        ft_putstr_fd(str, 1);
    if (lista->head)
    {
        if (lista->length == 1)
            return ;
        else if (lista->length > 1)
        /*{
            puntero = lista->head;
            aux = puntero->value;
            puntero->value = puntero->next->value;
            puntero->next->value = aux;
        }*/
        {
            puntero_tmpa = lista->head;
            puntero_tmpb = lista->head->next;
            puntero_tmpa->next = puntero_tmpb->next;
            puntero_tmpb->next = puntero_tmpa;
            lista->head = puntero_tmpb;
        }
    }
    //ft_putstr_fd("sa\n", 1);
    return ;
}

void    ft_lst_ss(t_lista *lista_a, t_lista *lista_b, char *str)
{
    ft_putstr_fd(str, 1);
    ft_lst_sa_sb(lista_a, NULL);
    ft_lst_sa_sb(lista_b, NULL);
    return ;
}
