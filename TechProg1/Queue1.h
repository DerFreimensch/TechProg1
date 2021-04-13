#pragma once
#include "Queue.h"
/*TODO: make queue1
 * find and show (Last Node < Average) function*/

class QueuePub : public Queue {
public:
    void SmallThenAverageNumber();
};
class QueuePriv : private Queue {
public:
    void SmallThenAverageNumber();
    void PrivPop();
    void PrivPush(int SomeNumber);
    void PrivCopy(QueuePriv& B);
    void PrivShowQueue();
    void PrivMerge(QueuePriv& Queue2);
    bool PrivEmpty();
};
class QueueProt : protected Queue {
public:
    void SmallThenAverageNumber();
    void ProtPop();
    void ProtPush(int SomeNumber);
    void ProtCopy(QueueProt& B);
    void ProtShowQueue();
    void ProtMerge(QueueProt& Queue2);
    bool ProtEmpty();
};
