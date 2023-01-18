/*#include <iostream>
using namespace std;

int new(int *ptr){
    int x=*ptr *2;
    return x;
}

int main(){
    cout<<new(2);
    return 0;
}*/

#include<iostream>
using namespace std;

int main()
{
	int i, j, rows, columns, sum;
	
	cout << "\nPlease Enter the Matrix rows and Columns =  ";
	cin >> i >> j;
	
	int sumRCArray[i][j];
	
	cout << "\nPlease Enter the Matrix Items =  ";
	for(rows = 0; rows < i; rows++)	{
		for(columns = 0; columns < i; columns++) {
			cin >> sumRCArray[rows][columns];
		}		
	}
	
	for(rows = 0; rows < i; rows++)
  	{
  		sum = 0;
  		for(columns = 0; columns < j; columns++)
  		{
  			sum = sum + sumRCArray[rows][columns];
		}
   		cout << "\nThe Sum of Items in " << rows + 1<< " Row of a Matrix = " << sum ;
  	}

 	for(rows = 0; rows < i; rows++)
  	{
  		sum = 0;
  		for(columns = 0; columns < j; columns++)
  		{
  			sum = sum + sumRCArray[columns][rows];
		}
   		cout << "\nThe Sum of Items in Column of a Matrix = " << sum ;
  	}  	

 	return 0;
}