#include <stdio.h>
void main(){
    char name[100],hobby[100];
    int age;
    scanf("%s %d %s",&name,&age,&hobby);
    printf("%s Name:\n",name);
    printf("%d Age:\n",age);
    printf("%s Hobby:",hobby);
}