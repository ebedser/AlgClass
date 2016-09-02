/*
 * gcd.cpp
 *
 *  Created on: Sep 1, 2016
 *      Author: evan
 */
#include <iostream>
using namespace std;

int gcdr(int x, int y){
		if(x==0){return y;}
		else if(y==0){return x;}
		else{
			if(x>y){gcdr(y, x%y);}
			else{gcdr(x, y%x);}
		}
		return 0;
	}

int gcdi(int x, int y){
	while(x!=0 && y!=0){
		if(x>y){x=x%y;}
		else{y=y%x;}
	}
	if(x==0){return y;}
	else{return x;}
}

int main(int argc, char *argv[]){
	if(argc != 3){
		cerr << "Usage: " << argv[0] << " <integer m> <integer n>" << endl;
		return 1;
	}

	int x;
	istringstream ss(argv[1]);
	if(!(ss >> x)){
		cerr << "Invalid Entry" << argv[1] << "\n";
	}
	istringstream ss(argv[2]);
		if(!(ss >> x)){
			cerr << "Invalid Entry" << argv[2] << "\n";
		}

	gcdr(argv[1],argv[2]);
	gcdi(argv[1], argv[2]);
	return 0;
}



