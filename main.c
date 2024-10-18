/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iberegsz <iberegsz@student.42vienna.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:52:26 by iberegsz          #+#    #+#             */
/*   Updated: 2024/10/18 17:04:00 by iberegsz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "main.h"

void	print_point(t_point point)
{
	printf("(%.2f, %.2f)\n", point.x, point.y);
}

int	main(void)
{
	t_point	a;
	t_point	b;
	t_point	c;
	t_point	inside;
	t_point	outside;

	a.x = -2.82f;
	a.y = 5.43f;
	b.x = 0.6f;
	b.y = 1.29f;
	c.x = -4.92f;
	c.y = -1.29f;
	inside.x = -3.44f;
	inside.y = 1.21f;
	outside.x = 0.48f;
	outside.y = 5.57f;
	printf("Triangle vertices:\n");
	printf("A");
	print_point(a);
	printf("B");
	print_point(b);
	printf("C");
	print_point(c);
	return (0);
}
