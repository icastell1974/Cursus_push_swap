/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:13:27 by icastell          #+#    #+#             */
/*   Updated: 2022/02/28 11:40:51 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	return ;
}

static void	ft_free_all(char *str, t_lista *lista_a, t_lista *lista_b)
{
	free(str);
	if (lista_a->head)
	{
		while (lista_a->length > 0)
			ft_lst_delete_from_first_one(lista_a);
	}
	if (lista_b->head)
	{
		while (lista_b->length > 0)
			ft_lst_delete_from_first_one(lista_b);
	}
	return ;
}

int	main(int argc, char **argv)
{
	char	*args;
	t_lista	list_a;
	t_lista	list_b;

	if (argc > 1)
	{
		args = ft_args_in_a_string(argc, argv);
		list_a.head = NULL;
		list_a.length = 0;
		list_b.head = NULL;
		list_b.length = 0;
		if (ft_take_params_from_string(args, &list_a))
		{
			if (!ft_lst_is_sorted(&list_a))
				ft_sort_elements(&list_a, &list_b);
		}
		else
			ft_error();
		ft_free_all(args, &list_a, &list_b);
	}
	return (0);
}
