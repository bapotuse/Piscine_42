/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baptiste.beaux <baptiste.beaux@learner.42  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 14:41:35 by baptiste.beau     #+#    #+#             */
/*   Updated: 2025/07/29 14:41:36 by baptiste.beau    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp_res;
	int	temp_mod;

	temp_res = *a / *b;
	temp_mod = *a % *b;
	*a = temp_res;
	*b = temp_mod;
}
