#define A_f_MPI_BOTTOM (((int*)&mpi_fortran_bottom_))
int mpi_fortran_bottom_;
#define A_f_MPI_IN_PLACE (((int*)&mpi_fortran_in_place_))
int mpi_fortran_in_place_;
#define A_f_MPI_ARGV_NULL (((int*)&mpi_fortran_argv_null_))
int mpi_fortran_argv_null_;
#define A_f_MPI_ARGVS_NULL (((int*)&mpi_fortran_argvs_null_))
int mpi_fortran_argvs_null_;
#define A_f_MPI_ERRCODES_IGNORE (((int*)&mpi_fortran_errcodes_ignore_))
int mpi_fortran_errcodes_ignore_;
#define A_f_MPI_STATUS_IGNORE (((int*)&mpi_fortran_status_ignore_))
int mpi_fortran_status_ignore_;
#define A_f_MPI_STATUSES_IGNORE (((int*)&mpi_fortran_statuses_ignore_))
int mpi_fortran_statuses_ignore_;
#define R_f_MPI_BOTTOM (((int*)ccc_mpi_fortran_bottom_)) 
int *ccc_mpi_fortran_bottom_; 
#define R_f_MPI_IN_PLACE (((int*)ccc_mpi_fortran_in_place_)) 
int *ccc_mpi_fortran_in_place_; 
#define R_f_MPI_ARGV_NULL (((int*)ccc_mpi_fortran_argv_null_)) 
int *ccc_mpi_fortran_argv_null_; 
#define R_f_MPI_ARGVS_NULL (((int*)ccc_mpi_fortran_argvs_null_)) 
int *ccc_mpi_fortran_argvs_null_; 
#define R_f_MPI_ERRCODES_IGNORE (((int*)ccc_mpi_fortran_errcodes_ignore_)) 
int *ccc_mpi_fortran_errcodes_ignore_; 
#define R_f_MPI_STATUS_IGNORE (((int*)ccc_mpi_fortran_status_ignore_)) 
int *ccc_mpi_fortran_status_ignore_; 
#define R_f_MPI_STATUSES_IGNORE (((int*)ccc_mpi_fortran_statuses_ignore_)) 
int *ccc_mpi_fortran_statuses_ignore_; 
#define R_f_MPI_UNWEIGHTED (((int*)ccc_mpi_fortran_unweighted_)) 
int *ccc_mpi_fortran_unweighted_; 
#define R_f_MPI_WEIGHTS_EMPTY (((int*)ccc_mpi_fortran_weights_empty_)) 
int *ccc_mpi_fortran_weights_empty_; 
//############################# Wi4MPI License ###########################
//# `04/04/2016`                                                         #
//# Copyright or (C) or Copr. Commissariat a l'Energie Atomique         #
//#                                                                      #
//# IDDN.FR.001.210022.001.S.P.2014.000.10800                            #
//# This file is part of the Wi4MPI library.                             #
//#                                                                      #
//# This software is governed by the CeCILL-C license under French law   #
//# and abiding by the rules of distribution of free software. You can   #
//# use, modify and/ or redistribute the software under the terms of     #
//# the CeCILL-C license as circulated by CEA, CNRS and INRIA at the     #
//# following URL http://www.cecill.info.                                #
//#                                                                      #
//# The fact that you are presently reading this means that you have     #
//# had knowledge of the CeCILL-C license and that you accept its        #
//# terms.                                                               #
//#                                                                      #
//# Authors:                                                             #
//#   - Delforge Tony <tony.delforge.tgcc@cea.fr>                        #
//#   - Ducrot Vincent <vincent.ducrot.tgcc@cea.fr>                      #
//#                                                                      #
//########################################################################
#ifndef __wrapper__h__
#define __wrapper__h__

#include "utils.h"

#define A_f_MPI_COMM_SELF 1

#define A_f_MPI_COMM_WORLD 0

#define A_f_MPI_COMM_NULL 2

#define R_f_MPI_COMM_NULL 67108864

#define R_f_MPI_COMM_SELF 1140850689

#define R_f_MPI_COMM_WORLD 1140850688

void comm_a2r(int *ca,int *cr){
if(A_f_MPI_COMM_SELF==*ca){
*cr=(int )R_f_MPI_COMM_SELF;return;}
else
if(A_f_MPI_COMM_WORLD==*ca){
*cr=(int )R_f_MPI_COMM_WORLD;return;}
else
if(A_f_MPI_COMM_NULL==*ca){
*cr=(int )R_f_MPI_COMM_NULL;return;}
else
if(R_f_MPI_COMM_NULL==*ca)
*cr=(int )A_f_MPI_COMM_SELF;
else
if(R_f_MPI_COMM_SELF==*ca)
*cr=(int )A_f_MPI_COMM_WORLD;
else
if(R_f_MPI_COMM_WORLD==*ca)
*cr=(int )A_f_MPI_COMM_NULL;
else
*cr=*ca;
}

void comm_r2a(int *ca,int *cr){
if(R_f_MPI_COMM_NULL==*cr){
*ca=(int )A_f_MPI_COMM_NULL;return;}
else
if(R_f_MPI_COMM_SELF==*cr){
*ca=(int )A_f_MPI_COMM_SELF;return;}
else
if(R_f_MPI_COMM_WORLD==*cr){
*ca=(int )A_f_MPI_COMM_WORLD;return;}
else
if(A_f_MPI_COMM_SELF==*cr)
*ca=(int )R_f_MPI_COMM_NULL;
else
if(A_f_MPI_COMM_WORLD==*cr)
*ca=(int )R_f_MPI_COMM_SELF;
else
if(A_f_MPI_COMM_NULL==*cr)
*ca=(int )R_f_MPI_COMM_WORLD;
else
*ca=*cr;

}
#define A_f_MPI_ERR_LASTCODE 54

#define A_f_MPI_ERR_NO_SUCH_FILE 42

#define R_f_MPI_ERR_SPAWN 42

#define A_f_MPI_ERR_SERVICE 48

#define R_f_MPI_ERR_KEYVAL 48

#define A_f_MPI_ERR_PORT 43

#define R_f_MPI_ERR_UNSUPPORTED_DATAREP 43

#define A_f_MPI_ERR_SIZE 49

#define R_f_MPI_ERR_RMA_CONFLICT 49

#define A_f_MPI_ERR_UNSUPPORTED_OPERATION 52

#define R_f_MPI_ERR_DISP 52

#define A_f_MPI_ERR_WIN 53

#define R_f_MPI_ERR_ASSERT 53

#define A_f_MPI_ERR_BASE 24

#define R_f_MPI_ERR_DUP_DATAREP 24

#define A_f_MPI_ERR_CONVERSION 25

#define R_f_MPI_ERR_FILE_EXISTS 25

#define A_f_MPI_ERR_DISP 26

#define R_f_MPI_ERR_FILE_IN_USE 26

#define A_f_MPI_ERR_DUP_DATAREP 27

#define R_f_MPI_ERR_FILE 27

#define A_f_MPI_ERR_ACCESS 20

#define R_f_MPI_ERR_ACCESS 20

#define A_f_MPI_ERR_AMODE 21

#define R_f_MPI_ERR_AMODE 21

#define A_f_MPI_ERR_ASSERT 22

#define R_f_MPI_ERR_BAD_FILE 22

#define A_f_MPI_ERR_BAD_FILE 23

#define R_f_MPI_ERR_CONVERSION 23

#define A_f_MPI_ERR_RMA_CONFLICT 46

#define R_f_MPI_ERR_BASE 46

#define A_f_MPI_ERR_RMA_SYNC 47

#define R_f_MPI_ERR_LOCKTYPE 47

#define A_f_MPI_ERR_QUOTA 44

#define R_f_MPI_ERR_UNSUPPORTED_OPERATION 44

#define A_f_MPI_ERR_READ_ONLY 45

#define R_f_MPI_ERR_WIN 45

#define A_f_MPI_ERR_FILE_EXISTS 28

#define R_f_MPI_ERR_INFO 28

#define A_f_MPI_ERR_FILE_IN_USE 29

#define R_f_MPI_ERR_INFO_KEY 29

#define A_f_MPI_ERR_NOT_SAME 40

#define R_f_MPI_ERR_READ_ONLY 40

#define A_f_MPI_ERR_NO_SPACE 41

#define R_f_MPI_ERR_SERVICE 41

#define A_f_MPI_ERR_BUFFER 1

#define R_f_MPI_ERR_BUFFER 1

#define A_f_MPI_SUCCESS 0

#define R_f_MPI_SUCCESS 0

#define A_f_MPI_ERR_TYPE 3

#define R_f_MPI_ERR_TYPE 3

