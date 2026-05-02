/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 20:08:25 by emir12311         #+#    #+#             */
/*   Updated: 2026/05/02 20:42:50 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alnum(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if ('a' <= str[i] && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if (!ft_is_alnum(str[i - 1]) && ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] -= 32;
			i++;
			continue ;
		}
		if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
