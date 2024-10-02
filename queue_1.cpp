// queue --> linear data structure 


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