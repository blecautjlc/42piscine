/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/24 20:12:43 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/25 08:11:36 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	//src < n
	int	j;
	char	src[] = "abcde";
	char	dest[10];
	
	ft_strncpy(dest, src, 8);
	
	printf("src > n \n\n");
	j = 0;
	while (j < 10)
	{
		printf("[%d] = %d\n", j, dest[j]);
		j++;
	}
	printf("\n\n");

	//src > n
	char	src1[] = "abcde";
	char	dest1[10];
	
	ft_strncpy(dest1, src1, 4);
	printf("src < n \n\n");
	j = 0;
	while (j < 10)
	{
		printf("[%d] = %d\n", j, dest1[j]);
		j++;
	}
	return (0);
}*/