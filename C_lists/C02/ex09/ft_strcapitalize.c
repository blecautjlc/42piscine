/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/26 20:32:40 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/26 22:52:44 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha_numeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (i == 0)
				str[i] -= 32;
			else if (!(ft_str_is_alpha_numeric(str[i - 1])))
				str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (ft_str_is_alpha_numeric(str[i - 1]))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str0[] = "oi, tudo bem? 42palavras quareNta-e-Duas; cinquenta+e+um";
	ft_strcapitalize(str0);
	printf("%s\n", str0);

	char	str1[] = "hELLo";
	ft_strcapitalize(str1);
	printf("%s\n", str1);
	
	return (0);
}*/