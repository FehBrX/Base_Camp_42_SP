/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffernand <ffernand@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 20:41:11 by ffernand          #+#    #+#             */
/*   Updated: 2020/11/30 20:43:02 by ffernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	int count_string;

	i = 0;
	count_string = 0;
	while (str[i] != '\0')
	{
		count_string++;
	}
	write(1, &count_string, 1);
	return (0);
}
