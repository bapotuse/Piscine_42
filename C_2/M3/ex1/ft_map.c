/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:17:36 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/08/12 20:53:47 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/*int	ft_double(int nb)
{
	return (nb * 2);
}*/
int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*tableau;

	i = 0;
	tableau = malloc(sizeof(int) * length);
	while (i < length)
	{
		tableau[i] = f(tab[i]);
		i++;
	}
	return (tableau);
}
/*
int	main()
{
	int tab[4] = {1, 2, 3, 4};
	int length;
	int i;
	int *tab2;

	i = 0;
	length = 4;
	tab2 = ft_map(tab, length, &ft_double);

	while (i <= length - 1)
	{
		printf("%d", tab2[i]);
		i++;
	}
}*/
