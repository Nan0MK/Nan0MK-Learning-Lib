#include <iostream>

typedef struct {
    int number;
} TItem;

typedef struct cell {
    struct cell *pNext;
    TItem item;
} TCell;

typedef struct {
    TCell *pFirst;
    TCell *pLast;
} TQueue;

void Init(TQueue* pQueue) {
    pQueue->pFirst = new TCell;
    pQueue->pLast = pQueue->pFirst;
    pQueue->pFirst->pNext = NULL;
}

int Is_Empty(TQueue* pQueue) {
    return (pQueue->pFirst == pQueue->pLast);
}

int Enqueue(TQueue* pQueue, TItem x) {
    pQueue->pLast->pNext = new TCell;
    pQueue->pLast = pQueue->pLast->pNext;
    pQueue->pLast->item = x;
    pQueue->pLast->pNext = NULL;
    return 1;
}

int Dequeue(TQueue* pQueue, TItem* pX) {
    if (Is_Empty(pQueue))
        return 0;
    TCell* aux;
    aux = pQueue->pFirst->pNext;
    *pX = aux->item;
    pQueue->pFirst->pNext = aux->pNext;
    delete aux;
    return 1;
}

void Print(TQueue* pQueue) {
    if (Is_Empty(pQueue) == 1)
        std::cout << "EMPTY" << std::endl;

    TCell *temp;
    temp = pQueue->pFirst->pNext;
    std::cout << "Queue:" << std::endl;

    while (temp != NULL) {
        std::cout << temp->item.number << " ";
        temp = temp->pNext;
    }
}