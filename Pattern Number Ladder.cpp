#include<iostream>
using namespace std;
int main(){
	int rowno=1;
	int count =1;
	
	int tr;
	cin>>tr;
	while(rowno<=tr){
		int i=1;
		while(i<=rowno){
			cout<<count<<" 	 ";
			i=i+1;
			count=count+1;
		}
		cout<<endl;
		rowno=rowno+1;
	}
	
	
	return 0;
}
/*output
1  
2	3  
4	5	6  
7	8	9	10*/
