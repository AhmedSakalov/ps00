/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 21:08:49 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/18 21:28:32 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	test(int a, int b, int c)
{
	char a_s;
	char b_s;
	char c_c;

	a = a + '0';
	b = b + '0';
	c = c + '0';
	write(1, &a_s, 1);
	write(1, &b_s, 1);
	write(1, &c_c, 1);
	if (a == 7)
	{
		return ;
	}
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 9)
	{
		b = a + 1;
		while (b <= 9)
		{
			c = b + 1;
			while (c <= 9)
			{
				test(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
