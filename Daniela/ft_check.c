

void	ft_check(int argc, char *argv)
{
	int	i;
	int j;
	char **tem;

	i = 1;
	j = 0;
	if (ft_manejo_flags(argv[i][j]) == 1)
	{
		i++;
		j++;
	}
	while (j < argc)
	{
		tem = argv[i][j];
		i++;
		j++;
	}
	
}
 */