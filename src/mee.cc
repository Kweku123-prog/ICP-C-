
// Two-Dimensional array 
#include<iostream> 
using namespace std; 


void LinearIndex(int i,int j){
// two dimentional array
     int A[i][j];
// one diemntional array
     int B[j];
     int u=0

	
	
      
	// output each array element's value 
	for (int m3= 0; m3< i; m3++) 
	{ 
	 for (int m1=0 ; m1<j ; m1++)
{
for (int m2=0 ; m2<5 ; m2++){
   //prints the array
      cout<< A[m1][m3]=m2;
     cout<< B[U]=A[m1][m3];
++u
}
}
}
	
		
	} 


void Linearlower( int row, int col)
int ma[row][col];


{
    //provides result of lower triangle matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
           
            
         for (int z = 0; z< row; z++){
               if (z< j)
            {
                cout << "0" << " ";
            }
                 else
              
            cout << ma[i][j]=z<< " Lower triangle matrix"<<endl;
}
        }
        
    }
}

// main method
int main() 
{ 
LinearIndex(10,30);
Linearlower(32,32);
inearlower(128,128);

linear
return 0;



}


	

