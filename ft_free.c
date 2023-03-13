/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:52:46 by tbrebion          #+#    #+#             */
/*   Updated: 2023/03/13 20:18:17 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_list *stack_a, t_list *stack_b)
{
	t_list	*tmp;

	while (stack_a != NULL)
	{
		tmp = stack_a->next;
		free(stack_a);
		stack_a = tmp;
	}
	while (stack_b != NULL)
	{
		tmp = stack_b->next;
		free(stack_b);
		stack_b = tmp;
	}
}
