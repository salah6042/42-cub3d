/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 08:32:40 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:43:57 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Description:
**	The strdup() function allocates sufficient memory for a copy of the
**	string s1, does the copy (including NULL-terminator) and returns a
**	pointer to it.
**
**	Returns:
**	a pointer to the (memory allocated) copy of s1
*/

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*s2;

	len = ft_strlen(s1) + 1;
	s2 = (char *)malloc(len * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}
