#include <iostream>
#include <string>
#include <fstream>

int main()
{
	using namespace std;

	int myArray[2000];
	
	int	increaseMeasurement = 0;


	ifstream file("dephMesurements.txt");
	if (file.is_open())
	{
		

		for (int i = 0; i < 2000; ++i)
		{
			file >> myArray[i];

			
		}
	}

	//TEST OUTPUT
	/*for (int y = 0; y < 2000; ++y){

		cout << myArray[y]<<'\t';
	}*/


	for (int x = 1; x < 2000; x++) {
	
		if(myArray[x] > myArray[x-1]){
			
			increaseMeasurement++; 
			
		} 
	}

	cout << increaseMeasurement;
}