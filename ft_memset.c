/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:18 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 22:36:03 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *dest, int c, size_t count)
{
    unsigned char *d1;
    
    d1 = (unsigned char *)dest;
    while (count--)
        *d1++ = (unsigned char)c;
    return (dest);
}

int main ()
{
    char str[20] = "KEREFSMFSD";
    int val = 'A';
    
    ft_memset(str, val, 5);

    printf("Doldurulmuş bellek bloğu: %s\n", str);

    return 0;
}