/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abolea <abolea@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 16:48:51 by abolea            #+#    #+#             */
/*   Updated: 2023/11/13 14:51:12 by abolea           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*d;
	const unsigned char		*s;
	size_t					i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (s < d && s + n > d)
	{
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
		return (dest);
	}
	if (d >= s + n || s >= d + n || (d < s && d + n > s))
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

/*
#include <stdio.h>

int main (void) 
{
   	const char src[50] = "12345";
   	char dest[50] = "";
   	ft_memmove(dest, src, 5);
	
//	int tab[7] = {1, 2, 3, 4, 5, 6, 7};
//	ft_memmove( &tab[3], &tab[0], 4*sizeof(int) );
//		for ( int i = 0 ; i < 7 ; ++i )
//  			printf( "%d", tab[i] );

   return(0);
}
*/
