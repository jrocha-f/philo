/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <jrocha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 13:25:53 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/11/28 11:44:56 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# define ERROR_MSG "Please enter the following: \n\t ./philo \
<number_of_philosophers> <time_to_die> <time_to_eat> <time_to_sleep> \
<[optional]number_of_times_each_philosopher_must_eat> \n"

# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>

typedef struct s_info
{
	int	number_of_philosophers;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	number_of_times_each_philosopher_must_eat;
}				t_info;

typedef struct s_philo
{
	t_philo			prev;
	t_info			info;
	pthread_t		id;
	pthread_mutex_t	fork;
	t_philo			next;
}				t_philo;

typedef struct s_table
{
	
}				t_table;

//Utils
int	is_unsigned_int(char* nptr);
long	ft_atol(const char *nptr);

//Philosopher init
void	philo_init(t_philo philo);




#endif