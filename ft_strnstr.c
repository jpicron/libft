/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:51:24 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 14:21:07 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		size2;
	char		*temp;
	size_t		j;

	temp = (char *)s1;
	j = 0;
	size2 = ft_strlen(s2);
	if (size2 == 0)
		return (temp);
	while (temp[j] != '\0' && n >= size2)
	{
		i = 0;
		while (temp[j + i] == s2[i]
			&& temp[j + i] != '\0' && s2[i] != '\0')
			i++;
		if (s2[i] == '\0')
			return (&temp[j]);
		j++;
		n--;
	}
	return (NULL);
}
