/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:05:32 by abolea            #+#    #+#             */
/*   Updated: 2023/11/13 14:27:14 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t s)
{
	unsigned int	i;
	char			*tmp1;
	char			*tmp2;

	i = 0;
	tmp1 = (char *)dest;
	tmp2 = (char *)src;
	if ((char *)dest == NULL && (char *)src == NULL)
		return (NULL);
	while (i < s)
	{
		tmp1[i] = tmp2[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>

int main (void) 
{
   const char src[50] = "12345";
   char dest[50] = "";
   ft_memcpy(dest, src, 2);
   printf("%s", dest);

   return(0);
}
*/
