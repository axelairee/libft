/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:21:46 by abolea            #+#    #+#             */
/*   Updated: 2023/11/21 10:28:05 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char		*tmp;
	size_t		i;

	i = 0;
	tmp = (char *)s;
	while (i < n)
	{
		tmp[i] = '\0';
		i++;
	}
}
