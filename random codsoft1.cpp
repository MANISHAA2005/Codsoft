#include<iostream>
#include<ctime>
int main(){
	srand(time(0));
	int num=rand() % 100+1;
	int guess;
	int attempts=0;
	std::cout<<"Welcome to the Number Guessing Game!\n";
	std::cout<<"Guess the number between 1 and 100.\n";
	do{
		std::cout<<"Enter your guess: ";
		std::cin>>guess;
		attempts+=1;
		if(guess<num){
			std::cout<<"Too low!! :( Guess again.\n";
		}else if(guess>num){
			std::cout<<"Too high!! :( Guess again.\n";
		}else{
			std::cout<<"Congratulation,You have guessed the correct number!!! :) :)";
		}
	}while( guess!=num);
	return 0;
}