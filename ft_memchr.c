/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:04:10 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 15:59:15 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (void *)s;
	while (n > 0)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
		n--;
	}
	return (NULL);
}
