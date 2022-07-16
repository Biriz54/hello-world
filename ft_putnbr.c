/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 15:59:32 by analves           #+#    #+#             */
/*   Updated: 2022/07/05 18:15:29 by analves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
    {   
		ft_putnbr(-214748364);
		ft_putnbr(8);
    }
	if (nb<0 && nb >= -2147483647)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if(nb>9)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	else
	{
		ft_putchar(nb+'0');
	}
}
