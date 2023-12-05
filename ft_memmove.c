/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:15 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 20:45:13 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (unsigned char *)src;

    if (src < dst)
        while (len--)
            d[len] = s[len];
    else
        while (len--)
            *d++ = *s++;
    return (dst);   
}
#include <stdio.h>
int main ()
{
    char s[] = "kerem";
    char c[] = "aliiiiiiii";
    size_t n = 7;
	char *ptr;
    ptr = ft_memmove(s, c, n);
	printf("%s", ptr);
}
