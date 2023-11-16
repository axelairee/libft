/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:21:46 by abolea            #+#    #+#             */
/*   Updated: 2023/11/09 23:30:20 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char			*tmp;
	unsigned int	i;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	char str[] = "abcd";
	ft_bzero(str, 0);
	printf("%s", str);
	return (0);
}
*/