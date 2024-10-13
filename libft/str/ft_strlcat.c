/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:49:11 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:44:09 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Description:
**	The strlcat() function appends string src to the end of dst. It takes the
**	full size of the destination buffer and guarantees NUL-termination.
**	Room for the NUL-termator should be included in dstsize.
**
**	Returns:
**	total length of string it tries to create, aka the initial length
**	of dst plus the length of src.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dest_len;

	dest_len = ft_strlen(dst);
	i = 0;
	if (dstsize > dest_len)
	{
		while (i < dstsize - dest_len - 1 && src[i])
		{
			dst[i + dest_len] = src[i];
			i++;
		}
		dst[i + dest_len] = '\0';
		return (dest_len + ft_strlen(src));
	}
	return (dstsize + ft_strlen(src));
}