#define A_f_MPI_ERR_COUNT 2

#define R_f_MPI_ERR_COUNT 2

#define A_f_MPI_ERR_COMM 5

#define R_f_MPI_ERR_COMM 5

#define A_f_MPI_ERR_TAG 4

#define R_f_MPI_ERR_TAG 4

#define A_f_MPI_ERR_REQUEST 7

#define R_f_MPI_ERR_ROOT 7

#define A_f_MPI_ERR_RANK 6

#define R_f_MPI_ERR_RANK 6

#define A_f_MPI_ERR_GROUP 9

#define R_f_MPI_ERR_OP 9

#define A_f_MPI_ERR_ROOT 8

#define R_f_MPI_ERR_GROUP 8

#define A_f_MPI_ERR_UNSUPPORTED_DATAREP 51

#define R_f_MPI_ERR_SIZE 51

#define A_f_MPI_ERR_NO_MEM 39

#define R_f_MPI_ERR_QUOTA 39

#define A_f_MPI_ERR_NAME 38

#define R_f_MPI_ERR_PORT 38

#define A_f_MPI_ERR_TOPOLOGY 11

#define R_f_MPI_ERR_DIMS 11

#define A_f_MPI_ERR_OP 10

#define R_f_MPI_ERR_TOPOLOGY 10

#define A_f_MPI_ERR_ARG 13

#define R_f_MPI_ERR_UNKNOWN 13

#define A_f_MPI_ERR_DIMS 12

#define R_f_MPI_ERR_ARG 12

#define A_f_MPI_ERR_TRUNCATE 15

#define R_f_MPI_ERR_OTHER 15

#define A_f_MPI_ERR_UNKNOWN 14

#define R_f_MPI_ERR_TRUNCATE 14

#define A_f_MPI_ERR_INTERN 17

#define R_f_MPI_ERR_IN_STATUS 17

#define A_f_MPI_ERR_OTHER 16

#define R_f_MPI_ERR_INTERN 16

#define A_f_MPI_ERR_PENDING 19

#define R_f_MPI_ERR_REQUEST 19

#define A_f_MPI_ERR_IN_STATUS 18

#define R_f_MPI_ERR_PENDING 18

#define A_f_MPI_ERR_INFO_KEY 31

#define R_f_MPI_ERR_INFO_NOKEY 31

#define A_f_MPI_ERR_FILE 30

#define R_f_MPI_ERR_INFO_VALUE 30

#define A_f_MPI_ERR_LOCKTYPE 37

#define R_f_MPI_ERR_NO_SUCH_FILE 37

#define A_f_MPI_ERR_KEYVAL 36

#define R_f_MPI_ERR_NO_SPACE 36

#define A_f_MPI_ERR_IO 35

#define R_f_MPI_ERR_NOT_SAME 35

#define A_f_MPI_ERR_INFO 34

#define R_f_MPI_ERR_NO_MEM 34

#define R_f_MPI_ERR_LASTCODE 1073741823

#define A_f_MPI_ERR_INFO_VALUE 33

#define R_f_MPI_ERR_NAME 33

#define A_f_MPI_ERR_INFO_NOKEY 32

#define R_f_MPI_ERR_IO 32

#define A_f_MPI_ERR_SPAWN 50

#define R_f_MPI_ERR_RMA_SYNC 50


#define R_f_MPI_2REAL 1275070497

#define R_f_MPI_2INTEGER 1275070496

#define R_f_MPI_DOUBLE_PRECISION 1275070495

#define R_f_MPI_COMPLEX 1275070494

#define R_f_MPI_INTEGER1 1275068717

#define A_f_MPI_2DOUBLE_PRECISION 24

#define A_f_MPI_2INTEGER 25

#define A_f_MPI_DOUBLE_COMPLEX 22

#define A_f_MPI_2REAL 23

#define R_f_MPI_PACKED 1275068687

#define R_f_MPI_BYTE 1275068685

#define A_f_MPI_BYTE 1

#define A_f_MPI_DATATYPE_NULL 0

#define A_f_MPI_UB 3

#define A_f_MPI_PACKED 2

#define A_f_MPI_CHARACTER 5

#define A_f_MPI_LB 4

#define A_f_MPI_INTEGER 7

#define A_f_MPI_LOGICAL 6

#define A_f_MPI_INTEGER2 9

#define A_f_MPI_INTEGER1 8

#define R_f_MPI_REAL4 1275069479

#define R_f_MPI_INTEGER2 1275068975

#define R_f_MPI_2DOUBLE_PRECISION 1275072547

#define R_f_MPI_DOUBLE_COMPLEX 1275072546

#define R_f_MPI_REAL8 1275070505

#define A_f_MPI_INTEGER4 10

#define A_f_MPI_REAL 13

#define A_f_MPI_REAL8 15

#define A_f_MPI_REAL4 14

#define A_f_MPI_DOUBLE_PRECISION 17

#define A_f_MPI_COMPLEX 18

#define R_f_MPI_REAL 1275069468

#define R_f_MPI_LOGICAL 1275069469

#define R_f_MPI_LB 1275068432

#define R_f_MPI_UB 1275068433

#define R_f_MPI_INTEGER4 1275069488

#define R_f_MPI_DATATYPE_NULL 201326592

#define R_f_MPI_CHARACTER 1275068698

#define R_f_MPI_INTEGER 1275069467

void datatype_a2r(int *ca,int *cr){
if(A_f_MPI_2DOUBLE_PRECISION==*ca){
*cr=(int )R_f_MPI_2DOUBLE_PRECISION;return;}
else
if(A_f_MPI_2INTEGER==*ca){
*cr=(int )R_f_MPI_2INTEGER;return;}
else
if(A_f_MPI_DOUBLE_COMPLEX==*ca){
*cr=(int )R_f_MPI_DOUBLE_COMPLEX;return;}
else
if(A_f_MPI_2REAL==*ca){
*cr=(int )R_f_MPI_2REAL;return;}
else
if(A_f_MPI_BYTE==*ca){
*cr=(int )R_f_MPI_BYTE;return;}
else
if(A_f_MPI_DATATYPE_NULL==*ca){
*cr=(int )R_f_MPI_DATATYPE_NULL;return;}
else
if(A_f_MPI_UB==*ca){
*cr=(int )R_f_MPI_UB;return;}
else
if(A_f_MPI_PACKED==*ca){
*cr=(int )R_f_MPI_PACKED;return;}
else
if(A_f_MPI_CHARACTER==*ca){
*cr=(int )R_f_MPI_CHARACTER;return;}
else
if(A_f_MPI_LB==*ca){
*cr=(int )R_f_MPI_LB;return;}
else
if(A_f_MPI_INTEGER==*ca){
*cr=(int )R_f_MPI_INTEGER;return;}
else
if(A_f_MPI_LOGICAL==*ca){
*cr=(int )R_f_MPI_LOGICAL;return;}
else
if(A_f_MPI_INTEGER2==*ca){
*cr=(int )R_f_MPI_INTEGER2;return;}
else
if(A_f_MPI_INTEGER1==*ca){
*cr=(int )R_f_MPI_INTEGER1;return;}
else
if(A_f_MPI_INTEGER4==*ca){
*cr=(int )R_f_MPI_INTEGER4;return;}
else
if(A_f_MPI_REAL==*ca){
*cr=(int )R_f_MPI_REAL;return;}
else
if(A_f_MPI_REAL8==*ca){
*cr=(int )R_f_MPI_REAL8;return;}
else
if(A_f_MPI_REAL4==*ca){
*cr=(int )R_f_MPI_REAL4;return;}
else
if(A_f_MPI_DOUBLE_PRECISION==*ca){
*cr=(int )R_f_MPI_DOUBLE_PRECISION;return;}
else
if(A_f_MPI_COMPLEX==*ca){
*cr=(int )R_f_MPI_COMPLEX;return;}
else
*cr=*ca;
}

