/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 19:06:42 by juliopestan       #+#    #+#             */
/*   Updated: 2026/03/08 19:22:14 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	j = 0;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char	a[] = "Hello ";
	char	b[] = "World!";
	printf("%s\n", (ft_strncat(a, b, 6)));

	char	c[] = "Hello ";
	char	d[] = "World!";
	printf("%s\n", (ft_strncat(c, d, 3)));

	char	e[] = "Hello ";
	char	f[] = "World!";
	printf("%s\n", (ft_strncat(e, f, 0)));
	
	return (0);
}*/