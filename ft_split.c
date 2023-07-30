/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokten <yokten@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:20:30 by yokten            #+#    #+#             */
/*   Updated: 2023/07/30 20:14:45 by yokten           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	if (*s)
		return (1 + ft_strlen(s + 1));
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*to_return;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
		len = 0;
	else if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	to_return = malloc(len + 1 * sizeof(char));
	if (!to_return)
		return (NULL);
	while (i < len && s[start + i])
	{
		to_return[i] = s[start + i];
		i++;
	}
	to_return[i] = '\0';
	return (to_return);
}

size_t	ft_counter(char const *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		if (*s != c)
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	int		len;
	int		i;
	char	**to_return;

	if (!s)
		return (NULL);
	i = 0;
	to_return = malloc(sizeof(char *) * (ft_counter(s, c) + 1));
	if (!to_return)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			to_return[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	to_return[i] = 0;
	return (to_return);
}