void datatype_r2a(int *ca,int *cr){
if(R_f_MPI_2REAL==*cr){
*ca=(int )A_f_MPI_2REAL;return;}
else
if(R_f_MPI_2INTEGER==*cr){
*ca=(int )A_f_MPI_2INTEGER;return;}
else
if(R_f_MPI_DOUBLE_PRECISION==*cr){
*ca=(int )A_f_MPI_DOUBLE_PRECISION;return;}
else
if(R_f_MPI_COMPLEX==*cr){
*ca=(int )A_f_MPI_COMPLEX;return;}
else
if(R_f_MPI_INTEGER1==*cr){
*ca=(int )A_f_MPI_INTEGER1;return;}
else
if(R_f_MPI_PACKED==*cr){
*ca=(int )A_f_MPI_PACKED;return;}
else
if(R_f_MPI_BYTE==*cr){
*ca=(int )A_f_MPI_BYTE;return;}
else
if(R_f_MPI_REAL4==*cr){
*ca=(int )A_f_MPI_REAL4;return;}
else
if(R_f_MPI_INTEGER2==*cr){
*ca=(int )A_f_MPI_INTEGER2;return;}
else
if(R_f_MPI_2DOUBLE_PRECISION==*cr){
*ca=(int )A_f_MPI_2DOUBLE_PRECISION;return;}
else
if(R_f_MPI_DOUBLE_COMPLEX==*cr){
*ca=(int )A_f_MPI_DOUBLE_COMPLEX;return;}
else
if(R_f_MPI_REAL8==*cr){
*ca=(int )A_f_MPI_REAL8;return;}
else
if(R_f_MPI_REAL==*cr){
*ca=(int )A_f_MPI_REAL;return;}
else
if(R_f_MPI_LOGICAL==*cr){
*ca=(int )A_f_MPI_LOGICAL;return;}
else
if(R_f_MPI_LB==*cr){
*ca=(int )A_f_MPI_LB;return;}
else
if(R_f_MPI_UB==*cr){
*ca=(int )A_f_MPI_UB;return;}
else
if(R_f_MPI_INTEGER4==*cr){
*ca=(int )A_f_MPI_INTEGER4;return;}
else
if(R_f_MPI_DATATYPE_NULL==*cr){
*ca=(int )A_f_MPI_DATATYPE_NULL;return;}
else
if(R_f_MPI_CHARACTER==*cr){
*ca=(int )A_f_MPI_CHARACTER;return;}
else
if(R_f_MPI_INTEGER==*cr){
*ca=(int )A_f_MPI_INTEGER;return;}
else
*ca=*cr;

}

void error_a2r(int *ca,int *cr){
if(A_f_MPI_ERR_LASTCODE==*ca){
*cr=(int )R_f_MPI_ERR_LASTCODE;return;}
else
if(A_f_MPI_ERR_NO_SUCH_FILE==*ca){
*cr=(int )R_f_MPI_ERR_NO_SUCH_FILE;return;}
else
if(A_f_MPI_ERR_SERVICE==*ca){
*cr=(int )R_f_MPI_ERR_SERVICE;return;}
else
if(A_f_MPI_ERR_PORT==*ca){
*cr=(int )R_f_MPI_ERR_PORT;return;}
else
if(A_f_MPI_ERR_SIZE==*ca){
*cr=(int )R_f_MPI_ERR_SIZE;return;}
else
if(A_f_MPI_ERR_UNSUPPORTED_OPERATION==*ca){
*cr=(int )R_f_MPI_ERR_UNSUPPORTED_OPERATION;return;}
else
if(A_f_MPI_ERR_WIN==*ca){
*cr=(int )R_f_MPI_ERR_WIN;return;}
else
if(A_f_MPI_ERR_BASE==*ca){
*cr=(int )R_f_MPI_ERR_BASE;return;}
else
if(A_f_MPI_ERR_CONVERSION==*ca){
*cr=(int )R_f_MPI_ERR_CONVERSION;return;}
else
if(A_f_MPI_ERR_DISP==*ca){
*cr=(int )R_f_MPI_ERR_DISP;return;}
else
if(A_f_MPI_ERR_DUP_DATAREP==*ca){
*cr=(int )R_f_MPI_ERR_DUP_DATAREP;return;}
else
if(A_f_MPI_ERR_ACCESS==*ca){
*cr=(int )R_f_MPI_ERR_ACCESS;return;}
else
if(A_f_MPI_ERR_AMODE==*ca){
*cr=(int )R_f_MPI_ERR_AMODE;return;}
else
if(A_f_MPI_ERR_ASSERT==*ca){
*cr=(int )R_f_MPI_ERR_ASSERT;return;}
else
if(A_f_MPI_ERR_BAD_FILE==*ca){
*cr=(int )R_f_MPI_ERR_BAD_FILE;return;}
else
if(A_f_MPI_ERR_RMA_CONFLICT==*ca){
*cr=(int )R_f_MPI_ERR_RMA_CONFLICT;return;}
else
if(A_f_MPI_ERR_RMA_SYNC==*ca){
*cr=(int )R_f_MPI_ERR_RMA_SYNC;return;}
else
if(A_f_MPI_ERR_QUOTA==*ca){
*cr=(int )R_f_MPI_ERR_QUOTA;return;}
else
if(A_f_MPI_ERR_READ_ONLY==*ca){
*cr=(int )R_f_MPI_ERR_READ_ONLY;return;}
else
if(A_f_MPI_ERR_FILE_EXISTS==*ca){
*cr=(int )R_f_MPI_ERR_FILE_EXISTS;return;}
else
if(A_f_MPI_ERR_FILE_IN_USE==*ca){
*cr=(int )R_f_MPI_ERR_FILE_IN_USE;return;}
else
if(A_f_MPI_ERR_NOT_SAME==*ca){
*cr=(int )R_f_MPI_ERR_NOT_SAME;return;}
else
if(A_f_MPI_ERR_NO_SPACE==*ca){
*cr=(int )R_f_MPI_ERR_NO_SPACE;return;}
else
if(A_f_MPI_ERR_BUFFER==*ca){
*cr=(int )R_f_MPI_ERR_BUFFER;return;}
else
if(A_f_MPI_SUCCESS==*ca){
*cr=(int )R_f_MPI_SUCCESS;return;}
else
if(A_f_MPI_ERR_TYPE==*ca){
*cr=(int )R_f_MPI_ERR_TYPE;return;}
else
if(A_f_MPI_ERR_COUNT==*ca){
*cr=(int )R_f_MPI_ERR_COUNT;return;}
else
if(A_f_MPI_ERR_COMM==*ca){
*cr=(int )R_f_MPI_ERR_COMM;return;}
else
if(A_f_MPI_ERR_TAG==*ca){
*cr=(int )R_f_MPI_ERR_TAG;return;}
else
if(A_f_MPI_ERR_REQUEST==*ca){
*cr=(int )R_f_MPI_ERR_REQUEST;return;}
else
if(A_f_MPI_ERR_RANK==*ca){
*cr=(int )R_f_MPI_ERR_RANK;return;}
else
if(A_f_MPI_ERR_GROUP==*ca){
*cr=(int )R_f_MPI_ERR_GROUP;return;}
else
if(A_f_MPI_ERR_ROOT==*ca){
*cr=(int )R_f_MPI_ERR_ROOT;return;}
else
if(A_f_MPI_ERR_UNSUPPORTED_DATAREP==*ca){
*cr=(int )R_f_MPI_ERR_UNSUPPORTED_DATAREP;return;}
else
if(A_f_MPI_ERR_NO_MEM==*ca){
*cr=(int )R_f_MPI_ERR_NO_MEM;return;}
else
if(A_f_MPI_ERR_NAME==*ca){
*cr=(int )R_f_MPI_ERR_NAME;return;}
else
if(A_f_MPI_ERR_TOPOLOGY==*ca){
*cr=(int )R_f_MPI_ERR_TOPOLOGY;return;}
else
if(A_f_MPI_ERR_OP==*ca){
*cr=(int )R_f_MPI_ERR_OP;return;}
else
if(A_f_MPI_ERR_ARG==*ca){
*cr=(int )R_f_MPI_ERR_ARG;return;}
else
if(A_f_MPI_ERR_DIMS==*ca){
*cr=(int )R_f_MPI_ERR_DIMS;return;}
else
if(A_f_MPI_ERR_TRUNCATE==*ca){
*cr=(int )R_f_MPI_ERR_TRUNCATE;return;}
else
if(A_f_MPI_ERR_UNKNOWN==*ca){
*cr=(int )R_f_MPI_ERR_UNKNOWN;return;}
else
if(A_f_MPI_ERR_INTERN==*ca){
*cr=(int )R_f_MPI_ERR_INTERN;return;}
else
if(A_f_MPI_ERR_OTHER==*ca){
*cr=(int )R_f_MPI_ERR_OTHER;return;}
else
if(A_f_MPI_ERR_PENDING==*ca){
*cr=(int )R_f_MPI_ERR_PENDING;return;}
else
if(A_f_MPI_ERR_IN_STATUS==*ca){
*cr=(int )R_f_MPI_ERR_IN_STATUS;return;}
else
if(A_f_MPI_ERR_INFO_KEY==*ca){
*cr=(int )R_f_MPI_ERR_INFO_KEY;return;}
else
if(A_f_MPI_ERR_FILE==*ca){
*cr=(int )R_f_MPI_ERR_FILE;return;}
else
if(A_f_MPI_ERR_LOCKTYPE==*ca){
*cr=(int )R_f_MPI_ERR_LOCKTYPE;return;}
else
if(A_f_MPI_ERR_KEYVAL==*ca){
*cr=(int )R_f_MPI_ERR_KEYVAL;return;}
else
if(A_f_MPI_ERR_IO==*ca){
*cr=(int )R_f_MPI_ERR_IO;return;}
else
if(A_f_MPI_ERR_INFO==*ca){
*cr=(int )R_f_MPI_ERR_INFO;return;}
else
if(A_f_MPI_ERR_INFO_VALUE==*ca){
*cr=(int )R_f_MPI_ERR_INFO_VALUE;return;}
else
if(A_f_MPI_ERR_INFO_NOKEY==*ca){
*cr=(int )R_f_MPI_ERR_INFO_NOKEY;return;}
else
if(A_f_MPI_ERR_SPAWN==*ca){
*cr=(int )R_f_MPI_ERR_SPAWN;return;}
else
if(R_f_MPI_ERR_LASTCODE==*ca)
*cr=(int )A_f_MPI_ERR_LASTCODE;
else
*cr=*ca;
}

