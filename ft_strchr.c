/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 14:09:50 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 16:04:28 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char    *ft_strchr(const char *s, int c)
{
    int    i;
    
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)&s[i]);
        i++;
    }
    if (s[i] == (char)c)
        return ((char *)&s[i]);
    return (NULL);
}
