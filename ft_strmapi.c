/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 01:02:36 by knarman           #+#    #+#             */
/*   Updated: 2023/12/06 11:02:48 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int i;
    unsigned int len;
    char *str;
    
    len = ft_strlen(s);
    str = (char *)malloc(sizeof(char) * len + 1);
    if (!str)
        return (NULL);
    i = 0;
    while (i < len)
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}