void error_r2a(int *ca,int *cr){
if(R_f_MPI_ERR_SPAWN==*cr){
*ca=(int )A_f_MPI_ERR_SPAWN;return;}
else
if(R_f_MPI_ERR_KEYVAL==*cr){
*ca=(int )A_f_MPI_ERR_KEYVAL;return;}
else
if(R_f_MPI_ERR_UNSUPPORTED_DATAREP==*cr){
*ca=(int )A_f_MPI_ERR_UNSUPPORTED_DATAREP;return;}
else
if(R_f_MPI_ERR_RMA_CONFLICT==*cr){
*ca=(int )A_f_MPI_ERR_RMA_CONFLICT;return;}
else
if(R_f_MPI_ERR_DISP==*cr){
*ca=(int )A_f_MPI_ERR_DISP;return;}
else
if(R_f_MPI_ERR_ASSERT==*cr){
*ca=(int )A_f_MPI_ERR_ASSERT;return;}
else
if(R_f_MPI_ERR_DUP_DATAREP==*cr){
*ca=(int )A_f_MPI_ERR_DUP_DATAREP;return;}
else
if(R_f_MPI_ERR_FILE_EXISTS==*cr){
*ca=(int )A_f_MPI_ERR_FILE_EXISTS;return;}
else
if(R_f_MPI_ERR_FILE_IN_USE==*cr){
*ca=(int )A_f_MPI_ERR_FILE_IN_USE;return;}
else
if(R_f_MPI_ERR_FILE==*cr){
*ca=(int )A_f_MPI_ERR_FILE;return;}
else
if(R_f_MPI_ERR_ACCESS==*cr){
*ca=(int )A_f_MPI_ERR_ACCESS;return;}
else
if(R_f_MPI_ERR_AMODE==*cr){
*ca=(int )A_f_MPI_ERR_AMODE;return;}
else
if(R_f_MPI_ERR_BAD_FILE==*cr){
*ca=(int )A_f_MPI_ERR_BAD_FILE;return;}
else
if(R_f_MPI_ERR_CONVERSION==*cr){
*ca=(int )A_f_MPI_ERR_CONVERSION;return;}
else
if(R_f_MPI_ERR_BASE==*cr){
*ca=(int )A_f_MPI_ERR_BASE;return;}
else
if(R_f_MPI_ERR_LOCKTYPE==*cr){
*ca=(int )A_f_MPI_ERR_LOCKTYPE;return;}
else
if(R_f_MPI_ERR_UNSUPPORTED_OPERATION==*cr){
*ca=(int )A_f_MPI_ERR_UNSUPPORTED_OPERATION;return;}
else
if(R_f_MPI_ERR_WIN==*cr){
*ca=(int )A_f_MPI_ERR_WIN;return;}
else
if(R_f_MPI_ERR_INFO==*cr){
*ca=(int )A_f_MPI_ERR_INFO;return;}
else
if(R_f_MPI_ERR_INFO_KEY==*cr){
*ca=(int )A_f_MPI_ERR_INFO_KEY;return;}
else
if(R_f_MPI_ERR_READ_ONLY==*cr){
*ca=(int )A_f_MPI_ERR_READ_ONLY;return;}
else
if(R_f_MPI_ERR_SERVICE==*cr){
*ca=(int )A_f_MPI_ERR_SERVICE;return;}
else
if(R_f_MPI_ERR_BUFFER==*cr){
*ca=(int )A_f_MPI_ERR_BUFFER;return;}
else
if(R_f_MPI_SUCCESS==*cr){
*ca=(int )A_f_MPI_SUCCESS;return;}
else
if(R_f_MPI_ERR_TYPE==*cr){
*ca=(int )A_f_MPI_ERR_TYPE;return;}
else
if(R_f_MPI_ERR_COUNT==*cr){
*ca=(int )A_f_MPI_ERR_COUNT;return;}
else
if(R_f_MPI_ERR_COMM==*cr){
*ca=(int )A_f_MPI_ERR_COMM;return;}
else
if(R_f_MPI_ERR_TAG==*cr){
*ca=(int )A_f_MPI_ERR_TAG;return;}
else
if(R_f_MPI_ERR_ROOT==*cr){
*ca=(int )A_f_MPI_ERR_ROOT;return;}
else
if(R_f_MPI_ERR_RANK==*cr){
*ca=(int )A_f_MPI_ERR_RANK;return;}
else
if(R_f_MPI_ERR_OP==*cr){
*ca=(int )A_f_MPI_ERR_OP;return;}
else
if(R_f_MPI_ERR_GROUP==*cr){
*ca=(int )A_f_MPI_ERR_GROUP;return;}
else
if(R_f_MPI_ERR_SIZE==*cr){
*ca=(int )A_f_MPI_ERR_SIZE;return;}
else
if(R_f_MPI_ERR_QUOTA==*cr){
*ca=(int )A_f_MPI_ERR_QUOTA;return;}
else
if(R_f_MPI_ERR_PORT==*cr){
*ca=(int )A_f_MPI_ERR_PORT;return;}
else
if(R_f_MPI_ERR_DIMS==*cr){
*ca=(int )A_f_MPI_ERR_DIMS;return;}
else
if(R_f_MPI_ERR_TOPOLOGY==*cr){
*ca=(int )A_f_MPI_ERR_TOPOLOGY;return;}
else
if(R_f_MPI_ERR_UNKNOWN==*cr){
*ca=(int )A_f_MPI_ERR_UNKNOWN;return;}
else
if(R_f_MPI_ERR_ARG==*cr){
*ca=(int )A_f_MPI_ERR_ARG;return;}
else
if(R_f_MPI_ERR_OTHER==*cr){
*ca=(int )A_f_MPI_ERR_OTHER;return;}
else
if(R_f_MPI_ERR_TRUNCATE==*cr){
*ca=(int )A_f_MPI_ERR_TRUNCATE;return;}
else
if(R_f_MPI_ERR_IN_STATUS==*cr){
*ca=(int )A_f_MPI_ERR_IN_STATUS;return;}
else
if(R_f_MPI_ERR_INTERN==*cr){
*ca=(int )A_f_MPI_ERR_INTERN;return;}
else
if(R_f_MPI_ERR_REQUEST==*cr){
*ca=(int )A_f_MPI_ERR_REQUEST;return;}
else
if(R_f_MPI_ERR_PENDING==*cr){
*ca=(int )A_f_MPI_ERR_PENDING;return;}
else
if(R_f_MPI_ERR_INFO_NOKEY==*cr){
*ca=(int )A_f_MPI_ERR_INFO_NOKEY;return;}
else
if(R_f_MPI_ERR_INFO_VALUE==*cr){
*ca=(int )A_f_MPI_ERR_INFO_VALUE;return;}
else
if(R_f_MPI_ERR_NO_SUCH_FILE==*cr){
*ca=(int )A_f_MPI_ERR_NO_SUCH_FILE;return;}
else
if(R_f_MPI_ERR_NO_SPACE==*cr){
*ca=(int )A_f_MPI_ERR_NO_SPACE;return;}
else
if(R_f_MPI_ERR_NOT_SAME==*cr){
*ca=(int )A_f_MPI_ERR_NOT_SAME;return;}
else
if(R_f_MPI_ERR_NO_MEM==*cr){
*ca=(int )A_f_MPI_ERR_NO_MEM;return;}
else
if(R_f_MPI_ERR_LASTCODE==*cr){
*ca=(int )A_f_MPI_ERR_LASTCODE;return;}
else
if(R_f_MPI_ERR_NAME==*cr){
*ca=(int )A_f_MPI_ERR_NAME;return;}
else
if(R_f_MPI_ERR_IO==*cr){
*ca=(int )A_f_MPI_ERR_IO;return;}
else
if(R_f_MPI_ERR_RMA_SYNC==*cr){
*ca=(int )A_f_MPI_ERR_RMA_SYNC;return;}
else
if(A_f_MPI_ERR_LASTCODE==*cr)
*ca=(int )R_f_MPI_ERR_LASTCODE;
else
*ca=*cr;

}

