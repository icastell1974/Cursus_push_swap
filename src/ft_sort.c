/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:30:15 by icastell          #+#    #+#             */
/*   Updated: 2022/01/27 21:58:38 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void    ft_sort(t_lista *lista_a, t_lista *lista_b)
{
	ft_putstr_fd("Aquí comenzaría el ordenamiento\n", 1);
	/*ft_lst_sa_sb(lista_a, "sa\n");
	ft_lst_sa_sb(lista_a, "sb\n");
	ft_lst_ss(lista_a, lista_a, "ss\n");
	ft_lst_ra_rb(lista_a, "ra\n");
	ft_lst_ra_rb(lista_a, "rb\n");
	ft_lst_rr(lista, lista_a, "rr\n");
	ft_lst_rra_rrb(lista_a, "rra\n");
	ft_lst_rra_rrb(lista_a, "rrb\n");
	ft_lst_rrr(lista_a, lista_a, "rrr\n");*/
	ft_lst_pb(lista_a, lista_b, "pb\n");
	ft_lst_pb(lista_a, lista_b, "pb\n");
	ft_lst_pb(lista_a, lista_b, "pb\n");
	ft_lst_pa(lista_a, lista_b, "pa\n");
	return ;
}
