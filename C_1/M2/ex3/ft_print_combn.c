/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:37:58 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/07/27 17:38:01 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	c[10];
	int		i;

	if (n <= 0 || n >= 10)
		return ;
	i = -1;
	while (++i < n)
		c[i] = i + '0';
	while (c[0] <= 10 - n + '0')
	{
		write(1, c, n);
		if (c[0] < 10 - n + '0')
			write(1, ", ", 2);
		i = n - 1;
		while (i >= 0 && c[i] == '9' - (n - 1 - i))
			i--;
		if (i < 0)
			return ;
		c[i]++;
		while (++i < n)
			c[i] = c[i - 1] + 1;
	}
}
