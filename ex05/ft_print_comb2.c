/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:36:49 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/12 09:58:48 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a='0';
	while ( a <='9')
	{
		b ='0';

		while (b <='9')
		{
			c= '0';

			while(c<='9')
			{
				d = '1';

				while (d<='9')
				{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(' ');
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(',');
				ft_putchar(' ');
				if (c =='9' && d =='9')
				{
					break;
				}
				d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}
