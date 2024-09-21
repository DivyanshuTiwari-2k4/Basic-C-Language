#include<stdio.h>//slice function 
#include<string.h>//slice function 
int main(){
//slice function    int name[50],n,m;//slice function
    printf("enter the word :\n");//slice function
    scanf("%s",&name);//slice function
    printf("enter the starting index n and ending index m \n");//slice function
    scanf("%d%d",&n,&m);//slice function
for(int i=0;i>=n;i++){//slice function
    for(int j=0;j<=m;j++){//slice function
    printf("%d ",name[i]);//slice function
}
}
return 0;
}

#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int*)calloc(5,sizeof(int));
printf("enter the 5 values\n");
for(int i=0;i<5;i++){
scanf("%d",&ptr[i]);
}
for(int i=0;i<5;i++){
printf("%d ",ptr[i]);
}

ptr=realloc(ptr,8);
printf("\nagain enter the values\n");
for(int i=0;i<8;i++){
scanf("%d",&ptr[i]);
}
for(int i=0;i<8;i++){
printf("%d ",ptr[i]);
}

free(ptr);
return 0;
}

#include<stdio.h>
struct vector{
    int x;
    int y;
};
void summation(struct vector z,int n,int end);
void summation(struct vector z,int n,int end){
struct vector sum={0};
    sum.x=+z.x+sum.x;
    sum.y=+z.y+sum.y;
    if(n==end+1){
    printf("summation of vector is %d+i%d",sum.x,sum.y);
}
}
int main(){
int n;
printf("enter the number of digit:\n");
scanf("%d",&n);
struct vector vectorarr[n];
for(int i=0;i<n;i++){
printf("enter the value of real part of %d vector \n",i+1);
scanf("%d",&vectorarr[i].x);
printf("enter the value of imaganary part of %d vector \n",i+1);
scanf("%d",&vectorarr[i].y);
summation(vectorarr[i],n,i);
}

    
    return 0;
}