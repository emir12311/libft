/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 20:05:46 by emir12311         #+#    #+#             */
/*   Updated: 2026/05/01 20:38:36 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_bubble_sort(int *swaps_done, int *tab, int size)
{
	int	i;

	if (*swaps_done == 0)
		return ;
	*swaps_done = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			(*swaps_done)++;
		}
		i++;
	}
	ft_bubble_sort(swaps_done, tab, size);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	swaps_done;

	swaps_done = -1;
	ft_bubble_sort(&swaps_done, tab, size);
}
