#include<cstdlib>
#include<iostream>
#include<time.h>
using namespace std;
int number;
//it is easy level in which you have 10 chances to guess the number
int easy()
{
	int a=0,guess;
	cout<<"\t\t\t<<<<< WELCOME TO EASY LEVEL >>>>>"<<endl;
	cout<<"You have 10 chances to guess the number"<<endl;
	do
	{
		cout<<"enter the number to guess:"<<endl;
		cin>>guess;
		if(guess==number)
		{
			cout<<"\t\t\t....congutlation...."<<endl;
			cout<<"\t\t\t...YOU WON THE GAME...."<<endl;
			break;
		}
		else if(guess>number)
		{
			cout<<"Oops! choose the lesser number!!!"<<endl;
		}
		else if(guess<number)
		{
			cout<<"Oops! choose the greater number!!!"<<endl;
		}
		a++;
	}while(a!=10);
	if(a==10)
	{
		cout<<".....sorry you lose the game....."<<endl;
	}
}
//it is medium level in which you have 7 chances to guess the number
int medium()
{
	int a=0,guess;
	cout<<"\t\t\t<<<<< WELCOME TO MEDIUM LEVEL >>>>>"<<endl;
	cout<<"You have 7 chances to guess the number"<<endl;
	do
	{
		cout<<"enter the number to guess:"<<endl;
		cin>>guess;
		if(guess==number)
		{
			cout<<"....congutlation...."<<endl;
			cout<<"....YOU WON THE GAME...."<<endl;
			break;
		}
		else if(guess>number)
		{
			cout<<"Oops! choose the lesser number!!!"<<endl;
		}
		else if(guess<number)
		{
			cout<<"Oops! choose the greater number!!!"<<endl;
		}
		a++;
	}while(a!=7);
	if(a==7)
	{
		cout<<".....sorry you lose the game....."<<endl;
	}
}
//it is hard level in which you have 5 chances to guess the number
int hard()
{
	int a=0,guess;
	cout<<"<<<<< WELCOME TO HARD LEVEL >>>>>"<<endl;
	cout<<"You have 5 chances to guess the number"<<endl;
	do
	{
		cout<<"enter the number to guess:"<<endl;
		cin>>guess;
		if(guess==number)
		{
			cout<<"....congutlation...."<<endl;
			cout<<"....YOU WON THE GAME...."<<endl;
			break;
		}
		else if(guess>number)
		{
			cout<<"Oops! choose the lesser number!!!"<<endl;
		}
		else if(guess<number)
		{
			cout<<"Oops! choose the greater number!!!"<<endl;
		}
		a++;
	}while(a!=5);
	if(a==5)
	{
		cout<<".....sorry you lose the game...."<<endl;
	}
}
int main()
{
	srand(time(0));
	number=rand()%100+1;
	int guess;
	int a=0,l;
	cout<<"\n\t\t\tWelcome to the number guessing game!!!"<<endl;
	cout<<"\t\tYou have limited choices for guessing the number!!!! "<<endl;
	cout<<"\t\t\tchoose the number carefully"<<endl;
	cout<<"\t\t\t\t....Best luckkkk....."<<endl;
	do
	{
		cout<<"enter the difficulty level"<<endl;
		cout<<"\n1.Easy\n2.Medium\n3.High\n4.Quit the game"<<endl;
		cin>>l;
		switch(l)
		{
			case 1:
				easy();
				break;
			case 2:
				medium();
				break;
			case 3:
				hard();
				break;
			case 4:
				cout<<"Thank you for playing the game!!!!"<<endl;
				break;
		}
	}while(l!=4);
}
