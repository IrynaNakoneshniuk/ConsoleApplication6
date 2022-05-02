#pragma once
#include <iostream>
using namespace std;
class Node
{
 public:
    int  value;
    Node* next;
    Node* prev;
    Node() {
        value = 0;
        next = nullptr;
        prev = nullptr;
    }
    Node(int valueP) {
        value = valueP;
        next = nullptr;
        prev = nullptr;
    }
    int getValue() { return value; }
};

class List
{
public:
    Node* head;
    Node* tail;
    int length;
    List() {
        head = nullptr;
        tail = nullptr;
        length = 0;
    }
    virtual void Push(int elem) = 0;
    virtual void Pop() = 0;
    virtual void Print() = 0;
};


class Queue :  virtual public List
{
  public:
      void Pop()override {
          Node* tmp = new  Node();
          tmp = head;
          head = tmp->prev;
          head->next = nullptr;
          delete tmp;
      }
      void Push(int elem)override {
          Node* tmp = new  Node(elem);
          if (length == 0)
          {
              head = tail = tmp;
          }
          else {
              tail->next = tmp;
              tmp->prev = tail;
              tail = tmp;
          }
          length++;
      }
      void Print()override {
          Node* tmp = new  Node();
          tmp = tail;
              while (tmp != nullptr) {
                  cout << tmp->getValue() << ", ";
                  tmp = tmp->next;
              }
      }
};

class Stack : virtual public List {
   
public:
    void Pop()override {
        Node* tmp = new Node();
        tmp = tail;
        tail = tmp->prev;
        tail->next = nullptr;
        delete tmp;
    }
    void Push(int elem)override {
        Node* tmp = new Node(elem);
        if (length == 0)
        {
            head = tail = tmp;
        }
        else {
            tail->next = tmp;
            tmp->prev = tail;
            tail = tmp;
        }
        length++;
    }
};

