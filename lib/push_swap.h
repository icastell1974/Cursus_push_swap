/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:52:42 by icastell          #+#    #+#             */
/*   Updated: 2022/01/03 18:59:30 by icastell         ###   ########.fr       */
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

typedef struct s_Nodo
{
	int				value;
    int				index;
	struct s_Nodo	*next;
}				t_Nodo;

typedef struct s_Lista
{
	struct s_Nodo	*head;
	int				length;
}			t_Lista;


char    *ft_args_in_a_string(int arg_num, char **arg);
int		ft_take_params_from_string(char	*str, t_Lista *lista);
int		ft_check_valid_num(char *str);
int		ft_check_repeated_num(t_Lista *lista, int num);
//int			ft_check_repeated_num(t_list_num *lista);
t_Nodo	*ft_lst_new_nodo(int content);
void	ft_lst_free_nodo(t_Nodo *nodo);
void	ft_lst_add_front(t_Lista *lista, int content);
void	ft_lst_add_back(t_Lista *lista, int content);
void	ft_lst_delete_from_first_one(t_Lista *lista);
void	ft_lst_delete_from_last_one(t_Lista *lista);
int		ft_lst_repeated_num(t_Lista *lista, int num);
//void		ft_lst_iter(t_list_num *lst, void (*f)(void *));
void		ft_sort();
/*char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *ptr, size_t n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(char *str);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);*/

#endif