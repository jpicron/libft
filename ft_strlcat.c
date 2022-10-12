/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:18:48 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 14:28:24 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	size_t	b;

	a = 0;
	while (dst[a] != '\0' && a < dstsize)
		a++;
	b = a;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[a - b] != '\0' && a < dstsize - 1)
	{
		dst[a] = src[a - b];
		a++;
	}
	if (b < dstsize)
		dst[a] = '\0';
	a = 0;
	while (src[a] != '\0')
		a++;
	return (b + a);
}
