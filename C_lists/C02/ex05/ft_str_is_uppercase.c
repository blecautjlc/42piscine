/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 18:13:20 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/26 18:21:45 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "";
	char	str1[] = "aaAbbBccC";
	char	str2[] = "AAABBBCCC";

	printf("Vazia     --> %d\n", ft_str_is_uppercase(str0));
	printf("Misturada --> %d\n", ft_str_is_uppercase(str1));
	printf("Pura      --> %d\n", ft_str_is_uppercase(str2));
	return (0);
}*/