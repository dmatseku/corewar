/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyunak <vyunak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 15:47:42 by vyunak            #+#    #+#             */
/*   Updated: 2019/04/04 15:50:01 by vyunak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strclr(char *s)
{
	size_t	i;
	size_t	d;

	d = -1;
	if (!s)
		return ;
	i = ft_strlen(s);
	while (i > ++d)
		s[d] = '\0';
}
