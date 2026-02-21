/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:14:04 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/21 13:31:40 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int div;
	int	mod;

	x = 7;
	y = 3;
	ft_div_mod(x, y, &div, &mod);
	printf("7 / 3 = %d\n7 %% 3 = %d\n", div, mod);
	return (0);
}*/