/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 13:41:46 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/07/30 14:18:07 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	min;
	int	temp;

	a = 0;
	while (a < size - 1)
	{
		min = a;
		b = a + 1;
		while (b < size)
		{
			if (tab[b] < tab[min])
				min = b;
			b++;
		}
		if (min != a)
		{
			temp = tab[a];
			tab[a] = tab[min];
			tab[min] = temp;
		}
		a++;
	}
}

int	main()
{
	int taille = 5;
	int tableau[5] = {1, 2 , 8 , 5 , 0};
	int i = 0;
	ft_sort_int_tab(tableau, 5);
	while(i < taille)
	{
		/*if (tableau[i] == '\0')
		{
			printf("%s\n","probleme index");
			printf("%d\n",i);
		}*/
		printf("%d\n", tableau[i]);
		i++;
	}
}
