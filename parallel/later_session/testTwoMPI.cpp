
#include<iostream>
#include<mpi.h>

using namespace std;

int main(int argc, char *argv[]){
	MPI_Init(&argc, &argv);

	int rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);

	if(rank == 0){
		cout << "Server ... Hello world ... from " << rank << endl;
	}else{
		cout << "Client ... Hellow world ... from " << rank << endl;
	}

	MPI_Finalize();

	return 0;
}
