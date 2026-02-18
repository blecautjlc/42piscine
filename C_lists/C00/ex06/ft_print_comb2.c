/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 18:25:58 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/18 19:07:49 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert(int a, int b)
{
	char	t;

	t = '0' + (a / 10);
	write(1, &t, 1);
	t = '0' + (a % 10);
	write(1, &t, 1);
	write(1, " ", 1);
	t = '0' + (b / 10);
	write(1, &t, 1);
	t = '0' + (b % 10);
	write(1, &t, 1);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_convert(a, b);
			b++;
		}
		a++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
