#include<iostream>
#include<vector>
using namespace std;
struct Task{
	std::string abouttask;
	bool completed;
};
int main(){
	std::vector<Task> todo;
	char option;
	do{
		std::string task;
		std::cout<<"\n    TO-DO LIST   \n";
		std::cout<<"--------------------\n";
		std::cout<<"1)Add Task\n";
		std::cout<<"2)View Task\n";
		std::cout<<"3)Mark as completed\n";
		std::cout<<"4)Delete Task\n";
		std::cout<<"5)Exit\n";
		std::cout<<"--------------------\n";
		std::cout<<"Enter option[1,2,3,4,5]:";
		std::cin>>option;
		if(cin.fail()){
			std::cout<<"INVALID OPTION\n";	
			cin.clear();
		}
		switch(option){
			case '1':
				{
				std::cout<<"Enter task to add: ";
				std::cin.ignore();
				getline(std::cin,task);
				Task todotask={task,false};
				todo.push_back(todotask);
				std::cout<<"Task Added Successfully!! :)";
				break;
				}
			case '2':
				{
				if (todo.empty()){
					std::cout<<"There is no task avilable yet :(\n";
				}else{
					std::cout<<"     TASKS   \n";
					std::cout<<"--------------\n";
					for (size_t i=0;i<todo.size();i++){
						std::cout<<i+1<<".";
						std::cout<<(todo[i].completed ? "[Completed]" : "[Pending]");
						std::cout<<todo[i].abouttask<<std::endl;
					}
				}
				break;
				}
			case '3':
				{
				if (todo.empty()){
					std::cout<<"There is no task avilable yet :(/n";
				}else{
					size_t num;
					std::cout<<"Enter the number of task to be marked as Completed: ";
					std::cin>>num;
					if(num>=1 && num<=todo.size()){
						todo[num-1].completed=true;
						std::cout<<"Task is marked as completed successfully!! :)\n";
					}else{
						std::cout<<"INVALID TASK NUMBER :(\n";
					}
				}
				break;
				}
			case '4':
				{
				if (todo.empty()){
					std::cout<<"There is no task avilable yet :(/n";
				}else{
					size_t delnum;
					std::cout<<"Enter the number of task to be Deleted: ";
					std::cin>>delnum;
					if(delnum>=1 && delnum<=todo.size()){
						todo.erase(todo.begin() + delnum-1);
						std::cout<<"Task deleted successfully!! :)\n";
					}else{
						std::cout<<"INVALID TASK NUMBER :(\n";
					}
				}
				break;
				}
			case '5':
				std::cout<<"Exiting the program :) :)\n";
				break;
			default:
				std::cout<<"INVALID OPTION\n";	
	}
	}while(true);
	return 0;
}