/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:48:06 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/07/26 15:48:08 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_display_chars(int x, int y, int xmax, int ymax)
{
	if (x == 1 && y == 1)
		ft_putchar('o');
	else if (x == xmax && y == 1)
		write(1, "o\n", 3);
	else if (x == 1 && y == ymax)
		ft_putchar('o');
	else if (x == xmax && y == ymax)
		write(1, "o\n", 3);
	else if ((x > 1 && x < xmax && y == 1) || (x > 1 && y == ymax))
		ft_putchar('-');
	else if ((x == 1 && y < ymax))
		ft_putchar('|');
	else if ((x == xmax && y < ymax))
		write(1, "|\n", 3);
	else
		ft_putchar(' ');
}

void	ft_draw_square(int xmax, int ymax)
{
	int	column;
	int	line;

	column = 1;
	while (column <= ymax)
	{
		line = 1;
		while (line <= xmax)
		{
			ft_display_chars(line, column, xmax, ymax);
			line++;
		}
		column++;
		if (ymax <= 0 || xmax <= 0)
		{
			return ;
		}
	}
}

void	rush(int x, int y)
{
	ft_draw_square(x, y);
}
