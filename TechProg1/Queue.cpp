#include <iostream>
#include "Queue.h"
Queue::Queue() {
    SetLastBack(nullptr);
}
Queue::~Queue() {

}
void Queue::Push(int SomeNumber) {
    Node* NodePtrIt = new Node;
    NodePtrIt->i = SomeNumber;
    if (nullptr == GetLastBack()) {
        SetLastBack(NodePtrIt);
        NodePtrIt->PrevNodePTR = nullptr;
    }
    else {
        NodePtrIt->PrevNodePTR = GetLastBack();
        SetLastBack(NodePtrIt);
    }
}
void Queue::Pop() {
    Node* Head;
    Node* HeadPlus;
    Head = GetLastBack();
    HeadPlus = Head->PrevNodePTR;
    if (nullptr == GetLastBack()) {
        std::cout << "Queue is Empty";
    }
    if (nullptr == Head->PrevNodePTR) {
        std::cout << Head->i << std::endl;
        SetLastBack(nullptr);
    }
    else {
        while (HeadPlus->PrevNodePTR != nullptr) {
            Head = HeadPlus;
            HeadPlus = HeadPlus->PrevNodePTR;
        }
        std::cout << HeadPlus->i << std::endl;
        Head->PrevNodePTR = nullptr;
    }
}
void Queue::Copy(Queue& B) {
    B.SetLastBack(nullptr);
    if (GetLastBack() == nullptr) {
        std::cout << "Queue is Empty" << std::endl;
    }
    else
        HelpRecursionFuncCopy(GetLastBack(), B);
    B.Push(GetLastBack()->i);
}
void Queue::Merge(Queue& Queue2) {
    Node* Head = Queue2.GetLastBack();
    while (Head->PrevNodePTR != nullptr) {
        Head = Head->PrevNodePTR;
    }
    Head->PrevNodePTR = GetLastBack();
}
void Queue::HelpRecursionFunc(Node* Head) {
    if (Head->PrevNodePTR != nullptr) {
        Head = Head->PrevNodePTR;
        HelpRecursionFunc(Head);
        std::cout << Head->i << " ";
    }
}
void Queue::HelpRecursionFuncCopy(Node* Head, Queue& B) {
    if (Head->PrevNodePTR != nullptr) {
        Head = Head->PrevNodePTR;
        HelpRecursionFuncCopy(Head, B);
        B.Push(Head->i);
    }
}
void Queue::ShowQueue() {
    if (GetLastBack() == nullptr) {
        std::cout << "Queue is Empty" << std::endl;
    }
    else {
        HelpRecursionFunc(GetLastBack());
        std::cout << GetLastBack()->i << " ";
        std::cout << std::endl;
    }
}
Node* Queue::GetLastBack() {
    return Last;
}
void Queue::SetLastBack(Node* NewLast) {
    this->Last = NewLast;
}
bool Queue::IsEmpty() {
    if (GetLastBack() == nullptr)
        return true;
    else
        return false;
}