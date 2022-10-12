/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:51:56 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 16:29:58 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*nsrc;
	char	*ndest;
	size_t	i;

	nsrc = (char *)src;
	ndest = (char *)dest;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (ndest > nsrc)
	{
		while (n-- > 0)
			ndest[n] = nsrc[n];
		return (dest);
	}
	while (i < n)
	{
		ndest[i] = nsrc[i];
		i++;
	}
	return (dest);
}
