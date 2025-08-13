/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 18:40:38 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/08/12 20:53:56 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}
/*int	test(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *tab[] = {"salut", "test", "42", NULL};
	char *tab2[] = {"oui", "non", "jsp", NULL};

	printf("Test 1: %d\n", ft_any(tab, &test));
	printf("Test 2: %d\n", ft_any(tab2, &test));
	
	return (0);
}*/
