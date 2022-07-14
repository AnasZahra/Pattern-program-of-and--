#include<stdio.h>

/*Anas Zahra*/

int main()
{
	//variablen
    int i,j,zeilen;
    
    //print 
    printf("Enter any number : ");
    
    //input
    scanf("%d",&zeilen);
 
 	//loop
    for(i=0;i<zeilen;i++)
    {
        for(j=0;j<zeilen;j++)
        {
            if(i==j || j==(zeilen-i-1))
            {
                printf("*");  
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
    return 0;
}