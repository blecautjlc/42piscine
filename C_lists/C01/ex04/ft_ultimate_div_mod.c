/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 14:07:25 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/21 14:45:17 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	divtemp;
	int	modtemp;

	divtemp = *a / *b;
	modtemp = *a % *b;
	*a = divtemp;
	*b = modtemp;
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 7;
	y = 3;
	a = &x;
	b = &y;
	printf("O valor de x antes: %d\n", x);
	printf("O valor de y antes: %d\n", y);
	ft_ultimate_div_mod(a, b);
	printf("O valor de x depois: %d\n", x);
	printf("O valor de y depois: %d\n", y);
	return (0);
}*/