/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:06:31 by abolea            #+#    #+#             */
/*   Updated: 2023/11/13 14:58:13 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t memnb, size_t size)
{
	void	*target;
	size_t	max;

	max = (size_t) - 1;
	if (size > 0 && memnb > max / size)
		return (NULL);
	if (memnb == 0 || size == 0)
		target = (malloc(0));
	else
		target = malloc (memnb * size);
	if (target == NULL)
		return (NULL);
	ft_bzero(target, memnb * size);
	return (target);
}
/*
#include<stdio.h>
int     main(void)
{
        printf("%p", ft_calloc(10, 5));
}
*/