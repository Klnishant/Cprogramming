#include<stdio.h>
#include<string.h>
#include<math.h>

struct vectors {
    int x;
    int y;

};

struct vectors sumvector(struct vectors v1,struct vectors v2) {
    struct vectors sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;

    return sum;
}


int main()
{
    struct vectors v1,v2,result;

    printf("#FOR FIRST VECTOR#\n");
    printf("Enter the horizontal component:");
    scanf("%di",&v1.x);

    printf("\nEnter the vertical component:");
    scanf("%dj",&v1.y);

    printf("\n\n#FOR SECOND VECTOR#\n");
    printf("Enter the horizontal component:");
    scanf("%di",&v2.x);

    printf("\nEnter the vertical component:");
    scanf("%dj",&v2.y);

    result=sumvector(v1,v2);

    printf("\nsum of two vectors is %di+%dj\n",result.x,result.y);
    return 0;
}