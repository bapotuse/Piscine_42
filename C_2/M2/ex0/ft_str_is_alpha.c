/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:49:56 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/08/02 19:50:01 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	char	a;
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		a = str[i];
		if (!((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z')))
			return (0);
		i++;
	}
	return (1);
}
