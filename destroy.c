/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afakili <afakili@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:52:01 by afakili           #+#    #+#             */
/*   Updated: 2022/10/15 20:52:12 by afakili          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	destroy_mutexes(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->number_of_forks)
		if (pthread_mutex_destroy(&data->forks[i]) != 0)
		{
			printf("\e[41mpthread_mutex_destroy Error!\n");
			exit(1);
		}
}

void	destroy_threads(t_data *data)
{
	int	i;

	i = -1;
	while (++i < data->number_of_forks)
	{
		if (pthread_detach(data->philos[i].thread_id) != 0)
		{
			printf("\e[41mpthread_detach Error!\n");
			exit(1);
		}
	}
}

void	destroy(t_data *data)
{
	destroy_threads(data);
	destroy_mutexes(data);
	free(data->philos);
	free(data->forks);
}