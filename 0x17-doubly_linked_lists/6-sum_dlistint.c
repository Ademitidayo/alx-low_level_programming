#include"lists.h"

/**
 * sum_dlistint - Returnsthesumofallthedata(n)inadlistint_tlinkedlist.
 * @head: Apointertotheheadofthedoublylinkedlist.
 * Return: Thesumofallthedatavalues,or0ifthelistisempty.
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *current = head;

    while (current != NULL)
    {
        sum += current -> n;
        current = current -> next;
    }

    return sum;
}
