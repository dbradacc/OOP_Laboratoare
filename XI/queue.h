// LABORATOR XI
// CATALIN DANIEL BRADAC, ETTI, ANUL I, SEM II

#ifndef QUEUE_H
#define QUEUE_H

// Clasa template pentru o coadă (queue) generica
template <class T>
class Queue
{
public:
    // Constructor care primește dimensiunea maximă a cozii (implicit 10)
    Queue(int = 10);

    // Destructor care eliberează memoria alocată pentru coadă
    ~Queue() { delete[] queuePtr; }

    // Funcție pentru a adăuga un element în coadă
    bool enqueue(const T &);

    // Funcție pentru a extrage primul element din coadă
    bool dequeue(T &);

    // Funcție care verifică dacă coada este goală
    bool isEmpty() const { return (front == -1); }

    // Funcție care verifică dacă coada este plină
    bool isFull() const { return (rear + 1) % size == front; }

private:
    int size;    // Dimensiunea maximă a cozii
    int front;   // Indexul primului element din coadă
    int rear;    // Indexul ultimului element din coadă
    T *queuePtr; // Pointer la zona de memorie alocată pentru coadă
};

// Constructorul clasei Queue
template <class T>
Queue<T>::Queue(int s)
{
    size = s > 0 ? s : 10;
    front = -1;
    rear = -1;
    queuePtr = new T[size];
}

// Funcția enqueue adauga un element in coada
template <class T>
bool Queue<T>::enqueue(const T &enqueueValue)
{
    if (!isFull())
    {
        rear = (rear + 1) % size;
        queuePtr[rear] = enqueueValue;

        if (front == -1)
        {
            front = rear;
        }

        return true;
    }

    return false;
}

// Funcția dequeue extrage primul element din coada
template <class T>
bool Queue<T>::dequeue(T &dequeueValue)
{
    if (!isEmpty())
    {
        dequeueValue = queuePtr[front];

        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % size;
        }

        return true;
    }

    return false;
}

#endif
