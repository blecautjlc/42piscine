/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juliopestana <juliopestana@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 16:31:54 by juliopestan       #+#    #+#             */
/*   Updated: 2026/02/27 17:17:47 by juliopestan      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;

	len = 0;
	while (src[len])
		len++;
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (len);
	}
	else
		return (len);
}

/*#include <stdio.h>

int	main(void)
{
	char	src0[] = "abcd";
	char	dest0[] = "hello";
	printf("Size = 0   --> %d\n", ft_strlcpy(dest0, src0, 0));
	printf("Dest0      --> %s\n\n", dest0);

	char	src1[] = "abcd";
	char	dest1[] = "hello";
	printf("Size = 1   --> %d\n", ft_strlcpy(dest1, src1, 1));
	printf("Dest1      --> %s\n\n", dest1);

	char	src2[] = "";
	char	dest2[] = "hello";
	printf("Src vazia  --> %d\n", ft_strlcpy(dest2, src2, 5));
	printf("Dest2      --> %s\n\n", dest2);

	char	src3[] = "abcd";
	char	dest3[] = "hello";
	printf("Src < Size --> %d\n", ft_strlcpy(dest3, src3, 5));
	printf("Dest3      --> %s\n\n", dest3);

	char	src4[] = "abcdefgh";
	char	dest4[] = "hello";
	printf("Src > Size --> %d\n", ft_strlcpy(dest4, src4, 5));
	printf("Dest4      --> %s\n", dest4);

	return (0);
}*/