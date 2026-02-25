/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:48:57 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/25 20:19:21 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "";
	char	str1[] = "aaBB";
	char	str2[] = "aa11BB";

	printf("Vazia 	    --> %d\n", ft_str_is_alpha(str0));
	printf("Só alpha    --> %d\n", ft_str_is_alpha(str1));
	printf("Outros char --> %d\n", ft_str_is_alpha(str2));
}*/