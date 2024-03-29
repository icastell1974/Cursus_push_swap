/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 16:29:43 by icastell          #+#    #+#             */
/*   Updated: 2022/02/15 20:17:17 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ft_strjoin() reserva memoria (con malloc) y devuelve la cadena de caracteres
que resulta de la concatenación de s1 y s2. Si la reserva de memoria falla
devuelve NULL.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	long1;
	size_t	long2;
	char	*str;

	if ((!s1) || (!s2))
		return (NULL);
	i = 0;
	long1 = ft_strlen((char *)s1);
	long2 = ft_strlen((char *)s2);
	str = ft_calloc(long1 + long2 + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[i - long1] != '\0')
	{
		str[i] = s2[i - long1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
