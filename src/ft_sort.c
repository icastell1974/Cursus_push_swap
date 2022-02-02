/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:30:15 by icastell          #+#    #+#             */
/*   Updated: 2022/02/02 21:00:42 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	ft_lst_is_sorted(t_lista *lista)
{
	//int		valor1;
	//int		valor2;
	t_nodo	*puntero;

	//valor1 = 0;
	//valor2 = 0;
	if (lista->head)
	{
		puntero = lista->head;
		while (puntero->next)
		{
			if (puntero->value > puntero->next->value)
				return (0);
			
			/*valor1 = puntero->value;
			valor2 = puntero->next->value;
			if (valor1 > valor2)
				return (0);*/
			puntero = puntero->next;
		}
	}
	else
		return (0); // ¿se podría devolver otro valor para indicar que la lista no existe....? Quizás sí sería interesante
	return (1);
}

static void	ft_rotate(t_lista *lista_a, int value)
{
	int	position;
	int	rotation_num;

	rotation_num = 0;
	position = ft_lst_position(lista_a, value);
	if (position < lista_a->length - position)
	{
		rotation_num = position;
		while (rotation_num-- > 0)
			ft_lst_ra_rb(lista_a, "ra\n");
	}
	else
	{
		rotation_num = lista_a->length - position;
		while (rotation_num-- > 0)
			ft_lst_rra_rrb(lista_a, "rra\n");
	}
	return ;
}

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

static void	ft_sort_4_elements(t_lista *lista_a, t_lista *lista_b)
{
	int	value_min;
	//int	value_max;

	value_min = ft_lst_find_min(lista_a, INT_MIN);
	ft_rotate(lista_a, value_min);
	ft_lst_pb(lista_a, lista_b, "pb\n");
	//value_max = ft_lst_find_max(lista_a);
	//ft_rotate(lista_a, value_max);
	//ft_lst_pb(lista_a, lista_b, "pb\n");
	ft_sort_3_elements(lista_a);
	ft_lst_pa(lista_a, lista_b, "pa\n");
	//ft_lst_ra_rb(lista_a, "ra\n");
	//ft_lst_pa(lista_a, lista_b, "pa\n");
	return ;
}

static void	ft_sort_5_elements(t_lista *lista_a, t_lista *lista_b)
{
	int	value_min;
	//int	value_max;

	value_min = ft_lst_find_min(lista_a, INT_MIN);
	ft_rotate(lista_a, value_min);
	ft_lst_pb(lista_a, lista_b, "pb\n");
	ft_sort_4_elements(lista_a, lista_b);
	//value_max = ft_lst_find_max(lista_a);
	//ft_rotate(lista_a, value_max);
	//ft_lst_pb(lista_a, lista_b, "pb\n");
	//ft_sort_3_elements(lista_a);
	ft_lst_pa(lista_a, lista_b, "pa\n");
	//ft_lst_ra_rb(lista_a, "ra\n");
	ft_lst_pa(lista_a, lista_b, "pa\n");
	return ;
}

void	ft_sort(t_lista *lista_a, t_lista *lista_b)
{
	if (lista_a->head)
	{
		ft_putstr_fd("Aquí comenzaría el ordenamiento\n", 1);
		if (lista_a->length == 2)
			ft_sort_2_elements(lista_a);
		else if (lista_a->length == 3)
			ft_sort_3_elements(lista_a);
		else if (lista_a->length == 4)
			ft_sort_4_elements(lista_a, lista_b);
		else if (lista_a->length == 5)
			ft_sort_5_elements(lista_a, lista_b);
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
