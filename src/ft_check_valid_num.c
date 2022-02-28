/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_valid_num.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:18:42 by icastell          #+#    #+#             */
/*   Updated: 2022/02/28 10:39:56 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static int	ft_strisdigit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static	int	ft_limits(char *str, char *limit)
{
	int	i;

	if (ft_strlen(str) == ft_strlen(limit))
	{
		i = 0;
		while (str[i])
		{
			if (str[i] > limit[i])
				return (0);
			i++;
		}
	}
	return (1);
}

int	ft_check_valid_num(char *str)
{
	char	*cstr;

	cstr = MAX;
	if (str)
	{
		if (*str == '+' || *str == '-')
		{
			if (*str == '-')
				cstr = &MIN[1];
			str++;
		}
		if (ft_strlen(str) <= ft_strlen(cstr)
			&& ft_strisdigit(str)
			&& ft_limits(str, cstr))
			return (1);
	}
	return (0);
}
