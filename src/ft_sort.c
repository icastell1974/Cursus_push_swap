/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:30:15 by icastell          #+#    #+#             */
/*   Updated: 2022/01/31 16:46:46 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static void	ft_sort_3_elements(t_lista *lista_a)
{
	int	valor1;
	int	valor2;
	int	valor3;

	valor1 = lista_a->head->value;
	valor2 = lista_a->head->next->value;
	valor3 = lista_a->head->next->next->value;
	if ((valor1 > valor2) && (valor2 < valor3) && (valor1 < valor3))
		ft_sorting_case_1(lista_a);
	else if ((valor1 > valor2) && (valor2 > valor3) && (valor1 > valor3))
		ft_sorting_case_2(lista_a);
	else if ((valor1 > valor2) && (valor2 < valor3) && (valor1 > valor3))
		ft_sorting_case_3(lista_a);
	else if ((valor1 < valor2) && (valor2 > valor3) && (valor1 < valor3))
		ft_sorting_case_4(lista_a);
	else if ((valor1 < valor2) && (valor2 > valor3) && (valor1 > valor3))
		ft_sorting_case_5(lista_a);
	return ;
}

void    ft_sort(t_lista *lista_a)//, t_lista *lista_b)
{
	if (lista_a->head)
	{
		ft_putstr_fd("Aquí comenzaría el ordenamiento\n", 1);
		if (lista_a->length == 3)
			ft_sort_3_elements(lista_a);
		/*ft_lst_sa_sb(lista_a, "sa\n");
		ft_lst_sa_sb(lista_a, "sb\n");
		ft_lst_ss(lista_a, lista_b, "ss\n");
		ft_lst_ra_rb(lista_a, "ra\n");
		ft_lst_ra_rb(lista_a, "rb\n");
		ft_lst_rr(lista, lista_a, "rr\n");
		ft_lst_rra_rrb(lista_a, "rra\n");
		ft_lst_rra_rrb(lista_a, "rrb\n");
		ft_lst_rrr(lista_a, lista_a, "rrr\n");
		ft_lst_pb(lista_a, lista_b, "pb\n");
		ft_lst_pb(lista_a, lista_b, "pb\n");
		ft_lst_pb(lista_a, lista_b, "pb\n");
		ft_lst_pa(lista_a, lista_b, "pa\n");*/
	}
	return ;
}
