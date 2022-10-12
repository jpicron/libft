/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:37:49 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 16:15:36 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_join(const char *s1, char*s3, int j)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		s3[j] = s1[i];
		j++;
		i++;
	}
	return (j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s3 = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s3)
		return (NULL);
	j = ft_join(s1, s3, j);
	j = ft_join(s2, s3, j);
	i = 0;
	s3[j] = '\0';
	return (s3);
}
