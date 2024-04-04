#include<stdio.h>

struct ABC{
    // A quirk of structures in C programming.
    // memory alignment in computer architecture.
    // sturcture padding.
    
    // when we have int, float, double
    // size of struct is 16.
    // but when we have int, double, float
    // size of struct is 24.

    // Structure Padding in C:
    // Structure padding is the addition of some empty bytes of memory 
    // in the structure to naturally align the data members in the memory. 
    // It is done to minimize the CPU read cycles to retrieve different data 
    // members in the structure.

    // For more info see:
    // https://en.wikipedia.org/wiki/Data_structure_alignment
    // https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-pa

    int a;
    double c;
    float b;
};

int main(){
    printf("Size: %d\n", sizeof(struct ABC));
}