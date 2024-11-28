/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrocha-f <jrocha-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 11:41:52 by jrocha-f          #+#    #+#             */
/*   Updated: 2024/11/28 11:49:44 by jrocha-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <philo.h>

void	routine(t_philo philo)
{
	printf(philo.id);
}

void	philo_init(t_philo philo)
{
	t_philo	current;
	
	while (philo.info.number_of_philosophers >= 0)
	{
		pthread_create(philo.id, NULL, routine, );
		
	}

	
}