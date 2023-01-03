#include<iostream>
using namespace std;

int main(){
	int count[5] = {0,0,0,0,0}; 
	int i = 1;//Declare array count for counting A,B,C,D,F and initialize all element = 0
	char grad;
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << i << "]: ";
		cin >> grad; //The loop must be terminated when grade = '0'
		if(grad == 'A'){ // if grade is A
			count[0]++;
			i++;
		}else if(grad == 'B'){ // if grade is B
			count[1]++;
			i++;
	    }
		else if (grad == 'C')
		{
			count[2]++;
			i++;
		}
		else if (grad == 'D')
		{
			count[3]++;
			i++;
		}
		else if (grad == 'F')
		{
			count[4]++;
			i++;
		}
		else if (grad == '0')
		{
			break;
		}
		else{
			cout << "Wrong input. Please input again.\n";
		}
	}while(true);
	
	
	cout << "In total "<< i-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	
		
	
	return 0;
}
