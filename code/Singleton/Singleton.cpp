///////////////////////////////////////////////////////////
//  Singleton.cpp
//  Implementation of the Class Singleton
//  Created on:      02-十月-2014 17:24:46
//  Original author: colin
///////////////////////////////////////////////////////////

#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton * Singleton::instance = NULL;
Singleton::mutex mu;
Singleton::Singleton(){

}

Singleton::~Singleton(){
	delete instance;
}

Singleton* Singleton::getInstance(){
lock_guard<mutex> lck(mu);
	if (instance == NULL)
	{
		instance = new Singleton();
	}
	
	return  instance;
}


void Singleton::singletonOperation(){
	cout << "singletonOperation" << endl;
}

