/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 23:29:50 by knarman           #+#    #+#             */
/*   Updated: 2023/12/06 00:02:42 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char *dest;
    size_t i;
    size_t j;
    
    if (s1 == '\0' || s2 == '\0')
        return (NULL);
        
    if (!(dest = (char *)malloc(sizeof(s1)* (ft_strlen(s1) + ft_strlen(s2) + 1))))
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i] != '\0')
    {
        dest[j++] = s1[i];
        i++;
    }
    i = 0;

    while (s2[i] != '\0')
    {
        dest[j++] = s2[i];
        i++;
    }
    dest[j] = '\0';
    return (dest);
}

    