#include <stdio.h>

int main() {
    int sum,s1,s2,s3,s4,s5;
    printf("enter 5 subjects marks of student\n");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    sum=s1+s2+s3+s4+s5;
    printf("sum of 5 subjects marks of student is %d\n",sum);
    return 0;
}
