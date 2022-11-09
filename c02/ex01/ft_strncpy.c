/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:53:10 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/15 11:37:54 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (index < n && src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	tab[30];
	char	tab2[100];

	strcpy(tab, "Cette chaine sera copiee");
	printf("Quelle chaine sera copiee ?\n%s\n", strncpy(tab2, tab, 10));

	char	src[] = "Cette chaine sera copiee";
	char	dest[100];
	printf("Quelle chaine sera copiee ?\n%s\n", ft_strncpy(dest, src, 10));
	return (0);
}
*/