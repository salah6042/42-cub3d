/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsalah <hsalah@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:47:14 by hsalah            #+#    #+#             */
/*   Updated: 2024/10/13 11:47:15 by hsalah           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../cub.h"

/*
	Error message printing functions
*/

void	red(void)
{
	printf("\033[1;31m");
}

void	green(void)
{
	printf("\033[1;32m");
}

void	reset(void)
{
	printf("\033[0m");
}

int	error_msg(char *message)
{
	red();
	printf("Error\n%s\n\n", message);
	reset();
	return (1);
}

int	success_msg(char *message)
{
	green();
	printf("\n%s\n\n", message);
	reset();
	return (0);
}
