/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 18:14:56 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/17 18:25:16 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*int	main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'b';
	ft_putchar(a);
	write(1, "\n", 1);
	ft_putchar(b);
	write(1, "\n", 1);
	return (0);
}*/
