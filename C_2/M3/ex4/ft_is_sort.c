/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 19:08:13 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/08/13 11:32:01 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*
int	difference(int a, int b)
{
	return (a - b);
}*/
int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;

	i = 0;
	asc = 1;
	desc = 1;
	while (i < length - 1)
	{
		if (f(tab[i + 1], tab[i]) < 0)
			asc = 0;
		if (f(tab[i + 1], tab[i]) > 0)
			desc = 0;
		i++;
	}
	return (asc || desc);
}
/*
int	main(void)
{
	int tab1[] = {1, 2, 3, 4, 5};
	int tab2[] = {5, 4, 3, 2, 1};

	printf("Tab 1 : %d\n", ft_is_sort(tab1, 5, difference));
	printf("Tab 2 : %d\n", ft_is_sort(tab2, 5, difference));
}*/
