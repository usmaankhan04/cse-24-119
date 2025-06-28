// Car Hub  //
#include <stdio.h>
struct cars
{
    char brand[50];
    char model[50];
    int year;
};
int main()
{
    int n,i,filter,found=0;
    printf("Enter The No of Entries To be made : ");
    scanf("%d",&n);
    struct cars c[n];

 for (int i=0;i<n;i++)
{
    printf("Enter the Brand of Car %d : ",i+1);
    scanf("%s",c[i].brand);
    printf("Enter the Model of Car %d : ",i+1);
    scanf("%s",c[i].model);
    printf("Enter the Year of Car %d : ",i+1);
    scanf("%d",&c[i].year);
}
printf("Enter a year filter For cars to be diplayed from : ");
scanf("%d",&filter);
for(i=0;i<n;i++)
{
    if (c[i].year > filter)
    {
    printf("Car%d : %s %s from the year %d \n",i+1,c[i].brand,c[i].model,c[i].year);
    found=1;
    }
    
}
if (found==0)
    printf("No Cars Found Newer than %d",filter);

}