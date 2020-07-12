/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 16:38:57 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/11 17:13:36 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a='0';

	whil e (a<= '7')
    { 
		b = a +1;
		 while (b<= '8')
		 {
			 c= b+1;
		
			while (c<='9')
		{ 
			ft_putchar(a);
			ft_putchar(b);
			ft_putchar(c);
			ft_putchar(',');
			ft_putchar(' ');
			c++;
		}
		b++;
		}
		a++;
	    }
}
