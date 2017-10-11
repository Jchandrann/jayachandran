#include<stdio.h>
#include<stdlib.h>
 struct Employee

{

char name[25];

int marks[5];

};
void main()
{int i,j,n;
struct Employee p[10];
scanf("%d",&n);
//p=malloc(sizeof(struct Employee)*1);
for(i=0;i<n;i++)
{printf("Enter the name and five marks\n");
        scanf("%s",p[i].name);
        for(j=0;j<5;j++)
        scanf("%d",&p[i].marks[j]);}
        for(i=0;i<n;i++){
        printf("entered names\n");
        printf("%s\n",p[i].name);
         for(j=0;j<5;j++)
         printf("%d ",p[i].marks[j]);      

}
}
