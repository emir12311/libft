/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 21:27:42 by emir12311         #+#    #+#             */
/*   Updated: 2026/05/02 23:10:14 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_int_to_hex(int n, char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	str[0] = hex[n / 16];
	str[1] = hex[n % 16];
	str[2] = '\0';
}

int	ft_char_is_printable(char chr)
{
	if ((0 <= chr && chr <= 31) || chr == 127)
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	hex_str[3];

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_char_is_printable(str[i]))
		{
			ft_int_to_hex(str[i], hex_str);
			ft_putchar(92);
			ft_putstr(hex_str);
			i++;
			continue ;
		}
		ft_putchar(str[i]);
		i++;
	}
}
