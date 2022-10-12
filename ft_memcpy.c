/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:05:24 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 16:29:46 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int			i;
	char		*dst;
	const char	*source;

	dst = dest;
	source = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (n > 0)
	{
		dst[i] = source[i];
		i++;
		n--;
	}
	return (dest);
}
