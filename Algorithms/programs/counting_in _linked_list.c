
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *next;
};
struct node *START;
getnode()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    return p;

}
insbeg(int x)
{
    struct node *temp;
    temp=getnode();
    temp->info=x;
    temp->next=START;
    START =temp;

}
count=0;
transverse()
{

    struct node *t;
    t=START;
    while(t!=NULL)
    {
        printf(" %d",t->info);
        count+=1;
        t=t->next;
    }
    printf("\n%d",count);


}
void main()
{
    START=NULL;
    insbeg(100);
    insbeg(200);
    insbeg(300);
    insbeg(400);
    insbeg(500);
    transverse();
}
