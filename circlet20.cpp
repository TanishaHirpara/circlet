// Online C++ compiler to run C++ program online
#include <stdio.h>

int main()
 {
    for(int i = 1; i<=4; i++)
	{
        for(int j = 1; j<=7; j++)
		{
            if( i + j == 5)
			{
                printf("*");
            }
            else if( j - i == 3){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}