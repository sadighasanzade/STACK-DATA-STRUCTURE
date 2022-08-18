#include<iostream>
using namespace std;


template <class T> class Stack{
    private:
    int size;
    int top;
    T arr[];


    T removeAndReturnLastElement() {
        T lastElement;
        T newArr[size - 1] = {};
        for (int i = 0; i<size - 1 ; i ++) {
            newArr[i] = arr[i];
        }
        lastElement = arr[size - 1];
        //replacing new array with old one
        arr[size - 1] = {};

        for (int i = 0; i< size - 1 ; i ++) {
            newArr[i] = arr[i];
        }

        return lastElement;
    }


    public:

    Stack(int capacity) {
        arr[capacity] = {};
        size = capacity;
        top = -1;
    }

    bool isFull(){
        return top == size - 1;
    }

    bool isEmpty(){
        return top == -1;
    }

    void push (T element){
        if (isFull()) {
            cout<<"Stack is full !"<<endl;
            return;
        }
        cout<<"adding new element: "<<element<<endl;
        arr[++top] = element;
    }

    T pop () {
        if (isEmpty()) {
            cout<< "Stack is empty : no element to remove "<<endl;
            return -1;
        }

        //remove last element and return it
        top --;
        return removeAndReturnLastElement();
    }

    T peek() {
        if(isEmpty()) {
            cout<< "Stack is empty "<<endl;
            return -1;
        }
        return arr[top];
    }

    int getSize() {
        return size;
    }

    //utils functionality
    void displayStack() {
        cout<<"elements : {";
        for (int i =0 ; i<= top ; i++) {
            cout<< arr[i]<<" ";
        }
        cout<<"}"<<endl;
    }

};

int main(){

    //TESTING METHODS

    Stack<int> stack(5);
    stack.push(3);
    stack.push(6);
    stack.push(3);
    stack.push(2);
    stack.push(1);
    stack.push(9);

    cout<<"last element "<<stack.peek()<<endl;

    stack.displayStack();

    stack.pop();

    stack.displayStack();


    cout<<"last element "<<stack.peek()<<endl;

    stack.push(8);

    stack.displayStack();
    cout<<"last element "<<stack.peek()<<endl;

  

    return 0;
}