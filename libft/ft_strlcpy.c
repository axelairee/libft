/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:37:15 by abolea            #+#    #+#             */
/*   Updated: 2023/11/10 01:47:24 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = size;
	while (*src != '\0' && n > 1)
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	if (size > 0)
		*dst = '\0';
	while (*src != '\0')
	{
		src++;
		n--;
	}
	return (size - n);
}

/*
#include <bsd/string.h>
#include <stdio.h>
int main()
{
    char source[50] = "coucou";
    char dest[50] = "A";
    printf("%ld\n",ft_strlcpy(dest,source,0));
    printf("%s\n", dest);
//	printf("%ld\n",strlcpy(dest,source,0));
//    printf("%s", dest);
}
*/
