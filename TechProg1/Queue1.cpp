#include <iostream>
#include "Queue1.h"


void QueuePub::SmallThenAverageNumber() {
    float AverageCounter = 0;
    float NumOfNodes = 0;
    int count = 0;
    Node* Head;
    Head = GetLastBack();
    while (Head != nullptr) {
        NumOfNodes++;
        AverageCounter += 1 / float(Head->i);
        Head = Head->PrevNodePTR;
    }
    AverageCounter = NumOfNodes / AverageCounter;
    Head = GetLastBack();
    while (Head != nullptr) {
        if (float(Head->i) < AverageCounter) {
            //std::cout << Head -> i << std::endl;
            //break;
            count += Head->i;
            Head = Head->PrevNodePTR;
        }
        else Head = Head->PrevNodePTR;
    }
    std::cout << count << std::endl;
}


void QueueProt::SmallThenAverageNumber() {
    float AverageCounter = 0;
    float NumOfNodes = 0;
    int count = 0;
    Node* Head;
    Head = GetLastBack();
    while (Head != nullptr) {
        NumOfNodes++;
        AverageCounter += 1 / float(Head->i);
        Head = Head->PrevNodePTR;
    }
    AverageCounter = NumOfNodes / AverageCounter;
    Head = GetLastBack();
    while (Head != nullptr) {
        if (float(Head->i) < AverageCounter) {
            //std::cout << Head -> i << std::endl;
            //break;
            count += Head->i;
            Head = Head->PrevNodePTR;
        }
        else Head = Head->PrevNodePTR;
    }
    std::cout << count << std::endl;
}
void QueueProt::ProtPop() {
    this->Pop();
}
void QueueProt::ProtPush(int SomeNumber) {
    this->Push(SomeNumber);
}
void QueueProt::ProtCopy(QueueProt& B) {
    this->Copy(B);
}
void QueueProt::ProtShowQueue() {
    this->ShowQueue();
}
void QueueProt::ProtMerge(QueueProt& Queue2) {
    this->Merge(Queue2);
}
bool QueueProt::ProtEmpty() {
    return this->IsEmpty();
}


void QueuePriv::SmallThenAverageNumber() {
    float AverageCounter = 0;
    float NumOfNodes = 0;
    int count = 0;
    Node* Head;
    Head = GetLastBack();
    while (Head != nullptr) {
        NumOfNodes++;
        AverageCounter += 1 / float(Head->i);
        Head = Head->PrevNodePTR;
    }
    AverageCounter = NumOfNodes / AverageCounter;
    Head = GetLastBack();
    while (Head != nullptr) {
        if (float(Head->i) < AverageCounter) {
            //std::cout << Head -> i << std::endl;
            //break;
            count += Head->i;
            Head = Head->PrevNodePTR;
        }
        else Head = Head->PrevNodePTR;
    }
    std::cout << count << std::endl;
}
void QueuePriv::PrivPop() {
    this->Pop();
}
void QueuePriv::PrivPush(int SomeNumber) {
    this->Push(SomeNumber);
}
void QueuePriv::PrivCopy(QueuePriv& B) {
    this->Copy(B);
}
void QueuePriv::PrivShowQueue() {
    this->ShowQueue();
}
void QueuePriv::PrivMerge(QueuePriv& Queue2) {
    this->Merge(Queue2);
}
bool QueuePriv::PrivEmpty() {
    return this->IsEmpty();
}
