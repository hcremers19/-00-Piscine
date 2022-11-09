/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 19:45:55 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/13 17:18:31 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;
	int	q;
	int	r;

	a = 42;
	b = 10;
	div = &q;
	mod = &r;
	ft_div_mod(a, b, div, mod);
	printf("42 / 10 = %d\n", *div);
	printf("42 / 10 = %d\n", q);
	printf("42 modulo 10 = %d\n", *mod);
	printf("42 modulo 10 = %d\n", r);
}
*/
