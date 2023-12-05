/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:55:23 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 15:58:24 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
    char *copy;
    
    
    if (!(copy = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    
    while (s++)
        *copy++ = *s++;
    
    return (copy);
}

int main ()
{
    char str[12] = "kerem";
    printf("%s", ft_strdup(str));
}