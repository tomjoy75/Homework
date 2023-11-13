/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjoyeux <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:22:43 by tjoyeux           #+#    #+#             */
/*   Updated: 2023/11/07 10:54:54 by tjoyeux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_initdst;
	size_t	size_src;

	size_initdst = ft_strlen(dst);
	size_src = ft_strlen(src);
	if (size <= size_initdst)
		return (size + size_src);
	ft_strlcpy(dst + size_initdst, src, size - size_initdst);
	return (size_initdst + size_src);
}
