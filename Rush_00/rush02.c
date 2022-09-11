/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmortell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:06:14 by gmortell          #+#    #+#             */
/*   Updated: 2022/09/11 13:00:32 by gmortell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putline(char left, char middle, char right, int x)
{
	ft_putchar(left);
	x--;
	while (x > 1)
	{
		ft_putchar(middle);
		x--;
	}
	if (x == 1)
	{
		ft_putchar(right);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x < 1 || y < 1)
		ft_putline('A', 'B', 'A', x);
	y--;
	while (y > 1)
	{
		ft_putline('B', ' ', 'B', x);
		y--;
	}
	if (y == 1)
		ft_putline('C', 'B', 'C', x);
}
