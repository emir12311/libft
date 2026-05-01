/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 20:04:15 by emir12311         #+#    #+#             */
/*   Updated: 2026/05/01 17:45:20 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display_arr(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] != 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_set_arr_num(int index, int num, int n, int *arr)
{
	if (index == n)
	{
		ft_display_arr(arr, n);
		return ;
	}
	while (num <= 9)
	{
		arr[index] = num;
		ft_set_arr_num(index + 1, num + 1, n, arr);
		num++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	ft_set_arr_num(0, 0, n, arr);
}
