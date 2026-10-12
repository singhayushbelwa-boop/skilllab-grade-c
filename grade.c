#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,total,per;
    printf("enter the marks of 5 sub");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    printf("%f %f %f %f %f",s1,s2,s3,s4,s5);
    total =s1+s2+s3+s4+s5;
    per =total/5;
    if(per>=90)
{
    printf("Pass! with grade A");
}
else if (per>=80)
{
    printf("pass! with grade B");
}
else if(per>=70)
{
    printf("pass! with grade C");
}
else if(per>=60)
{
    printf("pass! with grade D");
}
else if(per>=50)
{
    printf("pass! with grade E");
}
else 
{
    printf("You r fail !");
}
return 0;
}
