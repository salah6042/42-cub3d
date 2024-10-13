/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 07:59:11 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:43:53 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Description:
**	Copies src string into dst if src exists.
*/

void	ft_strcpy(char *dst, const char *src)
{
	int	i;

	if (!src)
		return ;
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}
