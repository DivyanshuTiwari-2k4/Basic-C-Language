//******************************************************(armstrong)******************************************
#include<stdio.h>
#include<math.h>
int arm(int n,int m);
int arm(int n,int m){
    int org=n;
    int sum=0;
    int digit=0;
    while(n!=0){
          digit=n%10;
 sum=pow(digit,m)+sum;
n=n/10;
    }
    if(sum==org){
        return 1;
    }
    return 0;
}
int main(){
int a,b;
printf("enter the number and its number of digit to check wether it is armstrong or not \n");
scanf("%d%d",&a,&b);
if(arm(a,b)==1){
printf("number is palindrome \n");
}
else{
printf("number is not palindrome \n");
}
return 0;
}


//***********************************************(summation of two vector )************************************
#include<stdio.h>
struct vector{
    int x;
    int y;
};
void summation(struct vector a,struct vector b){
void summation(struct vector a,struct vector b);
struct vector sum;
    sum.x=a.x+b.x;
    sum.y=a.y+b.y;
    printf("summation of vector is %d+i%d",sum.x,sum.y);
}
int main(){
    struct vector a,b;
    printf("enter the value of first vector \n");
    scanf("%d%d",&a.x,&a.y);
    printf("enter the value of second vector \n");
    scanf("%d%d",&b.x,&b.y);
    summation(a,b);
    return 0;
}

//19******************************************************(file)************************************************
#include <stdio.h>
void main()
{
    FILE *fptr;
    fptr = fopen("staff.txt", "r" );
    int a, b;
    fscanf(fptr, "%d%d", &a, &b);
    printf("%d %d",a,b);
    fclose(fptr);
    fptr = fopen("staff.txt", "w" );
    fprintf(fptr,"%d",(a+b));
    printf("\n%d",(a+b));
    fclose(fptr);
    // return 0;
}

//18****************************************************(palindrome)***********************************
#include<stdio.h>
#include<string.h>
int main(){
int n;
printf("enter the digit of character :\n");
scanf("%d",&n);
char str1[n];
for(int i=0;i<n;i++){
scanf("%s",&str1[i]);
}
char str2[n];
strcpy(str2,str1);
for(int i=0;i<n;i++){
    str1[i]=str2[n-1-i];
}
if(strcmp(str1,str2)==0){
    printf("character is palindrome \n");
}
else{
    printf("character is not palindrome ");
}
return 0;
}
//                                                     (without string)
#include<stdio.h>
int palindrome(int x);
int main(){
int n;
printf("enter the number to check wether it is palindrome or not :\n");
scanf("%d",&n);
if(palindrome(n)==1){
printf("number is palindrome \n");
}
else{
    printf("number is not a palindrome \n");
}
return 0;
}
int palindrome(int x){
int org=x;
int rev=0;
while(x!=0){
rev=rev*10+x%10;
x=x/10;
}
if(rev==org){
    return 1;
}
return 0;
}


