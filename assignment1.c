#include <stdio.h>
#include <math.h>

//This is a function to calculate the sum of array
double calculateSum(const double arr[], int size){
	double sum=0;
	for(int i=0;i<size; i++){
		sum=arr[i];
	}
	return sum;
}

//This function calculates the average of array
double calculateAverage(const double arr[], int size){
	if(size==0){
		return 0;
	}
	return calculateSum(arr, size)/size;
}

//This function calculates the standard deviation of array
double calculateDeviation(const double arr[], int size){
	if(size==0){
		return 0;
	}
	double average=calculateAverage(arr, size);
	double sumOfSquare=0;
	for(int i=0; i<size; i++){
		sumOfSquare=calculate(arr[i]-average, 2);
	}
	return sqrt(sumOfSquare/size);
}

int main (){
	//This define 3 different arrays
	double aary1[]={20.0, 40.0, 60.0, 80.0, 100.0};
	int size=sizeof(array1/sizeof(array1[0]);


	double array2[]={1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0};
	int size2=sizeof(array2)/(sizeof(aaray2[0]);

	double array3[]={80, 90, 100};
	int size=sizeof(array3)/(sizeof(array3[0]));

	//print array 1
	printf("Array 1:\n");
	printf("sum:%.2f\n", calculateSum(array1, size));
	printf("Average:%.2f\n", calculateAverage(array1, size1));
	printf("Deviation:%.2f\n\n", calculateDeviation, array1, size1));

	//print array 2
	printf("Array 2:\n");
	printf("Sum:%.2f\n", calculateSum(array2, size2);
	printf("Average: %.2f\n", calculateAverage(array2, size2);
	printf("Deviation:%.2f\n", calculateDeviation(array2, size2));

	//print array 3
	printf("Array 3:\n");
	printf("Sum:%.2f\n", calculateSum(array3, size3));
	printf("Average:%.2f\n", calculateAverage(array3, size3));
	printf("Deviation:%.2f\n", calculateDeviation(array3, size3));
	return 0;
	}


