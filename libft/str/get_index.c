/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 05:40:23 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:45:13 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
	Returns: first index of c in str
*/

int	get_findex(char *str, char c)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (str[i] == c)
		return (i);
	else
		return (-1);
}

/*
	Returns: last index of c in str
*/

int	get_lindex(char *str, char c)
{
	int	i;

	if (!str)
		return (-1);
	i = ft_strlen(str) - 1;
	while (str[i] && str[i] != c)
		i--;
	return (i);
}
