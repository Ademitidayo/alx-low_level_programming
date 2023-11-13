#include"lists.h"
/**
 *add_dnodeint_end-addsanewnodeattheendofadlistint_tlist.
 *head:inputlist
 *n:nextnode
 *Return:addresstonewelement(success)
 */
dlistint_t*add_dnodeint_end(dlistint_t**head,constintn)
{
    dlistint_t*new_node,*temp;

    if(head==NULL)
        returnNULL;

    new_node=malloc(sizeof(dlistint_t));
    if(new_node==NULL)
        returnNULL;

    new_node->n=n;
    new_node->next=NULL;

    if(*head==NULL)
    {
        new_node->prev=NULL;
        *head=new_node;
        returnnew_node;
    }

    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    temp->next=new_node;
    new_node->prev=temp;

    returnnew_node;
}
