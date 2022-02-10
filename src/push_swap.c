/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:13:27 by icastell          #+#    #+#             */
/*   Updated: 2022/02/07 19:48:33 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static void	ft_error(void)
{
	ft_putstr_fd("Error\n", 1);
	return ;
}

/*static size_t	ft_check_args(int arg_num, char **arg)
{
	int	i;

	i = 0;
	while (i < arg_num)
	{
		if (!ft_check_valid_num(arg[i]))
			return (0);
		i++;
	}
	return (1);
}*/

static void	ft_free_all(char *str, t_lista *lista_a, t_lista *lista_b)
{
	//Lista	*temp1;
	//Lista	*temp2;

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
	/*temp1 = lista;
	while (temp1 != NULL)
	{
		temp2 = temp1 -> next;
		free(temp1);
		temp1 = temp2;
	}*/
	return ;
}

/*static void	ft_print_all(char *str, t_list_num *lista)
{
	t_list_num	*temp1;
	//t_list_num	*temp2;

	printf("string de parámetros: %s", str);
	printf("\n");
	temp1 = lista;
	while (temp1 -> next)
	{
		printf("valor de los nodos: %d", temp1 -> value);
		printf("\n");
		temp1 = temp1 -> next;
	}
}*/

static void	ft_lst_print_value(t_lista *lista, char *str)
{
	t_nodo	*puntero;
	int		i;

	if (lista->head)
	{
		ft_putstr_fd(str, 1);
		puntero = lista->head;
		i = 0;
		while (puntero)
		{
			printf("Elemento %d de la lista: %d\n", i, puntero->value);
			i++;
			puntero = puntero->next;
		}
	}
	return ;
}

int	main(int argc, char **argv)
{
	char	*args;
	t_lista	list_a;
	t_lista	list_b;

	/*if (argc == 1)
		ft_error();
	else*/
	if (argc > 1)
	{
		args = ft_args_in_a_string(argc, argv);
		list_a.head = NULL;
		list_a.length = 0;
		list_b.head = NULL;
		list_b.length = 0;
		//ft_lst_add_back(&list_a, 0);
		//ft_lst_add_back(&list_a, 10);
		if (ft_take_params_from_string(args, &list_a))
		{
			//ft_lst_print_value(&list_a); //Función temporal que sirve para comprobar. Ojo, borrar para entregar
			//&& (ft_check_repeated_num(list_a)))
			if (!ft_lst_is_sorted(&list_a))
			{
				ft_putstr_fd("lista desordenada\n", 1);
				//ft_sort(&list_a, &list_b); //comenzamos a ordenar
				//ft_recursive_sort(&list_a, &list_b);
				ft_sort_elements(&list_a, &list_b);
			}
			else
				ft_putstr_fd("lista ordenada\n", 1);
			//ft_sort(&list_b);
		}
		else
			ft_error();
		ft_lst_print_value(&list_a, "lista_a:\n"); //Función temporal que sirve para comprobar. Ojo, borrar para entregar
		ft_lst_print_value(&list_b, "lista_b:\n");
		ft_free_all(args, &list_a, &list_b);
	}
	//system("leaks push_swap");
	return (0);
}
