#include"lists.h"

/**
 *add_dnodeint-Addsanewnodeatthebeginningofadlistint_tlist.
 *@head:Apointertoapointertotheheadofthedoublylinkedlist.
 *@n:Thedatatobestoredinthenewnode.
 *Return:Theaddressofthenewelement,orNULLifitfailed.
 */
dlistint_t*add_dnodeint(dlistint_t**head,constintn)
{
    dlistint_t*new_node;

    if(head==NULL)
        returnNULL;

    new_node=malloc(sizeof(dlistint_t));
    if(new_node==NULL)
        returnNULL;

    new_node->n=n;
    new_node->prev=NULL;
    new_node->next=*head;
    if(*head!=NULL)
        (*head)->prev=new_node;
    *head=new_node;
    returnnew_node;
}
