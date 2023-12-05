/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:09 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 19:05:09 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *d1;
    unsigned char *d2;
    
    d1 = (unsigned char *)s1;
    d2 = (unsigned char *)s2;
    while (n--)
        if(*d1++ != *d2++)
            return ((int)(*--d1 - *--d2));
    
    return (0);
}

int main ()
{
    char *s = "erem";
    char *c = "erem";
    size_t n = 5;
    printf("%d", ft_memcmp(s, c, n));
    
    
}