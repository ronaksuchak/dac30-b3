

/*

isosceles = if 2 sides are same 
equilateral = if all 3 sides are same
Three values can be the dimensions of a triangle if and only if the sum of every pair of values is
greater than the third value. Otherwise, it is an invalid triangle.

	Write a program that reads three real numbers and finds out whether they can be the sides of the triangle and if they do, prints what type of triangle it is. Even though all equilateral triangles are isosceles, your program should classify an equilateral triangle to be an equilateral only. Similarly isosceles right-angled triangles should be classified as right-angled and not isosceles. A valid triangle which does not belong to any of the special types belongs to the notspecial category. The three sides will be given as real numbers separated by blanks. The program should print the type of the triangle in words using lower case letters followed by eoln without any blanks. Thus the possible answers are invalid

- right-angled
- isosceles
- equilateral
- notspecial
*/


#include<iostream>
#define SQ(X) (X*X)
using namespace std;

bool isIsosceles (float a,float b,float c){
	if(a==b || a==c){
		return true;
	}else{
		return false;
	}
}

bool isEquilateral (float a,float b,float c){
	if(a==b && a==c && b==c ){
		return true;
	}else{
		return false;
	}

}

bool isRightAngled(float a,float b,float c){
	if(SQ(c) == (SQ(a)+SQ(b))){
		return true;
	}else{
		return false;
	}

}


int main(){
	int a,b,c;
	cout<<"Enter Tringle dimensions :\n";
	cout<<"a  :";
	cin>>a;
	cout<<"b  :";
	cin>>b;
	cout<<"c  :";
	cin>>c;
	cout<<"Given tringle is:\n";
	cout<<"Right-angled - "<<isRightAngled(a,b,c)<<"\n";
	cout<<"Equilateral - "<<isEquilateral(a,b,c)<<"\n";
	cout<<"Isosceles - "<<isIsosceles(a,b,c)<<"\n";
	if(isRightAngled(a,b,c) == false &&isEquilateral(a,b,c) == false && isIsosceles(a,b,c)==0){
		
	}
	return 0;
}
