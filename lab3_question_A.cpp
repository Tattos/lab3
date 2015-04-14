#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	ifstream inFile("file.in",ios::in);
	int number_cows;
	int v=0;
	vector<int>number(7);
	for(int i=0;i<8;i++){
		if(i==0){
		inFile>>number_cows;
		//cout<<number_cows<<endl;
		}
		else if(i>0){
		inFile>>number[v];
		//cout<<number[v]<<endl;
		v++;
		}
	}
	sort(number.begin(),number.end());
	reverse(number.begin(),number.end());
	int sum_5=0;
	for(int i=0;i<5;i++){	
	sum_5+=number[i];
	}
	cout<<sum_5<<endl;
	return 0;
}

