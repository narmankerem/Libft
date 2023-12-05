/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:12 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 20:41:47 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d1;
	unsigned char *d2;

	d1 = (unsigned char *)dst;
	d2 = (unsigned char *)src;
	
	while (n--)
		*d1++ = *d2++;
	return (dst);
}

int main ()
{
    char s[] = "kerem";
    char c[] = "ali";
    size_t n = 7;
	char *ptr;
    ptr = ft_memcpy(s, c, n);
	printf("%s", ptr);
}
