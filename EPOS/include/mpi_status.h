/* MPI_Status structures are used by the mesage recieving functions to 
return data about a message. */
struct { 
    int MPI_SOURCE;
    int MPI_TAG;
    int MPI_ERROR;
} MPI_Status;