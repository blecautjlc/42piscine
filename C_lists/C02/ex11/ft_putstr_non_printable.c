/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 19:28:47 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/27 21:05:51 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_convert_hex(unsigned char c)
{
	unsigned char	temp;

	if (c < 10)
		temp = c + '0';
	else
		temp = c - 10 + 'a';
	write(1, &temp, 1);
}

void	ft_print_hex(unsigned char c)
{
	write(1, "\\", 1);
	ft_convert_hex(c / 16);
	ft_convert_hex(c % 16);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
		{
			ft_print_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
}*/