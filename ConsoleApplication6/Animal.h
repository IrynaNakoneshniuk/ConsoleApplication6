#pragma once
#include <iostream>
using namespace std;
class Animal
{
 public:
	 string Name;
	 string sound;
	 string type;
	 virtual void Sound() = 0;
	 virtual void Show() = 0;
	 virtual void Type() = 0;
};

class Dog : virtual public Animal {
  public:
	  Dog(){
		  this->Name = "Santa";
	  }
	  void Sound()override {
		  this->sound = "au-au";
      }
	  void Type()override {
		  this->type = "volf";
	  }
	  void Show()override {
		  cout << Name << endl;
		  cout << type << endl;
		  cout << sound << endl;
	  }
};

class Cat :virtual public  Animal {
public:
	Cat() {
		this->Name = "Murchuk";
	}
	void Sound()override {
		this->sound = "mew-mew";
	}
	void Type()override {
		this->type = "cat";
	}
	void Show()override {
		cout << Name << endl;
		cout << type << endl;
		cout << sound << endl;
	}
};
class Hamster :virtual public  Animal {
public:
	Hamster() {
		this->Name = "Hamster";
	}
	void Sound()override {
		this->sound = "....";
	}
	void Type()override {
		this->type = "rodents";
	}
	void Show()override {
		cout << Name << endl;
		cout << type << endl;
		cout << sound << endl;
	}
};
class Parrot :virtual public  Animal {
public:
	Parrot() {
		this->Name = "Parrot";
	}
	void Sound()override {
		this->sound = "....";
	}
	void Type()override {
		this->type = "parrots";
	}
	void Show()override {
		cout << Name << endl;
		cout << type << endl;
		cout << sound << endl;
	}
};