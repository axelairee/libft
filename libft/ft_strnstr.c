/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:29:03 by abolea            #+#    #+#             */
/*   Updated: 2023/11/13 15:10:39 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
			if (little[j] == '\0')
				return ((char *)big + i - j);
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>
int     main(void)
{
    char str1[50] = "aaabcabcd";
    char str2[50] = "cd";
    printf("%s", ft_strnstr(str1, str2, 8));
}
*/