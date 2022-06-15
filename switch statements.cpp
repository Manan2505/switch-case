//#include<iostream>
//using namespace std;
//
//int main(){
//	int n= 5;
//	switch(n){
//		case 1 : cout<<"this is case one"<<endl;
//		case 5 : cout<<"this is case two"<<endl;
//		break;
//		default : cout<<"this is default case"<<endl;
//	}
//return 0;
//}




#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the value of a"<<endl;
	cin>>a;
	cout<<"enter the value of b"<<endl;
	cin>>b;
	
	char op;
	cout<<"enter the value of op"<<endl;
	cin>>op;
//	This is a mini calculator
	
	switch(op){
		case'+':cout<<(a+b)<<endl;
		break;
		case'-':cout<<(a-b)<<endl;
			break;
		case'/':cout<<(a/b)<<endl;
			break;
		case'*':cout<<(a*b)<<endl;
			break;
		case'%':cout<<(a%b)<<endl;
			break;
	}
	
		
}

