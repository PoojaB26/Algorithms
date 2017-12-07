#include<stdio.h>

// C++ program for activity selection problem.
// The following implementation assumes that the activities
// are already sorted according to their finish time

// Prints a maximum set of activities that can be done by a single
// person, one at a time.
//  n   -->  Total number of activities
//  s[] -->  An array that contains start time of all activities
//  f[] -->  An array that contains finish time of all activities

void printMaxActivities(int s[], int f[], int n){

printf("Following activities are selected");
// the first activity is always selected

int i =0, j;
printf("%d", i);

//for the next activities
for(j=1; j<n; j++){
      // If this activity has start time greater than or
      // equal to the finish time of previously selected
      // activity, then select it
	if(s[j]>=f[i]){
		printf("%d", j);
		i=j;

	}

}


}

int main(){

	int s[]= {2, 5, 0, 7, 1};
	int f[]= {3, 4, 6, 8, 9};
	int x,y=0;
	int n = sizeof(s)/sizeof(s[0]);
	printMaxActivities(s, f, n);
return 0;


}
