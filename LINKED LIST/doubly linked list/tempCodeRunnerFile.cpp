    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getlen(node *head)
{
    node *temp = head;
    int len = 0; 
    while (temp != NULL)
    {
        len++;
        temp = temp->next;