/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oanttoor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 10:57:25 by oanttoor          #+#    #+#             */
/*   Updated: 2022/07/03 13:35:32 by oanttoor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

int	print_line(char first, char middle, char last, int x)
{
	int	i;

	i = x - 2;
	if (x == 1)
	{
		ft_putchar(first);
		ft_putchar('\n');
	}
	else
		ft_putchar(first);
	if (x > 2)
	{
		while (i > 0)
		{
			ft_putchar(middle);
			i--;
		}
	}
	if (x > 1)
	{
		ft_putchar(last);
		ft_putchar('\n');
	}
	return (0);
}

int	rush(int x, int y)
{
	int	b;

	b = y - 2;
	if (x < 1 || y < 1)
		return (0);
	else
	{
		print_line('/', '*', '\\', x);
		if (y > 2)
		{
			while (b > 0)
			{
				print_line('|', ' ', '|', x);
				b--;
			}
		}	
		if (y > 1)
			print_line('\\', '*', '/', x);
		return (0);
	}
}
