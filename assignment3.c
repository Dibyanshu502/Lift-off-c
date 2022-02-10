# include <stdio.h>


int main()
{
    int a;
    printf("Enter the value of the no. :");
    scanf("%d",&a);
    switch(a%2) {
        case 0:
        printf("The no is even ");
        break;
        case 1:
        printf("The no. is odd");
        break;
    }
    return 0;
}
 /*default:
        printf("The No. is even");
        break;*/