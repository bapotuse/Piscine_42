/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 11:06:51 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/07/27 11:06:52 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first_number;
	int	second_number;
	int	third_number;

	first_number = 48;
	while (first_number <= 55)
	{
		second_number = first_number + 1;
		while (second_number <= 56)
		{
			third_number = second_number + 1;
			while (third_number <= 57)
			{
				write(1, &first_number, 1);
				write(1, &second_number, 1);
				write(1, &third_number, 1);
				if (!(first_number == 55 && third_number == 57))
					write(1, ", ", 2);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}
