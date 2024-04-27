#include<iostream>
#include<mpi.h>

using namespace std;

int main(int argc, char *argv[]){
	MPI_Init(&argc, &argv);

	int rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	cout << "Hello world ... from " << rank << endl;

	MPI_Finalize();

	return 0;
}