#define R_f_MPI_MAX 1476395009

#define R_f_MPI_MAXLOC 1476395020

#define A_f_MPI_MAX 1

#define A_f_MPI_OP_NULL 0

#define A_f_MPI_SUM 3

#define A_f_MPI_MIN 2

#define A_f_MPI_LAND 5

#define A_f_MPI_PROD 4

#define A_f_MPI_LOR 7

#define A_f_MPI_BAND 6

#define A_f_MPI_LXOR 9

#define A_f_MPI_BOR 8

#define R_f_MPI_OP_NULL 402653184

#define R_f_MPI_BXOR 1476395018

#define R_f_MPI_MINLOC 1476395019

#define R_f_MPI_BOR 1476395016

#define R_f_MPI_LXOR 1476395017

#define R_f_MPI_BAND 1476395014

#define R_f_MPI_LOR 1476395015

#define R_f_MPI_PROD 1476395012

#define R_f_MPI_LAND 1476395013

#define R_f_MPI_MIN 1476395010

#define R_f_MPI_SUM 1476395011

#define A_f_MPI_MAXLOC 11

#define A_f_MPI_BXOR 10

#define A_f_MPI_MINLOC 12

void operator_a2r(int *ca,int *cr){
if(A_f_MPI_MAX==*ca){
*cr=(int )R_f_MPI_MAX;return;}
else
if(A_f_MPI_OP_NULL==*ca){
*cr=(int )R_f_MPI_OP_NULL;return;}
else
if(A_f_MPI_SUM==*ca){
*cr=(int )R_f_MPI_SUM;return;}
else
if(A_f_MPI_MIN==*ca){
*cr=(int )R_f_MPI_MIN;return;}
else
if(A_f_MPI_LAND==*ca){
*cr=(int )R_f_MPI_LAND;return;}
else
if(A_f_MPI_PROD==*ca){
*cr=(int )R_f_MPI_PROD;return;}
else
if(A_f_MPI_LOR==*ca){
*cr=(int )R_f_MPI_LOR;return;}
else
if(A_f_MPI_BAND==*ca){
*cr=(int )R_f_MPI_BAND;return;}
else
if(A_f_MPI_LXOR==*ca){
*cr=(int )R_f_MPI_LXOR;return;}
else
if(A_f_MPI_BOR==*ca){
*cr=(int )R_f_MPI_BOR;return;}
else
if(A_f_MPI_MAXLOC==*ca){
*cr=(int )R_f_MPI_MAXLOC;return;}
else
if(A_f_MPI_BXOR==*ca){
*cr=(int )R_f_MPI_BXOR;return;}
else
if(A_f_MPI_MINLOC==*ca){
*cr=(int )R_f_MPI_MINLOC;return;}
else
if(R_f_MPI_MAX==*ca)
*cr=(int )A_f_MPI_MAX;
else
if(R_f_MPI_MAXLOC==*ca)
*cr=(int )A_f_MPI_OP_NULL;
else
if(R_f_MPI_OP_NULL==*ca)
*cr=(int )A_f_MPI_SUM;
else
if(R_f_MPI_BXOR==*ca)
*cr=(int )A_f_MPI_MIN;
else
if(R_f_MPI_MINLOC==*ca)
*cr=(int )A_f_MPI_LAND;
else
if(R_f_MPI_BOR==*ca)
*cr=(int )A_f_MPI_PROD;
else
if(R_f_MPI_LXOR==*ca)
*cr=(int )A_f_MPI_LOR;
else
if(R_f_MPI_BAND==*ca)
*cr=(int )A_f_MPI_BAND;
else
if(R_f_MPI_LOR==*ca)
*cr=(int )A_f_MPI_LXOR;
else
if(R_f_MPI_PROD==*ca)
*cr=(int )A_f_MPI_BOR;
else
if(R_f_MPI_LAND==*ca)
*cr=(int )A_f_MPI_MAXLOC;
else
if(R_f_MPI_MIN==*ca)
*cr=(int )A_f_MPI_BXOR;
else
if(R_f_MPI_SUM==*ca)
*cr=(int )A_f_MPI_MINLOC;
else
*cr=*ca;
User_fct_g_ptr=get_user_fct(*cr);
}

void operator_r2a(int *ca,int *cr){
if(R_f_MPI_MAX==*cr){
*ca=(int )A_f_MPI_MAX;return;}
else
if(R_f_MPI_MAXLOC==*cr){
*ca=(int )A_f_MPI_MAXLOC;return;}
else
if(R_f_MPI_OP_NULL==*cr){
*ca=(int )A_f_MPI_OP_NULL;return;}
else
if(R_f_MPI_BXOR==*cr){
*ca=(int )A_f_MPI_BXOR;return;}
else
if(R_f_MPI_MINLOC==*cr){
*ca=(int )A_f_MPI_MINLOC;return;}
else
if(R_f_MPI_BOR==*cr){
*ca=(int )A_f_MPI_BOR;return;}
else
if(R_f_MPI_LXOR==*cr){
*ca=(int )A_f_MPI_LXOR;return;}
else
if(R_f_MPI_BAND==*cr){
*ca=(int )A_f_MPI_BAND;return;}
else
if(R_f_MPI_LOR==*cr){
*ca=(int )A_f_MPI_LOR;return;}
else
if(R_f_MPI_PROD==*cr){
*ca=(int )A_f_MPI_PROD;return;}
else
if(R_f_MPI_LAND==*cr){
*ca=(int )A_f_MPI_LAND;return;}
else
if(R_f_MPI_MIN==*cr){
*ca=(int )A_f_MPI_MIN;return;}
else
if(R_f_MPI_SUM==*cr){
*ca=(int )A_f_MPI_SUM;return;}
else
if(A_f_MPI_MAX==*cr)
*ca=(int )R_f_MPI_MAX;
else
if(A_f_MPI_OP_NULL==*cr)
*ca=(int )R_f_MPI_MAXLOC;
else
if(A_f_MPI_SUM==*cr)
*ca=(int )R_f_MPI_OP_NULL;
else
if(A_f_MPI_MIN==*cr)
*ca=(int )R_f_MPI_BXOR;
else
if(A_f_MPI_LAND==*cr)
*ca=(int )R_f_MPI_MINLOC;
else
if(A_f_MPI_PROD==*cr)
*ca=(int )R_f_MPI_BOR;
else
if(A_f_MPI_LOR==*cr)
*ca=(int )R_f_MPI_LXOR;
else
if(A_f_MPI_BAND==*cr)
*ca=(int )R_f_MPI_BAND;
else
if(A_f_MPI_LXOR==*cr)
*ca=(int )R_f_MPI_LOR;
else
if(A_f_MPI_BOR==*cr)
*ca=(int )R_f_MPI_PROD;
else
if(A_f_MPI_MAXLOC==*cr)
*ca=(int )R_f_MPI_LAND;
else
if(A_f_MPI_BXOR==*cr)
*ca=(int )R_f_MPI_MIN;
else
if(A_f_MPI_MINLOC==*cr)
*ca=(int )R_f_MPI_SUM;
else
*ca=*cr;
add_user_fct(*cr);

}
#define A_f_MPI_ANY_SOURCE -1

#define R_f_MPI_PROC_NULL -1

#define A_f_MPI_PROC_NULL -2

#define R_f_MPI_ANY_SOURCE -2

void source_a2r(int *ca,int *cr){
if(A_f_MPI_ANY_SOURCE==*ca){
*cr=(int )R_f_MPI_ANY_SOURCE;return;}
else
if(A_f_MPI_PROC_NULL==*ca){
*cr=(int )R_f_MPI_PROC_NULL;return;}
else
*cr=*ca;
}

void source_r2a(int *ca,int *cr){
if(R_f_MPI_PROC_NULL==*cr){
*ca=(int )A_f_MPI_PROC_NULL;return;}
else
if(R_f_MPI_ANY_SOURCE==*cr){
*ca=(int )A_f_MPI_ANY_SOURCE;return;}
else
*ca=*cr;

}
#define A_f_MPI_ANY_TAG -1

