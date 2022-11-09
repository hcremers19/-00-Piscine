/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:10:37 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/17 16:10:39 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//
char	*ft_strcat(char *dest, char *src)
{
	int	id;
	int	is;

	id = 0;
	is = 0;
	while (dest[id] != 0)
		id++;
	dest[id] = src[is];
	id++;
	is++;
	while (src[is] != 0)
	{
		dest[id] = src[is];
		id++;
		is++;
	}
	dest[id] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	s1[100] = "ABC";
	char	s2[] = "123";

	strcat(s1, s2);
	printf("%s\n", s1);

	char	dest[100] = "abc";
	char	src[] = "123";

	ft_strcat(dest, src);
	printf("%s\n", dest);
}
*/