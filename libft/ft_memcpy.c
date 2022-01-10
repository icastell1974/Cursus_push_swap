/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icastell <icastell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:28:15 by icastell          #+#    #+#             */
/*   Updated: 2021/04/14 10:56:50 by icastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The ft_memcpy() function copies n bytes from memory area src to memory
area dst. If dst and src overlap, behavior is undefined. Returns the original
value of dst.*/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*aux1;
	unsigned char	*aux2;

	if (!src && !dst)
		return (dst);
	aux1 = (unsigned char *)src;
	aux2 = (unsigned char *)dst;
	i = 0;
	while (n--)
	{
		aux2[i] = aux1[i];
		i++;
	}
	return (dst);
}
