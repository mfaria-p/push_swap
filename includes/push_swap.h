/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2024/02/19 02:24:25 by mfaria-p          #+#    #+#             */
/*   Updated: 2024/02/19 02:24:25 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <limits.h>

typedef struct s_swap
{
	long			value;
	struct s_swap	*next;
}	t_swap;

// operations
void	swap(t_swap *stack);
void	sa(t_swap *stack);
void	sb(t_swap *stack);
void	ss(t_swap *stack_a, t_swap *stack_b);
void	push(t_swap **stack_src, t_swap **stack_dest);
void	pa(t_swap **stack_a, t_swap **stack_b);
void	pb(t_swap **stack_a, t_swap **stack_b);
void	rotate(t_swap *stack);
void	ra(t_swap *stack_a);
void	rb(t_swap *stack_b);
void	rr(t_swap *stack_a, t_swap *stack_b);
void	reverse_rotate(t_swap *stack);
void	rra(t_swap *stack_a);
void	rrb(t_swap *stack_b);
void	rrr(t_swap *stack_a, t_swap *stack_b);

// errors_handling fucntions
void	ft_exit(int j, t_swap **stack_a, t_swap **stack_b);
void	free_array(char **split);
void	ft_remove(t_swap *stack);

// list functions
int		check_num(char *num);
void	check_repeat(t_swap *stack);
void	read_list(int ac, t_swap *stack, char **str);
void	read_list_av(int ac, t_swap *stack, char **str);
int		arraysize(char **str);

// rotate type
int		ft_rotate_type_ab(t_swap *a, t_swap *b);
int		ft_case_rarb(t_swap *a, t_swap *b, int c);
int		ft_case_rrarrb(t_swap *a, t_swap *b, int c);
int		ft_case_rrarb(t_swap *a, t_swap *b, int c);
int		ft_case_rarrb(t_swap *a, t_swap *b, int c);
int		ft_find_place_b(t_swap *stack_b, int nbr_push);

int		ft_rotate_type_ba(t_swap *a, t_swap *b);
int		ft_case_rarb_a(t_swap *a, t_swap *b, int c);
int		ft_case_rrarrb_a(t_swap *a, t_swap *b, int c);
int		ft_case_rarrb_a(t_swap *a, t_swap *b, int c);
int		ft_case_rrarb_a(t_swap *a, t_swap *b, int c);
int		ft_find_place_a(t_swap *stack_a, int nbr_push);

// rotate and push
int		rarb(t_swap **a, t_swap **b, int c, char s);
int		rrarrb(t_swap **a, t_swap **b, int c, char s);
int		rrarb(t_swap **a, t_swap **b, int c, char s);
int		rarrb(t_swap **a, t_swap **b, int c, char s);

// sort
void	sort_main(t_swap *stack_a);
void	sort_3(t_swap **stack);
void	sort_more_than_3(t_swap **stack_a);
t_swap	*sort_b(t_swap **stack_a);
void	sort_until_3_in_a(t_swap **stack_a, t_swap **stack_b);
t_swap	**sort_a(t_swap **stack_a, t_swap **stack_b);

// stack utils
int		ft_find_index(t_swap *a, int nbr);
int		stack_max(t_swap *a);
int		stack_min(t_swap *a);
int		lst_sorted(t_swap *stack);
t_swap	*ft_lstlast(t_swap *lst);
int		ft_lstsize(t_swap *lst);

#endif
