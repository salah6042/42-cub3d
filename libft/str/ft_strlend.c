/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 11:01:23 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:44:34 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Returns:
**	Amount of chars till the end char ('\n' in get_next_line)
*/

int	ft_strlend(const char *s, char end)
{
	int	len;

	if (!s)
		return (0);
	len = 0;
	while (s[len] && s[len] != end)
		len++;
	return (len);
}