#define R_f_MPI_ANY_TAG -1

void tag_a2r(int *ca,int *cr){
if(A_f_MPI_ANY_TAG==*ca){
*cr=(int )R_f_MPI_ANY_TAG;return;}
else
*cr=*ca;
}

void tag_r2a(int *ca,int *cr){
if(R_f_MPI_ANY_TAG==*cr){
*ca=(int )A_f_MPI_ANY_TAG;return;}
else
*ca=*cr;

}
#define A_f_MPI_REQUEST_NULL 0

#define R_f_MPI_REQUEST_NULL 738197504

void request_a2r(int *ca,int *cr){
if(A_f_MPI_REQUEST_NULL==*ca){
*cr=(int )R_f_MPI_REQUEST_NULL;return;}
else
if(R_f_MPI_REQUEST_NULL==*ca)
*cr=(int )A_f_MPI_REQUEST_NULL;
else
*cr=*ca;
}

void request_r2a(int *ca,int *cr){
if(R_f_MPI_REQUEST_NULL==*cr){
*ca=(int )A_f_MPI_REQUEST_NULL;return;}
else
if(A_f_MPI_REQUEST_NULL==*cr)
*ca=(int )R_f_MPI_REQUEST_NULL;
else
*ca=*cr;

}
#define A_f_MPI_GROUP_EMPTY 1

#define A_f_MPI_GROUP_NULL 0

#define R_f_MPI_GROUP_NULL 134217728

#define R_f_MPI_GROUP_EMPTY 1207959552

void group_a2r(int *ca,int *cr){
if(A_f_MPI_GROUP_EMPTY==*ca){
*cr=(int )R_f_MPI_GROUP_EMPTY;return;}
else
if(A_f_MPI_GROUP_NULL==*ca){
*cr=(int )R_f_MPI_GROUP_NULL;return;}
else
if(R_f_MPI_GROUP_NULL==*ca)
*cr=(int )A_f_MPI_GROUP_EMPTY;
else
if(R_f_MPI_GROUP_EMPTY==*ca)
*cr=(int )A_f_MPI_GROUP_NULL;
else
*cr=*ca;
}

void group_r2a(int *ca,int *cr){
if(R_f_MPI_GROUP_NULL==*cr){
*ca=(int )A_f_MPI_GROUP_NULL;return;}
else
if(R_f_MPI_GROUP_EMPTY==*cr){
*ca=(int )A_f_MPI_GROUP_EMPTY;return;}
else
if(A_f_MPI_GROUP_EMPTY==*cr)
*ca=(int )R_f_MPI_GROUP_NULL;
else
if(A_f_MPI_GROUP_NULL==*cr)
*ca=(int )R_f_MPI_GROUP_EMPTY;
else
*ca=*cr;

}
#define R_f_MPI_ERRORS_RETURN 1409286145

#define R_f_MPI_ERRORS_ARE_FATAL 1409286144

#define A_f_MPI_ERRORS_ARE_FATAL 1

#define A_f_MPI_ERRHANDLER_NULL 0

#define A_f_MPI_ERRORS_RETURN 2

#define R_f_MPI_ERRHANDLER_NULL 335544320

void err_handler_a2r(int *ca,int *cr){
if(A_f_MPI_ERRORS_ARE_FATAL==*ca){
*cr=(int )R_f_MPI_ERRORS_ARE_FATAL;return;}
else
if(A_f_MPI_ERRHANDLER_NULL==*ca){
*cr=(int )R_f_MPI_ERRHANDLER_NULL;return;}
else
if(A_f_MPI_ERRORS_RETURN==*ca){
*cr=(int )R_f_MPI_ERRORS_RETURN;return;}
else
if(R_f_MPI_ERRORS_RETURN==*ca)
*cr=(int )A_f_MPI_ERRORS_ARE_FATAL;
else
if(R_f_MPI_ERRORS_ARE_FATAL==*ca)
*cr=(int )A_f_MPI_ERRHANDLER_NULL;
else
if(R_f_MPI_ERRHANDLER_NULL==*ca)
*cr=(int )A_f_MPI_ERRORS_RETURN;
else
*cr=*ca;
}

void err_handler_r2a(int *ca,int *cr){
if(R_f_MPI_ERRORS_RETURN==*cr){
*ca=(int )A_f_MPI_ERRORS_RETURN;return;}
else
if(R_f_MPI_ERRORS_ARE_FATAL==*cr){
*ca=(int )A_f_MPI_ERRORS_ARE_FATAL;return;}
else
if(R_f_MPI_ERRHANDLER_NULL==*cr){
*ca=(int )A_f_MPI_ERRHANDLER_NULL;return;}
else
if(A_f_MPI_ERRORS_ARE_FATAL==*cr)
*ca=(int )R_f_MPI_ERRORS_RETURN;
else
if(A_f_MPI_ERRHANDLER_NULL==*cr)
*ca=(int )R_f_MPI_ERRORS_ARE_FATAL;
else
if(A_f_MPI_ERRORS_RETURN==*cr)
*ca=(int )R_f_MPI_ERRHANDLER_NULL;
else
*ca=*cr;

}
#define A_f_MPI_CART 1

#define R_f_MPI_GRAPH 1

#define A_f_MPI_GRAPH 2

#define R_f_MPI_CART 2

#define A_f_MPI_UNDEFINED -32766

#define R_f_MPI_UNDEFINED -32766

void topo_status_a2r(int *ca,int *cr){
if(A_f_MPI_CART==*ca){
*cr=(int )R_f_MPI_CART;return;}
else
if(A_f_MPI_GRAPH==*ca){
*cr=(int )R_f_MPI_GRAPH;return;}
else
if(A_f_MPI_UNDEFINED==*ca){
*cr=(int )R_f_MPI_UNDEFINED;return;}
else
*cr=*ca;
}

void topo_status_r2a(int *ca,int *cr){
if(R_f_MPI_GRAPH==*cr){
*ca=(int )A_f_MPI_GRAPH;return;}
else
if(R_f_MPI_CART==*cr){
*ca=(int )A_f_MPI_CART;return;}
else
if(R_f_MPI_UNDEFINED==*cr){
*ca=(int )A_f_MPI_UNDEFINED;return;}
else
*ca=*cr;

}
#define R_f_MPI_MAX 1476395009

#define R_f_MPI_MAXLOC 1476395020

#define A_f_MPI_MAX 1

#define A_f_MPI_OP_NULL 0

#define A_f_MPI_SUM 3

#define A_f_MPI_MIN 2

#define A_f_MPI_LAND 5

#define A_f_MPI_PROD 4

#define A_f_MPI_LOR 7

#define A_f_MPI_BAND 6

#define A_f_MPI_LXOR 9

#define A_f_MPI_BOR 8

#define R_f_MPI_OP_NULL 402653184

#define R_f_MPI_BXOR 1476395018

#define R_f_MPI_MINLOC 1476395019

#define R_f_MPI_BOR 1476395016

#define R_f_MPI_LXOR 1476395017

#define R_f_MPI_BAND 1476395014

#define R_f_MPI_LOR 1476395015

#define R_f_MPI_PROD 1476395012

#define R_f_MPI_LAND 1476395013

#define R_f_MPI_MIN 1476395010

#define R_f_MPI_SUM 1476395011

#define A_f_MPI_MAXLOC 11

#define A_f_MPI_BXOR 10

#define A_f_MPI_MINLOC 12

