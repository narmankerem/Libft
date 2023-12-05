/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:26 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 16:56:59 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t dsize;
    
    dsize = 0;
    i = 0;
    while(dst[i] != '\0' && dsize < size)
        dsize++;
    i = dsize;
    while (src[dsize - i] != '\0' && dsize + 1 < size)
    {
        dst[dsize] = src[dsize - 1];
        dsize++;
    }
    if (i < size)
        dst[dsize] = '\0';
    return (ft_strlen(src) + i);    
}

int main ()
{
    char *dst = "narman";
    const char *src = "kerem";
    size_t size = 4;
    ft_strlcat(dst, src, size);
    printf("%s", dst);
}