/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:23:40 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/26 18:35:14 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= ' ' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "";
	char	str1[] = "\n 	aaaacdDDD1111";
	char	str2[] = "1aA/!(')";
	
	printf("Vazia     --> %d\n", ft_str_is_printable(str0));
	printf("Misturada --> %d\n", ft_str_is_printable(str1));
	printf("Pura      --> %d\n", ft_str_is_printable(str2));
	return (0);
}*/