void operator_del_a2r(int *ca,int *cr){
if(A_f_MPI_MAX==*ca){
*cr=(int )R_f_MPI_MAX;return;}
else
if(A_f_MPI_OP_NULL==*ca){
*cr=(int )R_f_MPI_OP_NULL;return;}
else
if(A_f_MPI_SUM==*ca){
*cr=(int )R_f_MPI_SUM;return;}
else
if(A_f_MPI_MIN==*ca){
*cr=(int )R_f_MPI_MIN;return;}
else
if(A_f_MPI_LAND==*ca){
*cr=(int )R_f_MPI_LAND;return;}
else
if(A_f_MPI_PROD==*ca){
*cr=(int )R_f_MPI_PROD;return;}
else
if(A_f_MPI_LOR==*ca){
*cr=(int )R_f_MPI_LOR;return;}
else
if(A_f_MPI_BAND==*ca){
*cr=(int )R_f_MPI_BAND;return;}
else
if(A_f_MPI_LXOR==*ca){
*cr=(int )R_f_MPI_LXOR;return;}
else
if(A_f_MPI_BOR==*ca){
*cr=(int )R_f_MPI_BOR;return;}
else
if(A_f_MPI_MAXLOC==*ca){
*cr=(int )R_f_MPI_MAXLOC;return;}
else
if(A_f_MPI_BXOR==*ca){
*cr=(int )R_f_MPI_BXOR;return;}
else
if(A_f_MPI_MINLOC==*ca){
*cr=(int )R_f_MPI_MINLOC;return;}
else
if(R_f_MPI_MAX==*ca)
*cr=(int )A_f_MPI_MAX;
else
if(R_f_MPI_MAXLOC==*ca)
*cr=(int )A_f_MPI_OP_NULL;
else
if(R_f_MPI_OP_NULL==*ca)
*cr=(int )A_f_MPI_SUM;
else
if(R_f_MPI_BXOR==*ca)
*cr=(int )A_f_MPI_MIN;
else
if(R_f_MPI_MINLOC==*ca)
*cr=(int )A_f_MPI_LAND;
else
if(R_f_MPI_BOR==*ca)
*cr=(int )A_f_MPI_PROD;
else
if(R_f_MPI_LXOR==*ca)
*cr=(int )A_f_MPI_LOR;
else
if(R_f_MPI_BAND==*ca)
*cr=(int )A_f_MPI_BAND;
else
if(R_f_MPI_LOR==*ca)
*cr=(int )A_f_MPI_LXOR;
else
if(R_f_MPI_PROD==*ca)
*cr=(int )A_f_MPI_BOR;
else
if(R_f_MPI_LAND==*ca)
*cr=(int )A_f_MPI_MAXLOC;
else
if(R_f_MPI_MIN==*ca)
*cr=(int )A_f_MPI_BXOR;
else
if(R_f_MPI_SUM==*ca)
*cr=(int )A_f_MPI_MINLOC;
else
*cr=*ca;
del_usr_fct(*cr);
}

void operator_del_r2a(int *ca,int *cr){
if(R_f_MPI_MAX==*cr){
*ca=(int )A_f_MPI_MAX;return;}
else
if(R_f_MPI_MAXLOC==*cr){
*ca=(int )A_f_MPI_MAXLOC;return;}
else
if(R_f_MPI_OP_NULL==*cr){
*ca=(int )A_f_MPI_OP_NULL;return;}
else
if(R_f_MPI_BXOR==*cr){
*ca=(int )A_f_MPI_BXOR;return;}
else
if(R_f_MPI_MINLOC==*cr){
*ca=(int )A_f_MPI_MINLOC;return;}
else
if(R_f_MPI_BOR==*cr){
*ca=(int )A_f_MPI_BOR;return;}
else
if(R_f_MPI_LXOR==*cr){
*ca=(int )A_f_MPI_LXOR;return;}
else
if(R_f_MPI_BAND==*cr){
*ca=(int )A_f_MPI_BAND;return;}
else
if(R_f_MPI_LOR==*cr){
*ca=(int )A_f_MPI_LOR;return;}
else
if(R_f_MPI_PROD==*cr){
*ca=(int )A_f_MPI_PROD;return;}
else
if(R_f_MPI_LAND==*cr){
*ca=(int )A_f_MPI_LAND;return;}
else
if(R_f_MPI_MIN==*cr){
*ca=(int )A_f_MPI_MIN;return;}
else
if(R_f_MPI_SUM==*cr){
*ca=(int )A_f_MPI_SUM;return;}
else
if(A_f_MPI_MAX==*cr)
*ca=(int )R_f_MPI_MAX;
else
if(A_f_MPI_OP_NULL==*cr)
*ca=(int )R_f_MPI_MAXLOC;
else
if(A_f_MPI_SUM==*cr)
*ca=(int )R_f_MPI_OP_NULL;
else
if(A_f_MPI_MIN==*cr)
*ca=(int )R_f_MPI_BXOR;
else
if(A_f_MPI_LAND==*cr)
*ca=(int )R_f_MPI_MINLOC;
else
if(A_f_MPI_PROD==*cr)
*ca=(int )R_f_MPI_BOR;
else
if(A_f_MPI_LOR==*cr)
*ca=(int )R_f_MPI_LXOR;
else
if(A_f_MPI_BAND==*cr)
*ca=(int )R_f_MPI_BAND;
else
if(A_f_MPI_LXOR==*cr)
*ca=(int )R_f_MPI_LOR;
else
if(A_f_MPI_BOR==*cr)
*ca=(int )R_f_MPI_PROD;
else
if(A_f_MPI_MAXLOC==*cr)
*ca=(int )R_f_MPI_LAND;
else
if(A_f_MPI_BXOR==*cr)
*ca=(int )R_f_MPI_MIN;
else
if(A_f_MPI_MINLOC==*cr)
*ca=(int )R_f_MPI_SUM;
else
*ca=*cr;

}
void delete_ptr_converter_a2r(void **ca,void **cr){
*cr=*ca;
}

void delete_ptr_converter_r2a(void **ca,void **cr){
*ca=*cr;

}
#define R_f_MPI_ERRORS_RETURN 1409286145

#define R_f_MPI_ERRORS_ARE_FATAL 1409286144

#define A_f_MPI_ERRORS_ARE_FATAL 1

#define A_f_MPI_ERRHANDLER_NULL 0

#define A_f_MPI_ERRORS_RETURN 2

#define R_f_MPI_ERRHANDLER_NULL 335544320

void errhandler_converter_a2r(int *ca,int *cr){
if(A_f_MPI_ERRORS_ARE_FATAL==*ca){
*cr=(int )R_f_MPI_ERRORS_ARE_FATAL;return;}
else
if(A_f_MPI_ERRHANDLER_NULL==*ca){
*cr=(int )R_f_MPI_ERRHANDLER_NULL;return;}
else
if(A_f_MPI_ERRORS_RETURN==*ca){
*cr=(int )R_f_MPI_ERRORS_RETURN;return;}
else
if(R_f_MPI_ERRORS_RETURN==*ca)
*cr=(int )A_f_MPI_ERRORS_ARE_FATAL;
else
if(R_f_MPI_ERRORS_ARE_FATAL==*ca)
*cr=(int )A_f_MPI_ERRHANDLER_NULL;
else
if(R_f_MPI_ERRHANDLER_NULL==*ca)
*cr=(int )A_f_MPI_ERRORS_RETURN;
else
*cr=*ca;
}

void errhandler_converter_r2a(int *ca,int *cr){
if(R_f_MPI_ERRORS_RETURN==*cr){
*ca=(int )A_f_MPI_ERRORS_RETURN;return;}
else
if(R_f_MPI_ERRORS_ARE_FATAL==*cr){
*ca=(int )A_f_MPI_ERRORS_ARE_FATAL;return;}
else
if(R_f_MPI_ERRHANDLER_NULL==*cr){
*ca=(int )A_f_MPI_ERRHANDLER_NULL;return;}
else
if(A_f_MPI_ERRORS_ARE_FATAL==*cr)
*ca=(int )R_f_MPI_ERRORS_RETURN;
else
if(A_f_MPI_ERRHANDLER_NULL==*cr)
*ca=(int )R_f_MPI_ERRORS_ARE_FATAL;
else
if(A_f_MPI_ERRORS_RETURN==*cr)
*ca=(int )R_f_MPI_ERRHANDLER_NULL;
else
*ca=*cr;

}
#define A_f_MPI_HOST 1

#define A_f_MPI_TAG_UB 0

#define A_f_MPI_WTIME_IS_GLOBAL 3

#define A_f_MPI_IO 2

#define A_f_MPI_KEYVAL_INVALID -1

#define R_f_MPI_HOST 1681915908

#define R_f_MPI_KEYVAL_INVALID 603979776

#define R_f_MPI_TAG_UB 1681915906

#define R_f_MPI_IO 1681915910

#define R_f_MPI_WTIME_IS_GLOBAL 1681915912

void keyval_a2r(int *ca,int *cr){
if(A_f_MPI_HOST==*ca){
*cr=(int )R_f_MPI_HOST;return;}
else
if(A_f_MPI_TAG_UB==*ca){
*cr=(int )R_f_MPI_TAG_UB;return;}
else
if(A_f_MPI_WTIME_IS_GLOBAL==*ca){
*cr=(int )R_f_MPI_WTIME_IS_GLOBAL;return;}
else
if(A_f_MPI_IO==*ca){
*cr=(int )R_f_MPI_IO;return;}
else
if(A_f_MPI_KEYVAL_INVALID==*ca){
*cr=(int )R_f_MPI_KEYVAL_INVALID;return;}
else
if(R_f_MPI_HOST==*ca)
*cr=(int )A_f_MPI_HOST;
else
if(R_f_MPI_KEYVAL_INVALID==*ca)
*cr=(int )A_f_MPI_TAG_UB;
else
if(R_f_MPI_TAG_UB==*ca)
*cr=(int )A_f_MPI_WTIME_IS_GLOBAL;
else
if(R_f_MPI_IO==*ca)
*cr=(int )A_f_MPI_IO;
else
if(R_f_MPI_WTIME_IS_GLOBAL==*ca)
*cr=(int )A_f_MPI_KEYVAL_INVALID;
else
*cr=*ca;
}

