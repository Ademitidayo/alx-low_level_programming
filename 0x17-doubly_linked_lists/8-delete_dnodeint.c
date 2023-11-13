#include"lists.h"

/**
 *delete_dnodeint_at_index-Deletesthenodeatagivenpositioninadlistint_tlist.
 *@head:Apointertoapointertotheheadofthedoublylinkedlist.
 *@index:Theindexofthenodetobedeleted,startingfrom0.
 *Return:1ifitsucceeded,-1ifitfailed.
 */
intdelete_dnodeint_at_index(dlistint_t**head,unsignedintindex)
{
    dlistint_t*current,*temp;
    unsignedinti;

    if(head==NULL||*head==NULL)
        return-1;

    current=*head;

    if(index==0)
    {
        *head=(*head)->next;
        if(*head!=NULL)
            (*head)->prev=NULL;
        free(current);
        return1;
    }

    for(i=0;i<index&&current!=NULL;i++)
    {
        current=current->next;
    }

    if(current==NULL)
        return-1;

    temp=current->prev;
    temp->next=current->next;

    if(current->next!=NULL)
        current->next->prev=temp;

    free(current);

    return1;
}
