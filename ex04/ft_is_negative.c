/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 18:59:50 by xinzhang          #+#    #+#             */
/*   Updated: 2024/09/21 19:19:51 by xinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else if (n >= 0)
		write(1, "P", 1);
}
/* int main(void)
{
	ft_is_negative(-5);
	write(1, "\n", 1);
	ft_is_negative(3);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	return 0;
} */
