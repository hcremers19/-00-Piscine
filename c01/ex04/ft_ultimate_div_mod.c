/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:49:51 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/13 17:19:37 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	q;
	int	r;

	q = *a / *b;
	r = *a % *b;
	*a = q;
	*b = r;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	*a;
	int	*b;

	x = 42;
	y = 10;
	a = &x;
	b = &y;
	printf("Dans a et x se trouve %d\n", *a);
	printf("Dans b et y se trouve %d\n", *b);
	ft_ultimate_div_mod(a, b);
	printf("Dans a et x se trouve %d\n", *a);
	printf("Dans b et y se trouve %d\n", *b);
}
*/
