/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oskhomo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 15:43:43 by oskhomo           #+#    #+#             */
/*   Updated: 2020/07/11 15:55:24 by oskhomo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	char	letter;
	
	letter = 'a';
	while (letter <='z')
	{
	   	ft_putchar( letter);
		  letter ++;
	}	
}
