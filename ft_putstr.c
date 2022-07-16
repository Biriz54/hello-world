/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 13:23:45 by analves           #+#    #+#             */
/*   Updated: 2022/07/05 17:22:06 by analves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		
		ft_putchar(str[i]);


		i++;
	}
}
