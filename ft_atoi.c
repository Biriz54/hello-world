/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 12:07:28 by analves           #+#    #+#             */
/*   Updated: 2022/07/05 17:18:19 by analves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	signal;
	int	result;


	i = 0;
	signal = 1;
	result = 0;
	if (str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		signal *= -1;
		i++;
     
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * signal);
}
