/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:52:42 by icastell          #+#    #+#             */
/*   Updated: 2022/02/14 13:41:19 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <signal.h>
# include <stdlib.h>
# include <sys/types.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

# define MAX "2147483647"
# define MIN "-2147483648"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_nodo
{
	int				value;
	int				index;
	struct s_nodo	*next;
}				t_nodo;

typedef struct s_lista
{
	struct s_nodo	*head;
	int				length;
}			t_lista;

char	*ft_args_in_a_string(int arg_num, char **arg);
int		ft_take_params_from_string(char	*str, t_lista *lista);
int		ft_check_valid_num(char *str);
int		ft_check_repeated_num(t_lista *lista, int num);
t_nodo	*ft_lst_new_nodo(int content);
void	ft_lst_free_nodo(t_nodo *nodo);
void	ft_lst_add_front(t_lista *lista, int content);
void	ft_lst_add_back(t_lista *lista, int content);
void	ft_lst_delete_from_first_one(t_lista *lista);
void	ft_lst_delete_from_last_one(t_lista *lista);
int		ft_lst_repeated_num(t_lista *lista, int num);
int		ft_lst_is_sorted(t_lista *lista);
int		ft_lst_position(t_lista *lista, int num);
int		ft_lst_find_min(t_lista *lista, int min_value);
int		ft_lst_find_max(t_lista *lista);
void	ft_lst_rotate(t_lista *lista_a, int value);
void	ft_sort_elements(t_lista *lista_a, t_lista *lista_b);
void	ft_simple_sort(t_lista *lista_a, t_lista *lista_b);
void	ft_min_return(t_lista *lista_a, t_lista *lista_b);
void	ft_assign_index(t_lista *lista);
void	ft_radix_sort(t_lista *lista_a, t_lista *lista_b);
void	ft_lst_sa_sb(t_lista *lista, char *str);
void	ft_lst_ss(t_lista *lista_a, t_lista *lista_b, char *str);
void	ft_lst_ra_rb(t_lista *lista, char *str);
void	ft_lst_rr(t_lista *lista_a, t_lista *lista_b, char *str);
void	ft_lst_rra_rrb(t_lista *lista, char *str);
void	ft_lst_rrr(t_lista *lista_a, t_lista *lista_b, char *str);
void	ft_lst_pa(t_lista *lista_a, t_lista *lista_b, char *str);
void	ft_lst_pb(t_lista *lista_a, t_lista *lista_b, char *str);
void	ft_sorting_case_1(t_lista *lista);
void	ft_sorting_case_2(t_lista *lista);
void	ft_sorting_case_3(t_lista *lista);
void	ft_sorting_case_4(t_lista *lista);
void	ft_sorting_case_5(t_lista *lista);

#endif