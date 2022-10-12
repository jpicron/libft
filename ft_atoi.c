/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi copy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpicron <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:50:14 by jpicron           #+#    #+#             */
/*   Updated: 2022/03/17 16:29:20 by jpicron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static int	ft_isspaces(char str)
{
	if (str != ' ' && str != '\n' && str != '\t' && str != '\v' && str != '\f'
		&& str != '\r')
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	size_t				index;
	int					sign;
	unsigned long long	result;

	index = 0;
	sign = 1;
	result = 0;
	while (ft_isspaces(str[index]) != 0)
		index++;
	if (str[index] == '+' || str[index] == '-')
		if (str[index++] == '-')
			sign *= -1;
	while (str[index] >= '0' && str[index] <= '9')
	{
		result *= 10;
		result += str[index] - '0';
		index++;
	}
	if (result > 9223372036854775807LL && sign == -1)
		return (0);
	if (result > 9223372036854775807LL && sign == 1)
		return (-1);
	return (result * sign);
}
