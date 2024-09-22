/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:14:19 by xinzhang          #+#    #+#             */
/*   Updated: 2024/09/19 18:45:32 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_print_reverse_alphabet(void)
{
	int i;
	i=123;
	while (i>96)
	{
		write (1, &i, 1);
		i--;
	}
}
/* int main(void) 
{
	ft_print_reverse_alphabet();
	return 0;
} */
