/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_in_a_string.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 20:54:30 by icastell          #+#    #+#             */
/*   Updated: 2022/02/15 21:07:50 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

char	*ft_args_in_a_string(int arg_num, char **arg)
{
	int		i;
	char	*str;

	i = 1;
	str = ft_strdup_v2("");
	while (i < arg_num)
	{
		str = ft_strjoin_v2(str, arg[i]);
		str = ft_strjoin_v2(str, " ");
		i++;
	}
	return (str);
}

static int	ft_check_params(t_lista *lista, char *param)
{
	if ((!ft_check_valid_num(param))
		|| (!ft_check_repeated_num(lista, ft_atoi(param))))
		return (0);
	return (1);
}

int	ft_take_params_from_string(char	*str, t_lista *lista)
{
	int		i;
	int		j;
	char	*param;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			i++;
		else
		{
			j = i;
			while (str[i + 1] != ' ')
				i++;
			param = ft_substr(str, j, i - j + 1);
			if (!ft_check_params(lista, param))
			{
				free(param);
				return (0);
			}
			i++;
			free(param);
		}
	}
	return (1);
}
