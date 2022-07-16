/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 16:53:40 by analves           #+#    #+#             */
/*   Updated: 2022/07/12 14:59:38 by analves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
int	*ft_map(int *tab, int length, int  (*f)(int))
{
	int	*final_array;
	int i;

	i = 0;
	if(!(final_array = (int*)malloc(sizeof(int)*length)))
	{
		return (0);
	}
	while (i < length)
	{
		final_array[i] = f(tab[i]);
		i++;
	}
	return (final_array);
}
