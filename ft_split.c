/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 00:56:48 by knarman           #+#    #+#             */
/*   Updated: 2023/12/08 09:48:45 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_seperator(const char *seperators, char c)
{
    while (*seperators)
    {
        if (c == *seperators)
            return (1);
        seperators++;
    }
    return 0;
}

char **ft_split(const char *str, const char *separators)
{
    size_t word_count = 0;
    const char *p = str;

    while (*p)
    {
        while (*p && is_seperator(separators, *p))
            p++; //ayırıcıları atla
        if (*p)
        {
            word_count++;
            while (*p && !is_seperator(separators, *p))
                p++; // harfleri atla
        }
        
    }

    char **result = (char **)malloc((word_count + 1) * sizeof(char *));
    if (!result)
        return (NULL);
    
    size_t i;
    
    i = 0;
    p = str;

    while (*p)
    { // str[] = "kerem, top, oynuyor"
        while (*p && is_seperator(separators, *p))
            p++; //ayırıcıları atla
        if (*p)
        {
            const char *start = p;
            while (*p && !is_seperator(separators, *p))
                p++; //harfleri atla
            // start = kerem
            size_t len = p - start;
            result[i] = (char *)malloc(sizeof(char *) * (len + 1));
            if (!result[i])
            {
                while (i > 0)
                    free(result[--i]);
                free(result);
                return (NULL);
            }
            size_t j;
            
            j = 0;
            while (result[i] && j < len)
            {
                result[i][j] = start[j];
                j++;
            }
            result[i][j] = '\0';
            i++;
        }
        
        
    }

    result[word_count] = NULL;
    return (result);
}

int main() {
    char *str = " ,   Hello   ,Wor ld!Th   is,is,a,te st! ";
    char *separators = ",!     ";
    char **result = ft_split(str, separators);

    if (result) {
        for (size_t i = 0; result[i] != NULL; ++i) {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    } else {
        printf("Memory error occurred.\n");
    }

    return 0;
}