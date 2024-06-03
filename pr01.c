#include
<stdio.h>

  int main() { FILE *ptr; int num1,num2,num3; ptr=fopen("pr01.txt","r"); fscanf(ptr,"%d",&num1);
  fscanf(ptr,"%d",&num2); fscanf(ptr,"%d",&num3); //fprintf(ptr,"%d %d %d",num1,num2,num3);
  fclose(ptr); return 0; }
  <!--
Visual Code Mobile
Developed By Manish Nirmal
App Available on Play Store :-
https://play.google.com/store/apps/details?id=lk.visual.code.mobile
YouTube :-
https://youtube.com/ManishNirmal
-->