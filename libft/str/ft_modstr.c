/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_modstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:43:24 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:43:25 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Desciption:
**	Modifies string s to the part after char c. This happens by copying
**	the part after c to the beginning of the string. Pointer is not moved.
**
**	Returns:
**	1 if char c is in string
**	0 if char c is not in string
*/

int	ft_modstr(char *s, char c)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ft_strcpy(s, s + i + 1);
			return (1);
		}
		i++;
	}
	s[0] = '\0';
	return (0);
}
