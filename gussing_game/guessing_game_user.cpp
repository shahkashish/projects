#include<bits/stdc++.h>
using namespace std;
int main(){
	int lowest=1,n , guess;
	char answer;
	cout<<"Enter the number till which you want to set the range for : ";
	cin>>n;
	int range;
	int count=0;
    int highest =n;
    int temp;
	while(answer !='c'|| lowest == highest)
	{
        range = highest - lowest +1;
		srand(time(0));
		guess=lowest + (rand() % range);
		cout<<"computer guessed the number : "<<guess<<endl;
		cout<<"if the guessed number is correct then type 'c', if the number is higher than press'h', if the number is lower then press'l' and then press enter : ";
		cin>>answer;
		count++;
		if (answer=='h')
		{
			highest= guess;
		}
		else if (answer=='l')
		{
			lowest= guess +1;
		}
		else
		{
			cout<<"computer guessed it correct after "<<count<<" times guessing!!";
		}
	}
}