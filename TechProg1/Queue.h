#pragma once


class Node { // Node of queue
public:
    int i;
    Node* PrevNodePTR;
};
class Queue {
public:
    Queue();// Construct
    ~Queue();// Destruct
    void Push(int i);// Add Node1
    void Pop();// Show and delete Node
    void Copy(Queue& A);// Copy queue
    void Merge(Queue& B);// Merge queue
    void ShowQueue(); // Showing the Queue
    void HelpRecursionFunc(Node* Head);
    void HelpRecursionFuncCopy(Node* Head, Queue& B);// helping recursion function
    Node* GetLastBack(); // getter for *Last
    void SetLastBack(Node* NewLast); // setter for *Last
    bool IsEmpty();// check empty queue

private:
    Node* Last;// pointer on last Node in queue1
};

