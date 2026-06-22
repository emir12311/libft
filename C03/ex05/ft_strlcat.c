/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emir12311 <emir12311.dev@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 18:57:08 by emir12311         #+#    #+#             */
/*   Updated: 2026/06/22 19:29:20 by emir12311        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	i_s;
	int				r;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	i = ft_strlen(dest);
	i_s = 0;
	r = ft_strlen(dest) + ft_strlen(src);
	while (i < (size - 1) && src[i_s] != '\0')
	{
		dest[i] = src[i_s];
		i++;
		i_s++;
	}
	dest[i] = '\0';
	return (r);
}
