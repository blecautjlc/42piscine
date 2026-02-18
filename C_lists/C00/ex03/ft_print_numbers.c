/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 21:08:49 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/17 21:13:22 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	count;

	count = '0';
	while (count <= '9')
	{
		write(1, &count, 1);
		count++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}*/