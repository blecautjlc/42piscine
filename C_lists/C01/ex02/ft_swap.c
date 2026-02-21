/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 13:01:07 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/21 13:11:01 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 15;
	printf("Valor de x antes: %d\n", x);
	printf("Valor de y antes: %d\n", y);
	ft_swap(&x, &y);
	printf("Valor de x depois: %d\n", x);
	printf("Valor de y depois: %d\n", y);
	return (0);
}*/