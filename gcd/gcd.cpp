/*
//i pledge my honor that i have abided by the stevens honor system -Evan Bedser
 * gcd.cpp
 *
 *  Created on: Sep 1, 2016
 *      Author: evan
 */
#include <iostream>
#include <sstream>
using namespace std;

int gcdr(int m, int n){
		if(m==0){return n;}
		if(n==0){return m;}
		else{
			if(m>n){return gcdr(n, m%n);}
			else{return gcdr(m, n%m);}
		}

	}

int gcdi(int m, int n){
	while(m!=0 && n!=0){
		if(m>n){m=m%n;}
		else{n=n%m;}
	}
	if(m==0){return n;}
	else{return m;}
}

int main(int argc, char *argv[]){
	if(argc != 3){
		cerr << "Usage: " << argv[0] << " <integer m> <integer n>" << endl;
		return 1;
	}

	int m;
	istringstream iss;
	iss.str(argv[1]);
	if (!(iss >> m)){
		cerr << "Error: The first argument is not a valid integer.";
		return 1;
		}

	int n;
	iss.clear();
	iss.str(argv[2]);
	if (!(iss >> n)){
		cerr << "Error: The second argument is not a valid integer.";
		return 1;
		}


	cout << "Iterative: gcd(" << m << ", " << n << ") = " << gcdi(m,n) << endl;
	cout << "Recursive: gcd(" << m << ", " << n << ") = " << gcdr(m,n) << endl;

	return 0;
}



