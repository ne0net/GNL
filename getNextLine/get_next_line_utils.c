/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfranzgr <nfranzgr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:43:15 by nfranzgr          #+#    #+#             */
/*   Updated: 2023/05/08 12:40:00 by nfranzgr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str1;
	char	*str2;
	char	*ptr;

	str1 = (char *) s1;
	str2 = (char *) s2;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(str1) + ft_strlen(str2);
	ptr = malloc(sizeof(char ) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (*str1)
	{
		*ptr++ = *str1++;
	}
	while (*str2)
	{
		*ptr++ = *str2++;
	}
	*ptr = '\0';
	return ((char *) ptr - len);
}

size_t	ft_strlen(const	char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_free(char *buf, char *str)
 {
	free(buf);
	free (str);
 }
 