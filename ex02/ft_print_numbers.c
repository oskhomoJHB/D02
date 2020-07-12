/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 16:22:38 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/11 16:24:47 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
	
void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	char	numbers

	numbers = '0';
	while (numbers <= '9')
	{
		ft_putchar(numbers);
		numbers++;
	}
}
