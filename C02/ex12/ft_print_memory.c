/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 20:12:55 by emir12311         #+#    #+#             */
/*   Updated: 2026/05/07 00:41:15 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_address(unsigned long long n)
{
	char	*hex;
	char	str[16];
	int		i;

	hex = "0123456789abcdef";
	i = 15;
	while (i >= 0)
	{
		str[i] = hex[n % 16];
		n /= 16;
		i--;
	}
	write(1, str, 16);
	write(1, ": ", 2);
}

void	ft_print_hex(unsigned char *c_addr, unsigned int size,
	unsigned int prog)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 0;
	while (i < 16)
	{
		if (prog + i < size)
		{
			write(1, &hex[c_addr[i] / 16], 1);
			write(1, &hex[c_addr[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_ascii(unsigned char *c_addr, unsigned int size,
	unsigned int prog)
{
	int	i;

	i = 0;
	while (i < 16 && prog + i < size)
	{
		if (c_addr[i] >= 32 && c_addr[i] <= 126)
			write(1, &c_addr[i], 1);
		else
			write(1, ".", 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*cast_addr;
	unsigned int	i;

	if (size == 0)
		return (addr);
	cast_addr = (unsigned char *)addr;
	i = 0;
	while (i < size)
	{
		ft_print_address((unsigned long long)(cast_addr + i));
		ft_print_hex(cast_addr + i, size, i);
		ft_print_ascii(cast_addr + i, size, i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
