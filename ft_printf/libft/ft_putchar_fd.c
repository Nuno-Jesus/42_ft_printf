/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncarvalh <ncarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:42:19 by ncarvalh          #+#    #+#             */
/*   Updated: 2022/11/20 17:30:07 by ncarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		return (write(fd, &c, 1));
	return (0);
}
/* 
int main(int argc, char **argv)
{
	(void) argc;
	ft_putchar_fd(argv[1][0], STDOUT_FILENO);
} */
