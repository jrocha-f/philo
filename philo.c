/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <jrocha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:25:56 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/11/28 11:34:25 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	check_args (int argc, char **argv)
{
	int i;
	
	i = 1;
	if (argc < 5 || argc > 6)
	{
		printf("%s", ERROR_MSG);
		exit (1);
	}
	while (argv[i] != 0)
	{
		if (!is_unsigned_int(argv[i]))
		{
			printf("%s", ERROR_MSG);
			exit (1);
		}
		i++;
	}
}

void parsing(int argc, char **argv, t_info info)
{
	check_args(argc, argv);
	info.number_of_philosophers = ft_atol(argv[1]);
	info.time_to_die = ft_atol(argv[2]);
	info.time_to_eat = ft_atol(argv[3]);
	info.time_to_sleep = ft_atol(argv[4]);
	if (argc == 6)
		info.number_of_times_each_philosopher_must_eat = ft_atol(argv[5]);
	else
		info.number_of_times_each_philosopher_must_eat = -1;
	if (info.number_of_philosophers <= 0 || info.time_to_die <= 0 ||
		info.time_to_eat <= 0 || info.time_to_sleep <= 0)
	{
		printf("%s", ERROR_MSG);
		exit (1);
	}
	if (argc == 6 && info.number_of_times_each_philosopher_must_eat < 0)
	{
		printf("%s", ERROR_MSG);
		exit (1);
	}
	return ;
}

int	main(int argc, char **argv)
{
	t_philo philo;
	
	parsing(argc, argv, philo.info);
	philo_init(philo);

	return (0);
}