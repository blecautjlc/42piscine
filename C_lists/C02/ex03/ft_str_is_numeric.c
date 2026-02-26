/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:36:28 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/26 17:52:55 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "";
	char	str1[] = "123AAbbcD";
	char	str2[] = "0123456789";
	
	printf("Vazia     --> %d\n", ft_str_is_numeric(str0));
	printf("Misturada --> %d\n", ft_str_is_numeric(str1));
	printf("Pura      --> %d\n", ft_str_is_numeric(str2));
	return (0);
}*/