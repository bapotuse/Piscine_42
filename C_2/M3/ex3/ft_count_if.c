/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:55:20 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/08/12 20:54:06 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}
/*int	ft_counter(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'b')
			return (1);
		i++;
	}
	return (0);
}

int	main()
{
	char	*tab[] = {"onjour", "hello", "btest"};
	char	*tab2[] = {"jules", "taptiste", "come"};

	int length = 3;
	printf("Test 1 : %d\n", ft_count_if(tab, length, &ft_counter));
	printf("Test 2 : %d\n", ft_count_if(tab2, length, &ft_counter));
}*/
