#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	char playAgain;
	
	do{
		
		int target=rand()%100+1;
		int guess;
		int attempts=0;
		cout<<"welcome to number guessing game"<<endl;
		cout<<"i have guesses a number between 1 to 100"<<endl;
		cout<<"try to guess it"<<endl;
	
	while (true){
		cout<<"enter your guess"<<endl;
		cin>>guess;
		attempts ++;
		if(guess==target){
		
		cout<<"congratulation!you guessed the correct number in     " <<      attempts    <<   "attempts!"    <<endl;
		break;
	}
	
	if(abs(guess-target)<=5){
	
	cout<<"you are very close"<<endl;
}
else if(abs(guess-target)<=10){

cout<<"you are close"<<endl;
}
else if(guess<target){
	cout<<"too low! try guessing higher"<<endl;
}
else{
	cout<<"too high! try guessing low"<<endl;
}
}
cout<<"do you wish to continue the game?press 'y'to continue or 'n'to exit"<<endl;
cin>>playAgain;
if(playAgain!='y'&& playAgain!='Y')
{
	cout<<"thank you for playing .GOOD BYE!";
	break;
}
}while(true);
return 0;
}


