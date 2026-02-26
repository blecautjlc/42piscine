/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 17:57:50 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/26 18:05:27 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main(void)
{
	char	str0[] = "";
	char	str1[] = "aaAbbBccC";
	char	str2[] = "aaabbbccc";

	printf("Vazia      --> %d\n", ft_str_is_lowercase(str0));
	printf("Misturada  --> %d\n", ft_str_is_lowercase(str1));
	printf("Pura       --> %d\n", ft_str_is_lowercase(str2));
	return (0);
}