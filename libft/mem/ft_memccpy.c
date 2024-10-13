/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:40:16 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:41:30 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Description:
**	The memccpy() function copies up to n bytes from src to dst.
**	If the character c occurs in the string src, the copy stops. The copy
**	does include the character c.
**
**	When source and destination strings overlap, behavior is undefined.
**
**	Returns:
**	a pointer to the byte after the first c in the string dst
**	if c not in string, return NULL pointer
*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		if (((unsigned char *)src)[i] == (unsigned char)c)
		{
			return (((unsigned char *)dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
