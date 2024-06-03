#include<stdio.h>
#include<string.h>

struct student {
    int code;
    char name[20];
};

int main()
{
    struct student s1;
    s1.code=101;
    strcpy(s1.name,"Nishant kaushal");

    printf("Name of student:%s\n",s1.name);
    printf("Roll no:%d\n",s1.code);

    return 0;
}