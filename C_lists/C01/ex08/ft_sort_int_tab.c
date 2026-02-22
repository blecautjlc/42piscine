/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 23:23:55 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/22 00:13:35 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	i;
	int size;
	int	nums[4] = {4, 3, 2, 1};
	
	size = 4;
	ft_sort_int_tab(nums, size);
	
	i = 0;
	while (i <= size)
	{
		printf("%d", nums[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/