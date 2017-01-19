#include "header.h"
#define DIM 9

int	main(int argc, char **argv)
{
	int **grid;

	grid = ft_init_grid(DIM);
	if(argc == 10)
	{
		if(ft_check_argv(argv))
		{
			ft_set_grid(grid, argv);
			if(ft_check_grid(grid))
			{
				ft_solve(grid, 0);
				ft_print_grid(grid);
			}
			else
				ft_putstr("Grille non valide.\n");
		}
		else
			ft_putstr("Seulement des points et des chiffres, 9 char par ligne.\n");
	}
	else
	{
		ft_putstr("Il faut entrer 9 lignes.\n");
	}
	ft_free_grid(grid, DIM);
	return(0);
}
