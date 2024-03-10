#include "so_long.h"

void ft_get_images(mlptr *mlptr)
{
    int		img_width ;
	int		img_height;

    mlptr->imgw = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/wall.xpm", &img_width, &img_height);
	mlptr->imgpmu = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/moveup.xpm", &img_width, &img_height);
	mlptr->imgpmd = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/movedown.xpm", &img_width, &img_height);
	mlptr->imgpmr = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/moveright.xpm", &img_width, &img_height);
	mlptr->imgpml = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/moveleft.xpm", &img_width, &img_height);
	mlptr->imgc = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/coins.xpm", &img_width, &img_height);
	mlptr->imgs = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/space.xpm", &img_width, &img_height);
	mlptr->imge = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/door.xpm", &img_width, &img_height);
	mlptr->imger = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/eatright.xpm", &img_width, &img_height);
	mlptr->imgel = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/eatleft.xpm", &img_width, &img_height);
	mlptr->imgeu = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/eatup.xpm", &img_width, &img_height);
	mlptr->imged = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/eatdown.xpm", &img_width, &img_height);
	mlptr->imgenb = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/enemyleft.xpm", &img_width, &img_height);
	mlptr->imgenr = mlx_xpm_file_to_image(mlptr->mlx_ptr, "./textures/imgenr.xpm", &img_width, &img_height);	
}