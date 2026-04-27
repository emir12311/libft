/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 21:53:44 by emir12311         #+#    #+#             */
/*   Updated: 2026/04/27 23:10:32 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display_comb2(int a, int b)
{
	char	a_ones;
	char	a_tens;
	char	b_ones;
	char	b_tens;

	a_ones = (a % 10) + '0';
	a_tens = (a / 10) + '0';
	b_ones = (b % 10) + '0';
	b_tens = (b / 10) + '0';
	write(1, &b_tens, 1);
	write(1, &b_ones, 1);
	write(1, " ", 1);
	write(1, &a_tens, 1);
	write(1, &a_ones, 1);
	if (!(a == 99 && b == 98))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (a <= 99 && b <= 98)
	{
		while (a <= 99)
		{
			ft_display_comb2(a, b);
			a++;
		}
		b++;
		a = b + 1;
	}
}
