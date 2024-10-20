/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:11:23 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:44:48 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Description:
**	The strrchr() function locates the last occurrence of c (converted to
**	a char) in the string pointed to by s.  The terminating null charac-
**	ter is considered to be part of the string; therefore if c is `\0',
**	the function locates the terminating `\0'.
**
**	Returns:
**	a pointer to the located character in s
**	NULL if char c not in s
*/

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;

	temp = 0;
	i = 0;
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			temp = (char *)s + i;
		i++;
	}
	if (temp)
		return (temp);
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}