void keyval_r2a(int *ca,int *cr){
if(R_f_MPI_HOST==*cr){
*ca=(int )A_f_MPI_HOST;return;}
else
if(R_f_MPI_KEYVAL_INVALID==*cr){
*ca=(int )A_f_MPI_KEYVAL_INVALID;return;}
else
if(R_f_MPI_TAG_UB==*cr){
*ca=(int )A_f_MPI_TAG_UB;return;}
else
if(R_f_MPI_IO==*cr){
*ca=(int )A_f_MPI_IO;return;}
else
if(R_f_MPI_WTIME_IS_GLOBAL==*cr){
*ca=(int )A_f_MPI_WTIME_IS_GLOBAL;return;}
else
if(A_f_MPI_HOST==*cr)
*ca=(int )R_f_MPI_HOST;
else
if(A_f_MPI_TAG_UB==*cr)
*ca=(int )R_f_MPI_KEYVAL_INVALID;
else
if(A_f_MPI_WTIME_IS_GLOBAL==*cr)
*ca=(int )R_f_MPI_TAG_UB;
else
if(A_f_MPI_IO==*cr)
*ca=(int )R_f_MPI_IO;
else
if(A_f_MPI_KEYVAL_INVALID==*cr)
*ca=(int )R_f_MPI_WTIME_IS_GLOBAL;
else
*ca=*cr;

}
#define A_f_MPI_ANY_SOURCE -1

#define R_f_MPI_PROC_NULL -1

#define A_f_MPI_PROC_NULL -2

#define R_f_MPI_ANY_SOURCE -2

void rank_mapper_a2r(int *ca,int *cr){
if(A_f_MPI_ANY_SOURCE==*ca){
*cr=(int )R_f_MPI_ANY_SOURCE;return;}
else
if(A_f_MPI_PROC_NULL==*ca){
*cr=(int )R_f_MPI_PROC_NULL;return;}
else
*cr=*ca;
}

void rank_mapper_r2a(int *ca,int *cr){
if(R_f_MPI_PROC_NULL==*cr){
*ca=(int )A_f_MPI_PROC_NULL;return;}
else
if(R_f_MPI_ANY_SOURCE==*cr){
*ca=(int )A_f_MPI_ANY_SOURCE;return;}
else
*ca=*cr;

}
#define A_f_MPI_INFO_NULL 0

#define R_f_MPI_INFO_NULL 469762048

void info_a2r(int *ca,int *cr){
if(A_f_MPI_INFO_NULL==*ca){
*cr=(int )R_f_MPI_INFO_NULL;return;}
else
if(R_f_MPI_INFO_NULL==*ca)
*cr=(int )A_f_MPI_INFO_NULL;
else
*cr=*ca;
}

void info_r2a(int *ca,int *cr){
if(R_f_MPI_INFO_NULL==*cr){
*ca=(int )A_f_MPI_INFO_NULL;return;}
else
if(A_f_MPI_INFO_NULL==*cr)
*ca=(int )R_f_MPI_INFO_NULL;
else
*ca=*cr;

}
#define A_f_MPI_ORDER_FORTRAN 1

#define A_f_MPI_ORDER_C 0

#define R_f_MPI_ORDER_FORTRAN 57

#define R_f_MPI_ORDER_C 56

void order_a2r(int *ca,int *cr){
if(A_f_MPI_ORDER_FORTRAN==*ca){
*cr=(int )R_f_MPI_ORDER_FORTRAN;return;}
else
if(A_f_MPI_ORDER_C==*ca){
*cr=(int )R_f_MPI_ORDER_C;return;}
else
if(R_f_MPI_ORDER_FORTRAN==*ca)
*cr=(int )A_f_MPI_ORDER_FORTRAN;
else
if(R_f_MPI_ORDER_C==*ca)
*cr=(int )A_f_MPI_ORDER_C;
else
*cr=*ca;
}

void order_r2a(int *ca,int *cr){
if(R_f_MPI_ORDER_FORTRAN==*cr){
*ca=(int )A_f_MPI_ORDER_FORTRAN;return;}
else
if(R_f_MPI_ORDER_C==*cr){
*ca=(int )A_f_MPI_ORDER_C;return;}
else
if(A_f_MPI_ORDER_FORTRAN==*cr)
*ca=(int )R_f_MPI_ORDER_FORTRAN;
else
if(A_f_MPI_ORDER_C==*cr)
*ca=(int )R_f_MPI_ORDER_C;
else
*ca=*cr;

}
#define R_f_MPI_DISTRIBUTE_NONE 123

#define R_f_MPI_DISTRIBUTE_BLOCK 121

#define R_f_MPI_DISTRIBUTE_DFLT_DARG -49767

#define A_f_MPI_DISTRIBUTE_CYCLIC 1

#define A_f_MPI_DISTRIBUTE_BLOCK 0

#define R_f_MPI_DISTRIBUTE_CYCLIC 122

#define A_f_MPI_DISTRIBUTE_NONE 2

#define A_f_MPI_DISTRIBUTE_DFLT_DARG -1

void order2_a2r(int *ca,int *cr){
if(A_f_MPI_DISTRIBUTE_CYCLIC==*ca){
*cr=(int )R_f_MPI_DISTRIBUTE_CYCLIC;return;}
else
if(A_f_MPI_DISTRIBUTE_BLOCK==*ca){
*cr=(int )R_f_MPI_DISTRIBUTE_BLOCK;return;}
else
if(A_f_MPI_DISTRIBUTE_NONE==*ca){
*cr=(int )R_f_MPI_DISTRIBUTE_NONE;return;}
else
if(A_f_MPI_DISTRIBUTE_DFLT_DARG==*ca){
*cr=(int )R_f_MPI_DISTRIBUTE_DFLT_DARG;return;}
else
if(R_f_MPI_DISTRIBUTE_NONE==*ca)
*cr=(int )A_f_MPI_DISTRIBUTE_CYCLIC;
else
if(R_f_MPI_DISTRIBUTE_BLOCK==*ca)
*cr=(int )A_f_MPI_DISTRIBUTE_BLOCK;
else
if(R_f_MPI_DISTRIBUTE_DFLT_DARG==*ca)
*cr=(int )A_f_MPI_DISTRIBUTE_NONE;
else
if(R_f_MPI_DISTRIBUTE_CYCLIC==*ca)
*cr=(int )A_f_MPI_DISTRIBUTE_DFLT_DARG;
else
*cr=*ca;
}

void order2_r2a(int *ca,int *cr){
if(R_f_MPI_DISTRIBUTE_NONE==*cr){
*ca=(int )A_f_MPI_DISTRIBUTE_NONE;return;}
else
if(R_f_MPI_DISTRIBUTE_BLOCK==*cr){
*ca=(int )A_f_MPI_DISTRIBUTE_BLOCK;return;}
else
if(R_f_MPI_DISTRIBUTE_DFLT_DARG==*cr){
*ca=(int )A_f_MPI_DISTRIBUTE_DFLT_DARG;return;}
else
if(R_f_MPI_DISTRIBUTE_CYCLIC==*cr){
*ca=(int )A_f_MPI_DISTRIBUTE_CYCLIC;return;}
else
if(A_f_MPI_DISTRIBUTE_CYCLIC==*cr)
*ca=(int )R_f_MPI_DISTRIBUTE_NONE;
else
if(A_f_MPI_DISTRIBUTE_BLOCK==*cr)
*ca=(int )R_f_MPI_DISTRIBUTE_BLOCK;
else
if(A_f_MPI_DISTRIBUTE_NONE==*cr)
*ca=(int )R_f_MPI_DISTRIBUTE_DFLT_DARG;
else
if(A_f_MPI_DISTRIBUTE_DFLT_DARG==*cr)
*ca=(int )R_f_MPI_DISTRIBUTE_CYCLIC;
else
*ca=*cr;

}
 #define A_f_MPI_STATUS_SIZE           6
 #define A_f_MPI_SOURCE           1
 #define A_f_MPI_TAG           2
 #define A_f_MPI_ERROR           3

 #define R_f_MPI_STATUS_SIZE           5
 #define R_f_MPI_SOURCE           3
 #define R_f_MPI_TAG           4
 #define R_f_MPI_ERROR           5

#include "manual_wrapper.h"
#endif