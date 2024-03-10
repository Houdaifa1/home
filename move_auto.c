#include "so_long.h"

int ft_move_enemy_left_auto(int pj, int pi, mlptr *mlptr)
{
    if (mlptr->map[pj][pi + 2] == 'V')
    {
        if (mlptr->map[pj][pi + 1] != '1' && mlptr->map[pj][pi + 1] != 'E' && mlptr->map[pj][pi + 1] != 'V')
        {
            mlptr->map[pj][pi + 2] = '0';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs,(pi + 2) * 50, pj  *50 );
            mlptr->map[pj][pi + 1] = 'V';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgenb,(pi + 1) * 50, pj  * 50 );
        }
    }
        return(0);
}

int ft_move_enemy_right_auto(int pj, int pi, mlptr *mlptr)
{
    if (mlptr->map[pj][pi - 2] == 'V')
    {
        if (mlptr->map[pj][pi - 1] != 'V' && mlptr->map[pj][pi - 1] != 'E' && mlptr->map[pj][pi - 1] != '1')
        {
            mlptr->map[pj][pi - 2] = '0';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs,(pi - 2) * 50, pj  *50 );
            mlptr->map[pj][pi - 1] = 'V';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgenr,(pi - 1) * 50, pj  * 50 );
        }
    }
    return(0);
}
int ft_move_enemy_up_auto(int pj, int pi, mlptr *mlptr)
{
    if (mlptr->map[pj + 2][pi] == 'V')
    {
        if (mlptr->map[pj + 1][pi] != 'V' && mlptr->map[pj + 1][pi] != 'E' && mlptr->map[pj + 1][pi] != '1')
        {
            mlptr->map[pj + 2][pi] = '0';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs,pi  * 50, (pj + 2 ) *50 );
            mlptr->map[pj + 1][pi] = 'V';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgenb,pi * 50, (pj + 1)  * 50 );
        }
    }
    return(0);
}
int ft_move_enemy_down_auto(int pj, int pi, mlptr *mlptr)
{
    if (mlptr->map[pj - 2][pi] == 'V')
    {
        if (mlptr->map[pj - 1][pi] != 'V' && mlptr->map[pj - 1][pi] != 'E' && mlptr->map[pj - 1][pi] != '1')
        {
            mlptr->map[pj - 2][pi] = '0';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgs,pi  * 50, (pj - 2)  *50 );
            mlptr->map[pj - 1][pi] = 'V';
            mlx_put_image_to_window(mlptr->mlx_ptr, mlptr->mlx_wind, mlptr->imgenb,pi * 50, (pj - 1) * 50 );
        }
    }
    return(0);
 }