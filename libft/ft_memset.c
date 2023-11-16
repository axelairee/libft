/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:37:28 by abolea            #+#    #+#             */
/*   Updated: 2023/11/13 14:50:46 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	char			*tmp;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "test";
	ft_memset(str, '@', 1);
	printf("%s", str);
	return (0);
}
*/