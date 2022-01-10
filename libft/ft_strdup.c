/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:50:12 by icastell          #+#    #+#             */
/*   Updated: 2021/12/26 21:08:52 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_strdup() function allocates sufficient memory for a copy of the
string str, does the copy, and returns a pointer to it. The pointer may
subsequently be used as an argument to the function free. If insufficient
memory is available, NULL is returned and errno is set to ENOMEM.*/

#include "libft.h"

char	*ft_strdup(char *str)
{
	size_t	longitud;
	int		i;
	char	*ptr;

	i = 0;
	longitud = ft_strlen(str);
	//0;
	//while (str[longitud] != '\0')
	//	longitud++;
	ptr = malloc(longitud + 1);
	if (!ptr)
		return (NULL);
	else
	{
		while (str[i] != '\0')
		{
			ptr[i] = str[i];
			i++;
		}
	}
	ptr[i] = '\0';
	//ft_memcpy(ptr, str, longitud + 1);
	return (ptr);
}
