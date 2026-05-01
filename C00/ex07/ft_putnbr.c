/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:29:45 by emir12311         #+#    #+#             */
/*   Updated: 2026/04/30 07:37:34 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_checkneg(int nb)
{
	if (nb == -2147483648)
		return (-1);
	else if (nb >= 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int	ft_getlen(int nb)
{
	int	div;
	int	len;

	div = nb;
	len = 0;
	while (div != 0)
	{
		div = div / 10;
		len++;
	}
	if (len == 0)
		return (1);
	return (len);
}

int	ft_calcp10(int len)
{
	int	i;
	int	p10;

	p10 = 1;
	i = len;
	while (i > 1)
	{
		p10 = p10 * 10;
		i--;
	}
	return (p10);
}

void	ft_putnbr(int nb)
{
	int	len;
	int	p_nb;
	int	p10;

	len = ft_getlen(nb);
	p10 = ft_calcp10(len);
	p_nb = ft_checkneg(nb);
	if (p_nb == -1)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else if (p_nb == 1)
	{
		p_nb = nb * -1;
		ft_putchar('-');
	}
	else if (p_nb == 0)
		p_nb = nb;
	while (len-- != 0)
	{
		ft_putchar(p_nb / p10 + '0');
		p_nb = p_nb % p10;
		p10 = p10 / 10;
	}
}
