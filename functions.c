/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:17:09 by emir12311         #+#    #+#             */
/*   Updated: 2026/04/26 18:53:28 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	if (c == NULL)
		return ;
	if (*c == '\0')
		return ;
	write(1, c, 1);
}

int	main(void)
{
	char	c;
	char	nl;

	nl = '\n';
	c = 'A';
	ft_putchar(&c);
	ft_putchar(&nl);
}
