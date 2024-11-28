/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <jrocha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:41:29 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/11/28 11:20:39 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *nptr)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n *= 10;
		n += *nptr - '0';
		nptr++;
	}
	return (n * sign);
}

long	ft_atol(const char *nptr)
{
	long int	n;
	int			sign;

	n = 0;
	sign = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-')
		sign *= -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n *= 10;
		n += *nptr - '0';
		nptr++;
	}
	return (n * sign);
}

int	is_unsigned_int(char* nptr)
{
	int	has_digits;

	if (!nptr || *nptr == '\0')
		return (0);
	has_digits = 0;
	if (*nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		nptr++;
		has_digits = 1;
	}
	if (*nptr == 0 && has_digits)
		return (1);
	else
		return (0);
}