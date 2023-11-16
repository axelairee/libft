/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 10:57:13 by abolea            #+#    #+#             */
/*   Updated: 2023/11/13 15:10:21 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(src);
	if (size == 0 || i > size)
		return (size + j);
	if (*src == '\0')
		return (i);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*
#include <bsd/string.h>
#include <stdio.h>
int	main(void)
{
	char str1[50] = "";
	char str2[50] = "";
	printf("%zu\n", strlcat(str1, str2, 8));
	printf("%s\n", str1);
	printf("%zu\n", ft_strlcat(str1, str2, 8));
        printf("%s", str1);
	return(0);
}
*/
