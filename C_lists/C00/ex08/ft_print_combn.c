/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 18:09:11 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/20 18:58:19 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <unistd.h>

void	ft_print(char *buf, int n, int last)
{
	int		i;

	i = 0;
	while (i < n)
	{
		write(1, &buf[i], 1);
		i++;
	}
	if (!last)
		write(1, ", ", 2);
}

void	ft_aux(char *buf, int pos, int next, int n)
{
	char	d;

	if (pos == n)
	{
		ft_print(buf, n, buf[0] == '0' + 10 - n);
		return ;
	}
	d = next;
	while (d <= '9')
	{
		buf[pos] = d;
		ft_aux(buf, pos + 1, d + 1, n);
		d++;
	}
}

void	ft_print_combn(int n)
{
	char	buf[10];

	if (n > 0 && n < 10)
		ft_aux(buf, 0, '0', n);
}