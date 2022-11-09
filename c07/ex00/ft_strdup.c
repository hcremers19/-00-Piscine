/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 13:56:29 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/22 13:56:31 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		len;
	int		i;

	len = 0;
	while (src[len])
		len++;
	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	source[] = "Hello, world!";
	char	*tgt;

	tgt = strdup(source);
	printf("%s\n", tgt);
	free(tgt);
	//return (0);

	char	src[] = "Bonjour, le monde!";
	char	*r;

	r = ft_strdup(src);
	printf("%s\n", r);
	free(r);
	return (0);
}
*/