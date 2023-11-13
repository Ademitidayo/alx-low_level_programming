#include"lists.h"

/**
 *get_dnodeint_at_index-Returnsthenthnodeofadlistint_tlinkedlist.
 *@head:Apointertotheheadofthedoublylinkedlist.
 *@index:Theindexofthenodetoretrieve,startingfrom0.
 *Return:Apointertothenthnode,orNULLifthenodedoesnotexist.
 */
dlistint_t*get_dnodeint_at_index(dlistint_t*head,unsignedintindex)
{
    unsignedinti;
    dlistint_t*current;

    if(head==NULL)
        returnNULL;

    current=head;
    for(i=0;i<index&&current!=NULL;i++){
        current=current->next;
    }

    return(i==index&&current!=NULL)?current:NULL;
}
