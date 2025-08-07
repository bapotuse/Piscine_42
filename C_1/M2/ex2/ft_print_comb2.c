/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:53:14 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/07/27 11:53:16 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_putchar((first_number / 10) + '0');
			ft_putchar((first_number % 10) + '0');
			write(1, " ", 1);
			ft_putchar((second_number / 10) + '0');
			ft_putchar((second_number % 10) + '0');
			if (!(first_number == 98 && second_number == 99))
				write(1, ", ", 2);
			second_number++;
		}
		first_number++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
