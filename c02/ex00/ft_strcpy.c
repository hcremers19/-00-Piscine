/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:26:03 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 10:48:18 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//
char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	tab[30];
	char	tab2[100];

	strcpy(tab, "Cette chaine sera copiee");
	strcpy(tab2, tab);
	printf("Quelle chaine sera copiee ?\n%s\n", tab2);

	char	src[] = "aaa";
	char	dest[100];
	printf("%s\n", ft_strcpy(dest, src));
	return (0);
}
*/