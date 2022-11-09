/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hcremers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/21 10:27:55 by hcremers          #+#    #+#             */
/*   Updated: 2021/07/21 10:27:57 by hcremers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	(void) argc;
	(void) argv;
	while (argv[0][i] != 0)
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
