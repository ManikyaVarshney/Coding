#include<iostream>
using namespace std;
template <typename T> // Generalised using templates
class QueueUsingArray {
T *data; // to store data
int nextIndex; // to store next index
int firstIndex; // to store the first index
int size; // to store the size
int capacity; // to store the capacity it can hold
public :
QueueUsingArray(int s) { // Constructor to initialize values
data = new T[s];
nextIndex = 0;
firstIndex = -1;
size = 0;
capacity = s;
}
int getSize() { // Returns number of elements present
return size;
}
bool isEmpty() { // To check if queue is empty or not
return size == 0;
}
void enqueue(T element) { // Function for insertion
if(size == capacity) { // To check if the queue is already full
cout << "Queue Full ! " << endl;
return;
}
data[nextIndex] = element; // Otherwise added a new element
nextIndex = (nextIndex + 1) % capacity ; // in cyclic way
if(firstIndex == -1) { // Suppose if queue was empty
firstIndex = 0;
}
size++; // Finally, incremented the size
}
T front() { // To return the element at front position
if(isEmpty()) { // To check if the queue was initially empty
cout << "Queue is empty ! " << endl;
return 0;
}
return data[firstIndex]; // otherwise returned the element
}
T dequeue() { // Function for deletion
if(isEmpty()) { // To check if the queue was empty
cout << "Queue is empty ! " << endl;
return 0;
}
T ans = data[firstIndex];
firstIndex = (firstIndex + 1) % capacity;
size--; // Decrementing the size by 1
if(size == 0) { // If queue becomes empty after deletion, then
firstIndex = -1; // resetting the original parameters
nextIndex = 0;
}
return ans;
}
};

