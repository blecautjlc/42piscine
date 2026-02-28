/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:34:21 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/28 19:00:27 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "aaa";
	char	str1[] = "aaa";
	printf("s1 == s2 --> %d\n", ft_strcmp(str0, str1));

	char	str2[] = "aaa";
	char	str3[] = "aa";
	printf("s1 > s2  --> %d\n", ft_strcmp(str2, str3));

	char	str4[] = "aaa";
	char	str5[] = "aaaa";
	printf("s1 < s2  --> %d\n", ft_strcmp(str4, str5));

	return (0);
}*/