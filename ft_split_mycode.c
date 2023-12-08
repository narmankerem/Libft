/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_mycode.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 22:35:44 by knarman           #+#    #+#             */
/*   Updated: 2023/12/08 01:46:34 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_separators(const char *separators, char c)
{
    while (*separators)
    {
        if (*separators == c)
            return (1);
        separators++;
    }
    return (0);
}

char **ft_split(const char *str, const char *separators)
{
    size_t word_count;
    const char *p;
    const char **result;
    
    word_count = 0;
    p = str;
    while (*p)
    {
        while (*p && is_separators(separators, *p))
            p++; //ayırıcı arttır
        if (*p)
        {
            word_count++;
            while (*p && !is_separators(separators, *p))
                p++; // harf arttır
            
        }
    }
    
     result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);
    size_t i;
    
    i = 0;
    p = str;
    while (*p)
    {
        while (*p && is_separators(separators, *p))
            p++; //ayırıcı arttır
        if (*p)
        {
            const char *start = p;
            while (*p && !is_separators(separators, *p))
                p++; //harf arttır
            size_t len = p - start;
            result[i] = (char *)malloc(sizeof(char) * (len + 1));
            if (!result[i])
            {
                while (i > 0)
                    free(result[--i])
                free(result);
                return (NULL);
            }
            size_t j;
            
            j = 0;
            while (j < len)
            {
                result[i][j] = start[j];
                j++;
            }
            
            result[i][len] = '\0';
            i++;
        }
        
    }
    
    result[word_count] = NULL;
    return (result);
    
        
}