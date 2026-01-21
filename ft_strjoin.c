/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmathot <cmathot@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:03:16 by cmathot           #+#    #+#             */
/*   Updated: 2023/10/22 14:45:38 by cmathot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ft_strcpy(char *dst, char const *src, size_t pos)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		dst[pos++] = src[i++];
	dst[pos] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size_s1;
	size_t	size_s2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	res = NULL;
	res = (char *) malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (res == NULL)
		return (res);
	ft_strcpy(res, s1, 0);
	ft_strcpy(res, s2, size_s1);
	return (res);
}
