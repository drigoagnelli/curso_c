#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	value;
	int	*ptr;
	int	**ptr1;
	int	***ptr2;
	int	****ptr3;
	int	*****ptr4;
	int	******ptr5;
	int	*******ptr6;
	int	********ptr7;
	int	*********ptr8;

	value = 0;
	ptr = &value;
	ptr1 = &ptr;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ft_ultimate_ft(ptr8);
	printf ("%d\n", value);
}
