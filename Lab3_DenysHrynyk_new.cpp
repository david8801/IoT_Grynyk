#include <iostream> 
using namespace std; 
int main()
{  int i, j; 
int arr[5][5] = 
{ {9,67,-65,45,1},
{12,61,48,-5,-1},
{0,39,0,41,2}, 
{36,95,-8,-5,0},  
{11,22,71,3,63}
};  for (i = 0; i < 5; i++) 
{   for (j = 0; j < 5; j++)  
{    cout << arr[i][j]<<" "; 

  }   cout << endl;
}  for (int z = 0; z < 5; z++) {
	  bool checker = true; 
	  int j = 0;
	  int i = 0; 
	  int tmp;  
	  while (checker) {
		  checker = false;
		  j++;  
		  for (i = 0; i < 5 - j; i++) {
			  if (arr[z][i] < arr[z][i + 1]) {
				  

					  tmp = arr[z][i];    
				  arr[z][i] = arr[z][i + 1];
				  arr[z][i + 1] = tmp;   
				  checker = true;

			  }
		  }
	  }
  }  for (i = 0; i < 5; i++) 
  { for (j = 0; j < 5; j++)  
	  cout << arr[i][j] << "\t";  
  cout << endl; } 
  bool masCheck;
  int sum[5] = { 0,0,0,0,0 }; 
  int result = 1;
  for (i = 0; i < 5; i++) {
	  masCheck = false; 
	  for (j = 0; j < i; j++) {
		  sum[i] += arr[j][i];  
		  masCheck = true;

	  }   if (masCheck) { result *= sum[i]; 
	  cout << "Sum [" << i << "]= " << sum[i] << endl; }
  }  cout << "Result: " << result << endl;  system("pause"); 
  return 0
	  ; }