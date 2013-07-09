enum MPI_Datatype {
    MPI_DATATYPE_NULL       = 0,

    MPI_CHAR                = 1,
    MPI_SHORT               = 2,
    MPI_INT                 = 3,
    MPI_LONG                = 4,
    MPI_UNSIGNED_CHAR       = 5,
    MPI_UNSIGNED_SHORT      = 6,
    MPI_UNSIGNED            = 7,
    MPI_UNSIGNED_LONG       = 8,
    MPI_FLOAT               = 9,
    MPI_DOUBLE              = 10,
 
    MPI_INTEGER             = 13,
    MPI_REAL                = 14,

    MPI_BYTE                = 27,
};

class mpi_datatype_calculator
{
public:
    static int mpi_size (MPI_Datatype datatype) {
        /* sizeof doesn't work for MPI_Datatype, thus this function */
        /* I probably should do this with a table, but then error
       checking is harder */
        /* see man MPI_COMM_WORLD */
        switch (datatype){
            case MPI_CHAR:
                return sizeof(char);
            case MPI_BYTE:
                return sizeof(char);
            case MPI_UNSIGNED_CHAR:
                return sizeof(char);
            case MPI_SHORT:
                return sizeof(short);
            case MPI_UNSIGNED_SHORT:
                return sizeof(short);
            case MPI_INT:
                return sizeof(int);
            case MPI_UNSIGNED:
                return sizeof(int);
            case MPI_LONG:
                return sizeof(long);
            case MPI_UNSIGNED_LONG:
                return sizeof(long);
            case MPI_FLOAT:
                return sizeof(float);
            case MPI_DOUBLE:
                return sizeof(double);
            default:
                die("need to insert size for new datatype in mikes_MPI_SIZE()");
        }
        return -1;
    }
};