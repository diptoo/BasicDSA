//Resource - Coding Minutes Udemy

#include <iostream>
using namespace std;

void fileIO()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    void pushFront(int data)
    {
        if (head == NULL)
        {
            Node *newNode = new Node(data);
            head = tail = newNode;
        }
        else
        {
            Node *newNode = new Node(data);
            newNode->next = head; //same as (*newNode).next = head //different from c#
            head = newNode;
        }
    }

    void pushBack(int data)
    {
        if (head == NULL)
        {
            Node *newNode = new Node(data);
            head = tail = newNode;
        }
        else
        {
            Node *newNode = new Node(data);
            tail->next = newNode;
            tail = newNode;
        }
    }

    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            pushFront(data);
            return;
        }

        Node *temp = head;
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = temp->next;
        }
        Node *newNode = new Node(data);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    bool searchIterative(int key)
    {
        Node *temp = head;

        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    bool searchRecursive(Node *head, int key)
    {
        if (head == NULL)
            return false;
        else if (head->data == key)
            return true;
        else
            return searchRecursive(head->next, key);
    }

    int findIndexRecursiveApproach(Node *head, int key)
    {
        if (head == NULL)
        {
            return -1;
        }

        else if (head->data == key)
        {
            return 0;
        }
        else
        {
            int idx = findIndexRecursiveApproach(head->next, key);
            if (idx == -1)
            {
                return idx;
            }
            else
            {
                return idx + 1;
            }
        }
    }

    void reverseLinkedList()
    {
        Node *current = head;
        Node *prev = NULL;
        Node *temp;
        while (current != NULL)
        {
            temp = current->next;
            current->next = prev;
            prev = current;
            current = temp;
        }

        while (prev != NULL)
        {
            cout << prev->data << "->";
            prev = prev->next;
        }
        cout << endl;
    }
};

int main()
{
    fileIO();
    LinkedList ll;
    ll.pushFront(1);
    ll.pushFront(0);
    ll.pushBack(3);
    ll.pushBack(4);
    ll.insert(2, 2);
    ll.insert(10, 0);
    Node *head = ll.head;

    while (head != NULL)
    {
        cout << (*head).data << "->";
        head = head->next;
    }
    cout << endl;
    cout << ll.searchIterative(3) << endl;
    cout << ll.searchRecursive(ll.head, 22) << endl;
    cout << ll.findIndexRecursiveApproach(ll.head, 31) << endl;
    cout << ll.findIndexRecursiveApproach(ll.head, 3) << endl;
    ll.reverseLinkedList();
}