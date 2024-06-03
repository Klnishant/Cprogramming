#include<stdio.h>
gravity();
int main() {
    printf("Enter below the mass of the object\n");

    gravity();


    return 0;
}
gravity() {
    float g=9.8;
    float m;
    float f=m*g;
    scanf("%f",&m);

    printf("Gravitational force=%f due to gravity of earth\n",m*g);

    return f;

}