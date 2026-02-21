/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/21 17:00:53 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/21 17:08:37 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <stdio.h>

int	main(void)
{
	int n;
	
	char	str[] = "Essa str tem 26 caracteres";
	n = ft_strlen(str);
	printf("str tem %d caracteres\n", n);
	return (0);
}*/