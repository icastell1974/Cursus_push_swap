/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_cases_3_elements.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:26:53 by icastell          #+#    #+#             */
/*   Updated: 2022/01/31 16:42:39 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_sorting_case_1(t_lista *lista)
{
	ft_lst_sa_sb(lista, "sa\n");
	return ;
}

void	ft_sorting_case_2(t_lista *lista)
{
	ft_lst_sa_sb(lista, "sa\n");
	ft_lst_rra_rrb(lista, "rra\n");
	return ;
}

void	ft_sorting_case_3(t_lista *lista)
{
	ft_lst_ra_rb(lista, "ra\n");
	return ;
}

void	ft_sorting_case_4(t_lista *lista)
{
	ft_lst_sa_sb(lista, "sa\n");
	ft_lst_ra_rb(lista, "ra\n");
	return ;
}

void	ft_sorting_case_5(t_lista *lista)
{
	ft_lst_rra_rrb(lista, "rra\n");
	return ;
}
