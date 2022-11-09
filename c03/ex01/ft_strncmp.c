/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:02:59 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/17 16:03:06 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	if (n == 0)
		return (0);
	while (s2[i] != 0 && s1[i] != 0 && s1[i] == s2[i] && i < n - 1)
		i++;
	diff = s1[i] - s2[i];
	return (diff);
}
/*
int	main(void)
{
	char			s1[] = "€";
	char			s2[] = "Œ";
	int				r;
	unsigned int	n;

	r = strncmp(s1, s2, 1);
	printf("%d\n", r);
	r = ft_strncmp(s1, s2, 1);
	printf("%d\n", r);
}
*/