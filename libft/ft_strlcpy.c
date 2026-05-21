/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: abelli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 16:37:54 by abelli            #+#    #+#             */
/*   Updated: 2026/05/19 16:47:56 by abelli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if 	(dstsize == 0)
	return	strlen(src);	
	if (dstsize > 0)
	dst[i] = '\0';


	j = i;
	while (src[j] != '\0')
		j++;
	return (j);
}
