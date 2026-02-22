/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 20:55:49 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/22 00:17:09 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int size;
	
	int nums[5] = {0, 1, 2, 3, 4};
	size = 5;
	ft_rev_int_tab(nums, size);
	
	i = 0;
	while (i < 5)
	{
		printf("%d", nums[i]);
		if (i < (size - 1))
		printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}*/