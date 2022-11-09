/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 18:01:15 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/17 18:01:17 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	id;
	unsigned int	is;
	unsigned int	i;

	id = 0;
	is = 0;
	i = 0;
	while (dest[id] != 0)
	{
		id++;
		i++;
	}
	while (src[is] != 0 && is < nb)
	{
		dest[id] = src[is];
		id++;
		is++;
	}
	dest[is + i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[20] = "123456789";
	char	s2[] = "abcdef";

	strncat(s1, s2, 1);
	printf("%s\n", s1);

	char	dest[20] = "123456789";
	char	src[] = "abcdef";

	ft_strncat(dest, src, 1);
	printf("%s\n", dest);
}
*/