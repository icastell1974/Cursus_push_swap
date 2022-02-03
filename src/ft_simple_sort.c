/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_simple_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:01:56 by icastell          #+#    #+#             */
/*   Updated: 2022/02/03 21:01:15 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static void	ft_sort_2_elements(t_lista *lista_a)
{
	int	valor1;
	int	valor2;

	valor1 = lista_a->head->value;
	valor2 = lista_a->head->next->value;
	if (valor1 > valor2)
		ft_lst_sa_sb(lista_a, "sa\n");
	return ;
}

static void	ft_sort_3_elements(t_lista *lista_a)
{
	int	value1;
	int	value2;
	int	value3;

	value1 = lista_a->head->value;
	value2 = lista_a->head->next->value;
	value3 = lista_a->head->next->next->value;
	if ((value1 > value2) && (value2 < value3) && (value1 < value3))
		ft_sorting_case_1(lista_a);
	else if ((value1 > value2) && (value2 > value3) && (value1 > value3))
		ft_sorting_case_2(lista_a);
	else if ((value1 > value2) && (value2 < value3) && (value1 > value3))
		ft_sorting_case_3(lista_a);
	else if ((value1 < value2) && (value2 > value3) && (value1 < value3))
		ft_sorting_case_4(lista_a);
	else if ((value1 < value2) && (value2 > value3) && (value1 > value3))
		ft_sorting_case_5(lista_a);
	return ;
}

static void	ft_sort_n_elements(t_lista *lista_a, t_lista *lista_b)
{
	int	value_min;

	value_min = 0;
	if (lista_a->head)
	{
		if (lista_a->length == 3)
			ft_sort_3_elements(lista_a);
		else
		{
			value_min = ft_lst_find_min(lista_a, INT_MIN);
			ft_lst_rotate(lista_a, value_min);
			ft_lst_pb(lista_a, lista_b, "pb\n");
			ft_sort_n_elements(lista_a, lista_b);
		}
	}
	return ;
}

void	ft_simple_sort(t_lista *lista_a, t_lista *lista_b)
{
	if (lista_a->head)
	{
		if (lista_a->length == 2)
			ft_sort_2_elements(lista_a);
		else if (lista_a->length >= 3 && lista_a->length <= 9)
			ft_sort_n_elements(lista_a, lista_b);
	}
	return ;
}

void	ft_min_return(t_lista *lista_a, t_lista *lista_b)
{
	if ((lista_a->head) && (lista_b->head))
	{
		while (lista_b->length > 0)
			ft_lst_pa(lista_a, lista_b, "pa\n");
	}
	return ;
}
