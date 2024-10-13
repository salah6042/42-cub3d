/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:11:23 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:44:51 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Description:
**	The strnstr() function locates the first occurrence of the null-ter-
**	minated string needle in the string haystack. Characters that appear after
**	a `\0' character are not searched.
**
**	Returns:
**	a pointer to the first character of the needle in haystack
**	if needle is not in haystack, NULL is returned
**	if needle is empty string, haystack is returned
*/

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*hay;
	size_t	i;
	size_t	needle_len;
	size_t	len;

	if (!*needle)
		return ((char *)haystack);
	hay = (char *)haystack;
	needle_len = ft_strlen(needle);
	len = ft_strlen(haystack);
	i = 0;
	while (*hay && i < len)
	{
		if (*hay == *needle && i + needle_len <= len)
			if (!ft_strncmp(hay, needle, needle_len))
				return (hay);
		hay++;
		i++;
	}
	return (NULL);
}
