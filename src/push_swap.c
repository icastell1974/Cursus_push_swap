/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 17:13:27 by icastell          #+#    #+#             */
/*   Updated: 2022/01/04 18:46:21 by icastell         ###   ########.fr       */
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

static void	ft_free_all(char *str, t_Lista *lista)
{
	//Lista	*temp1;
	//Lista	*temp2;

	free(str);
	ft_lst_delete_from_first_one(lista);
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

static void	ft_lst_print_value(t_Lista *lista)
{
	t_Nodo	*puntero;
	int		i;

	puntero = lista->head;
	i = 0;
	while (puntero)
	{
		printf("Elemento %d de la lista: %d\n", i, puntero->value);
		i++;
		puntero = puntero->next;
	}
	return ;
}

int	main(int argc, char **argv)
{
	char	*args;
	t_Lista	list_a;
	//t_Lista	list_b;

	if (argc == 1)
		ft_error();
	else
	{
		args = ft_args_in_a_string(argc, argv);
		list_a.head = NULL;
		list_a.length = 0;
		//ft_lst_add_back(&list_a, 0);
		//ft_lst_add_back(&list_a, 10);
		if (ft_take_params_from_string(args, &list_a))
			//&& (ft_check_repeated_num(list_a)))
			ft_sort(); //comenzamos a ordenar
		else
			ft_error();
		ft_lst_print_value(&list_a); //Función temporal que sirve para comprobar. Ojo, borrar para entregar
		ft_free_all(args, &list_a);
	}
	system("leaks push_swap");
	return (0);
}
