#include<iostream>
int main(){
	char option;
	int num1,num2;
	char select;
	do{
	std::cout<<"    SIMPLE CALCULATOR   \n";
	std::cout<<"---------------------------\n";
	std::cout<<"1)Addition\n";
	std::cout<<"2)Subtraction\n";
	std::cout<<"3)Multiplication\n";
	std::cout<<"4)Division\n";
	std::cout<<"---------------------------\n";
	std::cout<<"Enter number 1: ";
	std::cin>>num1;
	std::cout<<"Enter number 2: ";
	std::cin>>num2;
	std::cout<<"Enter option [1,2,3,4]: ";
	std::cin>>option;
	switch(option){
		case '1':
			std::cout<<"The Addition is : "<<num1+num2<<"\n";
			break;
		case '2':
			std::cout<<"The Subtraction is : "<<num1-num2<<"\n";
			break;
		case '3':
			std::cout<<"The Multiplication is : "<<num1*num2<<"\n";
			break;
		case '4':
			if(num2==0){
				std::cout<<" Division by zero is not allowed\n";
			}else{
				std::cout<<"The Division is : "<<num1/num2<<"\n";
			}
			break;
		default:
			std::cout<<"INVALID CHOICE\n";
			break;
			
	}
	std::cout<<"Do you want to perform any other operation?(y/n):";
	std::cin>>select;
	}while(select == 'y');	
	return 0;
}