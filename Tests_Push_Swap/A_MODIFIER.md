# CORRECTIFS A APPORTER

## Dans parsing.c , fonction un peu trop longue 

## Dans chunk_sort.c

static int	define_chunks_size(int size)
{
	int		x;

	x = 1;
	while ((x * x) < size)
		x++;
	return (x);
}

# LIVE CODING CORRECTION

# Dans benchmark_utils.c

void	do_op_bench(t_stack *a, t_stack *b, t_bench *bench, char *op)
{
	bool	write;
	
	write = !(bench->strats & FLAG_COUNT);
	if (ft_strncmp(op, "sa\n", 3) == 0)
		bench->ops[0] += sa(a, write);
	else if (ft_strncmp(op, "sb\n", 3) == 0)
		bench->ops[1] += sb(b, write);
	else if (ft_strncmp(op, "ss\n", 3) == 0)
		bench->ops[2] += ss(a, b, write);
	else if (ft_strncmp(op, "pa\n", 3) == 0)
		bench->ops[3] += pa(a, b, write);
	else if (ft_strncmp(op, "pb\n", 3) == 0)
		bench->ops[4] += pb(a, b, write);
	else if (ft_strncmp(op, "ra\n", 3) == 0)
		bench->ops[5] += ra(a, write);
	else if (ft_strncmp(op, "rb\n", 3) == 0)
		bench->ops[6] += rb(b, write);
	else if (ft_strncmp(op, "rr\n", 3) == 0)
		bench->ops[7] += rr(a, b, write);
	else if (ft_strncmp(op, "rra\n", 4) == 0)
		bench->ops[8] += rra(a, write);
	else if (ft_strncmp(op, "rrb\n", 4) == 0)
		bench->ops[9] += rrb(b, write);
	else if (ft_strncmp(op, "rrr\n", 4) == 0)
		bench->ops[10] += rrr(a, b, write);
}

void	do_op_nobench(t_stack *a, t_stack *b, t_bench *bench, char *op)
{
	bool	write;
	
	write = !(bench->strats & FLAG_COUNT);
	if (ft_strncmp(op, "sa\n", 3) == 0)
		sa(a, write);
	else if (ft_strncmp(op, "sb\n", 3) == 0)
		sb(b, write);
	else if (ft_strncmp(op, "ss\n", 3) == 0)
		ss(a, b, write);
	else if (ft_strncmp(op, "pa\n", 3) == 0)
		pa(a, b, write);
	else if (ft_strncmp(op, "pb\n", 3) == 0)
		pb(a, b, write);
	else if (ft_strncmp(op, "ra\n", 3) == 0)
		ra(a, write);
	else if (ft_strncmp(op, "rb\n", 3) == 0)
		rb(b, write);
	else if (ft_strncmp(op, "rr\n", 3) == 0)
		rr(a, b, write);
	else if (ft_strncmp(op, "rra\n", 4) == 0)
		rra(a, write);
	else if (ft_strncmp(op, "rrb\n", 4) == 0)
		rrb(b, write);
	else if (ft_strncmp(op, "rrr\n", 4) == 0)
		rrr(a, b, write);
}

# Ajouter la fonction suivante (par exemple dans benchmark.c)

void	print_count(t_bench *bench)
{
	int	total_ops;
	(void)total_ops;
	total_ops = bench->ops[0] + bench->ops[1] + bench->ops[2] + bench->ops[3]
		+ bench->ops[4] + bench->ops[5] + bench->ops[6] + bench->ops[7]
		+ bench->ops[8] + bench->ops[9] + bench->ops[10];
	ft_putnbr_fd(total_ops, 1);
	ft_safe_write(1, "\n", 1);
}

# Dans main_push_swap.c

void	choose_algo(t_stack *a, t_stack *b, int flag)
{
	t_bench	bench;

	bench.strats = -1;
	bench.op = do_op_nobench;
	if (flag & (FLAG_BENCH | FLAG_COUNT))
		setup_benchmark(&bench, a->disorder, flag);
	if (flag & FLAG_SIMPLE)
		selection_sort(a, b, &bench);
	else if (flag & FLAG_MEDIUM)
		chunk_sort(a, b, &bench);
	else if (flag & FLAG_COMPLEX)
		radix_sort(a, b, &bench);
	else if ((flag & FLAG_ADAPTIVE) || !flag || (flag & FLAG_BENCH || flag & FLAG_COUNT))
	{
		if (a->disorder < 0.2f && a->size <= 5)
			tiny_sort(a, b, &bench);
		else if (a->disorder < 0.2f && a->size > 5)
			selection_sort(a, b, &bench);
		else if (a->disorder >= 0.2f && a->disorder < 0.5f)
			chunk_sort(a, b, &bench);
		else if (a->disorder >= 0.5f)
			radix_sort(a, b, &bench);
	}
	if (flag & FLAG_COUNT)
		print_count(&bench);
	if (flag & FLAG_BENCH)
		print_benchmark(&bench, a);
}

# Dans check_flags.c

static void	ft_check2(int *flag, int flag_bits)
{
	if ((flag_bits & (FLAG_BENCH | FLAG_COUNT)) && !((*flag) & flag_bits))
	{
		(*flag) |= flag_bits;
		return ;
	}
	else if (flag_bits > 1 && !((*flag)
			& (FLAG_SIMPLE | FLAG_MEDIUM | FLAG_COMPLEX | FLAG_ADAPTIVE)))
	{
		(*flag) |= flag_bits;
		return ;
	}
	else
		exit(write(2, "Error\n", 6));
}

static void	ft_check(char *str, int *flag)
{
	if (ft_strncmp(str, "--bench\0", 8) == 0)
		ft_check2(flag, FLAG_BENCH);
	else if (ft_strncmp(str, "--count\0", 8) == 0)
		ft_check2(flag, FLAG_COUNT);
	else if (ft_strncmp(str, "--simple\0", 9) == 0)
		ft_check2(flag, FLAG_SIMPLE);
	else if (ft_strncmp(str, "--medium\0", 9) == 0)
		ft_check2(flag, FLAG_MEDIUM);
	else if (ft_strncmp(str, "--complex\0", 11) == 0)
		ft_check2(flag, FLAG_COMPLEX);
	else if (ft_strncmp(str, "--adaptive\0", 11) == 0)
		ft_check2(flag, FLAG_ADAPTIVE);
	else
		exit(write(2, "Error\n", 6));
}

## (Et modifier le header pour ajouter le bit du flag_count et le prototype de la nouvelle fonction print_count)