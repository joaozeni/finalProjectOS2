
#ifndef __mpi_h
#define __mpi_h

#include <mpi_datatype.h>
#include <mpi_status.h>

__BEGIN_SYS

class mpi
{
public:
    MPI_Init(int *argc, char ***argv);
    MPI_Comm_size(MPI_Comm comm, int *size);
    MPI_Comm_rank(MPI_Comm comm, int *rank);
    MPI_Send(void *buf, int count, MPI_Datatype datatype, int dest, int tag, MPI_Comm comm);
    MPI_Recv(void *buf, int count, MPI_Datatype datatype, int source, int tag, MPI_Comm comm, MPI_Status *status);
    MPI_Finalize();
};

__END_SYS

#endif