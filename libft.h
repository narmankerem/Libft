/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarman <knarman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:56:33 by knarman           #+#    #+#             */
/*   Updated: 2023/12/05 17:46:38 by knarman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_isalpha(int c);

int ft_isascii(int c);

int ft_isdigit(int c);

int ft_isprint(int c);

size_t ft_strlen(const char *s);

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

void ft_bzero(void *s, size_t n);















#endif