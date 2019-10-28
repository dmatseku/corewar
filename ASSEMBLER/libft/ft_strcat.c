/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyunak <vyunak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:45:27 by vyunak            #+#    #+#             */
/*   Updated: 2019/04/04 15:45:58 by vyunak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	size_t	i;
	size_t	d;

	i = ft_strlen(s1);
	d = 0;
	while (s2[d] != '\0')
	{
		s1[i + d] = s2[d];
		d++;
	}
	s1[i + d] = '\0';
	return (s1);
}