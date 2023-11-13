#include"lists.h"
#include<stdlib.h>

/**
 *insert_dnodeint_at_index-Insertsanewnodeatagivenpositioninadlistint_tlist.
 *@h:Apointertoapointertotheheadofthedoublylinkedlist.
 *@idx:Theindexwherethenewnodeshouldbeadded,startingfrom0.
 *@n:Thedatatobestoredinthenewnode.
 *Return:Theaddressofthenewnode,orNULLifitfailed.
 */
dlistint_t*insert_dnodeint_at_index(dlistint_t**h,unsignedintidx,intn)
{
    dlistint_t*new_node,*current;
    unsignedinti;

    if(h==NULL)
        returnNULL;

    new_node=malloc(sizeof(dlistint_t));
    if(new_node==NULL)
        returnNULL;

    new_node->n=n;

    if(idx==0){
        new_node->prev=NULL;
        new_node->next=*h;

        if(*h!=NULL)
            (*h)->prev=new_node;

        *h=new_node;
        returnnew_node;
    }

    current=*h;
    for(i=0;i<idx-1&&current!=NULL;i++)
    {
        current=current->next;
    }

    if(current==NULL)
    {
        free(new_node);
        returnNULL;
    }

    new_node->prev=current;
    new_node->next=current->next;

    if(current->next!=NULL)
        current->next->prev=new_node;

    current->next=new_node;

    returnnew_node;
}
