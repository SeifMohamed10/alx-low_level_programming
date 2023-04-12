include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int w, int h)
{
	int **mee;
	int x, y;

	if (w <= 0 || h <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * h);

	if (mee == NULL)
		return (NULL);

	for (x = 0; x < h; ++x)
	{
		mee[x] = malloc(sizeof(int) * w);

		if (mee[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mee[x]);

			free(mee);
			return (NULL);
		}
	}

	for (x = 0; x < h; x++)
	{
		for (y = 0; y < w; y++)
			mee[x][y] = 0;
	}

	return (mee);
}
