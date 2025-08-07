/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:50:57 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/07/29 13:11:10 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
void	main()
{
	int a = 5;
	int b = 6;

	printf("%d %d", a, b);
	ft_swap(&a, &b);
	printf("%d %d", a, b);
}
*/
