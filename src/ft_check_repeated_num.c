/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_repeated_num.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 19:53:45 by icastell          #+#    #+#             */
/*   Updated: 2022/01/24 19:48:19 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	ft_check_repeated_num(t_lista *lista, int num)
{
	if (lista->head) //si existe la lista
	{
		if (!ft_lst_repeated_num(lista, num))
			return (0);
		else
			ft_lst_add_back(lista, num);
	}
	else
		ft_lst_add_back(lista, num);
	return (1);
}
