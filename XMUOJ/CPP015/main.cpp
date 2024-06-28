#include <iostream>
using namespace std;

struct node
{
    int val;
    node *next;
};

// 填空题，实际只有这一段是写入提交框内的
node *createList()
{
    int n;
    struct node *head = NULL, *now = NULL, *next = NULL;
    while(1)
    {
        cin >> n;
        if (n == -1)  break;
        next = new node;
        next->val = n;
        next->next = NULL;
        if (head == NULL)  head = next;
        else  now->next = next;
        now = next;
    }
    return head;
}
// 到此为止

int main()
{
    node *head = NULL;
    head = createList();
    if (head == NULL)   cout << "-1 ";
    else
    {
        node *p = head;
        while (p != NULL)
        {
            cout << p->val << " ";
            p = p->next;
        }
    }
    return 0;
}