#include <stdio.h>
#include <stdbool.h>
struct emp
{
    int id;
    char name[50];
    int age;
    float salary;
};
bool isunique(struct emp e[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(e[i].id==k)
        return 0;
    }
    return 1;
}
int main()
{
    struct emp e[10];
    int n;
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        while(1)
        {
            int id;
            scanf("%d",&id);
            if(isunique(e,i,id))
            {
                e[i].id=id;
                break;
            }
            else
            printf("ID already exists");
        }
        fgets(e[i].name,sizeof(e[i].name),stdin);
        scanf("%d",&e[i].age);
        scanf("%f",&e[i].salary);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",e[i].id);
        printf("%s\n",e[i].name);
        printf("%d",e[i].age);
        printf("%f",e[i].salary);
    }
    return 0;
}