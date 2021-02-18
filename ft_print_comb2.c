/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raurelia <raurelia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 20:16:14 by raurelia          #+#    #+#             */
/*   Updated: 2021/02/18 20:31:45 by raurelia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	outp(char a_s[2], char b_s[2])
{
	write(1, a_s, 2);
	write(1, " ", 1);
	write(1, b_s, 2);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char b_s[2];
	char a_s[2];

	a = 0;
	b = a + 1;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			a_s[0] = a / 10 + '0';
			a_s[1] = a % 10 + '0';
			b_s[0] = b / 10 + '0';
			b_s[1] = b % 10 + '0';
			outp(a_s, b_s);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
