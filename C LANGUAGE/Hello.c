#include<stdio.h>
#include<math.h>
void roots(float a,float b,float c,float *d1,float *d2);
void roots(float a,float b,float c,float *d1,float *d2){
d1=((-b)+pow(pow(b,2)-4*a*c,1.0/2.0))/(2*a);
d2=((-b)-pow(pow(b,2)-4*a*c,1.0/2.0))/(2*a);
printf("roots are %f and %f",d1,d2);
}

int main(){
    float a,b,c,d1,d2;
    printf("enter the value of a, b and c :\n");
    scanf("%f%f%f",&a,&b,&c);
    if((pow(b,2)-4*a*c)>0){
        printf("roots are real and unequal\n ");
        roots(a,b,c,&d1,&d2);
    }
        else if((pow(b,2)-4*a*c)==0){
        printf("roots are real and equal\n ");
        roots(a,b,c,&d1,&d2);
} 
    else if((pow(b,2)-4*a*c)<0){
        printf("roots are imaginary\n ");
        roots(a,b,c,&d1,&d2);
       } 
    else{
        printf("invalid input");
    }
    return 0;
}
