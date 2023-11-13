#include"lists.h"
/**
 *free_dlistint-Freesadlistint_tlist.
 *@head:Apointertotheheadofthedoublylinkedlist.
 */
voidfree_dlistint(dlistint_t*head)
{
    dlistint_t*temp;

    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
}