//17*******************************************************(bubble sort)***********************************
#include<stdio.h>
void print_array(int A[],int n);
void bubble_sort(int A[],int n);
int main(){
    int arr[]={99,11,88,22,77,33,66,44,55};
    int size=sizeof(arr)/sizeof(int);
print_array(arr,size);
bubble_sort(arr,size);
print_array(arr,size);
return 0;
}
void print_array(int A[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}
void bubble_sort(int A[],int n){
    for(int i=0;i<n-1;i++){
    for(int j=0;j<n-1-i;j++){
        if(A[j]>A[j+1]){
        int temp=A[j];
        A[j]=A[j+1];
        A[j+1]=temp;
    }
    }
    }
}

//16******************************************************(binary search)***********************************
#include<stdio.h>
int find(int arr[],int size,int x);
int find(int arr[],int size,int x){
int low=0,high=size-1,mid;
while(low<=high){
mid=(low+high)/2;
if(arr[mid]==x){
return mid+1;
}
else if(mid<x){
low=mid+1;
}
else{
high=mid-1;
}
}
return -1;
}
int main(){
int n,x;
printf("enter the number of elements :\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the element to find : ");
scanf("%d",&x);
printf("\n the element is present at index : %d",find(arr,n,x));
return 0;
}


//15*****************************************************(linear searching)***********************************
#include<stdio.h>
int find(int arr[],int size,int x);
int find(int arr[],int size,int x){
for(int i=0;i<size;i++){
if(arr[i]==x){
return i+1;
}
}
return -1;
}
int main(){
    int n,x;
printf("enter the number of elements :\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("enter the element to find : ");
scanf("%d",&x);
printf("\n the element is present at index : %d",find(arr,n,x));
return 0;
}


//15***********************************************(multipication of matrices)*********************************
#include<stdio.h>
void matrix(int x,int y,int arr[x][y]);//input of matrices
void matrix(int x,int y,int arr[x][y]){
printf("enter the elements\n");
for(int i=0;i<x;i++){
for(int j=0;j<y;j++){
scanf("%d",&arr[i][j]);
}}}
/**/
int main(){
int n,m,o,p,sum=0; 
printf("enter the order of 1st matrix(nxm)\n");
scanf("%d%d",&n,&m);
printf("enter the order of 2nd matrix(nxm)\n");
scanf("%d%d",&o,&p);
if(m==o){
int A[n][m];
int B[o][p];
matrix(n,m,A);
matrix(o,p,B);
printf("multiplication of matrices is \n");
int C[n][p];
int d=(n>=p)?n:p;//order of multiplied matrices
for(int i=0;i<n;i++){
for(int j=0;j<p;j++){
for(int k=0;k<d;k++){
sum =sum + A[i][k]*B[k][j];
}
C[i][j]=sum;
printf("%d ",C[i][j]);
sum =0;
}
printf("\n");
}
}
else{
    printf("multiplication is not possible \n");
}
return 0;
}



//14***************************************************(tables by arrays)***************************************
#include<stdio.h>
void table(int m,int arr[m],int n);
void table(int m,int arr[m],int n){
printf("table of %d :\n",n);
for(int i=0;i<m;i++){
//arr[j][i]=arr[j][(i+1)*n];
arr[i]=(i+1)*n;
printf("%d\n",arr[i]);
}}
int main(){
int n,m;
int arr[n];
printf("enter the number(n) of table and till (m)\n");
scanf("%d%d",&n,&m);
table(m,arr,n);
return 0;
}


//13**********************************************(student marks by nested loop )********************************
#include<stdio.h>
int main(){
    int ns,nb;
    printf("enter the value of ns and nb \n");
    scanf("%d%d",&ns,&nb);
    int marks[ns][nb];
    for(int i=0;i<ns;i++){
        for(int j=0;j<nb;j++){
            printf("enter the marks of %d students in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for(int i=0;i<ns;i++){
        for(int j=0;j<nb;j++){
            printf("The marks of %d students in subject %d are %d\n",i+1,j+1,marks[i][j]);
             }
    }
    return 0;
}


//12************************************************(array to store fib series)***********************************
//                                                (can create error find the error)
#include<stdio.h>
int main(){
int n;
int fib[n];
fib[0] == 0 ;
fib[1] == 1 ;
printf("enter the nth term of fib series :\n");
scanf("%d",&n);
printf("fib series is \n");
for(int i=0;i<n;i++){
fib[i]=fib[i-2]+fib[i-1];
printf("%d ",fib[i]);
}
return 0;
}
//                                                (better way)
#include<stdio.h>
int main(){
int n;
printf("enter the n th term\n");
scanf("%d",&n);
int fib[n];
fib[0]= 0;
fib[1]= 1;
for(int i=0;i<n;i++){
if(i==0){
    printf("0 ");
}
else if(i==1){
    printf("1 ");
} 
else if(i<n){
fib[i]=fib[i-2]+fib[i-1];
printf("%d ",fib[i]);
}
}
return 0;
}


//11*****************************************************(reverse series)********************************************
#include<stdio.h>
int main(){
    int n;
    int arr[n];
    printf("enter the term in series \n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("terms are %d :\n ",i+1);
    scanf("%d",&arr[i]);
    }
    printf("reverse series :");
    for(int i=0;i<n;i++){
        printf("%d ",arr[n-i-1]);
    }
    return 0;
}

//10**********************************************************(18% gst)***********************************************
#include<stdio.h>
void gst(int a[],int n);
void gst(int a[],int n){
for(int i=0;i<n;i++){
printf("mrp is %f\n",a[i] + (a[i]*0.18));
    }
}
int main(){
    int n;
    int A[n];
    printf("enter the number of item\n");
    scanf("%d",&n);
    for(int i;i<n;i++){
        printf("enter the %d price :\n",i+1);
        scanf("%d",&A[i]);
    }
    gst(A,n);
    return 0;
}

//9*******************************************************(aadhaar number)*********************************************
#include<stdio.h>
void aadhar(int arr[],int n);
int main(){
    int A[5];
    aadhar(A,5);
    return 0;
}
void aadhar(int arr[],int n){
for(int i=0;i<n;i++){
printf("enter the aadhar number %d \n",i+1);
scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++){
     printf("%d ",arr[j]);
    }
    return 0;
}


//8*******************************************************(marks by arrays)*******************************************
//                                                            (unique)
#include<stdio.h>
int main(){
    int marks[5];
   int *ptr= &marks[0];
    for(int i=0;i<5;i++){
        printf("enter the marks :%d \n",i +1);
        scanf("%d",(ptr+i));
    }
    for(int i=0;i<5;i++){
        printf("marks are : %d \n",marks[i]);
    }
    return 0;
}
//                                                           (normal)
#include<stdio.h>
int main(){
    int marks[5];
   int *ptr= &marks[0];
    for(int i=0;i<5;i++){
        printf("enter the marks :%d \n",i +1);
        scanf("%d",ptr);
        ptr++;
    }
    for(int i=0;i<5;i++){
        printf("marks are : %d \n",marks[i]);
    }
    return 0;
}


//7******************************************************(quadratic equation)******************************************
//                                                      (with using pointers)
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


//                                                       (without pointer)
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d1,d2;
    printf("enter the value of a, b and c :\n");
    scanf("%f%f%f",&a,&b,&c);
    if((pow(b,2)-4*a*c)>0){
        printf("roots are real and unequal\n ");
        d1=((-b)+pow(pow(b,2)-4*a*c,1.0/2.0))/2*a;
        d2=((-b)-pow(pow(b,2)-4*a*c,1.0/2.0))/2*a;
        printf("roots are %f and %f",d1,d2);
    }
        else if((pow(b,2)-4*a*c)==0){
        printf("roots are real and equal\n ");
         d1=((-b)+pow(pow(b,2)-4*a*c,1.0/2.0))/2*a;
        d2=((-b)-pow(pow(b,2)-4*a*c,1.0/2.0))/2*a;
        printf("roots are %f and %f",d1,d2);
    } 
    else if((pow(b,2)-4*a*c)<0){
        printf("roots are imaginary\n ");
         d1=((-b)+pow(pow(b,2)-4*a*c,1.0/2.0))/2*a;
        d2=((-b)-pow(pow(b,2)-4*a*c,1.0/2.0))/2*a;
        printf("roots are %f and %f",d1,d2);
       } 
    else{
        printf("invalid input");
    }
    return 0;
}
//6****************************************************(address of pointer)******************************************
#include<stdio.h>
int pria(int *a);
int main(){
int n=4;
pria(&n);
printf("1 %d\n",&n);
return 0;
}
int pria(int *a){
    printf("2 %d\n",a);
}

//5**********************************************************(swap)****************************************************** 
//                                                         (by void)
#include<stdio.h>
void swap(int *x,int *y);
int main(){
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
swap(&a,&b);
    printf("swap value are : %d %d \n",a,b);
    return 0;
}
void swap(int *x,int *y){
int c=*x;
*x=*y;
*y=c;
}
//                                                             (by int)
#include<stdio.h>
int swap(int *x,int *y);
int main(){
    int a,b;
    printf("enter a and b\n");
    scanf("%d%d",&a,&b);
swap(&a,&b);
    printf("swap value are : %d %d \n",a,b);
    return 0;
}
int swap(int *x,int *y){
int c=*x;
*x=*y;
*y=c;
//no return;
}

//4****************************************************** prime factor ***********************************************************
//                                                          (while)
#include<stdio.h>
int i,n;
int main(){
    printf("enter the number n:\n");
    scanf("%d",&n);
    printf("factor of n are : ");
    i=2;
    while(n>1){
        if(n%i==0){
             printf("%d*",i);
        n=n/i;
        }
         else{
        i++;
    }
    }
   printf("1");
return 0;
}
//                                                        (for loop)

#include<stdio.h>
int main(){
int i,n;
printf("enter the value of n: ");
scanf("%d",&n);
printf("factor are :");
for(i=2;n>0;){
 if(n%i==0){
 printf("* %d:",i);
n=n/i;
}
else{
    i++;
}
}
printf("1");
return 0;
}


//3*************************************************important concept**************************************************
//                                                  fibbonnacci series
//                                                     (by recursion)
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of n:\n");
    scanf("%d",&n);
    printf("series of %dth is %d :\n",n,fib(n));
return 0;
}
int fib(int n);
int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
//                                                     (by looping)

#include<stdio.h>
int main(){
    int i,n,a=0,b=1,c;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("nth term is :%d\n",a);
    return 0;
}


//2****************************************** real life percentage and grade system************************************************
#include<stdio.h>
int percentage(int a,int b,int c,int d,int e);
int main(){
    int a,b,c,d,e;
    printf("enter the marks of a b c d e\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("percentage is :%d\n",percentage(a,b,c,d,e));
    return 0;
}
int percentage(int a,int b,int c,int d,int e){
   if(a>33&&a<100 && b>33&&b<100 && c>33&&c<100 && d>33&&d<100 && e>33&&e<100){
        printf("pass\n");
    }
    else{
        printf("fail\n");
    }
    return (a+b+c+d+e)/5;
} 


//1***************************************************area of shape*********************************************************
//                                                  (without string)
#include<stdio.h>
#include<math.h>
float circle(float rad);
float square(float side);
float rectangle(float length,float breath);

int main(){
    float rad,side,length,breath;
    char ch;
    printf(" print r for circle , s for square and l for length :\n")
    scanf("%c",&ch);
    if(ch=='r'){
   printf("enter rad\n");
    scanf("%f",&rad);
    printf("area is %f\n",circle(rad));
    }
    else if(ch=='s'){
    printf("enter side\n");
    scanf("%f",&side);
    printf("area is %f\n",square(side));
    }
    else if(ch=='l'){
    printf("enter the length and breath :");
    scanf("%f %f",&length,&breath);
    printf("area is %f\n",rectangle(length,breath));
    }
    else{
        printf("not valid\n");
    }
    return 0;
}
float circle(float rad){
 return rad*rad*3.14;
}
float square(float side){
return pow(side,2);
}
float rectangle(float length,float breath){
return length*breath;
}
    
//**********************(to check a triangle is equilateral isoceles scalane  or not )**************************
    #include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the sides of triangle :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){   
if(a==b && b==c){
    printf("triangle is equilateral triangle \n");
    }
    else if(a==b || b==c || c==a){
printf("triangle is isoceles \n");
}
else{
    printf("triangle is scalane triangle");
}
    }
    
    else{
        printf("not a triangle");
    }
    return 0;
}
