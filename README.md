# Experiment-19

# Aim :
To learn and implement queque(data structure) in C++ programming language

# Software Used : VS - Code 

# THEORY :
In C++, a queue is a type of data structure that operates on the First In, First Out (FIFO) principle, meaning that the first element added to the queue will be the first one to be removed. This is similar to a real-world queue, such as a line of people waiting for service.

Key Operations of a Queue:
1. push(): Add an element to the back of the queue.
2. pop(): Remove an element from the front of the queue.
3. front(): Access the front element (the oldest element).
4. back(): Access the last element (the most recent element).
5. empty(): Check if the queue is empty.
6. size(): Get the number of elements in the queue.

CODE :
```
// Queue

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
using namespace std;

#define size 5
#define ERROR -9999

class Queue {
    int rear, front, ar[size];

public:
    Queue() {
        rear = -1;
        front = -1;
    }

    void enqueue(int);
    int dequeue();
    void disp();
};

void Queue::enqueue(int num) {
    if (rear == size - 1) {
        cout << "Queue is full" << endl;
    } else {
        if (front == -1) {
            front = 0; // Initialize front when inserting the first element
        }
        ar[++rear] = num;
    }
}

int Queue::dequeue() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
        return ERROR;
    } else {
        return ar[front++];
    }
}

void Queue::disp() {
    if (front == -1 || front > rear) {
        cout << "Queue is empty" << endl;
    } else {
        for (int i = front; i <= rear; i++) {
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    Queue q1;
    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);
    q1.disp();
    
    int val = q1.dequeue();
    cout << "Deleted element: " << val << endl;
    
    q1.disp();
}

```
OUTPUT :
![image](https://github.com/user-attachments/assets/90d50787-368b-460d-832b-bcaad4511f40)

CODE IMPLEMENTED DURING WORKSHOP :
```
// queue --> linear data structure 

// Name --> Aditya Agarwal
// PRN --> 23070123162

#include <iostream>
using namespace std;

class Queue {
    int front, rear;          // Front and rear indices of the queue
    int arr[100];             // Array to store queue elements
public:
    // Constructor to initialize front and rear
    Queue() { 
        front = rear = -1; 
    }

    // Method to add an element to the queue
    void enqueue(int x) {
        // Check for overflow condition
        if (rear >= 99) {
            cout << "Queue Overflow" << endl;
            return;
        }
        // Increment rear and add the new element
        arr[++rear] = x;
        // If this is the first element, set front to 0
        if (front == -1) front = 0;
    }

    // Method to remove an element from the queue
    void dequeue() {
        // Check for underflow condition
        if (front == -1 || front > rear) {
            cout << "Queue Underflow" << endl;
            return;
        }
        // Move front forward
        ++front;
        
    }

    // Method to peek at the front element of the queue
    int peek() {
        // Check if the queue is empty
        if (front == -1 || front > rear) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return arr[front]; // Return the front element
    }

    // Method to display the elements in the queue
    void display() {
        // Check if the queue is empty
        if (front == -1 || front > rear) {
            cout << "Queue is Empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " "; // Print each element
        }
        cout << endl; // New line after displaying the queue
    }
};

int main() {
    Queue q; // Create a queue object
    q.enqueue(10); // Enqueue 10
    q.enqueue(20); // Enqueue 20
    cout << "Front element: " << q.peek() << endl; // Peek at front
    q.display(); // Display queue elements
    q.dequeue(); // Dequeue an element
    cout << "Front element after dequeue: " << q.peek() << endl; // Peek again
    q.display(); // Display queue elements after dequeue
    return 0; // End of program
}
```
OUTPUT :
![image](https://github.com/user-attachments/assets/a45e5ce0-8cef-43ed-9881-37ce4dd37504)

CONCLUSION : We have learned and implemented Queue(data structure) 
