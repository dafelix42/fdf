/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   close_event.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/09/05 09:08:43 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2019/09/05 09:10:40 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fdf.h"

int		close_event(t_ma *master)
{
	key_event(53, master);
	return (0);
}
