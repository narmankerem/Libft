/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:06 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 18:26:42 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    str = (unsigned char *)s;
    while (n--)
        if (*str++ == (unsigned char)c)
            return (str - 1);
    return (NULL);    
}

int main ()
{
    //unsigned char *ptr;
    char *s = "kerem";
    char c = 'e';
    size_t n = 5;
    //*ptr = ft_memchr(s, c, n);
    printf("%p", ft_memchr(s, 'e', n));
    printf("%p", ft_memchr(s, 'r', n));
    
}