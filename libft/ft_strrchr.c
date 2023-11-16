/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:12:08 by abolea            #+#    #+#             */
/*   Updated: 2023/11/13 14:49:23 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*l;

	l = (void *)0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			l = (char *)s;
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (l);
}
/*
#include <stdio.h>
int     main(void)
{
        printf("%s", ft_strrchr("helllo", 'z'));
        return (0);
}
*/