//############################# Wi4MPI License ###########################
//# `04/04/2016`                                                         #
//# Copyright or (C) or Copr. Commissariat a l'Energie Atomique         #
//#                                                                      #
//# IDDN.FR.001.210022.000.S.P.2014.000.10800                            #
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
/*
 * This code is full generated
 */
#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>
/*ompi constante*/
#if defined(OMPI_OMPI)
extern char ompi_mpi_comm_null;
extern char ompi_mpi_comm_self;
extern char ompi_mpi_comm_world;
extern char ompi_mpi_2cplex;
extern char ompi_mpi_2dblcplex;
extern char ompi_mpi_2dblprec;
extern char ompi_mpi_2int;
extern char ompi_mpi_2integer;
extern char ompi_mpi_2real;
extern char ompi_mpi_aint;
extern char ompi_mpi_byte;
extern char ompi_mpi_c_bool;
extern char ompi_mpi_c_complex;
extern char ompi_mpi_c_double_complex;
extern char ompi_mpi_c_float_complex;
extern char ompi_mpi_c_long_double_complex;
extern char ompi_mpi_char;
extern char ompi_mpi_character;
extern char ompi_mpi_complex16;
extern char ompi_mpi_complex32;
extern char ompi_mpi_complex8;
extern char ompi_mpi_cplex;
extern char ompi_mpi_cxx_bool;
extern char ompi_mpi_cxx_cplex;
extern char ompi_mpi_cxx_dblcplex;
extern char ompi_mpi_cxx_ldblcplex;
extern char ompi_mpi_datatype_null;
extern char ompi_mpi_dblcplex;
extern char ompi_mpi_dblprec;
extern char ompi_mpi_double;
extern char ompi_mpi_double_int;
extern char ompi_mpi_float;
extern char ompi_mpi_float_int;
extern char ompi_mpi_int16_t;
extern char ompi_mpi_int32_t;
extern char ompi_mpi_int64_t;
extern char ompi_mpi_int8_t;
extern char ompi_mpi_int;
extern char ompi_mpi_integer16;
extern char ompi_mpi_integer1;
extern char ompi_mpi_integer2;
extern char ompi_mpi_integer4;
extern char ompi_mpi_integer8;
extern char ompi_mpi_integer;
extern char ompi_mpi_lb;
extern char ompi_mpi_ldblcplex;
extern char ompi_mpi_logical1;
extern char ompi_mpi_logical2;
extern char ompi_mpi_logical4;
extern char ompi_mpi_logical8;
extern char ompi_mpi_logical;
extern char ompi_mpi_long;
extern char ompi_mpi_long_double;
extern char ompi_mpi_long_int;
extern char ompi_mpi_long_long_int;
extern char ompi_mpi_longdbl_int;
extern char ompi_mpi_offset;
extern char ompi_mpi_count;
extern char ompi_message_null;
extern char ompi_mpi_packed;
extern char ompi_mpi_real16;
extern char ompi_mpi_real2;
extern char ompi_mpi_real4;
extern char ompi_mpi_real8;
extern char ompi_mpi_real;
extern char ompi_mpi_short;
extern char ompi_mpi_short_int;
extern char ompi_mpi_signed_char;
extern char ompi_mpi_ub;
extern char ompi_mpi_uint16_t;
extern char ompi_mpi_uint32_t;
extern char ompi_mpi_uint64_t;
extern char ompi_mpi_uint8_t;
extern char ompi_mpi_unsigned;
extern char ompi_mpi_unsigned_char;
extern char ompi_mpi_unsigned_long;
extern char ompi_mpi_unsigned_long_long;
extern char ompi_mpi_unsigned_short;
extern char ompi_mpi_wchar;
extern char ompi_mpi_errhandler_null;
extern char ompi_mpi_errors_are_fatal;
extern char ompi_mpi_errors_return;
extern char ompi_mpi_file_null;
extern char ompi_mpi_group_empty;
extern char ompi_mpi_group_null;
extern char ompi_mpi_info_null;
extern char ompi_mpi_op_band;
extern char ompi_mpi_op_bor;
extern char ompi_mpi_op_bxor;
extern char ompi_mpi_op_land;
extern char ompi_mpi_op_lor;
extern char ompi_mpi_op_lxor;
extern char ompi_mpi_op_max;
extern char ompi_mpi_op_maxloc;
extern char ompi_mpi_op_min;
extern char ompi_mpi_op_minloc;
extern char ompi_mpi_op_null;
extern char ompi_mpi_op_prod;
extern char ompi_mpi_op_replace;
extern char ompi_mpi_op_sum;
extern char ompi_request_null;
extern char ompi_mpi_win_null;
extern char ompi_message_no_proc;
#endif
#if defined(OMPI_INTEL)
char ompi_mpi_comm_null[1024];
char ompi_mpi_comm_self[1024];
char ompi_mpi_comm_world[1024];
char ompi_mpi_2cplex[512];
char ompi_mpi_2dblcplex[512];
char ompi_mpi_2dblprec[512];
char ompi_mpi_2int[512];
char ompi_mpi_2integer[512];
char ompi_mpi_2real[512];
char ompi_mpi_aint[512];
char ompi_mpi_byte[512];
char ompi_mpi_c_bool[512];
char ompi_mpi_c_complex[512];
char ompi_mpi_c_double_complex[512];
char ompi_mpi_c_float_complex[512];
char ompi_mpi_c_long_double_complex[512];
char ompi_mpi_char[512];
char ompi_mpi_character[512];
char ompi_mpi_complex16[512];
char ompi_mpi_complex32[512];
char ompi_mpi_complex8[512];
char ompi_mpi_cplex[512];
char ompi_mpi_cxx_bool[512];
char ompi_mpi_cxx_cplex[512];
char ompi_mpi_cxx_dblcplex[512];
char ompi_mpi_cxx_ldblcplex[512];
char ompi_mpi_datatype_null[512];
char ompi_mpi_dblcplex[512];
char ompi_mpi_dblprec[512];
char ompi_mpi_double[512];
char ompi_mpi_double_int[512];
char ompi_mpi_float[512];
char ompi_mpi_float_int[512];
char ompi_mpi_int16_t[512];
char ompi_mpi_int32_t[512];
char ompi_mpi_int64_t[512];
char ompi_mpi_int8_t[512];
char ompi_mpi_int[512];
char ompi_mpi_integer16[512];
char ompi_mpi_integer1[512];
char ompi_mpi_integer2[512];
char ompi_mpi_integer4[512];
char ompi_mpi_integer8[512];
char ompi_mpi_integer[512];
char ompi_mpi_lb[512];
char ompi_mpi_ldblcplex[512];
char ompi_mpi_logical1[512];
char ompi_mpi_logical2[512];
char ompi_mpi_logical4[512];
char ompi_mpi_logical8[512];
char ompi_mpi_logical[512];
char ompi_mpi_long[512];
char ompi_mpi_long_double[512];
char ompi_mpi_long_int[512];
char ompi_mpi_long_long_int[512];
char ompi_mpi_longdbl_int[512];
char ompi_mpi_offset[512];
char ompi_mpi_count[512];
char ompi_message_null[512];
char ompi_mpi_packed[512];
char ompi_mpi_real16[512];
char ompi_mpi_real2[512];
char ompi_mpi_real4[512];
char ompi_mpi_real8[512];
char ompi_mpi_real[512];
char ompi_mpi_short[512];
char ompi_mpi_short_int[512];
char ompi_mpi_signed_char[512];
char ompi_mpi_ub[512];
char ompi_mpi_uint16_t[512];
char ompi_mpi_uint32_t[512];
char ompi_mpi_uint64_t[512];
char ompi_mpi_uint8_t[512];
char ompi_mpi_unsigned[512];
char ompi_mpi_unsigned_char[512];
char ompi_mpi_unsigned_long[512];
char ompi_mpi_unsigned_long_long[512];
char ompi_mpi_unsigned_short[512];
char ompi_mpi_wchar[512];
char ompi_mpi_errhandler_null[1024];
char ompi_mpi_errors_are_fatal[1024];
char ompi_mpi_errors_return[1024];
char ompi_mpi_file_null[1536];
char ompi_mpi_group_empty[256];
char ompi_mpi_group_null[256];
char ompi_mpi_info_null[256];
char ompi_mpi_op_band[2048];
char ompi_mpi_op_bor[2048];
char ompi_mpi_op_bxor[2048];
char ompi_mpi_op_land[2048];
char ompi_mpi_op_lor[2048];
char ompi_mpi_op_lxor[2048];
char ompi_mpi_op_max[2048];
char ompi_mpi_op_maxloc[2048];
char ompi_mpi_op_min[2048];
char ompi_mpi_op_minloc[2048];
char ompi_mpi_op_null[2048];
char ompi_mpi_op_prod[2048];
char ompi_mpi_op_replace[2048];
char ompi_mpi_op_sum[2048];
char ompi_request_null[256];
char ompi_mpi_win_null[512];
char ompi_message_no_proc[512];
#endif

#define EXTERN_ALLOCATED 1
#include "mappers.h"

__thread int in_w=0;
#if defined(INTEL_OMPI) || defined(OMPI_INTEL)
int (*local_MPIR_Dup_fn)(A_MPI_Comm oldcomm, int keyval, void *extra_state, void *attribute_val_in,void *attribute_val_out, int *flag);

int MPIR_Dup_fn(A_MPI_Comm oldcomm, int keyval, void *extra_state, void *attribute_val_in,void *attribute_val_out, int *flag)
{
return local_MPIR_Dup_fn(oldcomm,keyval,extra_state,attribute_val_in,attribute_val_out,flag);
}
#endif
void wrapper_win_copy_function(R_MPI_Win oldwin, int win_keyval, void *extra_state, 
                               void *attribute_val_in, void *attribute_val_out, int *flag)
{
   A_MPI_Win win_tmp;
   win_conv_r2a(&win_tmp,&oldwin);

   (ptr_win_copy_fn)(win_tmp, win_keyval, extra_state, attribute_val_in, attribute_val_out, flag);  
}

void wrapper_win_delete_function(R_MPI_Win win, int win_keyval,void *attribute_val, void *extra_state)
{
   A_MPI_Win win_tmp;
   win_conv_r2a(&win_tmp,&win);

   (ptr_win_dlt_fn)(win_tmp, win_keyval, attribute_val, extra_state);  
}

void wrapper_grequest_query_function(void *extra_state, R_MPI_Status *status)
{
   A_MPI_Status status_ltmp;
   A_MPI_Status *status_tmp=&status_ltmp;
   status_prt_conv_r2a(&status_tmp,&status);

   (ptr_grq_query_fn)(extra_state, status_tmp);  
}

void wrapper_type_copy_attr_fn(R_MPI_Datatype oldtype,int type_keyval, void *extra_state, 
                               void *attribute_val_in,void *attribute_val_out, int *flag)
{
    A_MPI_Datatype datatype_tmp;
    datatype_conv_r2a( &datatype_tmp,&oldtype);

    (ptr_type_cpy_attr_fn)(datatype_tmp, type_keyval, extra_state, attribute_val_in, attribute_val_out, flag);
}

void wrapper_type_delete_attr_fn(R_MPI_Datatype datatype,int type_keyval, void *attribute_val, void *extra_state)
{
    A_MPI_Datatype datatype_tmp;
    datatype_conv_r2a( &datatype_tmp, &datatype);

    (ptr_type_dlt_attr_fn)(datatype_tmp, type_keyval, attribute_val, extra_state);
}
void wrapper_user_function(void* invec, void* inoutvec, int* len,R_MPI_Datatype* type)
{
    A_MPI_Datatype datatype_tmp;
    datatype_conv_r2a( &datatype_tmp,type);

    (ptr_user_func)(invec, inoutvec, len, &datatype_tmp);
}

static void wrapper_comm_handler_function(R_MPI_Comm* comm, int* err, ...)
{
    A_MPI_Comm comm_tmp;
    comm_conv_r2a_static(&comm_tmp,comm);

    (ptr_comm_fn_handler)(&comm_tmp, err, "", NULL);
}

static void wrapper_handler_function(R_MPI_Comm* comm, int* err, ...)
{
    A_MPI_Handler_function *hf;
    A_MPI_Comm comm_tmp;
    comm_conv_r2a_static(&comm_tmp,comm);
    communicator_fn_translation_get(comm_tmp, &hf);

    hf(&comm_tmp, err, "", NULL);
}
int print(FILE* stream, const char* format, ...)
{
    int ret_status = 0;
#ifdef DEBUG
    va_list args;
    va_start(args,format);
    ret_status = fprintf(stream, format, args);
    va_end(args);
#endif 
    return ret_status;
}

typedef struct {
    A_MPI_Copy_function* cp_function;
    A_MPI_Delete_function* del_function;
} myKeyval_functions_t;

typedef struct {
    int keyval;
    myKeyval_functions_t* functions;
    UT_hash_handle hh;
} myKeyval_translation_t;

typedef struct {
    myKeyval_translation_t* table;
    pthread_mutex_t lock;
} myKeyval_translation_table_t;

static myKeyval_translation_table_t myKeyval_table = { NULL,
    PTHREAD_MUTEX_INITIALIZER
};

static myKeyval_translation_table_t* get_myKeyval_table() {
    return &myKeyval_table;
}

static inline void myKeyval_read_lock() {
    pthread_mutex_lock(&get_myKeyval_table()->lock);
}

static inline void myKeyval_read_unlock() {
    pthread_mutex_unlock(&get_myKeyval_table()->lock);
}

static inline void myKeyval_write_lock() {
    pthread_mutex_lock(&get_myKeyval_table()->lock);
}

static inline void myKeyval_write_unlock() {
    pthread_mutex_unlock(&get_myKeyval_table()->lock);
}
static void myKeyval_translation_add(int keyval,
        myKeyval_functions_t* functions)
{
    myKeyval_translation_t* conv;
    conv = malloc(sizeof(myKeyval_translation_t));
    conv->keyval = keyval;
    conv->functions = functions;
    myKeyval_write_lock();
    HASH_ADD_INT(get_myKeyval_table()->table, keyval, conv);
    HASH_FIND_INT(get_myKeyval_table()->table, &keyval, conv);
    assert(conv != NULL);
    print(stderr, "\t\tREGISTER keyval %d -> (%p, %p)\n", keyval,
            functions->cp_function, functions->del_function);
    myKeyval_write_unlock();
}

static myKeyval_functions_t* myKeyval_translation_get(int keyval)
{
    myKeyval_functions_t* functions;
    myKeyval_translation_t* conv;
    myKeyval_read_lock();
    HASH_FIND_INT(get_myKeyval_table()->table, &keyval, conv);
    if (conv != NULL)
    {
        functions = conv->functions;
        print(stderr, "\t\tkeyval %d -> (%p, %p)\n", keyval, functions->cp_function,
                functions->del_function);
    }
    else
    {
        return NULL;
    }
    myKeyval_read_unlock();
    return functions;
}

static void myKeyval_translation_del(int keyval)
{
    myKeyval_translation_t* conv;
    myKeyval_write_lock();
    HASH_FIND_INT(get_myKeyval_table()->table, &keyval, conv);
    assert(conv != NULL);
    HASH_DEL(get_myKeyval_table()->table, conv);
    print(stderr, "\t\tDELETE keyval %d\n", keyval);
    myKeyval_write_unlock();
    free(conv);
}
static int wrapper_copy_function(R_MPI_Comm comm, int keyval, void* extra_state,
        void* attribute_val_in, void* attribute_val_out, int* flag)
{
    A_MPI_Comm comm_tmp;
    comm_conv_r2a_static(&comm_tmp, &comm);
    A_MPI_Copy_function* ptr_copy_func = myKeyval_translation_get(keyval)->cp_function;
    int res = (ptr_copy_func)(comm_tmp, keyval, extra_state, attribute_val_in,attribute_val_out, flag);
    ptr_copy_func = NULL;
    return  error_code_conv_r2a(res);
}


static int wrapper_delete_function(R_MPI_Comm comm, int keyval,
        void* attribute_val, void* extra_state)
{
    A_MPI_Comm comm_tmp;
    comm_conv_r2a_static(&comm_tmp, &comm);
    A_MPI_Delete_function* ptr_delete_func=myKeyval_translation_get(keyval)->del_function;
    int res = (ptr_delete_func)(comm_tmp, keyval, attribute_val, extra_state);
    ptr_delete_func = NULL;
    return error_code_conv_r2a(res);
}

__asm__(
".global CCMPI_Comm_create_keyval\n"
".weak MPI_Comm_create_keyval\n"
".set MPI_Comm_create_keyval,CCMPI_Comm_create_keyval\n"
".extern in_w\n"
".extern A_MPI_Comm_create_keyval\n"
".extern R_MPI_Comm_create_keyval\n"
".type CCMPI_Comm_create_keyval,@function\n"
".text\n"
"CCMPI_Comm_create_keyval:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_create_keyval\n"
"jmp *A_MPI_Comm_create_keyval@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_create_keyval:\n"
"jmp *R_MPI_Comm_create_keyval@GOTPCREL(%rip)\n"
//".size PMPI_Comm_create_keyval,.-PMPI_Comm_create_keyval\n"
);



int (*LOCAL_MPI_Comm_create_keyval)(R_MPI_Comm_copy_attr_function *,R_MPI_Delete_function *,int *,void * );

int A_MPI_Comm_create_keyval(A_MPI_Comm_copy_attr_function * copy_fn,A_MPI_Comm_delete_attr_function * delete_fn,int * keyval,void * extra_state)
{
in_w=1;     
#ifdef DEBUG
    printf("entre : A_MPI_Comm_create_keyval\n");
#endif
    myKeyval_functions_t* functions = NULL;
    R_MPI_Copy_function * copy_fn_tmp;
    R_MPI_Delete_function* delete_fn_tmp;
    if ((void*)copy_fn == (void*)A_MPI_NULL_COPY_FN)
    { 
        copy_fn_tmp = R_MPI_NULL_COPY_FN;
    }
    else if((void*) copy_fn == A_MPI_COMM_DUP_FN)
    { 
        copy_fn_tmp = R_MPI_COMM_DUP_FN;
    }
    else
    { 
        copy_fn_tmp = wrapper_copy_function;
    }
    if(delete_fn == ((A_MPI_Delete_function*) A_MPI_NULL_DELETE_FN)) {
        delete_fn_tmp = R_MPI_NULL_DELETE_FN;
    }
    else
    { 
        delete_fn_tmp = wrapper_delete_function;
    }

    int ret_tmp= LOCAL_MPI_Comm_create_keyval( copy_fn_tmp, delete_fn_tmp, keyval, extra_state);

    functions = (myKeyval_functions_t*) malloc(sizeof(myKeyval_functions_t));
    functions->cp_function = copy_fn;
    functions->del_function = delete_fn;
    myKeyval_translation_add(*keyval, functions);
#ifdef DEBUG
    printf("sort : A_MPI_Comm_create_keyval\n");
#endif
in_w=0;
    return error_code_conv_r2a(ret_tmp);
}

int R_MPI_Comm_create_keyval(R_MPI_Copy_function * copy_fn,R_MPI_Delete_function * delete_fn,int * keyval,void * extra_state)
{
#ifdef DEBUF
 printf("entre : R_MPI_Comm_create_keyval\n");
#endif
 int ret_tmp = LOCAL_MPI_Comm_create_keyval( copy_fn, delete_fn, keyval, extra_state);
#ifdef DEBUG
 printf("sort : R_MPI_Comm_create_keyval\n");
#endif
 return ret_tmp;
}

__asm__(
".global CCMPI_Keyval_create\n"
".weak MPI_Keyval_create\n"
".set MPI_Keyval_create,CCMPI_Keyval_create\n"
".extern in_w\n"
".extern A_MPI_Keyval_create\n"
".extern R_MPI_Keyval_create\n"
".type CCMPI_Keyval_create,@function\n"
".text\n"
"CCMPI_Keyval_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Keyval_create\n"
"jmp *A_MPI_Keyval_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Keyval_create:\n"
"jmp *R_MPI_Keyval_create@GOTPCREL(%rip)\n"
//".size PMPI_Keyval_create,.-PMPI_Keyval_create\n"
);


int (*LOCAL_MPI_Keyval_create)(R_MPI_Copy_function *,R_MPI_Delete_function *,int *,void *);

int A_MPI_Keyval_create(A_MPI_Copy_function * copy_fn,A_MPI_Delete_function * delete_fn,int * keyval,void * extra_state)
{  
in_w=1; 
#ifdef DEBUG
    printf("entre : A_MPI_Keyva_create\n");
#endif
    myKeyval_functions_t* functions = NULL;
    R_MPI_Copy_function * copy_fn_tmp;
    R_MPI_Delete_function* delete_fn_tmp;
    if ((void*)copy_fn == (void*)A_MPI_NULL_COPY_FN)
    { 
        copy_fn_tmp = R_MPI_NULL_COPY_FN;
    }
    else if((void*) copy_fn == A_MPI_COMM_DUP_FN)
    { 
        copy_fn_tmp = R_MPI_COMM_DUP_FN;
    }
    else if((void*) copy_fn == A_MPI_DUP_FN)
    {
        copy_fn_tmp = R_MPI_DUP_FN;
    }
    else
    { 
        copy_fn_tmp = wrapper_copy_function;
    }
    if(delete_fn == ((A_MPI_Delete_function*) A_MPI_NULL_DELETE_FN)) {
        delete_fn_tmp = R_MPI_NULL_DELETE_FN;
    }
    else
    { 
        delete_fn_tmp = wrapper_delete_function;
    }

    int ret_tmp= LOCAL_MPI_Keyval_create( copy_fn_tmp, delete_fn_tmp, keyval, extra_state);

    functions = (myKeyval_functions_t*) malloc(sizeof(myKeyval_functions_t));
    functions->cp_function = copy_fn;
    functions->del_function = delete_fn;
    myKeyval_translation_add(*keyval, functions);
#ifdef DEBUG
    printf("sort : A_MPI_Keyval_create\n");
#endif
in_w=0;
    return error_code_conv_r2a(ret_tmp);
}

int R_MPI_Keyval_create(R_MPI_Copy_function * copy_fn,R_MPI_Delete_function * delete_fn,int * keyval,void * extra_state)
{
#ifdef DEBUG
    printf("entre : R_MPI_create_keyval\n");
#endif
    int ret_tmp = LOCAL_MPI_Keyval_create(copy_fn, delete_fn, keyval, extra_state);
#ifdef DEBUG    
    printf("sort: R_MPI_create_keyval\n");
#endif
    return ret_tmp;
}


__asm__(
".global CCMPI_Comm_free_keyval\n"
".weak MPI_Comm_free_keyval\n"
".set MPI_Comm_free_keyval,CCMPI_Comm_free_keyval\n"
".extern in_w\n"
".extern A_MPI_Comm_free_keyval\n"
".extern R_MPI_Comm_free_keyval\n"
".type CCMPI_Comm_free_keyval,@function\n"
".text\n"
"CCMPI_Comm_free_keyval:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x08, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_free_keyval\n"
"jmp *A_MPI_Comm_free_keyval@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_free_keyval:\n"
"jmp *R_MPI_Comm_free_keyval@GOTPCREL(%rip)\n"
//".size PMPI_Comm_free_keyval,.-PMPI_Comm_free_keyval\n"
);


int (*LOCAL_MPI_Comm_free_keyval)(int *);

int A_MPI_Comm_free_keyval(int * comm_keyval)
{
in_w=1;
#ifdef DEBUG
    printf("entre : A_MPI_Comm_free_keyval\n");
#endif

    int ret_tmp = LOCAL_MPI_Comm_free_keyval(comm_keyval);

    *comm_keyval=A_MPI_KEYVAL_INVALID;
#ifdef DEBUG
    printf("sort : A_MPI_Comm_free_keyval\n");
#endif      
in_w=0;
    return error_code_conv_r2a(ret_tmp);
}

int R_MPI_Comm_free_keyval(int * comm_keyval)
{
#ifdef DEBUG
     printf("entre : R_MPI_Comm_free_keyval\n");
#endif
     int ret_tmp = LOCAL_MPI_Comm_free_keyval(comm_keyval);
#ifdef DEBUG
     printf("sort : R_MPI_Comm_free_keyval\n");
#endif
     return ret_tmp;
}

__asm__(
".global CCMPI_Keyval_free\n"
".weak MPI_Keyval_free\n"
".set MPI_Keyval_free,CCMPI_Keyval_free\n"
".extern in_w\n"
".extern A_MPI_Keyval_free\n"
".extern R_MPI_Keyval_free\n"
".type CCMPI_Keyval_free,@function\n"
".text\n"
"CCMPI_Keyval_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x08, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Keyval_free\n"
"jmp *A_MPI_Keyval_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Keyval_free:\n"
"jmp *R_MPI_Keyval_free@GOTPCREL(%rip)\n"
//".size PMPI_Keyval_free,.-PMPI_Keyval_free\n"
);

int (*LOCAL_MPI_Keyval_free)(int *);

int A_MPI_Keyval_free(int * keyval)
{
in_w=1;
#ifdef DEBUG
    printf("entre : A_MPI_Keyval_free\n");
#endif
    int ret_tmp =  LOCAL_MPI_Keyval_free(keyval);
    *keyval=A_MPI_KEYVAL_INVALID;
#ifdef DEBUG
    printf("entre : A_MPI_Keyval_free\n");
#endif
in_w=0;
    return error_code_conv_r2a(ret_tmp);
}

int R_MPI_Keyval_free(int * keyval)
{
#ifdef DEBUG
      printf("entre : R_MPI_Keyval_free\n");
#endif      
      int ret_tmp = LOCAL_MPI_Keyval_free(keyval);
#ifdef DEBUG      
      printf("sort : R_MPI_Keyval_free\n");
#endif      
      return ret_tmp;
}
int wrapper_datarep_read_conversion_fn(void * userbuf, R_MPI_Datatype datatype, int count, void *filebuf,
        R_MPI_Offset position, void *extra_state)
{
    A_MPI_Datatype datatype_tmp;
    datatype_conv_r2a(&datatype_tmp,&datatype);

    A_MPI_Offset offset_tmp = (A_MPI_Offset) position;
    int ret_tmp = (ptr_read_conversion_fn)(userbuf, datatype_tmp, count, filebuf, offset_tmp, extra_state);
    return ret_tmp;
}

int wrapper_datarep_write_conversion_fn(void * userbuf, R_MPI_Datatype datatype, int count, void *filebuf,
        R_MPI_Offset position, void *extra_state)
{
    A_MPI_Datatype datatype_tmp;
    datatype_conv_r2a(&datatype_tmp,&datatype);
    A_MPI_Offset offset_tmp = (A_MPI_Offset) position;
    int ret_tmp = (ptr_write_conversion_fn)(userbuf, datatype_tmp, count, filebuf, offset_tmp, extra_state);
    return ret_tmp;
}

int wrapper_datarep_extent_fn(R_MPI_Datatype datatype, R_MPI_Aint *file_extent, void* extra_state)
{
    A_MPI_Datatype datatype_tmp;
    datatype_conv_r2a(&datatype_tmp,&datatype);
    A_MPI_Aint *file_extent_tmp = (A_MPI_Aint*) file_extent;
    int ret_tmp = (ptr_extent_fn)(datatype_tmp, file_extent_tmp, extra_state);
    return ret_tmp;
}
int MPI_Win_get_attr(A_MPI_Win win,int win_keyval,void * attribute_val,int * flag);
int (*LOCAL_MPI_Win_get_attr)(R_MPI_Win,int,void *,int *);

__asm__(
".global CCMPI_Win_get_attr\n"
".weak MPI_Win_get_attr\n"
".set MPI_Win_get_attr,CCMPI_Win_get_attr\n"
".extern in_w\n"
".extern A_MPI_Win_get_attr\n"
".extern R_MPI_Win_get_attr\n"
".type CCMPI_Win_get_attr,@function\n"
".text\n"
"CCMPI_Win_get_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_get_attr\n"
"jmp *A_MPI_Win_get_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_get_attr:\n"
"jmp *R_MPI_Win_get_attr@GOTPCREL(%rip)\n"
//".size PMPI_Win_get_attr,.-PMPI_Win_get_attr\n"
);

int A_MPI_Win_get_attr(A_MPI_Win win,int win_keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_get_attr\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int win_keyval_tmp;
my_keyval_a2r(&win_keyval,&win_keyval_tmp);
long attribute_val_ltmp;
void *attribute_val_tmp=&attribute_val_ltmp;
int ret_tmp= LOCAL_MPI_Win_get_attr( win_tmp, win_keyval_tmp, attribute_val_tmp, flag);
switch(win_keyval_tmp)
{
   case R_MPI_WIN_BASE: //void*
      buffer_conv_r2a(&attribute_val,&attribute_val_tmp);
   case R_MPI_WIN_SIZE: //MPI_Aint
      (A_MPI_Aint *) attribute_val = (A_MPI_Aint *) attribute_val_tmp;
   case R_MPI_WIN_DISP_UNIT:
      win_attr_flavor_conv_r2a(attribute_val,attribute_val_tmp);
   case R_MPI_WIN_CREATE_FLAVOR ://int*
      win_attr_flavor_conv_r2a(attribute_val,attribute_val_tmp);
   case R_MPI_WIN_MODEL:
      win_attr_model_conv_r2a(attribute_val,attribute_val_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_get_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_get_attr(R_MPI_Win win,int win_keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_get_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Win_get_attr( win, win_keyval, attribute_val, flag);
#ifdef DEBUG
printf("sort : R_MPI_Win_get_attr\n");
#endif
return ret_tmp;
}
int MPI_Win_set_attr(A_MPI_Win win,int win_keyval,void * attribute_val);
int (*LOCAL_MPI_Win_set_attr)(R_MPI_Win,int,void *);
__asm__(
".global CCMPI_Win_set_attr\n"
".weak MPI_Win_set_attr\n"
".set MPI_Win_set_attr,CCMPI_Win_set_attr\n"
".extern in_w\n"
".extern A_MPI_Win_set_attr\n"
".extern R_MPI_Win_set_attr\n"
".type CCPMPI_Win_set_attr,@function\n"
".text\n"
"CCMPI_Win_set_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_set_attr\n"
"jmp *A_MPI_Win_set_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_set_attr:\n"
"jmp *R_MPI_Win_set_attr@GOTPCREL(%rip)\n"
//".size PMPI_Win_set_attr,.-PMPI_Win_set_attr\n"

);
int A_MPI_Win_set_attr(A_MPI_Win win,int win_keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_set_attr\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int win_keyval_tmp;
my_keyval_a2r(&win_keyval,&win_keyval_tmp);
void *attribute_val_tmp;
switch(win_keyval_tmp)
{
   case R_MPI_WIN_BASE: //void*
      buffer_conv_a2r(&attribute_val,&attribute_val_tmp);
   case R_MPI_WIN_SIZE: //MPI_Aint
      (R_MPI_Aint *) attribute_val = (R_MPI_Aint *) attribute_val_tmp;
   case R_MPI_WIN_DISP_UNIT :
      win_attr_flavor_conv_a2r(attribute_val,attribute_val_tmp);
   case R_MPI_WIN_CREATE_FLAVOR : 
      win_attr_flavor_conv_a2r(attribute_val,attribute_val_tmp);
   case R_MPI_WIN_MODEL://int*
      win_attr_model_conv_a2r(attribute_val,attribute_val_tmp);
}
int ret_tmp= LOCAL_MPI_Win_set_attr( win_tmp, win_keyval_tmp, attribute_val_tmp);
win_conv_r2a(&win,&win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_set_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_set_attr(R_MPI_Win win,int win_keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_set_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Win_set_attr( win, win_keyval, attribute_val);
#ifdef DEBUG
printf("sort : R_MPI_Win_set_attr\n");
#endif
return ret_tmp;
}
int MPI_Send(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm);
int (*LOCAL_MPI_Send)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm);

__asm__(
".global CCMPI_Send\n"
".weak MPI_Send\n"
".set MPI_Send,CCMPI_Send\n"
".extern in_w\n"
".extern A_MPI_Send\n"
".extern R_MPI_Send\n"
".type CCMPI_Send,@function\n"
".text\n"
"CCMPI_Send:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Send\n"
"jmp *A_MPI_Send@GOTPCREL(%rip)\n"
"inwrap_MPI_Send:\n"
"jmp *R_MPI_Send@GOTPCREL(%rip)\n"

);

int A_MPI_Send(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Send\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Send( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Send\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Send(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Send\n");
#endif
int ret_tmp= LOCAL_MPI_Send( buf, count, datatype, dest, tag, comm);
#ifdef DEBUG
printf("sort : R_MPI_Send\n");
#endif
return ret_tmp;
}
int MPI_Recv(void * buf,int count,A_MPI_Datatype datatype,int source,int tag,A_MPI_Comm comm,A_MPI_Status * status);
int (*LOCAL_MPI_Recv)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Status *);

__asm__(
".global CCMPI_Recv\n"
".weak MPI_Recv\n"
".set MPI_Recv,CCMPI_Recv\n"
".extern in_w\n"
".extern A_MPI_Recv\n"
".extern R_MPI_Recv\n"
".type CCMPI_Recv,@function\n"
".text\n"
"CCMPI_Recv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Recv\n"
"jmp *A_MPI_Recv@GOTPCREL(%rip)\n"
"inwrap_MPI_Recv:\n"
"jmp *R_MPI_Recv@GOTPCREL(%rip)\n"

);

int A_MPI_Recv(void * buf,int count,A_MPI_Datatype datatype,int source,int tag,A_MPI_Comm comm,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Recv\n");
#endif
in_w=1;

void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int source_tmp;
source_conv_a2r(&source,&source_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Recv( buf_tmp, count, datatype_tmp, source_tmp, tag_tmp, comm_tmp, status_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Recv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Recv(void * buf,int count,R_MPI_Datatype datatype,int source,int tag,R_MPI_Comm comm,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Recv\n");
#endif
int ret_tmp= LOCAL_MPI_Recv( buf, count, datatype, source, tag, comm, status);
#ifdef DEBUG
printf("sort : R_MPI_Recv\n");
#endif
return ret_tmp;
}
int MPI_Get_count(A_MPI_Status * status,A_MPI_Datatype datatype,int * count);
int (*LOCAL_MPI_Get_count)(R_MPI_Status *,R_MPI_Datatype,int *);

__asm__(
".global CCMPI_Get_count\n"
".weak MPI_Get_count\n"
".set MPI_Get_count,CCMPI_Get_count\n"
".extern in_w\n"
".extern A_MPI_Get_count\n"
".extern R_MPI_Get_count\n"
".type CCMPI_Get_count,@function\n"
".text\n"
"CCMPI_Get_count:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_count\n"
"jmp *A_MPI_Get_count@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_count:\n"
"jmp *R_MPI_Get_count@GOTPCREL(%rip)\n"

);

int A_MPI_Get_count(A_MPI_Status * status,A_MPI_Datatype datatype,int * count)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_count\n");
#endif
in_w=1;

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
status_prt_conv_a2r(&status,&status_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);

int ret_tmp= LOCAL_MPI_Get_count( status_tmp, datatype_tmp, count);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_count\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_count(R_MPI_Status * status,R_MPI_Datatype datatype,int * count)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_count\n");
#endif
int ret_tmp= LOCAL_MPI_Get_count( status, datatype, count);
#ifdef DEBUG
printf("sort : R_MPI_Get_count\n");
#endif
return ret_tmp;
}
int MPI_Bsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm);
int (*LOCAL_MPI_Bsend)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm);

__asm__(
".global CCMPI_Bsend\n"
".weak MPI_Bsend\n"
".set MPI_Bsend,CCMPI_Bsend\n"
".extern in_w\n"
".extern A_MPI_Bsend\n"
".extern R_MPI_Bsend\n"
".type CCMPI_Bsend,@function\n"
".text\n"
"CCMPI_Bsend:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Bsend\n"
"jmp *A_MPI_Bsend@GOTPCREL(%rip)\n"
"inwrap_MPI_Bsend:\n"
"jmp *R_MPI_Bsend@GOTPCREL(%rip)\n"

);

int A_MPI_Bsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Bsend\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Bsend( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Bsend\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Bsend(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Bsend\n");
#endif
int ret_tmp= LOCAL_MPI_Bsend( buf, count, datatype, dest, tag, comm);
#ifdef DEBUG
printf("sort : R_MPI_Bsend\n");
#endif
return ret_tmp;
}
int MPI_Ssend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm);
int (*LOCAL_MPI_Ssend)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm);

__asm__(
".global CCMPI_Ssend\n"
".weak MPI_Ssend\n"
".set MPI_Ssend,CCMPI_Ssend\n"
".extern in_w\n"
".extern A_MPI_Ssend\n"
".extern R_MPI_Ssend\n"
".type CCMPI_Ssend,@function\n"
".text\n"
"CCMPI_Ssend:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ssend\n"
"jmp *A_MPI_Ssend@GOTPCREL(%rip)\n"
"inwrap_MPI_Ssend:\n"
"jmp *R_MPI_Ssend@GOTPCREL(%rip)\n"

);

int A_MPI_Ssend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Ssend\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Ssend( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ssend\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ssend(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Ssend\n");
#endif
int ret_tmp= LOCAL_MPI_Ssend( buf, count, datatype, dest, tag, comm);
#ifdef DEBUG
printf("sort : R_MPI_Ssend\n");
#endif
return ret_tmp;
}
int MPI_Rsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm);
int (*LOCAL_MPI_Rsend)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm);

__asm__(
".global CCMPI_Rsend\n"
".weak MPI_Rsend\n"
".set MPI_Rsend,CCMPI_Rsend\n"
".extern in_w\n"
".extern A_MPI_Rsend\n"
".extern R_MPI_Rsend\n"
".type CCMPI_Rsend,@function\n"
".text\n"
"CCMPI_Rsend:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Rsend\n"
"jmp *A_MPI_Rsend@GOTPCREL(%rip)\n"
"inwrap_MPI_Rsend:\n"
"jmp *R_MPI_Rsend@GOTPCREL(%rip)\n"

);

int A_MPI_Rsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Rsend\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Rsend( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Rsend\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Rsend(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Rsend\n");
#endif
int ret_tmp= LOCAL_MPI_Rsend( buf, count, datatype, dest, tag, comm);
#ifdef DEBUG
printf("sort : R_MPI_Rsend\n");
#endif
return ret_tmp;
}
int MPI_Buffer_attach(void * buffer,int size);
int (*LOCAL_MPI_Buffer_attach)(void *,int);

__asm__(
".global CCMPI_Buffer_attach\n"
".weak MPI_Buffer_attach\n"
".set MPI_Buffer_attach,CCMPI_Buffer_attach\n"
".extern in_w\n"
".extern A_MPI_Buffer_attach\n"
".extern R_MPI_Buffer_attach\n"
".type CCMPI_Buffer_attach,@function\n"
".text\n"
"CCMPI_Buffer_attach:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Buffer_attach\n"
"jmp *A_MPI_Buffer_attach@GOTPCREL(%rip)\n"
"inwrap_MPI_Buffer_attach:\n"
"jmp *R_MPI_Buffer_attach@GOTPCREL(%rip)\n"

);

int A_MPI_Buffer_attach(void * buffer,int size)
{
#ifdef DEBUG
printf("entre : A_MPI_Buffer_attach\n");
#endif
in_w=1;

void * buffer_tmp;
buffer_conv_a2r(&buffer,&buffer_tmp);


int ret_tmp= LOCAL_MPI_Buffer_attach( buffer_tmp, size);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Buffer_attach\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Buffer_attach(void * buffer,int size)
{
#ifdef DEBUG
printf("entre : R_MPI_Buffer_attach\n");
#endif
int ret_tmp= LOCAL_MPI_Buffer_attach( buffer, size);
#ifdef DEBUG
printf("sort : R_MPI_Buffer_attach\n");
#endif
return ret_tmp;
}
int MPI_Buffer_detach(void * buffer_addr,int * size);
int (*LOCAL_MPI_Buffer_detach)(void *,int *);

__asm__(
".global CCMPI_Buffer_detach\n"
".weak MPI_Buffer_detach\n"
".set MPI_Buffer_detach,CCMPI_Buffer_detach\n"
".extern in_w\n"
".extern A_MPI_Buffer_detach\n"
".extern R_MPI_Buffer_detach\n"
".type CCMPI_Buffer_detach,@function\n"
".text\n"
"CCMPI_Buffer_detach:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Buffer_detach\n"
"jmp *A_MPI_Buffer_detach@GOTPCREL(%rip)\n"
"inwrap_MPI_Buffer_detach:\n"
"jmp *R_MPI_Buffer_detach@GOTPCREL(%rip)\n"

);

int A_MPI_Buffer_detach(void * buffer_addr,int * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Buffer_detach\n");
#endif
in_w=1;

void * buffer_addr_tmp;
buffer_conv_a2r(&buffer_addr,&buffer_addr_tmp);

int ret_tmp= LOCAL_MPI_Buffer_detach( buffer_addr_tmp, size);
buffer_conv_r2a(&buffer_addr,&buffer_addr_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Buffer_detach\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Buffer_detach(void * buffer_addr,int * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Buffer_detach\n");
#endif
int ret_tmp= LOCAL_MPI_Buffer_detach( buffer_addr, size);
#ifdef DEBUG
printf("sort : R_MPI_Buffer_detach\n");
#endif
return ret_tmp;
}
int MPI_Isend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Isend)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Isend\n"
".weak MPI_Isend\n"
".set MPI_Isend,CCMPI_Isend\n"
".extern in_w\n"
".extern A_MPI_Isend\n"
".extern R_MPI_Isend\n"
".type CCMPI_Isend,@function\n"
".text\n"
"CCMPI_Isend:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Isend\n"
"jmp *A_MPI_Isend@GOTPCREL(%rip)\n"
"inwrap_MPI_Isend:\n"
"jmp *R_MPI_Isend@GOTPCREL(%rip)\n"

);

int A_MPI_Isend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Isend\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Isend( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Isend\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Isend(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Isend\n");
#endif
int ret_tmp= LOCAL_MPI_Isend( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Isend\n");
#endif
return ret_tmp;
}
int MPI_Ibsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ibsend)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ibsend\n"
".weak MPI_Ibsend\n"
".set MPI_Ibsend,CCMPI_Ibsend\n"
".extern in_w\n"
".extern A_MPI_Ibsend\n"
".extern R_MPI_Ibsend\n"
".type CCMPI_Ibsend,@function\n"
".text\n"
"CCMPI_Ibsend:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ibsend\n"
"jmp *A_MPI_Ibsend@GOTPCREL(%rip)\n"
"inwrap_MPI_Ibsend:\n"
"jmp *R_MPI_Ibsend@GOTPCREL(%rip)\n"

);

int A_MPI_Ibsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ibsend\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ibsend( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ibsend\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ibsend(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ibsend\n");
#endif
int ret_tmp= LOCAL_MPI_Ibsend( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ibsend\n");
#endif
return ret_tmp;
}
int MPI_Issend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Issend)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Issend\n"
".weak MPI_Issend\n"
".set MPI_Issend,CCMPI_Issend\n"
".extern in_w\n"
".extern A_MPI_Issend\n"
".extern R_MPI_Issend\n"
".type CCMPI_Issend,@function\n"
".text\n"
"CCMPI_Issend:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Issend\n"
"jmp *A_MPI_Issend@GOTPCREL(%rip)\n"
"inwrap_MPI_Issend:\n"
"jmp *R_MPI_Issend@GOTPCREL(%rip)\n"

);

int A_MPI_Issend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Issend\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Issend( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Issend\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Issend(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Issend\n");
#endif
int ret_tmp= LOCAL_MPI_Issend( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Issend\n");
#endif
return ret_tmp;
}
int MPI_Irsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Irsend)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Irsend\n"
".weak MPI_Irsend\n"
".set MPI_Irsend,CCMPI_Irsend\n"
".extern in_w\n"
".extern A_MPI_Irsend\n"
".extern R_MPI_Irsend\n"
".type CCMPI_Irsend,@function\n"
".text\n"
"CCMPI_Irsend:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Irsend\n"
"jmp *A_MPI_Irsend@GOTPCREL(%rip)\n"
"inwrap_MPI_Irsend:\n"
"jmp *R_MPI_Irsend@GOTPCREL(%rip)\n"

);

int A_MPI_Irsend(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Irsend\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Irsend( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Irsend\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Irsend(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Irsend\n");
#endif
int ret_tmp= LOCAL_MPI_Irsend( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Irsend\n");
#endif
return ret_tmp;
}
int MPI_Irecv(void * buf,int count,A_MPI_Datatype datatype,int source,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Irecv)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Irecv\n"
".weak MPI_Irecv\n"
".set MPI_Irecv,CCMPI_Irecv\n"
".extern in_w\n"
".extern A_MPI_Irecv\n"
".extern R_MPI_Irecv\n"
".type CCMPI_Irecv,@function\n"
".text\n"
"CCMPI_Irecv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Irecv\n"
"jmp *A_MPI_Irecv@GOTPCREL(%rip)\n"
"inwrap_MPI_Irecv:\n"
"jmp *R_MPI_Irecv@GOTPCREL(%rip)\n"

);

int A_MPI_Irecv(void * buf,int count,A_MPI_Datatype datatype,int source,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Irecv\n");
#endif
in_w=1;

void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int source_tmp;
source_conv_a2r(&source,&source_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Irecv( buf_tmp, count, datatype_tmp, source_tmp, tag_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Irecv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Irecv(void * buf,int count,R_MPI_Datatype datatype,int source,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Irecv\n");
#endif
int ret_tmp= LOCAL_MPI_Irecv( buf, count, datatype, source, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Irecv\n");
#endif
return ret_tmp;
}
int MPI_Wait(A_MPI_Request * request,A_MPI_Status * status);
int (*LOCAL_MPI_Wait)(R_MPI_Request *,R_MPI_Status *);

__asm__(
".global CCMPI_Wait\n"
".weak MPI_Wait\n"
".set MPI_Wait,CCMPI_Wait\n"
".extern in_w\n"
".extern A_MPI_Wait\n"
".extern R_MPI_Wait\n"
".type CCMPI_Wait,@function\n"
".text\n"
"CCMPI_Wait:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Wait\n"
"jmp *A_MPI_Wait@GOTPCREL(%rip)\n"
"inwrap_MPI_Wait:\n"
"jmp *R_MPI_Wait@GOTPCREL(%rip)\n"

);

int A_MPI_Wait(A_MPI_Request * request,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Wait\n");
#endif
in_w=1;

R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
request_ptr_conv_a2r(&request,&request_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Wait( request_tmp, status_tmp);
if(ret_tmp == R_MPI_SUCCESS){
 if(*request_tmp == R_MPI_REQUEST_NULL){
request_ptr_delete(&request,&request_tmp);
}
}
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Wait\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Wait(R_MPI_Request * request,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Wait\n");
#endif
int ret_tmp= LOCAL_MPI_Wait( request, status);
#ifdef DEBUG
printf("sort : R_MPI_Wait\n");
#endif
return ret_tmp;
}
int MPI_Test(A_MPI_Request * request,int * flag,A_MPI_Status * status);
int (*LOCAL_MPI_Test)(R_MPI_Request *,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Test\n"
".weak MPI_Test\n"
".set MPI_Test,CCMPI_Test\n"
".extern in_w\n"
".extern A_MPI_Test\n"
".extern R_MPI_Test\n"
".type CCMPI_Test,@function\n"
".text\n"
"CCMPI_Test:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Test\n"
"jmp *A_MPI_Test@GOTPCREL(%rip)\n"
"inwrap_MPI_Test:\n"
"jmp *R_MPI_Test@GOTPCREL(%rip)\n"

);

int A_MPI_Test(A_MPI_Request * request,int * flag,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Test\n");
#endif
in_w=1;

R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
request_ptr_conv_a2r(&request,&request_tmp);

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Test( request_tmp, flag, status_tmp);
if(ret_tmp == R_MPI_SUCCESS){
if(*flag)
 if(*request_tmp == R_MPI_REQUEST_NULL){
request_ptr_delete(&request,&request_tmp);
}
}

status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Test\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Test(R_MPI_Request * request,int * flag,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Test\n");
#endif
int ret_tmp= LOCAL_MPI_Test( request, flag, status);
#ifdef DEBUG
printf("sort : R_MPI_Test\n");
#endif
return ret_tmp;
}
int MPI_Request_free(A_MPI_Request * request);
int (*LOCAL_MPI_Request_free)(R_MPI_Request *);

__asm__(
".global CCMPI_Request_free\n"
".weak MPI_Request_free\n"
".set MPI_Request_free,CCMPI_Request_free\n"
".extern in_w\n"
".extern A_MPI_Request_free\n"
".extern R_MPI_Request_free\n"
".type CCMPI_Request_free,@function\n"
".text\n"
"CCMPI_Request_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Request_free\n"
"jmp *A_MPI_Request_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Request_free:\n"
"jmp *R_MPI_Request_free@GOTPCREL(%rip)\n"

);

int A_MPI_Request_free(A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Request_free\n");
#endif
in_w=1;

R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
request_ptr_conv_a2r(&request,&request_tmp);
int ret_tmp= LOCAL_MPI_Request_free( request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_pers_ptr_delete(&request,&request_tmp);
request_ptr_delete(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Request_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Request_free(R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Request_free\n");
#endif
int ret_tmp= LOCAL_MPI_Request_free( request);
#ifdef DEBUG
printf("sort : R_MPI_Request_free\n");
#endif
return ret_tmp;
}
int MPI_Iprobe(int source,int tag,A_MPI_Comm comm,int * flag,A_MPI_Status * status);
int (*LOCAL_MPI_Iprobe)(int,int,R_MPI_Comm,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Iprobe\n"
".weak MPI_Iprobe\n"
".set MPI_Iprobe,CCMPI_Iprobe\n"
".extern in_w\n"
".extern A_MPI_Iprobe\n"
".extern R_MPI_Iprobe\n"
".type CCMPI_Iprobe,@function\n"
".text\n"
"CCMPI_Iprobe:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iprobe\n"
"jmp *A_MPI_Iprobe@GOTPCREL(%rip)\n"
"inwrap_MPI_Iprobe:\n"
"jmp *R_MPI_Iprobe@GOTPCREL(%rip)\n"

);

int A_MPI_Iprobe(int source,int tag,A_MPI_Comm comm,int * flag,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Iprobe\n");
#endif
in_w=1;

int source_tmp;
source_conv_a2r(&source,&source_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Iprobe( source_tmp, tag_tmp, comm_tmp, flag, status_tmp);

status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iprobe\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iprobe(int source,int tag,R_MPI_Comm comm,int * flag,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Iprobe\n");
#endif
int ret_tmp= LOCAL_MPI_Iprobe( source, tag, comm, flag, status);
#ifdef DEBUG
printf("sort : R_MPI_Iprobe\n");
#endif
return ret_tmp;
}
int MPI_Probe(int source,int tag,A_MPI_Comm comm,A_MPI_Status * status);
int (*LOCAL_MPI_Probe)(int,int,R_MPI_Comm,R_MPI_Status *);

__asm__(
".global CCMPI_Probe\n"
".weak MPI_Probe\n"
".set MPI_Probe,CCMPI_Probe\n"
".extern in_w\n"
".extern A_MPI_Probe\n"
".extern R_MPI_Probe\n"
".type CCMPI_Probe,@function\n"
".text\n"
"CCMPI_Probe:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Probe\n"
"jmp *A_MPI_Probe@GOTPCREL(%rip)\n"
"inwrap_MPI_Probe:\n"
"jmp *R_MPI_Probe@GOTPCREL(%rip)\n"

);

int A_MPI_Probe(int source,int tag,A_MPI_Comm comm,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Probe\n");
#endif
in_w=1;

int source_tmp;
source_conv_a2r(&source,&source_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Probe( source_tmp, tag_tmp, comm_tmp, status_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Probe\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Probe(int source,int tag,R_MPI_Comm comm,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Probe\n");
#endif
int ret_tmp= LOCAL_MPI_Probe( source, tag, comm, status);
#ifdef DEBUG
printf("sort : R_MPI_Probe\n");
#endif
return ret_tmp;
}
int MPI_Cancel(A_MPI_Request * request);
int (*LOCAL_MPI_Cancel)(R_MPI_Request *);

__asm__(
".global CCMPI_Cancel\n"
".weak MPI_Cancel\n"
".set MPI_Cancel,CCMPI_Cancel\n"
".extern in_w\n"
".extern A_MPI_Cancel\n"
".extern R_MPI_Cancel\n"
".type CCMPI_Cancel,@function\n"
".text\n"
"CCMPI_Cancel:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cancel\n"
"jmp *A_MPI_Cancel@GOTPCREL(%rip)\n"
"inwrap_MPI_Cancel:\n"
"jmp *R_MPI_Cancel@GOTPCREL(%rip)\n"

);

int A_MPI_Cancel(A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Cancel\n");
#endif
in_w=1;

R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
request_ptr_conv_a2r(&request,&request_tmp);
int ret_tmp= LOCAL_MPI_Cancel( request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_cancel_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cancel\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cancel(R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Cancel\n");
#endif
int ret_tmp= LOCAL_MPI_Cancel( request);
#ifdef DEBUG
printf("sort : R_MPI_Cancel\n");
#endif
return ret_tmp;
}
int MPI_Test_cancelled(A_MPI_Status * status,int * flag);
int (*LOCAL_MPI_Test_cancelled)(R_MPI_Status *,int *);

__asm__(
".global CCMPI_Test_cancelled\n"
".weak MPI_Test_cancelled\n"
".set MPI_Test_cancelled,CCMPI_Test_cancelled\n"
".extern in_w\n"
".extern A_MPI_Test_cancelled\n"
".extern R_MPI_Test_cancelled\n"
".type CCMPI_Test_cancelled,@function\n"
".text\n"
"CCMPI_Test_cancelled:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Test_cancelled\n"
"jmp *A_MPI_Test_cancelled@GOTPCREL(%rip)\n"
"inwrap_MPI_Test_cancelled:\n"
"jmp *R_MPI_Test_cancelled@GOTPCREL(%rip)\n"

);

int A_MPI_Test_cancelled(A_MPI_Status * status,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Test_cancelled\n");
#endif
in_w=1;

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
status_prt_conv_a2r(&status,&status_tmp);

int ret_tmp= LOCAL_MPI_Test_cancelled( status_tmp, flag);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Test_cancelled\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Test_cancelled(R_MPI_Status * status,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Test_cancelled\n");
#endif
int ret_tmp= LOCAL_MPI_Test_cancelled( status, flag);
#ifdef DEBUG
printf("sort : R_MPI_Test_cancelled\n");
#endif
return ret_tmp;
}
int MPI_Send_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Send_init)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Send_init\n"
".weak MPI_Send_init\n"
".set MPI_Send_init,CCMPI_Send_init\n"
".extern in_w\n"
".extern A_MPI_Send_init\n"
".extern R_MPI_Send_init\n"
".type CCMPI_Send_init,@function\n"
".text\n"
"CCMPI_Send_init:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Send_init\n"
"jmp *A_MPI_Send_init@GOTPCREL(%rip)\n"
"inwrap_MPI_Send_init:\n"
"jmp *R_MPI_Send_init@GOTPCREL(%rip)\n"

);

int A_MPI_Send_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Send_init\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Send_init( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_pers_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Send_init\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Send_init(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Send_init\n");
#endif
int ret_tmp= LOCAL_MPI_Send_init( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Send_init\n");
#endif
return ret_tmp;
}
int MPI_Bsend_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Bsend_init)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Bsend_init\n"
".weak MPI_Bsend_init\n"
".set MPI_Bsend_init,CCMPI_Bsend_init\n"
".extern in_w\n"
".extern A_MPI_Bsend_init\n"
".extern R_MPI_Bsend_init\n"
".type CCMPI_Bsend_init,@function\n"
".text\n"
"CCMPI_Bsend_init:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Bsend_init\n"
"jmp *A_MPI_Bsend_init@GOTPCREL(%rip)\n"
"inwrap_MPI_Bsend_init:\n"
"jmp *R_MPI_Bsend_init@GOTPCREL(%rip)\n"

);

int A_MPI_Bsend_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Bsend_init\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Bsend_init( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_pers_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Bsend_init\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Bsend_init(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Bsend_init\n");
#endif
int ret_tmp= LOCAL_MPI_Bsend_init( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Bsend_init\n");
#endif
return ret_tmp;
}
int MPI_Ssend_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ssend_init)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ssend_init\n"
".weak MPI_Ssend_init\n"
".set MPI_Ssend_init,CCMPI_Ssend_init\n"
".extern in_w\n"
".extern A_MPI_Ssend_init\n"
".extern R_MPI_Ssend_init\n"
".type CCMPI_Ssend_init,@function\n"
".text\n"
"CCMPI_Ssend_init:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ssend_init\n"
"jmp *A_MPI_Ssend_init@GOTPCREL(%rip)\n"
"inwrap_MPI_Ssend_init:\n"
"jmp *R_MPI_Ssend_init@GOTPCREL(%rip)\n"

);

int A_MPI_Ssend_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ssend_init\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ssend_init( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_pers_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ssend_init\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ssend_init(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ssend_init\n");
#endif
int ret_tmp= LOCAL_MPI_Ssend_init( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ssend_init\n");
#endif
return ret_tmp;
}
int MPI_Rsend_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Rsend_init)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Rsend_init\n"
".weak MPI_Rsend_init\n"
".set MPI_Rsend_init,CCMPI_Rsend_init\n"
".extern in_w\n"
".extern A_MPI_Rsend_init\n"
".extern R_MPI_Rsend_init\n"
".type CCMPI_Rsend_init,@function\n"
".text\n"
"CCMPI_Rsend_init:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Rsend_init\n"
"jmp *A_MPI_Rsend_init@GOTPCREL(%rip)\n"
"inwrap_MPI_Rsend_init:\n"
"jmp *R_MPI_Rsend_init@GOTPCREL(%rip)\n"

);

int A_MPI_Rsend_init(void * buf,int count,A_MPI_Datatype datatype,int dest,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Rsend_init\n");
#endif
in_w=1;

void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Rsend_init( buf_tmp, count, datatype_tmp, dest_tmp, tag_tmp, comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_pers_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Rsend_init\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Rsend_init(void * buf,int count,R_MPI_Datatype datatype,int dest,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Rsend_init\n");
#endif
int ret_tmp= LOCAL_MPI_Rsend_init( buf, count, datatype, dest, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Rsend_init\n");
#endif
return ret_tmp;
}
int MPI_Recv_init(void * buf,int count,A_MPI_Datatype datatype,int source,int tag,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Recv_init)(void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Recv_init\n"
".weak MPI_Recv_init\n"
".set MPI_Recv_init,CCMPI_Recv_init\n"
".extern in_w\n"
".extern A_MPI_Recv_init\n"
".extern R_MPI_Recv_init\n"
".type CCMPI_Recv_init,@function\n"
".text\n"
"CCMPI_Recv_init:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Recv_init\n"
"jmp *A_MPI_Recv_init@GOTPCREL(%rip)\n"
"inwrap_MPI_Recv_init:\n"
"jmp *R_MPI_Recv_init@GOTPCREL(%rip)\n"

);

int A_MPI_Recv_init(void * buf,int count,A_MPI_Datatype datatype,int source,int tag,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Recv_init\n");
#endif
in_w=1;

void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int source_tmp;
source_conv_a2r(&source,&source_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Recv_init( buf_tmp, count, datatype_tmp, source_tmp, tag_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_pers_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Recv_init\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Recv_init(void * buf,int count,R_MPI_Datatype datatype,int source,int tag,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Recv_init\n");
#endif
int ret_tmp= LOCAL_MPI_Recv_init( buf, count, datatype, source, tag, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Recv_init\n");
#endif
return ret_tmp;
}
int MPI_Start(A_MPI_Request * request);
int (*LOCAL_MPI_Start)(R_MPI_Request *);

__asm__(
".global CCMPI_Start\n"
".weak MPI_Start\n"
".set MPI_Start,CCMPI_Start\n"
".extern in_w\n"
".extern A_MPI_Start\n"
".extern R_MPI_Start\n"
".type CCMPI_Start,@function\n"
".text\n"
"CCMPI_Start:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Start\n"
"jmp *A_MPI_Start@GOTPCREL(%rip)\n"
"inwrap_MPI_Start:\n"
"jmp *R_MPI_Start@GOTPCREL(%rip)\n"

);

int A_MPI_Start(A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Start\n");
#endif
in_w=1;

R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
request_pers_ptr_conv_a2r(&request,&request_tmp);
int ret_tmp= LOCAL_MPI_Start( request_tmp);
request_pers_ptr_conv_r2a(&request,&request_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Start\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Start(R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Start\n");
#endif
int ret_tmp= LOCAL_MPI_Start( request);
#ifdef DEBUG
printf("sort : R_MPI_Start\n");
#endif
return ret_tmp;
}
int MPI_Sendrecv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,int dest,int sendtag,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int source,int recvtag,A_MPI_Comm comm,A_MPI_Status * status);
int (*LOCAL_MPI_Sendrecv)(void *,int,R_MPI_Datatype,int,int,void *,int,R_MPI_Datatype,int,int,R_MPI_Comm,R_MPI_Status *);

__asm__(
".global CCMPI_Sendrecv\n"
".weak MPI_Sendrecv\n"
".set MPI_Sendrecv,CCMPI_Sendrecv\n"
".extern in_w\n"
".extern A_MPI_Sendrecv\n"
".extern R_MPI_Sendrecv\n"
".type CCMPI_Sendrecv,@function\n"
".text\n"
"CCMPI_Sendrecv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Sendrecv\n"
"jmp *A_MPI_Sendrecv@GOTPCREL(%rip)\n"
"inwrap_MPI_Sendrecv:\n"
"jmp *R_MPI_Sendrecv@GOTPCREL(%rip)\n"

);

int A_MPI_Sendrecv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,int dest,int sendtag,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int source,int recvtag,A_MPI_Comm comm,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Sendrecv\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int sendtag_tmp;
tag_conv_a2r(&sendtag,&sendtag_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
int source_tmp;
source_conv_a2r(&source,&source_tmp);
int recvtag_tmp;
tag_conv_a2r(&recvtag,&recvtag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Sendrecv( sendbuf_tmp, sendcount, sendtype_tmp, dest_tmp, sendtag_tmp, recvbuf_tmp, recvcount, recvtype_tmp, source_tmp, recvtag_tmp, comm_tmp, status_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Sendrecv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Sendrecv(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,int dest,int sendtag,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,int source,int recvtag,R_MPI_Comm comm,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Sendrecv\n");
#endif
int ret_tmp= LOCAL_MPI_Sendrecv( sendbuf, sendcount, sendtype, dest, sendtag, recvbuf, recvcount, recvtype, source, recvtag, comm, status);
#ifdef DEBUG
printf("sort : R_MPI_Sendrecv\n");
#endif
return ret_tmp;
}
int MPI_Sendrecv_replace(void * buf,int count,A_MPI_Datatype datatype,int dest,int sendtag,int source,int recvtag,A_MPI_Comm comm,A_MPI_Status * status);
int (*LOCAL_MPI_Sendrecv_replace)(void *,int,R_MPI_Datatype,int,int,int,int,R_MPI_Comm,R_MPI_Status *);

__asm__(
".global CCMPI_Sendrecv_replace\n"
".weak MPI_Sendrecv_replace\n"
".set MPI_Sendrecv_replace,CCMPI_Sendrecv_replace\n"
".extern in_w\n"
".extern A_MPI_Sendrecv_replace\n"
".extern R_MPI_Sendrecv_replace\n"
".type CCMPI_Sendrecv_replace,@function\n"
".text\n"
"CCMPI_Sendrecv_replace:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Sendrecv_replace\n"
"jmp *A_MPI_Sendrecv_replace@GOTPCREL(%rip)\n"
"inwrap_MPI_Sendrecv_replace:\n"
"jmp *R_MPI_Sendrecv_replace@GOTPCREL(%rip)\n"

);

int A_MPI_Sendrecv_replace(void * buf,int count,A_MPI_Datatype datatype,int dest,int sendtag,int source,int recvtag,A_MPI_Comm comm,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Sendrecv_replace\n");
#endif
in_w=1;

void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int dest_tmp;
dest_conv_a2r(&dest,&dest_tmp);
int sendtag_tmp;
tag_conv_a2r(&sendtag,&sendtag_tmp);
int source_tmp;
source_conv_a2r(&source,&source_tmp);
int recvtag_tmp;
tag_conv_a2r(&recvtag,&recvtag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Sendrecv_replace( buf_tmp, count, datatype_tmp, dest_tmp, sendtag_tmp, source_tmp, recvtag_tmp, comm_tmp, status_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Sendrecv_replace\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Sendrecv_replace(void * buf,int count,R_MPI_Datatype datatype,int dest,int sendtag,int source,int recvtag,R_MPI_Comm comm,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Sendrecv_replace\n");
#endif
int ret_tmp= LOCAL_MPI_Sendrecv_replace( buf, count, datatype, dest, sendtag, source, recvtag, comm, status);
#ifdef DEBUG
printf("sort : R_MPI_Sendrecv_replace\n");
#endif
return ret_tmp;
}
int MPI_Type_contiguous(int count,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_contiguous)(int,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_contiguous\n"
".weak MPI_Type_contiguous\n"
".set MPI_Type_contiguous,CCMPI_Type_contiguous\n"
".extern in_w\n"
".extern A_MPI_Type_contiguous\n"
".extern R_MPI_Type_contiguous\n"
".type CCMPI_Type_contiguous,@function\n"
".text\n"
"CCMPI_Type_contiguous:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_contiguous\n"
"jmp *A_MPI_Type_contiguous@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_contiguous:\n"
"jmp *R_MPI_Type_contiguous@GOTPCREL(%rip)\n"

);

int A_MPI_Type_contiguous(int count,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_contiguous\n");
#endif
in_w=1;



R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_contiguous( count, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_contiguous\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_contiguous(int count,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_contiguous\n");
#endif
int ret_tmp= LOCAL_MPI_Type_contiguous( count, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_contiguous\n");
#endif
return ret_tmp;
}
int MPI_Type_vector(int count,int blocklength,int stride,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_vector)(int,int,int,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_vector\n"
".weak MPI_Type_vector\n"
".set MPI_Type_vector,CCMPI_Type_vector\n"
".extern in_w\n"
".extern A_MPI_Type_vector\n"
".extern R_MPI_Type_vector\n"
".type CCMPI_Type_vector,@function\n"
".text\n"
"CCMPI_Type_vector:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_vector\n"
"jmp *A_MPI_Type_vector@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_vector:\n"
"jmp *R_MPI_Type_vector@GOTPCREL(%rip)\n"

);

int A_MPI_Type_vector(int count,int blocklength,int stride,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_vector\n");
#endif
in_w=1;







R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_vector( count, blocklength, stride, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_vector\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_vector(int count,int blocklength,int stride,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_vector\n");
#endif
int ret_tmp= LOCAL_MPI_Type_vector( count, blocklength, stride, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_vector\n");
#endif
return ret_tmp;
}
int MPI_Type_hvector(int count,int blocklength,A_MPI_Aint stride,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_hvector)(int,int,R_MPI_Aint,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_hvector\n"
".weak MPI_Type_hvector\n"
".set MPI_Type_hvector,CCMPI_Type_hvector\n"
".extern in_w\n"
".extern A_MPI_Type_hvector\n"
".extern R_MPI_Type_hvector\n"
".type CCMPI_Type_hvector,@function\n"
".text\n"
"CCMPI_Type_hvector:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_hvector\n"
"jmp *A_MPI_Type_hvector@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_hvector:\n"
"jmp *R_MPI_Type_hvector@GOTPCREL(%rip)\n"

);

int A_MPI_Type_hvector(int count,int blocklength,A_MPI_Aint stride,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_hvector\n");
#endif
in_w=1;





R_MPI_Aint stride_tmp;
stride_tmp = (R_MPI_Aint)stride;
R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_hvector( count, blocklength, stride_tmp, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_hvector\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_hvector(int count,int blocklength,R_MPI_Aint stride,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_hvector\n");
#endif
int ret_tmp= LOCAL_MPI_Type_hvector( count, blocklength, stride, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_hvector\n");
#endif
return ret_tmp;
}
int MPI_Type_indexed(int count,int * array_of_blocklengths,int * array_of_displacements,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_indexed)(int,int *,int *,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_indexed\n"
".weak MPI_Type_indexed\n"
".set MPI_Type_indexed,CCMPI_Type_indexed\n"
".extern in_w\n"
".extern A_MPI_Type_indexed\n"
".extern R_MPI_Type_indexed\n"
".type CCMPI_Type_indexed,@function\n"
".text\n"
"CCMPI_Type_indexed:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_indexed\n"
"jmp *A_MPI_Type_indexed@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_indexed:\n"
"jmp *R_MPI_Type_indexed@GOTPCREL(%rip)\n"

);

int A_MPI_Type_indexed(int count,int * array_of_blocklengths,int * array_of_displacements,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_indexed\n");
#endif
in_w=1;







R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_indexed( count, array_of_blocklengths, array_of_displacements, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_indexed\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_indexed(int count,int * array_of_blocklengths,int * array_of_displacements,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_indexed\n");
#endif
int ret_tmp= LOCAL_MPI_Type_indexed( count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_indexed\n");
#endif
return ret_tmp;
}
int MPI_Type_hindexed(int count,int * array_of_blocklengths,A_MPI_Aint * array_of_displacements,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_hindexed)(int,int *,R_MPI_Aint *,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_hindexed\n"
".weak MPI_Type_hindexed\n"
".set MPI_Type_hindexed,CCMPI_Type_hindexed\n"
".extern in_w\n"
".extern A_MPI_Type_hindexed\n"
".extern R_MPI_Type_hindexed\n"
".type CCMPI_Type_hindexed,@function\n"
".text\n"
"CCMPI_Type_hindexed:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_hindexed\n"
"jmp *A_MPI_Type_hindexed@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_hindexed:\n"
"jmp *R_MPI_Type_hindexed@GOTPCREL(%rip)\n"

);

int A_MPI_Type_hindexed(int count,int * array_of_blocklengths,A_MPI_Aint * array_of_displacements,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_hindexed\n");
#endif
in_w=1;





R_MPI_Aint  *array_of_displacements_tmp = malloc(sizeof(R_MPI_Aint )*count);
int i1;
for(i1=0; i1 < count;i1++){
array_of_displacements_tmp[i1]= (R_MPI_Aint )array_of_displacements[i1];
}
R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_hindexed( count, array_of_blocklengths, array_of_displacements_tmp, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
free(array_of_displacements_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_hindexed\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_hindexed(int count,int * array_of_blocklengths,R_MPI_Aint * array_of_displacements,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_hindexed\n");
#endif
int ret_tmp= LOCAL_MPI_Type_hindexed( count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_hindexed\n");
#endif
return ret_tmp;
}
int MPI_Type_struct(int count,int * array_of_blocklengths,A_MPI_Aint * array_of_displacements,R_MPI_Datatype * array_of_types[],A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_struct)(int,int *,R_MPI_Aint *,R_MPI_Datatype *,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_struct\n"
".weak MPI_Type_struct\n"
".set MPI_Type_struct,CCMPI_Type_struct\n"
".extern in_w\n"
".extern A_MPI_Type_struct\n"
".extern R_MPI_Type_struct\n"
".type CCMPI_Type_struct,@function\n"
".text\n"
"CCMPI_Type_struct:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_struct\n"
"jmp *A_MPI_Type_struct@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_struct:\n"
"jmp *R_MPI_Type_struct@GOTPCREL(%rip)\n"

);

int A_MPI_Type_struct(int count,int * array_of_blocklengths,A_MPI_Aint * array_of_displacements,A_MPI_Datatype array_of_types[],A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_struct\n");
#endif
in_w=1;





R_MPI_Aint  *array_of_displacements_tmp = malloc(sizeof(R_MPI_Aint )*count);
int i1;
for(i1=0; i1 < count;i1++){
array_of_displacements_tmp[i1]= (R_MPI_Aint )array_of_displacements[i1];
}
R_MPI_Datatype *array_of_types_tmp = malloc(sizeof(R_MPI_Datatype)*count);
int i2;
for(i2=0; i2 < count;i2++){
datatype_conv_a2r(&array_of_types[i2],&array_of_types_tmp[i2]);
}
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_struct( count, array_of_blocklengths, array_of_displacements_tmp, array_of_types_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
free(array_of_displacements_tmp);
free(array_of_types_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_struct\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_struct(int count,int * array_of_blocklengths,R_MPI_Aint * array_of_displacements,R_MPI_Datatype array_of_types[],R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_struct\n");
#endif
int ret_tmp= LOCAL_MPI_Type_struct( count, array_of_blocklengths, array_of_displacements, array_of_types, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_struct\n");
#endif
return ret_tmp;
}
int MPI_Address(void * location,A_MPI_Aint * address);
int (*LOCAL_MPI_Address)(void *,R_MPI_Aint *);

__asm__(
".global CCMPI_Address\n"
".weak MPI_Address\n"
".set MPI_Address,CCMPI_Address\n"
".extern in_w\n"
".extern A_MPI_Address\n"
".extern R_MPI_Address\n"
".type CCMPI_Address,@function\n"
".text\n"
"CCMPI_Address:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Address\n"
"jmp *A_MPI_Address@GOTPCREL(%rip)\n"
"inwrap_MPI_Address:\n"
"jmp *R_MPI_Address@GOTPCREL(%rip)\n"

);

int A_MPI_Address(void * location,A_MPI_Aint * address)
{
#ifdef DEBUG
printf("entre : A_MPI_Address\n");
#endif
in_w=1;

void * location_tmp;
const_buffer_conv_a2r(&location,&location_tmp);
R_MPI_Aint  address_ltmp;
R_MPI_Aint * address_tmp=&address_ltmp;
int ret_tmp= LOCAL_MPI_Address( location_tmp, address_tmp);
*address= (A_MPI_Aint ) *address_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Address\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Address(void * location,R_MPI_Aint * address)
{
#ifdef DEBUG
printf("entre : R_MPI_Address\n");
#endif
int ret_tmp= LOCAL_MPI_Address( location, address);
#ifdef DEBUG
printf("sort : R_MPI_Address\n");
#endif
return ret_tmp;
}
int MPI_Type_extent(A_MPI_Datatype datatype,A_MPI_Aint * extent);
int (*LOCAL_MPI_Type_extent)(R_MPI_Datatype,R_MPI_Aint *);

__asm__(
".global CCMPI_Type_extent\n"
".weak MPI_Type_extent\n"
".set MPI_Type_extent,CCMPI_Type_extent\n"
".extern in_w\n"
".extern A_MPI_Type_extent\n"
".extern R_MPI_Type_extent\n"
".type CCMPI_Type_extent,@function\n"
".text\n"
"CCMPI_Type_extent:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_extent\n"
"jmp *A_MPI_Type_extent@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_extent:\n"
"jmp *R_MPI_Type_extent@GOTPCREL(%rip)\n"

);

int A_MPI_Type_extent(A_MPI_Datatype datatype,A_MPI_Aint * extent)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_extent\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Aint  extent_ltmp;
R_MPI_Aint * extent_tmp=&extent_ltmp;
int ret_tmp= LOCAL_MPI_Type_extent( datatype_tmp, extent_tmp);
*extent= (A_MPI_Aint ) *extent_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_extent\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_extent(R_MPI_Datatype datatype,R_MPI_Aint * extent)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_extent\n");
#endif
int ret_tmp= LOCAL_MPI_Type_extent( datatype, extent);
#ifdef DEBUG
printf("sort : R_MPI_Type_extent\n");
#endif
return ret_tmp;
}
int MPI_Type_size(A_MPI_Datatype datatype,int * size);
int (*LOCAL_MPI_Type_size)(R_MPI_Datatype,int *);

__asm__(
".global CCMPI_Type_size\n"
".weak MPI_Type_size\n"
".set MPI_Type_size,CCMPI_Type_size\n"
".extern in_w\n"
".extern A_MPI_Type_size\n"
".extern R_MPI_Type_size\n"
".type CCMPI_Type_size,@function\n"
".text\n"
"CCMPI_Type_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_size\n"
"jmp *A_MPI_Type_size@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_size:\n"
"jmp *R_MPI_Type_size@GOTPCREL(%rip)\n"

);

int A_MPI_Type_size(A_MPI_Datatype datatype,int * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_size\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);

int ret_tmp= LOCAL_MPI_Type_size( datatype_tmp, size);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_size(R_MPI_Datatype datatype,int * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_size\n");
#endif
int ret_tmp= LOCAL_MPI_Type_size( datatype, size);
#ifdef DEBUG
printf("sort : R_MPI_Type_size\n");
#endif
return ret_tmp;
}
int MPI_Type_lb(A_MPI_Datatype datatype,A_MPI_Aint * displacement);
int (*LOCAL_MPI_Type_lb)(R_MPI_Datatype,R_MPI_Aint *);

__asm__(
".global CCMPI_Type_lb\n"
".weak MPI_Type_lb\n"
".set MPI_Type_lb,CCMPI_Type_lb\n"
".extern in_w\n"
".extern A_MPI_Type_lb\n"
".extern R_MPI_Type_lb\n"
".type CCMPI_Type_lb,@function\n"
".text\n"
"CCMPI_Type_lb:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_lb\n"
"jmp *A_MPI_Type_lb@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_lb:\n"
"jmp *R_MPI_Type_lb@GOTPCREL(%rip)\n"

);

int A_MPI_Type_lb(A_MPI_Datatype datatype,A_MPI_Aint * displacement)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_lb\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Aint  displacement_ltmp;
R_MPI_Aint * displacement_tmp=&displacement_ltmp;
int ret_tmp= LOCAL_MPI_Type_lb( datatype_tmp, displacement_tmp);
*displacement= (A_MPI_Aint ) *displacement_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_lb\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_lb(R_MPI_Datatype datatype,R_MPI_Aint * displacement)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_lb\n");
#endif
int ret_tmp= LOCAL_MPI_Type_lb( datatype, displacement);
#ifdef DEBUG
printf("sort : R_MPI_Type_lb\n");
#endif
return ret_tmp;
}
int MPI_Type_ub(A_MPI_Datatype datatype,A_MPI_Aint * displacement);
int (*LOCAL_MPI_Type_ub)(R_MPI_Datatype,R_MPI_Aint *);

__asm__(
".global CCMPI_Type_ub\n"
".weak MPI_Type_ub\n"
".set MPI_Type_ub,CCMPI_Type_ub\n"
".extern in_w\n"
".extern A_MPI_Type_ub\n"
".extern R_MPI_Type_ub\n"
".type CCMPI_Type_ub,@function\n"
".text\n"
"CCMPI_Type_ub:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_ub\n"
"jmp *A_MPI_Type_ub@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_ub:\n"
"jmp *R_MPI_Type_ub@GOTPCREL(%rip)\n"

);

int A_MPI_Type_ub(A_MPI_Datatype datatype,A_MPI_Aint * displacement)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_ub\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Aint  displacement_ltmp;
R_MPI_Aint * displacement_tmp=&displacement_ltmp;
int ret_tmp= LOCAL_MPI_Type_ub( datatype_tmp, displacement_tmp);
*displacement= (A_MPI_Aint ) *displacement_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_ub\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_ub(R_MPI_Datatype datatype,R_MPI_Aint * displacement)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_ub\n");
#endif
int ret_tmp= LOCAL_MPI_Type_ub( datatype, displacement);
#ifdef DEBUG
printf("sort : R_MPI_Type_ub\n");
#endif
return ret_tmp;
}
int MPI_Type_commit(A_MPI_Datatype * datatype);
int (*LOCAL_MPI_Type_commit)(R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_commit\n"
".weak MPI_Type_commit\n"
".set MPI_Type_commit,CCMPI_Type_commit\n"
".extern in_w\n"
".extern A_MPI_Type_commit\n"
".extern R_MPI_Type_commit\n"
".type CCMPI_Type_commit,@function\n"
".text\n"
"CCMPI_Type_commit:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_commit\n"
"jmp *A_MPI_Type_commit@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_commit:\n"
"jmp *R_MPI_Type_commit@GOTPCREL(%rip)\n"

);

int A_MPI_Type_commit(A_MPI_Datatype * datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_commit\n");
#endif
in_w=1;

R_MPI_Datatype  datatype_ltmp;
R_MPI_Datatype * datatype_tmp=&datatype_ltmp;
datatype_conv_a2r(datatype,datatype_tmp);
int ret_tmp= LOCAL_MPI_Type_commit( datatype_tmp);
datatype_conv_r2a(datatype,datatype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_commit\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_commit(R_MPI_Datatype * datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_commit\n");
#endif
int ret_tmp= LOCAL_MPI_Type_commit( datatype);
#ifdef DEBUG
printf("sort : R_MPI_Type_commit\n");
#endif
return ret_tmp;
}
int MPI_Type_free(A_MPI_Datatype * datatype);
int (*LOCAL_MPI_Type_free)(R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_free\n"
".weak MPI_Type_free\n"
".set MPI_Type_free,CCMPI_Type_free\n"
".extern in_w\n"
".extern A_MPI_Type_free\n"
".extern R_MPI_Type_free\n"
".type CCMPI_Type_free,@function\n"
".text\n"
"CCMPI_Type_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_free\n"
"jmp *A_MPI_Type_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_free:\n"
"jmp *R_MPI_Type_free@GOTPCREL(%rip)\n"

);

int A_MPI_Type_free(A_MPI_Datatype * datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_free\n");
#endif
in_w=1;

R_MPI_Datatype  datatype_ltmp;
R_MPI_Datatype * datatype_tmp=&datatype_ltmp;
datatype_conv_a2r(datatype,datatype_tmp);
int ret_tmp= LOCAL_MPI_Type_free( datatype_tmp);
datatype_conv_r2a(datatype,datatype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_free(R_MPI_Datatype * datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_free\n");
#endif
int ret_tmp= LOCAL_MPI_Type_free( datatype);
#ifdef DEBUG
printf("sort : R_MPI_Type_free\n");
#endif
return ret_tmp;
}
int MPI_Get_elements(A_MPI_Status * status,A_MPI_Datatype datatype,int * count);
int (*LOCAL_MPI_Get_elements)(R_MPI_Status *,R_MPI_Datatype,int *);

__asm__(
".global CCMPI_Get_elements\n"
".weak MPI_Get_elements\n"
".set MPI_Get_elements,CCMPI_Get_elements\n"
".extern in_w\n"
".extern A_MPI_Get_elements\n"
".extern R_MPI_Get_elements\n"
".type CCMPI_Get_elements,@function\n"
".text\n"
"CCMPI_Get_elements:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_elements\n"
"jmp *A_MPI_Get_elements@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_elements:\n"
"jmp *R_MPI_Get_elements@GOTPCREL(%rip)\n"

);

int A_MPI_Get_elements(A_MPI_Status * status,A_MPI_Datatype datatype,int * count)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_elements\n");
#endif
in_w=1;

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
status_prt_conv_a2r(&status,&status_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);

int ret_tmp= LOCAL_MPI_Get_elements( status_tmp, datatype_tmp, count);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_elements\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_elements(R_MPI_Status * status,R_MPI_Datatype datatype,int * count)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_elements\n");
#endif
int ret_tmp= LOCAL_MPI_Get_elements( status, datatype, count);
#ifdef DEBUG
printf("sort : R_MPI_Get_elements\n");
#endif
return ret_tmp;
}
int MPI_Pack(void * inbuf,int incount,A_MPI_Datatype datatype,void * outbuf,int outsize,int * position,A_MPI_Comm comm);
int (*LOCAL_MPI_Pack)(void *,int,R_MPI_Datatype,void *,int,int *,R_MPI_Comm);

__asm__(
".global CCMPI_Pack\n"
".weak MPI_Pack\n"
".set MPI_Pack,CCMPI_Pack\n"
".extern in_w\n"
".extern A_MPI_Pack\n"
".extern R_MPI_Pack\n"
".type CCMPI_Pack,@function\n"
".text\n"
"CCMPI_Pack:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Pack\n"
"jmp *A_MPI_Pack@GOTPCREL(%rip)\n"
"inwrap_MPI_Pack:\n"
"jmp *R_MPI_Pack@GOTPCREL(%rip)\n"

);

int A_MPI_Pack(void * inbuf,int incount,A_MPI_Datatype datatype,void * outbuf,int outsize,int * position,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Pack\n");
#endif
in_w=1;

void * inbuf_tmp;
const_buffer_conv_a2r(&inbuf,&inbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
void * outbuf_tmp;
buffer_conv_a2r(&outbuf,&outbuf_tmp);




R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Pack( inbuf_tmp, incount, datatype_tmp, outbuf_tmp, outsize, position, comm_tmp);
buffer_conv_r2a(&outbuf,&outbuf_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Pack\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Pack(void * inbuf,int incount,R_MPI_Datatype datatype,void * outbuf,int outsize,int * position,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Pack\n");
#endif
int ret_tmp= LOCAL_MPI_Pack( inbuf, incount, datatype, outbuf, outsize, position, comm);
#ifdef DEBUG
printf("sort : R_MPI_Pack\n");
#endif
return ret_tmp;
}
int MPI_Unpack(void * inbuf,int insize,int * position,void * outbuf,int outcount,A_MPI_Datatype datatype,A_MPI_Comm comm);
int (*LOCAL_MPI_Unpack)(void *,int,int *,void *,int,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Unpack\n"
".weak MPI_Unpack\n"
".set MPI_Unpack,CCMPI_Unpack\n"
".extern in_w\n"
".extern A_MPI_Unpack\n"
".extern R_MPI_Unpack\n"
".type CCMPI_Unpack,@function\n"
".text\n"
"CCMPI_Unpack:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Unpack\n"
"jmp *A_MPI_Unpack@GOTPCREL(%rip)\n"
"inwrap_MPI_Unpack:\n"
"jmp *R_MPI_Unpack@GOTPCREL(%rip)\n"

);

int A_MPI_Unpack(void * inbuf,int insize,int * position,void * outbuf,int outcount,A_MPI_Datatype datatype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Unpack\n");
#endif
in_w=1;

void * inbuf_tmp;
const_buffer_conv_a2r(&inbuf,&inbuf_tmp);




void * outbuf_tmp;
buffer_conv_a2r(&outbuf,&outbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Unpack( inbuf_tmp, insize, position, outbuf_tmp, outcount, datatype_tmp, comm_tmp);

buffer_conv_r2a(&outbuf,&outbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Unpack\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Unpack(void * inbuf,int insize,int * position,void * outbuf,int outcount,R_MPI_Datatype datatype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Unpack\n");
#endif
int ret_tmp= LOCAL_MPI_Unpack( inbuf, insize, position, outbuf, outcount, datatype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Unpack\n");
#endif
return ret_tmp;
}
int MPI_Pack_size(int incount,A_MPI_Datatype datatype,A_MPI_Comm comm,int * size);
int (*LOCAL_MPI_Pack_size)(int,R_MPI_Datatype,R_MPI_Comm,int *);

__asm__(
".global CCMPI_Pack_size\n"
".weak MPI_Pack_size\n"
".set MPI_Pack_size,CCMPI_Pack_size\n"
".extern in_w\n"
".extern A_MPI_Pack_size\n"
".extern R_MPI_Pack_size\n"
".type CCMPI_Pack_size,@function\n"
".text\n"
"CCMPI_Pack_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Pack_size\n"
"jmp *A_MPI_Pack_size@GOTPCREL(%rip)\n"
"inwrap_MPI_Pack_size:\n"
"jmp *R_MPI_Pack_size@GOTPCREL(%rip)\n"

);

int A_MPI_Pack_size(int incount,A_MPI_Datatype datatype,A_MPI_Comm comm,int * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Pack_size\n");
#endif
in_w=1;



R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

int ret_tmp= LOCAL_MPI_Pack_size( incount, datatype_tmp, comm_tmp, size);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Pack_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Pack_size(int incount,R_MPI_Datatype datatype,R_MPI_Comm comm,int * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Pack_size\n");
#endif
int ret_tmp= LOCAL_MPI_Pack_size( incount, datatype, comm, size);
#ifdef DEBUG
printf("sort : R_MPI_Pack_size\n");
#endif
return ret_tmp;
}
int MPI_Barrier(A_MPI_Comm comm);
int (*LOCAL_MPI_Barrier)(R_MPI_Comm);

__asm__(
".global CCMPI_Barrier\n"
".weak MPI_Barrier\n"
".set MPI_Barrier,CCMPI_Barrier\n"
".extern in_w\n"
".extern A_MPI_Barrier\n"
".extern R_MPI_Barrier\n"
".type CCMPI_Barrier,@function\n"
".text\n"
"CCMPI_Barrier:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Barrier\n"
"jmp *A_MPI_Barrier@GOTPCREL(%rip)\n"
"inwrap_MPI_Barrier:\n"
"jmp *R_MPI_Barrier@GOTPCREL(%rip)\n"

);

int A_MPI_Barrier(A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Barrier\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Barrier( comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Barrier\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Barrier(R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Barrier\n");
#endif
int ret_tmp= LOCAL_MPI_Barrier( comm);
#ifdef DEBUG
printf("sort : R_MPI_Barrier\n");
#endif
return ret_tmp;
}
int MPI_Bcast(void * buffer,int count,A_MPI_Datatype datatype,int root,A_MPI_Comm comm);
int (*LOCAL_MPI_Bcast)(void *,int,R_MPI_Datatype,int,R_MPI_Comm);

__asm__(
".global CCMPI_Bcast\n"
".weak MPI_Bcast\n"
".set MPI_Bcast,CCMPI_Bcast\n"
".extern in_w\n"
".extern A_MPI_Bcast\n"
".extern R_MPI_Bcast\n"
".type CCMPI_Bcast,@function\n"
".text\n"
"CCMPI_Bcast:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Bcast\n"
"jmp *A_MPI_Bcast@GOTPCREL(%rip)\n"
"inwrap_MPI_Bcast:\n"
"jmp *R_MPI_Bcast@GOTPCREL(%rip)\n"

);

int A_MPI_Bcast(void * buffer,int count,A_MPI_Datatype datatype,int root,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Bcast\n");
#endif
in_w=1;

void * buffer_tmp;
buffer_conv_a2r(&buffer,&buffer_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Bcast( buffer_tmp, count, datatype_tmp, root, comm_tmp);
buffer_conv_r2a(&buffer,&buffer_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Bcast\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Bcast(void * buffer,int count,R_MPI_Datatype datatype,int root,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Bcast\n");
#endif
int ret_tmp= LOCAL_MPI_Bcast( buffer, count, datatype, root, comm);
#ifdef DEBUG
printf("sort : R_MPI_Bcast\n");
#endif
return ret_tmp;
}
int MPI_Gather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm);
int (*LOCAL_MPI_Gather)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Comm);

__asm__(
".global CCMPI_Gather\n"
".weak MPI_Gather\n"
".set MPI_Gather,CCMPI_Gather\n"
".extern in_w\n"
".extern A_MPI_Gather\n"
".extern R_MPI_Gather\n"
".type CCMPI_Gather,@function\n"
".text\n"
"CCMPI_Gather:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Gather\n"
"jmp *A_MPI_Gather@GOTPCREL(%rip)\n"
"inwrap_MPI_Gather:\n"
"jmp *R_MPI_Gather@GOTPCREL(%rip)\n"

);

int A_MPI_Gather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Gather\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Gather( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, root, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Gather\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Gather(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,int root,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Gather\n");
#endif
int ret_tmp= LOCAL_MPI_Gather( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm);
#ifdef DEBUG
printf("sort : R_MPI_Gather\n");
#endif
return ret_tmp;
}
int MPI_Gatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * displs,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm);
int (*LOCAL_MPI_Gatherv)(void *,int,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,int,R_MPI_Comm);

__asm__(
".global CCMPI_Gatherv\n"
".weak MPI_Gatherv\n"
".set MPI_Gatherv,CCMPI_Gatherv\n"
".extern in_w\n"
".extern A_MPI_Gatherv\n"
".extern R_MPI_Gatherv\n"
".type CCMPI_Gatherv,@function\n"
".text\n"
"CCMPI_Gatherv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Gatherv\n"
"jmp *A_MPI_Gatherv@GOTPCREL(%rip)\n"
"inwrap_MPI_Gatherv:\n"
"jmp *R_MPI_Gatherv@GOTPCREL(%rip)\n"

);

int A_MPI_Gatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * displs,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Gatherv\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Gatherv( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcounts, displs, recvtype_tmp, root, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Gatherv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Gatherv(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * displs,R_MPI_Datatype recvtype,int root,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Gatherv\n");
#endif
int ret_tmp= LOCAL_MPI_Gatherv( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm);
#ifdef DEBUG
printf("sort : R_MPI_Gatherv\n");
#endif
return ret_tmp;
}
int MPI_Scatter(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm);
int (*LOCAL_MPI_Scatter)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Comm);

__asm__(
".global CCMPI_Scatter\n"
".weak MPI_Scatter\n"
".set MPI_Scatter,CCMPI_Scatter\n"
".extern in_w\n"
".extern A_MPI_Scatter\n"
".extern R_MPI_Scatter\n"
".type CCMPI_Scatter,@function\n"
".text\n"
"CCMPI_Scatter:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Scatter\n"
"jmp *A_MPI_Scatter@GOTPCREL(%rip)\n"
"inwrap_MPI_Scatter:\n"
"jmp *R_MPI_Scatter@GOTPCREL(%rip)\n"

);

int A_MPI_Scatter(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Scatter\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Scatter( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, root, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Scatter\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Scatter(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,int root,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Scatter\n");
#endif
int ret_tmp= LOCAL_MPI_Scatter( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm);
#ifdef DEBUG
printf("sort : R_MPI_Scatter\n");
#endif
return ret_tmp;
}
int MPI_Scatterv(void * sendbuf,int * sendcounts,int * displs,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm);
int (*LOCAL_MPI_Scatterv)(void *,int *,int *,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Comm);

__asm__(
".global CCMPI_Scatterv\n"
".weak MPI_Scatterv\n"
".set MPI_Scatterv,CCMPI_Scatterv\n"
".extern in_w\n"
".extern A_MPI_Scatterv\n"
".extern R_MPI_Scatterv\n"
".type CCMPI_Scatterv,@function\n"
".text\n"
"CCMPI_Scatterv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Scatterv\n"
"jmp *A_MPI_Scatterv@GOTPCREL(%rip)\n"
"inwrap_MPI_Scatterv:\n"
"jmp *R_MPI_Scatterv@GOTPCREL(%rip)\n"

);

int A_MPI_Scatterv(void * sendbuf,int * sendcounts,int * displs,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Scatterv\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);




R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Scatterv( sendbuf_tmp, sendcounts, displs, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, root, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Scatterv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Scatterv(void * sendbuf,int * sendcounts,int * displs,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,int root,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Scatterv\n");
#endif
int ret_tmp= LOCAL_MPI_Scatterv( sendbuf, sendcounts, displs, sendtype, recvbuf, recvcount, recvtype, root, comm);
#ifdef DEBUG
printf("sort : R_MPI_Scatterv\n");
#endif
return ret_tmp;
}
int MPI_Allgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Allgather)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Allgather\n"
".weak MPI_Allgather\n"
".set MPI_Allgather,CCMPI_Allgather\n"
".extern in_w\n"
".extern A_MPI_Allgather\n"
".extern R_MPI_Allgather\n"
".type CCMPI_Allgather,@function\n"
".text\n"
"CCMPI_Allgather:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Allgather\n"
"jmp *A_MPI_Allgather@GOTPCREL(%rip)\n"
"inwrap_MPI_Allgather:\n"
"jmp *R_MPI_Allgather@GOTPCREL(%rip)\n"

);

int A_MPI_Allgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Allgather\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Allgather( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Allgather\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Allgather(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Allgather\n");
#endif
int ret_tmp= LOCAL_MPI_Allgather( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Allgather\n");
#endif
return ret_tmp;
}
int MPI_Allgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * displs,A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Allgatherv)(void *,int,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Allgatherv\n"
".weak MPI_Allgatherv\n"
".set MPI_Allgatherv,CCMPI_Allgatherv\n"
".extern in_w\n"
".extern A_MPI_Allgatherv\n"
".extern R_MPI_Allgatherv\n"
".type CCMPI_Allgatherv,@function\n"
".text\n"
"CCMPI_Allgatherv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Allgatherv\n"
"jmp *A_MPI_Allgatherv@GOTPCREL(%rip)\n"
"inwrap_MPI_Allgatherv:\n"
"jmp *R_MPI_Allgatherv@GOTPCREL(%rip)\n"

);

int A_MPI_Allgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * displs,A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Allgatherv\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Allgatherv( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcounts, displs, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Allgatherv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Allgatherv(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * displs,R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Allgatherv\n");
#endif
int ret_tmp= LOCAL_MPI_Allgatherv( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Allgatherv\n");
#endif
return ret_tmp;
}
int MPI_Alltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Alltoall)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Alltoall\n"
".weak MPI_Alltoall\n"
".set MPI_Alltoall,CCMPI_Alltoall\n"
".extern in_w\n"
".extern A_MPI_Alltoall\n"
".extern R_MPI_Alltoall\n"
".type CCMPI_Alltoall,@function\n"
".text\n"
"CCMPI_Alltoall:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Alltoall\n"
"jmp *A_MPI_Alltoall@GOTPCREL(%rip)\n"
"inwrap_MPI_Alltoall:\n"
"jmp *R_MPI_Alltoall@GOTPCREL(%rip)\n"

);

int A_MPI_Alltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Alltoall\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Alltoall( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Alltoall\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Alltoall(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Alltoall\n");
#endif
int ret_tmp= LOCAL_MPI_Alltoall( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Alltoall\n");
#endif
return ret_tmp;
}
int MPI_Alltoallv(void * sendbuf,int * sendcounts,int * sdispls,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * rdispls,A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Alltoallv)(void *,int *,int *,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Alltoallv\n"
".weak MPI_Alltoallv\n"
".set MPI_Alltoallv,CCMPI_Alltoallv\n"
".extern in_w\n"
".extern A_MPI_Alltoallv\n"
".extern R_MPI_Alltoallv\n"
".type CCMPI_Alltoallv,@function\n"
".text\n"
"CCMPI_Alltoallv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Alltoallv\n"
"jmp *A_MPI_Alltoallv@GOTPCREL(%rip)\n"
"inwrap_MPI_Alltoallv:\n"
"jmp *R_MPI_Alltoallv@GOTPCREL(%rip)\n"

);

int A_MPI_Alltoallv(void * sendbuf,int * sendcounts,int * sdispls,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * rdispls,A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Alltoallv\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);




R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Alltoallv( sendbuf_tmp, sendcounts, sdispls, sendtype_tmp, recvbuf_tmp, recvcounts, rdispls, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Alltoallv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Alltoallv(void * sendbuf,int * sendcounts,int * sdispls,R_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * rdispls,R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Alltoallv\n");
#endif
int ret_tmp= LOCAL_MPI_Alltoallv( sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Alltoallv\n");
#endif
return ret_tmp;
}
int MPI_Exscan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm);
int (*LOCAL_MPI_Exscan)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm);

__asm__(
".global CCMPI_Exscan\n"
".weak MPI_Exscan\n"
".set MPI_Exscan,CCMPI_Exscan\n"
".extern in_w\n"
".extern A_MPI_Exscan\n"
".extern R_MPI_Exscan\n"
".type CCMPI_Exscan,@function\n"
".text\n"
"CCMPI_Exscan:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Exscan\n"
"jmp *A_MPI_Exscan@GOTPCREL(%rip)\n"
"inwrap_MPI_Exscan:\n"
"jmp *R_MPI_Exscan@GOTPCREL(%rip)\n"

);

int A_MPI_Exscan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Exscan\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Exscan( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Exscan\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Exscan(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Exscan\n");
#endif
int ret_tmp= LOCAL_MPI_Exscan( sendbuf, recvbuf, count, datatype, op, comm);
#ifdef DEBUG
printf("sort : R_MPI_Exscan\n");
#endif
return ret_tmp;
}
int MPI_Reduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,int root,A_MPI_Comm comm);
int (*LOCAL_MPI_Reduce)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,int,R_MPI_Comm);

__asm__(
".global CCMPI_Reduce\n"
".weak MPI_Reduce\n"
".set MPI_Reduce,CCMPI_Reduce\n"
".extern in_w\n"
".extern A_MPI_Reduce\n"
".extern R_MPI_Reduce\n"
".type CCMPI_Reduce,@function\n"
".text\n"
"CCMPI_Reduce:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Reduce\n"
"jmp *A_MPI_Reduce@GOTPCREL(%rip)\n"
"inwrap_MPI_Reduce:\n"
"jmp *R_MPI_Reduce@GOTPCREL(%rip)\n"

);

int A_MPI_Reduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,int root,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Reduce\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Reduce( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, root, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Reduce\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Reduce(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,int root,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Reduce\n");
#endif
int ret_tmp= LOCAL_MPI_Reduce( sendbuf, recvbuf, count, datatype, op, root, comm);
#ifdef DEBUG
printf("sort : R_MPI_Reduce\n");
#endif
return ret_tmp;
}
int MPI_Op_create(A_MPI_User_function * user_fn,int commute,A_MPI_Op * op);
int (*LOCAL_MPI_Op_create)(R_MPI_User_function *,int,R_MPI_Op *);

__asm__(
".global CCMPI_Op_create\n"
".weak MPI_Op_create\n"
".set MPI_Op_create,CCMPI_Op_create\n"
".extern in_w\n"
".extern A_MPI_Op_create\n"
".extern R_MPI_Op_create\n"
".type CCMPI_Op_create,@function\n"
".text\n"
"CCMPI_Op_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Op_create\n"
"jmp *A_MPI_Op_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Op_create:\n"
"jmp *R_MPI_Op_create@GOTPCREL(%rip)\n"

);

int A_MPI_Op_create(A_MPI_User_function * user_fn,int commute,A_MPI_Op * op)
{
#ifdef DEBUG
printf("entre : A_MPI_Op_create\n");
#endif
in_w=1;

R_MPI_User_function * user_fn_tmp;
reduce_user_fn_a2r(&user_fn,&user_fn_tmp);


R_MPI_Op  op_ltmp;
R_MPI_Op * op_tmp=&op_ltmp;
int ret_tmp= LOCAL_MPI_Op_create( user_fn_tmp, commute, op_tmp);
op_conv_r2a(op,op_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Op_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Op_create(R_MPI_User_function * user_fn,int commute,R_MPI_Op * op)
{
#ifdef DEBUG
printf("entre : R_MPI_Op_create\n");
#endif
int ret_tmp= LOCAL_MPI_Op_create( user_fn, commute, op);
#ifdef DEBUG
printf("sort : R_MPI_Op_create\n");
#endif
return ret_tmp;
}
int MPI_Op_free(A_MPI_Op * op);
int (*LOCAL_MPI_Op_free)(R_MPI_Op *);

__asm__(
".global CCMPI_Op_free\n"
".weak MPI_Op_free\n"
".set MPI_Op_free,CCMPI_Op_free\n"
".extern in_w\n"
".extern A_MPI_Op_free\n"
".extern R_MPI_Op_free\n"
".type CCMPI_Op_free,@function\n"
".text\n"
"CCMPI_Op_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Op_free\n"
"jmp *A_MPI_Op_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Op_free:\n"
"jmp *R_MPI_Op_free@GOTPCREL(%rip)\n"

);

int A_MPI_Op_free(A_MPI_Op * op)
{
#ifdef DEBUG
printf("entre : A_MPI_Op_free\n");
#endif
in_w=1;

R_MPI_Op  op_ltmp;
R_MPI_Op * op_tmp=&op_ltmp;
op_conv_a2r(op,op_tmp);
int ret_tmp= LOCAL_MPI_Op_free( op_tmp);
op_conv_r2a(op,op_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Op_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Op_free(R_MPI_Op * op)
{
#ifdef DEBUG
printf("entre : R_MPI_Op_free\n");
#endif
int ret_tmp= LOCAL_MPI_Op_free( op);
#ifdef DEBUG
printf("sort : R_MPI_Op_free\n");
#endif
return ret_tmp;
}
int MPI_Allreduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm);
int (*LOCAL_MPI_Allreduce)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm);

__asm__(
".global CCMPI_Allreduce\n"
".weak MPI_Allreduce\n"
".set MPI_Allreduce,CCMPI_Allreduce\n"
".extern in_w\n"
".extern A_MPI_Allreduce\n"
".extern R_MPI_Allreduce\n"
".type CCMPI_Allreduce,@function\n"
".text\n"
"CCMPI_Allreduce:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Allreduce\n"
"jmp *A_MPI_Allreduce@GOTPCREL(%rip)\n"
"inwrap_MPI_Allreduce:\n"
"jmp *R_MPI_Allreduce@GOTPCREL(%rip)\n"

);

int A_MPI_Allreduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Allreduce\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Allreduce( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Allreduce\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Allreduce(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Allreduce\n");
#endif
int ret_tmp= LOCAL_MPI_Allreduce( sendbuf, recvbuf, count, datatype, op, comm);
#ifdef DEBUG
printf("sort : R_MPI_Allreduce\n");
#endif
return ret_tmp;
}
int MPI_Scan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm);
int (*LOCAL_MPI_Scan)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm);

__asm__(
".global CCMPI_Scan\n"
".weak MPI_Scan\n"
".set MPI_Scan,CCMPI_Scan\n"
".extern in_w\n"
".extern A_MPI_Scan\n"
".extern R_MPI_Scan\n"
".type CCMPI_Scan,@function\n"
".text\n"
"CCMPI_Scan:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Scan\n"
"jmp *A_MPI_Scan@GOTPCREL(%rip)\n"
"inwrap_MPI_Scan:\n"
"jmp *R_MPI_Scan@GOTPCREL(%rip)\n"

);

int A_MPI_Scan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Scan\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Scan( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Scan\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Scan(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Scan\n");
#endif
int ret_tmp= LOCAL_MPI_Scan( sendbuf, recvbuf, count, datatype, op, comm);
#ifdef DEBUG
printf("sort : R_MPI_Scan\n");
#endif
return ret_tmp;
}
int MPI_Group_size(A_MPI_Group group,int * size);
int (*LOCAL_MPI_Group_size)(R_MPI_Group,int *);

__asm__(
".global CCMPI_Group_size\n"
".weak MPI_Group_size\n"
".set MPI_Group_size,CCMPI_Group_size\n"
".extern in_w\n"
".extern A_MPI_Group_size\n"
".extern R_MPI_Group_size\n"
".type CCMPI_Group_size,@function\n"
".text\n"
"CCMPI_Group_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_size\n"
"jmp *A_MPI_Group_size@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_size:\n"
"jmp *R_MPI_Group_size@GOTPCREL(%rip)\n"

);

int A_MPI_Group_size(A_MPI_Group group,int * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_size\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);

int ret_tmp= LOCAL_MPI_Group_size( group_tmp, size);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_size(R_MPI_Group group,int * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_size\n");
#endif
int ret_tmp= LOCAL_MPI_Group_size( group, size);
#ifdef DEBUG
printf("sort : R_MPI_Group_size\n");
#endif
return ret_tmp;
}
int MPI_Group_rank(A_MPI_Group group,int * rank);
int (*LOCAL_MPI_Group_rank)(R_MPI_Group,int *);

__asm__(
".global CCMPI_Group_rank\n"
".weak MPI_Group_rank\n"
".set MPI_Group_rank,CCMPI_Group_rank\n"
".extern in_w\n"
".extern A_MPI_Group_rank\n"
".extern R_MPI_Group_rank\n"
".type CCMPI_Group_rank,@function\n"
".text\n"
"CCMPI_Group_rank:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_rank\n"
"jmp *A_MPI_Group_rank@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_rank:\n"
"jmp *R_MPI_Group_rank@GOTPCREL(%rip)\n"

);

int A_MPI_Group_rank(A_MPI_Group group,int * rank)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_rank\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);

int ret_tmp= LOCAL_MPI_Group_rank( group_tmp, rank);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_rank\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_rank(R_MPI_Group group,int * rank)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_rank\n");
#endif
int ret_tmp= LOCAL_MPI_Group_rank( group, rank);
#ifdef DEBUG
printf("sort : R_MPI_Group_rank\n");
#endif
return ret_tmp;
}
int MPI_Group_compare(A_MPI_Group group1,A_MPI_Group group2,int * result);
int (*LOCAL_MPI_Group_compare)(R_MPI_Group,R_MPI_Group,int *);

__asm__(
".global CCMPI_Group_compare\n"
".weak MPI_Group_compare\n"
".set MPI_Group_compare,CCMPI_Group_compare\n"
".extern in_w\n"
".extern A_MPI_Group_compare\n"
".extern R_MPI_Group_compare\n"
".type CCMPI_Group_compare,@function\n"
".text\n"
"CCMPI_Group_compare:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_compare\n"
"jmp *A_MPI_Group_compare@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_compare:\n"
"jmp *R_MPI_Group_compare@GOTPCREL(%rip)\n"

);

int A_MPI_Group_compare(A_MPI_Group group1,A_MPI_Group group2,int * result)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_compare\n");
#endif
in_w=1;

R_MPI_Group group1_tmp;
group_conv_a2r(&group1,&group1_tmp);
R_MPI_Group group2_tmp;
group_conv_a2r(&group2,&group2_tmp);

int ret_tmp= LOCAL_MPI_Group_compare( group1_tmp, group2_tmp, result);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_compare\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_compare(R_MPI_Group group1,R_MPI_Group group2,int * result)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_compare\n");
#endif
int ret_tmp= LOCAL_MPI_Group_compare( group1, group2, result);
#ifdef DEBUG
printf("sort : R_MPI_Group_compare\n");
#endif
return ret_tmp;
}
int MPI_Comm_group(A_MPI_Comm comm,A_MPI_Group * group);
int (*LOCAL_MPI_Comm_group)(R_MPI_Comm,R_MPI_Group *);

__asm__(
".global CCMPI_Comm_group\n"
".weak MPI_Comm_group\n"
".set MPI_Comm_group,CCMPI_Comm_group\n"
".extern in_w\n"
".extern A_MPI_Comm_group\n"
".extern R_MPI_Comm_group\n"
".type CCMPI_Comm_group,@function\n"
".text\n"
"CCMPI_Comm_group:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_group\n"
"jmp *A_MPI_Comm_group@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_group:\n"
"jmp *R_MPI_Comm_group@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_group(A_MPI_Comm comm,A_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_group\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Group  group_ltmp;
R_MPI_Group * group_tmp=&group_ltmp;
int ret_tmp= LOCAL_MPI_Comm_group( comm_tmp, group_tmp);
group_conv_r2a(group,group_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_group\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_group(R_MPI_Comm comm,R_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_group\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_group( comm, group);
#ifdef DEBUG
printf("sort : R_MPI_Comm_group\n");
#endif
return ret_tmp;
}
int MPI_Group_union(A_MPI_Group group1,A_MPI_Group group2,A_MPI_Group * newgroup);
int (*LOCAL_MPI_Group_union)(R_MPI_Group,R_MPI_Group,R_MPI_Group *);

__asm__(
".global CCMPI_Group_union\n"
".weak MPI_Group_union\n"
".set MPI_Group_union,CCMPI_Group_union\n"
".extern in_w\n"
".extern A_MPI_Group_union\n"
".extern R_MPI_Group_union\n"
".type CCMPI_Group_union,@function\n"
".text\n"
"CCMPI_Group_union:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_union\n"
"jmp *A_MPI_Group_union@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_union:\n"
"jmp *R_MPI_Group_union@GOTPCREL(%rip)\n"

);

int A_MPI_Group_union(A_MPI_Group group1,A_MPI_Group group2,A_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_union\n");
#endif
in_w=1;

R_MPI_Group group1_tmp;
group_conv_a2r(&group1,&group1_tmp);
R_MPI_Group group2_tmp;
group_conv_a2r(&group2,&group2_tmp);
R_MPI_Group  newgroup_ltmp;
R_MPI_Group * newgroup_tmp=&newgroup_ltmp;
int ret_tmp= LOCAL_MPI_Group_union( group1_tmp, group2_tmp, newgroup_tmp);
group_conv_r2a(newgroup,newgroup_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_union\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_union(R_MPI_Group group1,R_MPI_Group group2,R_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_union\n");
#endif
int ret_tmp= LOCAL_MPI_Group_union( group1, group2, newgroup);
#ifdef DEBUG
printf("sort : R_MPI_Group_union\n");
#endif
return ret_tmp;
}
int MPI_Group_intersection(A_MPI_Group group1,A_MPI_Group group2,A_MPI_Group * newgroup);
int (*LOCAL_MPI_Group_intersection)(R_MPI_Group,R_MPI_Group,R_MPI_Group *);

__asm__(
".global CCMPI_Group_intersection\n"
".weak MPI_Group_intersection\n"
".set MPI_Group_intersection,CCMPI_Group_intersection\n"
".extern in_w\n"
".extern A_MPI_Group_intersection\n"
".extern R_MPI_Group_intersection\n"
".type CCMPI_Group_intersection,@function\n"
".text\n"
"CCMPI_Group_intersection:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_intersection\n"
"jmp *A_MPI_Group_intersection@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_intersection:\n"
"jmp *R_MPI_Group_intersection@GOTPCREL(%rip)\n"

);

int A_MPI_Group_intersection(A_MPI_Group group1,A_MPI_Group group2,A_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_intersection\n");
#endif
in_w=1;

R_MPI_Group group1_tmp;
group_conv_a2r(&group1,&group1_tmp);
R_MPI_Group group2_tmp;
group_conv_a2r(&group2,&group2_tmp);
R_MPI_Group  newgroup_ltmp;
R_MPI_Group * newgroup_tmp=&newgroup_ltmp;
int ret_tmp= LOCAL_MPI_Group_intersection( group1_tmp, group2_tmp, newgroup_tmp);
group_conv_r2a(newgroup,newgroup_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_intersection\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_intersection(R_MPI_Group group1,R_MPI_Group group2,R_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_intersection\n");
#endif
int ret_tmp= LOCAL_MPI_Group_intersection( group1, group2, newgroup);
#ifdef DEBUG
printf("sort : R_MPI_Group_intersection\n");
#endif
return ret_tmp;
}
int MPI_Group_difference(A_MPI_Group group1,A_MPI_Group group2,A_MPI_Group * newgroup);
int (*LOCAL_MPI_Group_difference)(R_MPI_Group,R_MPI_Group,R_MPI_Group *);

__asm__(
".global CCMPI_Group_difference\n"
".weak MPI_Group_difference\n"
".set MPI_Group_difference,CCMPI_Group_difference\n"
".extern in_w\n"
".extern A_MPI_Group_difference\n"
".extern R_MPI_Group_difference\n"
".type CCMPI_Group_difference,@function\n"
".text\n"
"CCMPI_Group_difference:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_difference\n"
"jmp *A_MPI_Group_difference@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_difference:\n"
"jmp *R_MPI_Group_difference@GOTPCREL(%rip)\n"

);

int A_MPI_Group_difference(A_MPI_Group group1,A_MPI_Group group2,A_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_difference\n");
#endif
in_w=1;

R_MPI_Group group1_tmp;
group_conv_a2r(&group1,&group1_tmp);
R_MPI_Group group2_tmp;
group_conv_a2r(&group2,&group2_tmp);
R_MPI_Group  newgroup_ltmp;
R_MPI_Group * newgroup_tmp=&newgroup_ltmp;
int ret_tmp= LOCAL_MPI_Group_difference( group1_tmp, group2_tmp, newgroup_tmp);
group_conv_r2a(newgroup,newgroup_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_difference\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_difference(R_MPI_Group group1,R_MPI_Group group2,R_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_difference\n");
#endif
int ret_tmp= LOCAL_MPI_Group_difference( group1, group2, newgroup);
#ifdef DEBUG
printf("sort : R_MPI_Group_difference\n");
#endif
return ret_tmp;
}
int MPI_Group_free(A_MPI_Group * group);
int (*LOCAL_MPI_Group_free)(R_MPI_Group *);

__asm__(
".global CCMPI_Group_free\n"
".weak MPI_Group_free\n"
".set MPI_Group_free,CCMPI_Group_free\n"
".extern in_w\n"
".extern A_MPI_Group_free\n"
".extern R_MPI_Group_free\n"
".type CCMPI_Group_free,@function\n"
".text\n"
"CCMPI_Group_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_free\n"
"jmp *A_MPI_Group_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_free:\n"
"jmp *R_MPI_Group_free@GOTPCREL(%rip)\n"

);

int A_MPI_Group_free(A_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_free\n");
#endif
in_w=1;

R_MPI_Group  group_ltmp;
R_MPI_Group * group_tmp=&group_ltmp;
group_conv_a2r(group,group_tmp);
int ret_tmp= LOCAL_MPI_Group_free( group_tmp);
group_conv_r2a(group,group_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_free(R_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_free\n");
#endif
int ret_tmp= LOCAL_MPI_Group_free( group);
#ifdef DEBUG
printf("sort : R_MPI_Group_free\n");
#endif
return ret_tmp;
}
int MPI_Comm_size(A_MPI_Comm comm,int * size);
int (*LOCAL_MPI_Comm_size)(R_MPI_Comm,int *);

__asm__(
".global CCMPI_Comm_size\n"
".weak MPI_Comm_size\n"
".set MPI_Comm_size,CCMPI_Comm_size\n"
".extern in_w\n"
".extern A_MPI_Comm_size\n"
".extern R_MPI_Comm_size\n"
".type CCMPI_Comm_size,@function\n"
".text\n"
"CCMPI_Comm_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_size\n"
"jmp *A_MPI_Comm_size@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_size:\n"
"jmp *R_MPI_Comm_size@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_size(A_MPI_Comm comm,int * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_size\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

int ret_tmp= LOCAL_MPI_Comm_size( comm_tmp, size);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_size(R_MPI_Comm comm,int * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_size\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_size( comm, size);
#ifdef DEBUG
printf("sort : R_MPI_Comm_size\n");
#endif
return ret_tmp;
}
int MPI_Comm_rank(A_MPI_Comm comm,int * rank);
int (*LOCAL_MPI_Comm_rank)(R_MPI_Comm,int *);

__asm__(
".global CCMPI_Comm_rank\n"
".weak MPI_Comm_rank\n"
".set MPI_Comm_rank,CCMPI_Comm_rank\n"
".extern in_w\n"
".extern A_MPI_Comm_rank\n"
".extern R_MPI_Comm_rank\n"
".type CCMPI_Comm_rank,@function\n"
".text\n"
"CCMPI_Comm_rank:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_rank\n"
"jmp *A_MPI_Comm_rank@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_rank:\n"
"jmp *R_MPI_Comm_rank@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_rank(A_MPI_Comm comm,int * rank)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_rank\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

int ret_tmp= LOCAL_MPI_Comm_rank( comm_tmp, rank);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_rank\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_rank(R_MPI_Comm comm,int * rank)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_rank\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_rank( comm, rank);
#ifdef DEBUG
printf("sort : R_MPI_Comm_rank\n");
#endif
return ret_tmp;
}
int MPI_Comm_compare(A_MPI_Comm comm1,A_MPI_Comm comm2,int * result);
int (*LOCAL_MPI_Comm_compare)(R_MPI_Comm,R_MPI_Comm,int *);

__asm__(
".global CCMPI_Comm_compare\n"
".weak MPI_Comm_compare\n"
".set MPI_Comm_compare,CCMPI_Comm_compare\n"
".extern in_w\n"
".extern A_MPI_Comm_compare\n"
".extern R_MPI_Comm_compare\n"
".type CCMPI_Comm_compare,@function\n"
".text\n"
"CCMPI_Comm_compare:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_compare\n"
"jmp *A_MPI_Comm_compare@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_compare:\n"
"jmp *R_MPI_Comm_compare@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_compare(A_MPI_Comm comm1,A_MPI_Comm comm2,int * result)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_compare\n");
#endif
in_w=1;

R_MPI_Comm comm1_tmp;
comm_conv_a2r(&comm1,&comm1_tmp);
R_MPI_Comm comm2_tmp;
comm_conv_a2r(&comm2,&comm2_tmp);

int ret_tmp= LOCAL_MPI_Comm_compare( comm1_tmp, comm2_tmp, result);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_compare\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_compare(R_MPI_Comm comm1,R_MPI_Comm comm2,int * result)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_compare\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_compare( comm1, comm2, result);
#ifdef DEBUG
printf("sort : R_MPI_Comm_compare\n");
#endif
return ret_tmp;
}
int MPI_Comm_dup(A_MPI_Comm comm,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_dup)(R_MPI_Comm,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_dup\n"
".weak MPI_Comm_dup\n"
".set MPI_Comm_dup,CCMPI_Comm_dup\n"
".extern in_w\n"
".extern A_MPI_Comm_dup\n"
".extern R_MPI_Comm_dup\n"
".type CCMPI_Comm_dup,@function\n"
".text\n"
"CCMPI_Comm_dup:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_dup\n"
"jmp *A_MPI_Comm_dup@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_dup:\n"
"jmp *R_MPI_Comm_dup@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_dup(A_MPI_Comm comm,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_dup\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_dup( comm_tmp, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_dup\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_dup(R_MPI_Comm comm,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_dup\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_dup( comm, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_dup\n");
#endif
return ret_tmp;
}
int MPI_Comm_dup_with_info(A_MPI_Comm comm,A_MPI_Info info,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_dup_with_info)(R_MPI_Comm,R_MPI_Info,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_dup_with_info\n"
".weak MPI_Comm_dup_with_info\n"
".set MPI_Comm_dup_with_info,CCMPI_Comm_dup_with_info\n"
".extern in_w\n"
".extern A_MPI_Comm_dup_with_info\n"
".extern R_MPI_Comm_dup_with_info\n"
".type CCMPI_Comm_dup_with_info,@function\n"
".text\n"
"CCMPI_Comm_dup_with_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_dup_with_info\n"
"jmp *A_MPI_Comm_dup_with_info@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_dup_with_info:\n"
"jmp *R_MPI_Comm_dup_with_info@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_dup_with_info(A_MPI_Comm comm,A_MPI_Info info,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_dup_with_info\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_dup_with_info( comm_tmp, info_tmp, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_dup_with_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_dup_with_info(R_MPI_Comm comm,R_MPI_Info info,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_dup_with_info\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_dup_with_info( comm, info, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_dup_with_info\n");
#endif
return ret_tmp;
}
int MPI_Comm_create(A_MPI_Comm comm,A_MPI_Group group,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_create)(R_MPI_Comm,R_MPI_Group,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_create\n"
".weak MPI_Comm_create\n"
".set MPI_Comm_create,CCMPI_Comm_create\n"
".extern in_w\n"
".extern A_MPI_Comm_create\n"
".extern R_MPI_Comm_create\n"
".type CCMPI_Comm_create,@function\n"
".text\n"
"CCMPI_Comm_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_create\n"
"jmp *A_MPI_Comm_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_create:\n"
"jmp *R_MPI_Comm_create@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_create(A_MPI_Comm comm,A_MPI_Group group,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_create\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_create( comm_tmp, group_tmp, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_create(R_MPI_Comm comm,R_MPI_Group group,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_create\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_create( comm, group, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_create\n");
#endif
return ret_tmp;
}
int MPI_Comm_split(A_MPI_Comm comm,int color,int key,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_split)(R_MPI_Comm,int,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_split\n"
".weak MPI_Comm_split\n"
".set MPI_Comm_split,CCMPI_Comm_split\n"
".extern in_w\n"
".extern A_MPI_Comm_split\n"
".extern R_MPI_Comm_split\n"
".type CCMPI_Comm_split,@function\n"
".text\n"
"CCMPI_Comm_split:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_split\n"
"jmp *A_MPI_Comm_split@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_split:\n"
"jmp *R_MPI_Comm_split@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_split(A_MPI_Comm comm,int color,int key,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_split\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);




R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_split( comm_tmp, color, key, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_split\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_split(R_MPI_Comm comm,int color,int key,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_split\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_split( comm, color, key, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_split\n");
#endif
return ret_tmp;
}
int MPI_Comm_free(A_MPI_Comm * comm);
int (*LOCAL_MPI_Comm_free)(R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_free\n"
".weak MPI_Comm_free\n"
".set MPI_Comm_free,CCMPI_Comm_free\n"
".extern in_w\n"
".extern A_MPI_Comm_free\n"
".extern R_MPI_Comm_free\n"
".type CCMPI_Comm_free,@function\n"
".text\n"
"CCMPI_Comm_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_free\n"
"jmp *A_MPI_Comm_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_free:\n"
"jmp *R_MPI_Comm_free@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_free(A_MPI_Comm * comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_free\n");
#endif
in_w=1;

R_MPI_Comm  comm_ltmp;
R_MPI_Comm * comm_tmp=&comm_ltmp;
comm_conv_a2r(comm,comm_tmp);
int ret_tmp= LOCAL_MPI_Comm_free( comm_tmp);
if(ret_tmp == R_MPI_SUCCESS){
comm_conv_r2a(comm,comm_tmp);
communicator_translation_del(comm);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_free(R_MPI_Comm * comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_free\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_free( comm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_free\n");
#endif
return ret_tmp;
}
int MPI_Comm_test_inter(A_MPI_Comm comm,int * flag);
int (*LOCAL_MPI_Comm_test_inter)(R_MPI_Comm,int *);

__asm__(
".global CCMPI_Comm_test_inter\n"
".weak MPI_Comm_test_inter\n"
".set MPI_Comm_test_inter,CCMPI_Comm_test_inter\n"
".extern in_w\n"
".extern A_MPI_Comm_test_inter\n"
".extern R_MPI_Comm_test_inter\n"
".type CCMPI_Comm_test_inter,@function\n"
".text\n"
"CCMPI_Comm_test_inter:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_test_inter\n"
"jmp *A_MPI_Comm_test_inter@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_test_inter:\n"
"jmp *R_MPI_Comm_test_inter@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_test_inter(A_MPI_Comm comm,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_test_inter\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

int ret_tmp= LOCAL_MPI_Comm_test_inter( comm_tmp, flag);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_test_inter\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_test_inter(R_MPI_Comm comm,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_test_inter\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_test_inter( comm, flag);
#ifdef DEBUG
printf("sort : R_MPI_Comm_test_inter\n");
#endif
return ret_tmp;
}
int MPI_Comm_remote_size(A_MPI_Comm comm,int * size);
int (*LOCAL_MPI_Comm_remote_size)(R_MPI_Comm,int *);

__asm__(
".global CCMPI_Comm_remote_size\n"
".weak MPI_Comm_remote_size\n"
".set MPI_Comm_remote_size,CCMPI_Comm_remote_size\n"
".extern in_w\n"
".extern A_MPI_Comm_remote_size\n"
".extern R_MPI_Comm_remote_size\n"
".type CCMPI_Comm_remote_size,@function\n"
".text\n"
"CCMPI_Comm_remote_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_remote_size\n"
"jmp *A_MPI_Comm_remote_size@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_remote_size:\n"
"jmp *R_MPI_Comm_remote_size@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_remote_size(A_MPI_Comm comm,int * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_remote_size\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

int ret_tmp= LOCAL_MPI_Comm_remote_size( comm_tmp, size);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_remote_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_remote_size(R_MPI_Comm comm,int * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_remote_size\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_remote_size( comm, size);
#ifdef DEBUG
printf("sort : R_MPI_Comm_remote_size\n");
#endif
return ret_tmp;
}
int MPI_Comm_remote_group(A_MPI_Comm comm,A_MPI_Group * group);
int (*LOCAL_MPI_Comm_remote_group)(R_MPI_Comm,R_MPI_Group *);

__asm__(
".global CCMPI_Comm_remote_group\n"
".weak MPI_Comm_remote_group\n"
".set MPI_Comm_remote_group,CCMPI_Comm_remote_group\n"
".extern in_w\n"
".extern A_MPI_Comm_remote_group\n"
".extern R_MPI_Comm_remote_group\n"
".type CCMPI_Comm_remote_group,@function\n"
".text\n"
"CCMPI_Comm_remote_group:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_remote_group\n"
"jmp *A_MPI_Comm_remote_group@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_remote_group:\n"
"jmp *R_MPI_Comm_remote_group@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_remote_group(A_MPI_Comm comm,A_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_remote_group\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Group  group_ltmp;
R_MPI_Group * group_tmp=&group_ltmp;
int ret_tmp= LOCAL_MPI_Comm_remote_group( comm_tmp, group_tmp);
group_conv_r2a(group,group_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_remote_group\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_remote_group(R_MPI_Comm comm,R_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_remote_group\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_remote_group( comm, group);
#ifdef DEBUG
printf("sort : R_MPI_Comm_remote_group\n");
#endif
return ret_tmp;
}
int MPI_Intercomm_create(A_MPI_Comm local_comm,int local_leader,A_MPI_Comm peer_comm,int remote_leader,int tag,A_MPI_Comm * newintercomm);
int (*LOCAL_MPI_Intercomm_create)(R_MPI_Comm,int,R_MPI_Comm,int,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Intercomm_create\n"
".weak MPI_Intercomm_create\n"
".set MPI_Intercomm_create,CCMPI_Intercomm_create\n"
".extern in_w\n"
".extern A_MPI_Intercomm_create\n"
".extern R_MPI_Intercomm_create\n"
".type CCMPI_Intercomm_create,@function\n"
".text\n"
"CCMPI_Intercomm_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Intercomm_create\n"
"jmp *A_MPI_Intercomm_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Intercomm_create:\n"
"jmp *R_MPI_Intercomm_create@GOTPCREL(%rip)\n"

);

int A_MPI_Intercomm_create(A_MPI_Comm local_comm,int local_leader,A_MPI_Comm peer_comm,int remote_leader,int tag,A_MPI_Comm * newintercomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Intercomm_create\n");
#endif
in_w=1;

R_MPI_Comm local_comm_tmp;
comm_conv_a2r(&local_comm,&local_comm_tmp);


R_MPI_Comm peer_comm_tmp;
comm_conv_a2r(&peer_comm,&peer_comm_tmp);


int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm  newintercomm_ltmp;
R_MPI_Comm * newintercomm_tmp=&newintercomm_ltmp;
int ret_tmp= LOCAL_MPI_Intercomm_create( local_comm_tmp, local_leader, peer_comm_tmp, remote_leader, tag_tmp, newintercomm_tmp);
comm_conv_r2a(newintercomm,newintercomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Intercomm_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Intercomm_create(R_MPI_Comm local_comm,int local_leader,R_MPI_Comm peer_comm,int remote_leader,int tag,R_MPI_Comm * newintercomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Intercomm_create\n");
#endif
int ret_tmp= LOCAL_MPI_Intercomm_create( local_comm, local_leader, peer_comm, remote_leader, tag, newintercomm);
#ifdef DEBUG
printf("sort : R_MPI_Intercomm_create\n");
#endif
return ret_tmp;
}
int MPI_Intercomm_merge(A_MPI_Comm intercomm,int high,A_MPI_Comm * newintracomm);
int (*LOCAL_MPI_Intercomm_merge)(R_MPI_Comm,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Intercomm_merge\n"
".weak MPI_Intercomm_merge\n"
".set MPI_Intercomm_merge,CCMPI_Intercomm_merge\n"
".extern in_w\n"
".extern A_MPI_Intercomm_merge\n"
".extern R_MPI_Intercomm_merge\n"
".type CCMPI_Intercomm_merge,@function\n"
".text\n"
"CCMPI_Intercomm_merge:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Intercomm_merge\n"
"jmp *A_MPI_Intercomm_merge@GOTPCREL(%rip)\n"
"inwrap_MPI_Intercomm_merge:\n"
"jmp *R_MPI_Intercomm_merge@GOTPCREL(%rip)\n"

);

int A_MPI_Intercomm_merge(A_MPI_Comm intercomm,int high,A_MPI_Comm * newintracomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Intercomm_merge\n");
#endif
in_w=1;

R_MPI_Comm intercomm_tmp;
comm_conv_a2r(&intercomm,&intercomm_tmp);


R_MPI_Comm  newintracomm_ltmp;
R_MPI_Comm * newintracomm_tmp=&newintracomm_ltmp;
int ret_tmp= LOCAL_MPI_Intercomm_merge( intercomm_tmp, high, newintracomm_tmp);
comm_conv_r2a(newintracomm,newintracomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Intercomm_merge\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Intercomm_merge(R_MPI_Comm intercomm,int high,R_MPI_Comm * newintracomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Intercomm_merge\n");
#endif
int ret_tmp= LOCAL_MPI_Intercomm_merge( intercomm, high, newintracomm);
#ifdef DEBUG
printf("sort : R_MPI_Intercomm_merge\n");
#endif
return ret_tmp;
}
int MPI_Attr_put(A_MPI_Comm comm,int keyval,void * attribute_val);
int (*LOCAL_MPI_Attr_put)(R_MPI_Comm,int,void *);

__asm__(
".global CCMPI_Attr_put\n"
".weak MPI_Attr_put\n"
".set MPI_Attr_put,CCMPI_Attr_put\n"
".extern in_w\n"
".extern A_MPI_Attr_put\n"
".extern R_MPI_Attr_put\n"
".type CCMPI_Attr_put,@function\n"
".text\n"
"CCMPI_Attr_put:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Attr_put\n"
"jmp *A_MPI_Attr_put@GOTPCREL(%rip)\n"
"inwrap_MPI_Attr_put:\n"
"jmp *R_MPI_Attr_put@GOTPCREL(%rip)\n"

);

int A_MPI_Attr_put(A_MPI_Comm comm,int keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : A_MPI_Attr_put\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int keyval_tmp;
my_keyval_a2r(&keyval,&keyval_tmp);


int ret_tmp= LOCAL_MPI_Attr_put( comm_tmp, keyval_tmp, attribute_val);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Attr_put\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Attr_put(R_MPI_Comm comm,int keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : R_MPI_Attr_put\n");
#endif
int ret_tmp= LOCAL_MPI_Attr_put( comm, keyval, attribute_val);
#ifdef DEBUG
printf("sort : R_MPI_Attr_put\n");
#endif
return ret_tmp;
}
int MPI_Attr_get(A_MPI_Comm comm,int keyval,void * attribute_val,int * flag);
int (*LOCAL_MPI_Attr_get)(R_MPI_Comm,int,void *,int *);

__asm__(
".global CCMPI_Attr_get\n"
".weak MPI_Attr_get\n"
".set MPI_Attr_get,CCMPI_Attr_get\n"
".extern in_w\n"
".extern A_MPI_Attr_get\n"
".extern R_MPI_Attr_get\n"
".type CCMPI_Attr_get,@function\n"
".text\n"
"CCMPI_Attr_get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Attr_get\n"
"jmp *A_MPI_Attr_get@GOTPCREL(%rip)\n"
"inwrap_MPI_Attr_get:\n"
"jmp *R_MPI_Attr_get@GOTPCREL(%rip)\n"

);

int A_MPI_Attr_get(A_MPI_Comm comm,int keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Attr_get\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int keyval_tmp;
my_keyval_a2r(&keyval,&keyval_tmp);


int ret_tmp= LOCAL_MPI_Attr_get( comm_tmp, keyval_tmp, attribute_val, flag);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Attr_get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Attr_get(R_MPI_Comm comm,int keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Attr_get\n");
#endif
int ret_tmp= LOCAL_MPI_Attr_get( comm, keyval, attribute_val, flag);
#ifdef DEBUG
printf("sort : R_MPI_Attr_get\n");
#endif
return ret_tmp;
}
int MPI_Attr_delete(A_MPI_Comm comm,int keyval);
int (*LOCAL_MPI_Attr_delete)(R_MPI_Comm,int);

__asm__(
".global CCMPI_Attr_delete\n"
".weak MPI_Attr_delete\n"
".set MPI_Attr_delete,CCMPI_Attr_delete\n"
".extern in_w\n"
".extern A_MPI_Attr_delete\n"
".extern R_MPI_Attr_delete\n"
".type CCMPI_Attr_delete,@function\n"
".text\n"
"CCMPI_Attr_delete:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Attr_delete\n"
"jmp *A_MPI_Attr_delete@GOTPCREL(%rip)\n"
"inwrap_MPI_Attr_delete:\n"
"jmp *R_MPI_Attr_delete@GOTPCREL(%rip)\n"

);

int A_MPI_Attr_delete(A_MPI_Comm comm,int keyval)
{
#ifdef DEBUG
printf("entre : A_MPI_Attr_delete\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int keyval_tmp;
my_keyval_a2r(&keyval,&keyval_tmp);
int ret_tmp= LOCAL_MPI_Attr_delete( comm_tmp, keyval_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Attr_delete\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Attr_delete(R_MPI_Comm comm,int keyval)
{
#ifdef DEBUG
printf("entre : R_MPI_Attr_delete\n");
#endif
int ret_tmp= LOCAL_MPI_Attr_delete( comm, keyval);
#ifdef DEBUG
printf("sort : R_MPI_Attr_delete\n");
#endif
return ret_tmp;
}
int MPI_Topo_test(A_MPI_Comm comm,int * status);
int (*LOCAL_MPI_Topo_test)(R_MPI_Comm,int *);

__asm__(
".global CCMPI_Topo_test\n"
".weak MPI_Topo_test\n"
".set MPI_Topo_test,CCMPI_Topo_test\n"
".extern in_w\n"
".extern A_MPI_Topo_test\n"
".extern R_MPI_Topo_test\n"
".type CCMPI_Topo_test,@function\n"
".text\n"
"CCMPI_Topo_test:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Topo_test\n"
"jmp *A_MPI_Topo_test@GOTPCREL(%rip)\n"
"inwrap_MPI_Topo_test:\n"
"jmp *R_MPI_Topo_test@GOTPCREL(%rip)\n"

);

int A_MPI_Topo_test(A_MPI_Comm comm,int * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Topo_test\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int  status_ltmp;
int * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Topo_test( comm_tmp, status_tmp);
topo_status_mapper(status,status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Topo_test\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Topo_test(R_MPI_Comm comm,int * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Topo_test\n");
#endif
int ret_tmp= LOCAL_MPI_Topo_test( comm, status);
#ifdef DEBUG
printf("sort : R_MPI_Topo_test\n");
#endif
return ret_tmp;
}
int MPI_Graphdims_get(A_MPI_Comm comm,int * nnodes,int * nedges);
int (*LOCAL_MPI_Graphdims_get)(R_MPI_Comm,int *,int *);

__asm__(
".global CCMPI_Graphdims_get\n"
".weak MPI_Graphdims_get\n"
".set MPI_Graphdims_get,CCMPI_Graphdims_get\n"
".extern in_w\n"
".extern A_MPI_Graphdims_get\n"
".extern R_MPI_Graphdims_get\n"
".type CCMPI_Graphdims_get,@function\n"
".text\n"
"CCMPI_Graphdims_get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Graphdims_get\n"
"jmp *A_MPI_Graphdims_get@GOTPCREL(%rip)\n"
"inwrap_MPI_Graphdims_get:\n"
"jmp *R_MPI_Graphdims_get@GOTPCREL(%rip)\n"

);

int A_MPI_Graphdims_get(A_MPI_Comm comm,int * nnodes,int * nedges)
{
#ifdef DEBUG
printf("entre : A_MPI_Graphdims_get\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);


int ret_tmp= LOCAL_MPI_Graphdims_get( comm_tmp, nnodes, nedges);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Graphdims_get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Graphdims_get(R_MPI_Comm comm,int * nnodes,int * nedges)
{
#ifdef DEBUG
printf("entre : R_MPI_Graphdims_get\n");
#endif
int ret_tmp= LOCAL_MPI_Graphdims_get( comm, nnodes, nedges);
#ifdef DEBUG
printf("sort : R_MPI_Graphdims_get\n");
#endif
return ret_tmp;
}
int MPI_Cartdim_get(A_MPI_Comm comm,int * ndims);
int (*LOCAL_MPI_Cartdim_get)(R_MPI_Comm,int *);

__asm__(
".global CCMPI_Cartdim_get\n"
".weak MPI_Cartdim_get\n"
".set MPI_Cartdim_get,CCMPI_Cartdim_get\n"
".extern in_w\n"
".extern A_MPI_Cartdim_get\n"
".extern R_MPI_Cartdim_get\n"
".type CCMPI_Cartdim_get,@function\n"
".text\n"
"CCMPI_Cartdim_get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cartdim_get\n"
"jmp *A_MPI_Cartdim_get@GOTPCREL(%rip)\n"
"inwrap_MPI_Cartdim_get:\n"
"jmp *R_MPI_Cartdim_get@GOTPCREL(%rip)\n"

);

int A_MPI_Cartdim_get(A_MPI_Comm comm,int * ndims)
{
#ifdef DEBUG
printf("entre : A_MPI_Cartdim_get\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

int ret_tmp= LOCAL_MPI_Cartdim_get( comm_tmp, ndims);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cartdim_get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cartdim_get(R_MPI_Comm comm,int * ndims)
{
#ifdef DEBUG
printf("entre : R_MPI_Cartdim_get\n");
#endif
int ret_tmp= LOCAL_MPI_Cartdim_get( comm, ndims);
#ifdef DEBUG
printf("sort : R_MPI_Cartdim_get\n");
#endif
return ret_tmp;
}
int MPI_Graph_neighbors_count(A_MPI_Comm comm,int rank,int * nneighbors);
int (*LOCAL_MPI_Graph_neighbors_count)(R_MPI_Comm,int,int *);

__asm__(
".global CCMPI_Graph_neighbors_count\n"
".weak MPI_Graph_neighbors_count\n"
".set MPI_Graph_neighbors_count,CCMPI_Graph_neighbors_count\n"
".extern in_w\n"
".extern A_MPI_Graph_neighbors_count\n"
".extern R_MPI_Graph_neighbors_count\n"
".type CCMPI_Graph_neighbors_count,@function\n"
".text\n"
"CCMPI_Graph_neighbors_count:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Graph_neighbors_count\n"
"jmp *A_MPI_Graph_neighbors_count@GOTPCREL(%rip)\n"
"inwrap_MPI_Graph_neighbors_count:\n"
"jmp *R_MPI_Graph_neighbors_count@GOTPCREL(%rip)\n"

);

int A_MPI_Graph_neighbors_count(A_MPI_Comm comm,int rank,int * nneighbors)
{
#ifdef DEBUG
printf("entre : A_MPI_Graph_neighbors_count\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);



int ret_tmp= LOCAL_MPI_Graph_neighbors_count( comm_tmp, rank, nneighbors);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Graph_neighbors_count\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Graph_neighbors_count(R_MPI_Comm comm,int rank,int * nneighbors)
{
#ifdef DEBUG
printf("entre : R_MPI_Graph_neighbors_count\n");
#endif
int ret_tmp= LOCAL_MPI_Graph_neighbors_count( comm, rank, nneighbors);
#ifdef DEBUG
printf("sort : R_MPI_Graph_neighbors_count\n");
#endif
return ret_tmp;
}
int MPI_Cart_shift(A_MPI_Comm comm,int direction,int disp,int * rank_source,int * rank_dest);
int (*LOCAL_MPI_Cart_shift)(R_MPI_Comm,int,int,int *,int *);

__asm__(
".global CCMPI_Cart_shift\n"
".weak MPI_Cart_shift\n"
".set MPI_Cart_shift,CCMPI_Cart_shift\n"
".extern in_w\n"
".extern A_MPI_Cart_shift\n"
".extern R_MPI_Cart_shift\n"
".type CCMPI_Cart_shift,@function\n"
".text\n"
"CCMPI_Cart_shift:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cart_shift\n"
"jmp *A_MPI_Cart_shift@GOTPCREL(%rip)\n"
"inwrap_MPI_Cart_shift:\n"
"jmp *R_MPI_Cart_shift@GOTPCREL(%rip)\n"

);

int A_MPI_Cart_shift(A_MPI_Comm comm,int direction,int disp,int * rank_source,int * rank_dest)
{
#ifdef DEBUG
printf("entre : A_MPI_Cart_shift\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);




int  rank_source_ltmp;
int * rank_source_tmp=&rank_source_ltmp;

int ret_tmp= LOCAL_MPI_Cart_shift( comm_tmp, direction, disp, rank_source_tmp, rank_dest);
source_conv_r2a(rank_source,rank_source_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cart_shift\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cart_shift(R_MPI_Comm comm,int direction,int disp,int * rank_source,int * rank_dest)
{
#ifdef DEBUG
printf("entre : R_MPI_Cart_shift\n");
#endif
int ret_tmp= LOCAL_MPI_Cart_shift( comm, direction, disp, rank_source, rank_dest);
#ifdef DEBUG
printf("sort : R_MPI_Cart_shift\n");
#endif
return ret_tmp;
}
int MPI_Get_processor_name(char * name,int * resultlen);
int (*LOCAL_MPI_Get_processor_name)(char *,int *);

__asm__(
".global CCMPI_Get_processor_name\n"
".weak MPI_Get_processor_name\n"
".set MPI_Get_processor_name,CCMPI_Get_processor_name\n"
".extern in_w\n"
".extern A_MPI_Get_processor_name\n"
".extern R_MPI_Get_processor_name\n"
".type CCMPI_Get_processor_name,@function\n"
".text\n"
"CCMPI_Get_processor_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_processor_name\n"
"jmp *A_MPI_Get_processor_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_processor_name:\n"
"jmp *R_MPI_Get_processor_name@GOTPCREL(%rip)\n"

);

int A_MPI_Get_processor_name(char * name,int * resultlen)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_processor_name\n");
#endif
in_w=1;



int ret_tmp= LOCAL_MPI_Get_processor_name( name, resultlen);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_processor_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_processor_name(char * name,int * resultlen)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_processor_name\n");
#endif
int ret_tmp= LOCAL_MPI_Get_processor_name( name, resultlen);
#ifdef DEBUG
printf("sort : R_MPI_Get_processor_name\n");
#endif
return ret_tmp;
}
int MPI_Get_version(int * version,int * subversion);
int (*LOCAL_MPI_Get_version)(int *,int *);

__asm__(
".global CCMPI_Get_version\n"
".weak MPI_Get_version\n"
".set MPI_Get_version,CCMPI_Get_version\n"
".extern in_w\n"
".extern A_MPI_Get_version\n"
".extern R_MPI_Get_version\n"
".type CCMPI_Get_version,@function\n"
".text\n"
"CCMPI_Get_version:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_version\n"
"jmp *A_MPI_Get_version@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_version:\n"
"jmp *R_MPI_Get_version@GOTPCREL(%rip)\n"

);

int A_MPI_Get_version(int * version,int * subversion)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_version\n");
#endif
in_w=1;



int ret_tmp= LOCAL_MPI_Get_version( version, subversion);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_version\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_version(int * version,int * subversion)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_version\n");
#endif
int ret_tmp= LOCAL_MPI_Get_version( version, subversion);
#ifdef DEBUG
printf("sort : R_MPI_Get_version\n");
#endif
return ret_tmp;
}
int MPI_Get_library_version(char * version,int * resultlen);
int (*LOCAL_MPI_Get_library_version)(char *,int *);

__asm__(
".global CCMPI_Get_library_version\n"
".weak MPI_Get_library_version\n"
".set MPI_Get_library_version,CCMPI_Get_library_version\n"
".extern in_w\n"
".extern A_MPI_Get_library_version\n"
".extern R_MPI_Get_library_version\n"
".type CCMPI_Get_library_version,@function\n"
".text\n"
"CCMPI_Get_library_version:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_library_version\n"
"jmp *A_MPI_Get_library_version@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_library_version:\n"
"jmp *R_MPI_Get_library_version@GOTPCREL(%rip)\n"

);

int A_MPI_Get_library_version(char * version,int * resultlen)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_library_version\n");
#endif
in_w=1;



int ret_tmp= LOCAL_MPI_Get_library_version( version, resultlen);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_library_version\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_library_version(char * version,int * resultlen)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_library_version\n");
#endif
int ret_tmp= LOCAL_MPI_Get_library_version( version, resultlen);
#ifdef DEBUG
printf("sort : R_MPI_Get_library_version\n");
#endif
return ret_tmp;
}
int MPI_Errhandler_create(A_MPI_Handler_function * function,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_Errhandler_create)(R_MPI_Handler_function *,R_MPI_Errhandler *);

__asm__(
".global CCMPI_Errhandler_create\n"
".weak MPI_Errhandler_create\n"
".set MPI_Errhandler_create,CCMPI_Errhandler_create\n"
".extern in_w\n"
".extern A_MPI_Errhandler_create\n"
".extern R_MPI_Errhandler_create\n"
".type CCMPI_Errhandler_create,@function\n"
".text\n"
"CCMPI_Errhandler_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_create\n"
"jmp *A_MPI_Errhandler_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_create:\n"
"jmp *R_MPI_Errhandler_create@GOTPCREL(%rip)\n"

);

int A_MPI_Errhandler_create(A_MPI_Handler_function * function,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_create\n");
#endif
in_w=1;


ptr_handler_fn=(A_MPI_Handler_function *)function;
R_MPI_Errhandler  errhandler_ltmp;
R_MPI_Errhandler * errhandler_tmp=&errhandler_ltmp;
int ret_tmp= LOCAL_MPI_Errhandler_create( (R_MPI_Handler_function *)wrapper_handler_function, errhandler_tmp);
errhandler_ptr_conv_r2a(&errhandler,&errhandler_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Errhandler_create(R_MPI_Handler_function * function,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_create\n");
#endif
int ret_tmp= LOCAL_MPI_Errhandler_create( function, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_create\n");
#endif
return ret_tmp;
}
int MPI_Errhandler_set(A_MPI_Comm comm,A_MPI_Errhandler errhandler);
int (*LOCAL_MPI_Errhandler_set)(R_MPI_Comm,R_MPI_Errhandler);

__asm__(
".global CCMPI_Errhandler_set\n"
".weak MPI_Errhandler_set\n"
".set MPI_Errhandler_set,CCMPI_Errhandler_set\n"
".extern in_w\n"
".extern A_MPI_Errhandler_set\n"
".extern R_MPI_Errhandler_set\n"
".type CCMPI_Errhandler_set,@function\n"
".text\n"
"CCMPI_Errhandler_set:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_set\n"
"jmp *A_MPI_Errhandler_set@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_set:\n"
"jmp *R_MPI_Errhandler_set@GOTPCREL(%rip)\n"

);

int A_MPI_Errhandler_set(A_MPI_Comm comm,A_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_set\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Errhandler errhandler_tmp;
errhandler_conv_a2r(&errhandler,&errhandler_tmp);
int ret_tmp= LOCAL_MPI_Errhandler_set( comm_tmp, errhandler_tmp);
if(!errhandler_translation_is_const(errhandler)){
A_MPI_Handler_function* ptr_errhandler_func;
errhandler_fn_translation_get(errhandler, &ptr_errhandler_func);
communicator_fn_translation_update(comm, ptr_errhandler_func);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_set\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Errhandler_set(R_MPI_Comm comm,R_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_set\n");
#endif
int ret_tmp= LOCAL_MPI_Errhandler_set( comm, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_set\n");
#endif
return ret_tmp;
}
int MPI_Errhandler_get(A_MPI_Comm comm,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_Errhandler_get)(R_MPI_Comm,R_MPI_Errhandler *);

__asm__(
".global CCMPI_Errhandler_get\n"
".weak MPI_Errhandler_get\n"
".set MPI_Errhandler_get,CCMPI_Errhandler_get\n"
".extern in_w\n"
".extern A_MPI_Errhandler_get\n"
".extern R_MPI_Errhandler_get\n"
".type CCMPI_Errhandler_get,@function\n"
".text\n"
"CCMPI_Errhandler_get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_get\n"
"jmp *A_MPI_Errhandler_get@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_get:\n"
"jmp *R_MPI_Errhandler_get@GOTPCREL(%rip)\n"

);

int A_MPI_Errhandler_get(A_MPI_Comm comm,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_get\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Errhandler  errhandler_ltmp;
R_MPI_Errhandler * errhandler_tmp=&errhandler_ltmp;
int ret_tmp= LOCAL_MPI_Errhandler_get( comm_tmp, errhandler_tmp);
if(ret_tmp == R_MPI_SUCCESS){
errhandler_translation_get_key_from_value(*errhandler_tmp,errhandler);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Errhandler_get(R_MPI_Comm comm,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_get\n");
#endif
int ret_tmp= LOCAL_MPI_Errhandler_get( comm, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_get\n");
#endif
return ret_tmp;
}
int MPI_Errhandler_free(A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_Errhandler_free)(R_MPI_Errhandler *);

__asm__(
".global CCMPI_Errhandler_free\n"
".weak MPI_Errhandler_free\n"
".set MPI_Errhandler_free,CCMPI_Errhandler_free\n"
".extern in_w\n"
".extern A_MPI_Errhandler_free\n"
".extern R_MPI_Errhandler_free\n"
".type CCMPI_Errhandler_free,@function\n"
".text\n"
"CCMPI_Errhandler_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_free\n"
"jmp *A_MPI_Errhandler_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_free:\n"
"jmp *R_MPI_Errhandler_free@GOTPCREL(%rip)\n"

);

int A_MPI_Errhandler_free(A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_free\n");
#endif
in_w=1;

R_MPI_Errhandler  errhandler_ltmp;
R_MPI_Errhandler * errhandler_tmp=&errhandler_ltmp;
errhandler_conv_a2r(errhandler,errhandler_tmp);
int ret_tmp= LOCAL_MPI_Errhandler_free( errhandler_tmp);
if(ret_tmp == R_MPI_SUCCESS){
errhandler_del(errhandler,errhandler_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Errhandler_free(R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_free\n");
#endif
int ret_tmp= LOCAL_MPI_Errhandler_free( errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_free\n");
#endif
return ret_tmp;
}
int MPI_Error_string(int errorcode,char * string,int * resultlen);
int (*LOCAL_MPI_Error_string)(int,char *,int *);

__asm__(
".global CCMPI_Error_string\n"
".weak MPI_Error_string\n"
".set MPI_Error_string,CCMPI_Error_string\n"
".extern in_w\n"
".extern A_MPI_Error_string\n"
".extern R_MPI_Error_string\n"
".type CCMPI_Error_string,@function\n"
".text\n"
"CCMPI_Error_string:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Error_string\n"
"jmp *A_MPI_Error_string@GOTPCREL(%rip)\n"
"inwrap_MPI_Error_string:\n"
"jmp *R_MPI_Error_string@GOTPCREL(%rip)\n"

);

int A_MPI_Error_string(int errorcode,char * string,int * resultlen)
{
#ifdef DEBUG
printf("entre : A_MPI_Error_string\n");
#endif
in_w=1;





int ret_tmp= LOCAL_MPI_Error_string( errorcode, string, resultlen);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Error_string\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Error_string(int errorcode,char * string,int * resultlen)
{
#ifdef DEBUG
printf("entre : R_MPI_Error_string\n");
#endif
int ret_tmp= LOCAL_MPI_Error_string( errorcode, string, resultlen);
#ifdef DEBUG
printf("sort : R_MPI_Error_string\n");
#endif
return ret_tmp;
}
int MPI_Error_class(int errorcode,int * errorclass);
int (*LOCAL_MPI_Error_class)(int,int *);

__asm__(
".global CCMPI_Error_class\n"
".weak MPI_Error_class\n"
".set MPI_Error_class,CCMPI_Error_class\n"
".extern in_w\n"
".extern A_MPI_Error_class\n"
".extern R_MPI_Error_class\n"
".type CCMPI_Error_class,@function\n"
".text\n"
"CCMPI_Error_class:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Error_class\n"
"jmp *A_MPI_Error_class@GOTPCREL(%rip)\n"
"inwrap_MPI_Error_class:\n"
"jmp *R_MPI_Error_class@GOTPCREL(%rip)\n"

);

int A_MPI_Error_class(int errorcode,int * errorclass)
{
#ifdef DEBUG
printf("entre : A_MPI_Error_class\n");
#endif
in_w=1;




int ret_tmp= LOCAL_MPI_Error_class( errorcode, errorclass);
*errorclass = error_code_conv_r2a(*errorclass);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Error_class\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Error_class(int errorcode,int * errorclass)
{
#ifdef DEBUG
printf("entre : R_MPI_Error_class\n");
#endif
int ret_tmp= LOCAL_MPI_Error_class( errorcode, errorclass);
#ifdef DEBUG
printf("sort : R_MPI_Error_class\n");
#endif
return ret_tmp;
}
int MPI_Initialized(int * flag);
int (*LOCAL_MPI_Initialized)(int *);

__asm__(
".global CCMPI_Initialized\n"
".weak MPI_Initialized\n"
".set MPI_Initialized,CCMPI_Initialized\n"
".extern in_w\n"
".extern A_MPI_Initialized\n"
".extern R_MPI_Initialized\n"
".type CCMPI_Initialized,@function\n"
".text\n"
"CCMPI_Initialized:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Initialized\n"
"jmp *A_MPI_Initialized@GOTPCREL(%rip)\n"
"inwrap_MPI_Initialized:\n"
"jmp *R_MPI_Initialized@GOTPCREL(%rip)\n"

);

int A_MPI_Initialized(int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Initialized\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_Initialized( flag);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Initialized\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Initialized(int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Initialized\n");
#endif
int ret_tmp= LOCAL_MPI_Initialized( flag);
#ifdef DEBUG
printf("sort : R_MPI_Initialized\n");
#endif
return ret_tmp;
}
int MPI_Abort(A_MPI_Comm comm,int errorcode);
int (*LOCAL_MPI_Abort)(R_MPI_Comm,int);

__asm__(
".global CCMPI_Abort\n"
".weak MPI_Abort\n"
".set MPI_Abort,CCMPI_Abort\n"
".extern in_w\n"
".extern A_MPI_Abort\n"
".extern R_MPI_Abort\n"
".type CCMPI_Abort,@function\n"
".text\n"
"CCMPI_Abort:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Abort\n"
"jmp *A_MPI_Abort@GOTPCREL(%rip)\n"
"inwrap_MPI_Abort:\n"
"jmp *R_MPI_Abort@GOTPCREL(%rip)\n"

);

int A_MPI_Abort(A_MPI_Comm comm,int errorcode)
{
#ifdef DEBUG
printf("entre : A_MPI_Abort\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);


int ret_tmp= LOCAL_MPI_Abort( comm_tmp, errorcode);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Abort\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Abort(R_MPI_Comm comm,int errorcode)
{
#ifdef DEBUG
printf("entre : R_MPI_Abort\n");
#endif
int ret_tmp= LOCAL_MPI_Abort( comm, errorcode);
#ifdef DEBUG
printf("sort : R_MPI_Abort\n");
#endif
return ret_tmp;
}
int MPI_Init(int * argc,char *** argv);
int (*LOCAL_MPI_Init)(int *,char ***);

__asm__(
".global CCMPI_Init\n"
".weak MPI_Init\n"
".set MPI_Init,CCMPI_Init\n"
".extern in_w\n"
".extern A_MPI_Init\n"
".extern R_MPI_Init\n"
".type CCMPI_Init,@function\n"
".text\n"
"CCMPI_Init:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Init\n"
"jmp *A_MPI_Init@GOTPCREL(%rip)\n"
"inwrap_MPI_Init:\n"
"jmp *R_MPI_Init@GOTPCREL(%rip)\n"

);

int A_MPI_Init(int * argc,char *** argv)
{
#ifdef DEBUG
printf("entre : A_MPI_Init\n");
#endif
in_w=1;





int ret_tmp= LOCAL_MPI_Init( argc, argv);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Init\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Init(int * argc,char *** argv)
{
#ifdef DEBUG
printf("entre : R_MPI_Init\n");
#endif
int ret_tmp= LOCAL_MPI_Init( argc, argv);
#ifdef DEBUG
printf("sort : R_MPI_Init\n");
#endif
return ret_tmp;
}
int MPI_Close_port(char * port_name);
int (*LOCAL_MPI_Close_port)(char *);

__asm__(
".global CCMPI_Close_port\n"
".weak MPI_Close_port\n"
".set MPI_Close_port,CCMPI_Close_port\n"
".extern in_w\n"
".extern A_MPI_Close_port\n"
".extern R_MPI_Close_port\n"
".type CCMPI_Close_port,@function\n"
".text\n"
"CCMPI_Close_port:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Close_port\n"
"jmp *A_MPI_Close_port@GOTPCREL(%rip)\n"
"inwrap_MPI_Close_port:\n"
"jmp *R_MPI_Close_port@GOTPCREL(%rip)\n"

);

int A_MPI_Close_port(char * port_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Close_port\n");
#endif
in_w=1;



int ret_tmp= LOCAL_MPI_Close_port( port_name);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Close_port\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Close_port(char * port_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Close_port\n");
#endif
int ret_tmp= LOCAL_MPI_Close_port( port_name);
#ifdef DEBUG
printf("sort : R_MPI_Close_port\n");
#endif
return ret_tmp;
}
int MPI_Comm_accept(char * port_name,A_MPI_Info info,int root,A_MPI_Comm comm,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_accept)(char *,R_MPI_Info,int,R_MPI_Comm,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_accept\n"
".weak MPI_Comm_accept\n"
".set MPI_Comm_accept,CCMPI_Comm_accept\n"
".extern in_w\n"
".extern A_MPI_Comm_accept\n"
".extern R_MPI_Comm_accept\n"
".type CCMPI_Comm_accept,@function\n"
".text\n"
"CCMPI_Comm_accept:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_accept\n"
"jmp *A_MPI_Comm_accept@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_accept:\n"
"jmp *R_MPI_Comm_accept@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_accept(char * port_name,A_MPI_Info info,int root,A_MPI_Comm comm,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_accept\n");
#endif
in_w=1;



R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_accept( port_name, info_tmp, root, comm_tmp, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_accept\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_accept(char * port_name,R_MPI_Info info,int root,R_MPI_Comm comm,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_accept\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_accept( port_name, info, root, comm, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_accept\n");
#endif
return ret_tmp;
}
int MPI_Comm_connect(char * port_name,A_MPI_Info info,int root,A_MPI_Comm comm,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_connect)(char *,R_MPI_Info,int,R_MPI_Comm,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_connect\n"
".weak MPI_Comm_connect\n"
".set MPI_Comm_connect,CCMPI_Comm_connect\n"
".extern in_w\n"
".extern A_MPI_Comm_connect\n"
".extern R_MPI_Comm_connect\n"
".type CCMPI_Comm_connect,@function\n"
".text\n"
"CCMPI_Comm_connect:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_connect\n"
"jmp *A_MPI_Comm_connect@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_connect:\n"
"jmp *R_MPI_Comm_connect@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_connect(char * port_name,A_MPI_Info info,int root,A_MPI_Comm comm,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_connect\n");
#endif
in_w=1;



R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_connect( port_name, info_tmp, root, comm_tmp, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_connect\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_connect(char * port_name,R_MPI_Info info,int root,R_MPI_Comm comm,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_connect\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_connect( port_name, info, root, comm, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_connect\n");
#endif
return ret_tmp;
}
int MPI_Comm_disconnect(A_MPI_Comm * comm);
int (*LOCAL_MPI_Comm_disconnect)(R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_disconnect\n"
".weak MPI_Comm_disconnect\n"
".set MPI_Comm_disconnect,CCMPI_Comm_disconnect\n"
".extern in_w\n"
".extern A_MPI_Comm_disconnect\n"
".extern R_MPI_Comm_disconnect\n"
".type CCMPI_Comm_disconnect,@function\n"
".text\n"
"CCMPI_Comm_disconnect:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_disconnect\n"
"jmp *A_MPI_Comm_disconnect@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_disconnect:\n"
"jmp *R_MPI_Comm_disconnect@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_disconnect(A_MPI_Comm * comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_disconnect\n");
#endif
in_w=1;

R_MPI_Comm  comm_ltmp;
R_MPI_Comm * comm_tmp=&comm_ltmp;
comm_conv_a2r(comm,comm_tmp);
int ret_tmp= LOCAL_MPI_Comm_disconnect( comm_tmp);
comm_conv_r2a(comm,comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_disconnect\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_disconnect(R_MPI_Comm * comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_disconnect\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_disconnect( comm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_disconnect\n");
#endif
return ret_tmp;
}
int MPI_Comm_get_parent(A_MPI_Comm * parent);
int (*LOCAL_MPI_Comm_get_parent)(R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_get_parent\n"
".weak MPI_Comm_get_parent\n"
".set MPI_Comm_get_parent,CCMPI_Comm_get_parent\n"
".extern in_w\n"
".extern A_MPI_Comm_get_parent\n"
".extern R_MPI_Comm_get_parent\n"
".type CCMPI_Comm_get_parent,@function\n"
".text\n"
"CCMPI_Comm_get_parent:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_get_parent\n"
"jmp *A_MPI_Comm_get_parent@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_get_parent:\n"
"jmp *R_MPI_Comm_get_parent@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_get_parent(A_MPI_Comm * parent)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_get_parent\n");
#endif
in_w=1;

R_MPI_Comm  parent_ltmp;
R_MPI_Comm * parent_tmp=&parent_ltmp;
int ret_tmp= LOCAL_MPI_Comm_get_parent( parent_tmp);
comm_conv_r2a(parent,parent_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_get_parent\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_get_parent(R_MPI_Comm * parent)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_get_parent\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_get_parent( parent);
#ifdef DEBUG
printf("sort : R_MPI_Comm_get_parent\n");
#endif
return ret_tmp;
}
int MPI_Comm_join(int fd,A_MPI_Comm * intercomm);
int (*LOCAL_MPI_Comm_join)(int,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_join\n"
".weak MPI_Comm_join\n"
".set MPI_Comm_join,CCMPI_Comm_join\n"
".extern in_w\n"
".extern A_MPI_Comm_join\n"
".extern R_MPI_Comm_join\n"
".type CCMPI_Comm_join,@function\n"
".text\n"
"CCMPI_Comm_join:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_join\n"
"jmp *A_MPI_Comm_join@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_join:\n"
"jmp *R_MPI_Comm_join@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_join(int fd,A_MPI_Comm * intercomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_join\n");
#endif
in_w=1;



R_MPI_Comm  intercomm_ltmp;
R_MPI_Comm * intercomm_tmp=&intercomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_join( fd, intercomm_tmp);
comm_conv_r2a(intercomm,intercomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_join\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_join(int fd,R_MPI_Comm * intercomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_join\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_join( fd, intercomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_join\n");
#endif
return ret_tmp;
}
int MPI_Lookup_name(char * service_name,A_MPI_Info info,char * port_name);
int (*LOCAL_MPI_Lookup_name)(char *,R_MPI_Info,char *);

__asm__(
".global CCMPI_Lookup_name\n"
".weak MPI_Lookup_name\n"
".set MPI_Lookup_name,CCMPI_Lookup_name\n"
".extern in_w\n"
".extern A_MPI_Lookup_name\n"
".extern R_MPI_Lookup_name\n"
".type CCMPI_Lookup_name,@function\n"
".text\n"
"CCMPI_Lookup_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Lookup_name\n"
"jmp *A_MPI_Lookup_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Lookup_name:\n"
"jmp *R_MPI_Lookup_name@GOTPCREL(%rip)\n"

);

int A_MPI_Lookup_name(char * service_name,A_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Lookup_name\n");
#endif
in_w=1;



R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);

int ret_tmp= LOCAL_MPI_Lookup_name( service_name, info_tmp, port_name);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Lookup_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Lookup_name(char * service_name,R_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Lookup_name\n");
#endif
int ret_tmp= LOCAL_MPI_Lookup_name( service_name, info, port_name);
#ifdef DEBUG
printf("sort : R_MPI_Lookup_name\n");
#endif
return ret_tmp;
}
int MPI_Open_port(A_MPI_Info info,char * port_name);
int (*LOCAL_MPI_Open_port)(R_MPI_Info,char *);

__asm__(
".global CCMPI_Open_port\n"
".weak MPI_Open_port\n"
".set MPI_Open_port,CCMPI_Open_port\n"
".extern in_w\n"
".extern A_MPI_Open_port\n"
".extern R_MPI_Open_port\n"
".type CCMPI_Open_port,@function\n"
".text\n"
"CCMPI_Open_port:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Open_port\n"
"jmp *A_MPI_Open_port@GOTPCREL(%rip)\n"
"inwrap_MPI_Open_port:\n"
"jmp *R_MPI_Open_port@GOTPCREL(%rip)\n"

);

int A_MPI_Open_port(A_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Open_port\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);

int ret_tmp= LOCAL_MPI_Open_port( info_tmp, port_name);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Open_port\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Open_port(R_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Open_port\n");
#endif
int ret_tmp= LOCAL_MPI_Open_port( info, port_name);
#ifdef DEBUG
printf("sort : R_MPI_Open_port\n");
#endif
return ret_tmp;
}
int MPI_Publish_name(char * service_name,A_MPI_Info info,char * port_name);
int (*LOCAL_MPI_Publish_name)(char *,R_MPI_Info,char *);

__asm__(
".global CCMPI_Publish_name\n"
".weak MPI_Publish_name\n"
".set MPI_Publish_name,CCMPI_Publish_name\n"
".extern in_w\n"
".extern A_MPI_Publish_name\n"
".extern R_MPI_Publish_name\n"
".type CCMPI_Publish_name,@function\n"
".text\n"
"CCMPI_Publish_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Publish_name\n"
"jmp *A_MPI_Publish_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Publish_name:\n"
"jmp *R_MPI_Publish_name@GOTPCREL(%rip)\n"

);

int A_MPI_Publish_name(char * service_name,A_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Publish_name\n");
#endif
in_w=1;



R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


int ret_tmp= LOCAL_MPI_Publish_name( service_name, info_tmp, port_name);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Publish_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Publish_name(char * service_name,R_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Publish_name\n");
#endif
int ret_tmp= LOCAL_MPI_Publish_name( service_name, info, port_name);
#ifdef DEBUG
printf("sort : R_MPI_Publish_name\n");
#endif
return ret_tmp;
}
int MPI_Unpublish_name(char * service_name,A_MPI_Info info,char * port_name);
int (*LOCAL_MPI_Unpublish_name)(char *,R_MPI_Info,char *);

__asm__(
".global CCMPI_Unpublish_name\n"
".weak MPI_Unpublish_name\n"
".set MPI_Unpublish_name,CCMPI_Unpublish_name\n"
".extern in_w\n"
".extern A_MPI_Unpublish_name\n"
".extern R_MPI_Unpublish_name\n"
".type CCMPI_Unpublish_name,@function\n"
".text\n"
"CCMPI_Unpublish_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Unpublish_name\n"
"jmp *A_MPI_Unpublish_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Unpublish_name:\n"
"jmp *R_MPI_Unpublish_name@GOTPCREL(%rip)\n"

);

int A_MPI_Unpublish_name(char * service_name,A_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Unpublish_name\n");
#endif
in_w=1;



R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


int ret_tmp= LOCAL_MPI_Unpublish_name( service_name, info_tmp, port_name);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Unpublish_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Unpublish_name(char * service_name,R_MPI_Info info,char * port_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Unpublish_name\n");
#endif
int ret_tmp= LOCAL_MPI_Unpublish_name( service_name, info, port_name);
#ifdef DEBUG
printf("sort : R_MPI_Unpublish_name\n");
#endif
return ret_tmp;
}
int MPI_Comm_set_info(A_MPI_Comm comm,A_MPI_Info info);
int (*LOCAL_MPI_Comm_set_info)(R_MPI_Comm,R_MPI_Info);

__asm__(
".global CCMPI_Comm_set_info\n"
".weak MPI_Comm_set_info\n"
".set MPI_Comm_set_info,CCMPI_Comm_set_info\n"
".extern in_w\n"
".extern A_MPI_Comm_set_info\n"
".extern R_MPI_Comm_set_info\n"
".type CCMPI_Comm_set_info,@function\n"
".text\n"
"CCMPI_Comm_set_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_set_info\n"
"jmp *A_MPI_Comm_set_info@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_set_info:\n"
"jmp *R_MPI_Comm_set_info@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_set_info(A_MPI_Comm comm,A_MPI_Info info)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_set_info\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
int ret_tmp= LOCAL_MPI_Comm_set_info( comm_tmp, info_tmp);
comm_conv_r2a(&comm,&comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_set_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_set_info(R_MPI_Comm comm,R_MPI_Info info)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_set_info\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_set_info( comm, info);
#ifdef DEBUG
printf("sort : R_MPI_Comm_set_info\n");
#endif
return ret_tmp;
}
int MPI_Comm_get_info(A_MPI_Comm comm,A_MPI_Info * info);
int (*LOCAL_MPI_Comm_get_info)(R_MPI_Comm,R_MPI_Info *);

__asm__(
".global CCMPI_Comm_get_info\n"
".weak MPI_Comm_get_info\n"
".set MPI_Comm_get_info,CCMPI_Comm_get_info\n"
".extern in_w\n"
".extern A_MPI_Comm_get_info\n"
".extern R_MPI_Comm_get_info\n"
".type CCMPI_Comm_get_info,@function\n"
".text\n"
"CCMPI_Comm_get_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_get_info\n"
"jmp *A_MPI_Comm_get_info@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_get_info:\n"
"jmp *R_MPI_Comm_get_info@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_get_info(A_MPI_Comm comm,A_MPI_Info * info)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_get_info\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Info  info_ltmp;
R_MPI_Info * info_tmp=&info_ltmp;
int ret_tmp= LOCAL_MPI_Comm_get_info( comm_tmp, info_tmp);
info_conv_r2a(info,info_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_get_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_get_info(R_MPI_Comm comm,R_MPI_Info * info)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_get_info\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_get_info( comm, info);
#ifdef DEBUG
printf("sort : R_MPI_Comm_get_info\n");
#endif
return ret_tmp;
}
int MPI_Accumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win);
int (*LOCAL_MPI_Accumulate)(void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Win);

__asm__(
".global CCMPI_Accumulate\n"
".weak MPI_Accumulate\n"
".set MPI_Accumulate,CCMPI_Accumulate\n"
".extern in_w\n"
".extern A_MPI_Accumulate\n"
".extern R_MPI_Accumulate\n"
".type CCMPI_Accumulate,@function\n"
".text\n"
"CCMPI_Accumulate:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Accumulate\n"
"jmp *A_MPI_Accumulate@GOTPCREL(%rip)\n"
"inwrap_MPI_Accumulate:\n"
"jmp *R_MPI_Accumulate@GOTPCREL(%rip)\n"

);

int A_MPI_Accumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Accumulate\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;


R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Accumulate( origin_addr_tmp, origin_count, origin_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count, target_datatype_tmp, op_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Accumulate\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Accumulate(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Op op,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Accumulate\n");
#endif
int ret_tmp= LOCAL_MPI_Accumulate( origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, op, win);
#ifdef DEBUG
printf("sort : R_MPI_Accumulate\n");
#endif
return ret_tmp;
}
int MPI_Get(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win);
int (*LOCAL_MPI_Get)(void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Win);

__asm__(
".global CCMPI_Get\n"
".weak MPI_Get\n"
".set MPI_Get,CCMPI_Get\n"
".extern in_w\n"
".extern A_MPI_Get\n"
".extern R_MPI_Get\n"
".type CCMPI_Get,@function\n"
".text\n"
"CCMPI_Get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get\n"
"jmp *A_MPI_Get@GOTPCREL(%rip)\n"
"inwrap_MPI_Get:\n"
"jmp *R_MPI_Get@GOTPCREL(%rip)\n"

);

int A_MPI_Get(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Get\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;
int target_count_tmp;
source_conv_a2r(&target_count,&target_count_tmp);
R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Get( origin_addr_tmp, origin_count, origin_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count_tmp, target_datatype_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Get\n");
#endif
int ret_tmp= LOCAL_MPI_Get( origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win);
#ifdef DEBUG
printf("sort : R_MPI_Get\n");
#endif
return ret_tmp;
}
int MPI_Put(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win);
int (*LOCAL_MPI_Put)(void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Win);

__asm__(
".global CCMPI_Put\n"
".weak MPI_Put\n"
".set MPI_Put,CCMPI_Put\n"
".extern in_w\n"
".extern A_MPI_Put\n"
".extern R_MPI_Put\n"
".type CCMPI_Put,@function\n"
".text\n"
"CCMPI_Put:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Put\n"
"jmp *A_MPI_Put@GOTPCREL(%rip)\n"
"inwrap_MPI_Put:\n"
"jmp *R_MPI_Put@GOTPCREL(%rip)\n"

);

int A_MPI_Put(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Put\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;


R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Put( origin_addr_tmp, origin_count, origin_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count, target_datatype_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Put\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Put(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Put\n");
#endif
int ret_tmp= LOCAL_MPI_Put( origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win);
#ifdef DEBUG
printf("sort : R_MPI_Put\n");
#endif
return ret_tmp;
}
int MPI_Win_complete(A_MPI_Win win);
int (*LOCAL_MPI_Win_complete)(R_MPI_Win);

__asm__(
".global CCMPI_Win_complete\n"
".weak MPI_Win_complete\n"
".set MPI_Win_complete,CCMPI_Win_complete\n"
".extern in_w\n"
".extern A_MPI_Win_complete\n"
".extern R_MPI_Win_complete\n"
".type CCMPI_Win_complete,@function\n"
".text\n"
"CCMPI_Win_complete:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_complete\n"
"jmp *A_MPI_Win_complete@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_complete:\n"
"jmp *R_MPI_Win_complete@GOTPCREL(%rip)\n"

);

int A_MPI_Win_complete(A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_complete\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_complete( win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_complete\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_complete(R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_complete\n");
#endif
int ret_tmp= LOCAL_MPI_Win_complete( win);
#ifdef DEBUG
printf("sort : R_MPI_Win_complete\n");
#endif
return ret_tmp;
}
int MPI_Win_create(void * base,A_MPI_Aint size,int disp_unit,A_MPI_Info info,A_MPI_Comm comm,A_MPI_Win * win);
int (*LOCAL_MPI_Win_create)(void *,R_MPI_Aint,int,R_MPI_Info,R_MPI_Comm,R_MPI_Win *);

__asm__(
".global CCMPI_Win_create\n"
".weak MPI_Win_create\n"
".set MPI_Win_create,CCMPI_Win_create\n"
".extern in_w\n"
".extern A_MPI_Win_create\n"
".extern R_MPI_Win_create\n"
".type CCMPI_Win_create,@function\n"
".text\n"
"CCMPI_Win_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_create\n"
"jmp *A_MPI_Win_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_create:\n"
"jmp *R_MPI_Win_create@GOTPCREL(%rip)\n"

);

int A_MPI_Win_create(void * base,A_MPI_Aint size,int disp_unit,A_MPI_Info info,A_MPI_Comm comm,A_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_create\n");
#endif
in_w=1;

void * base_tmp;
buffer_conv_a2r(&base,&base_tmp);
R_MPI_Aint size_tmp;
size_tmp = (R_MPI_Aint)size;


R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Win  win_ltmp;
R_MPI_Win * win_tmp=&win_ltmp;
int ret_tmp= LOCAL_MPI_Win_create( base_tmp, size_tmp, disp_unit, info_tmp, comm_tmp, win_tmp);
win_conv_r2a(win,win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_create(void * base,R_MPI_Aint size,int disp_unit,R_MPI_Info info,R_MPI_Comm comm,R_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_create\n");
#endif
int ret_tmp= LOCAL_MPI_Win_create( base, size, disp_unit, info, comm, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_create\n");
#endif
return ret_tmp;
}
int MPI_Win_fence(int assert,A_MPI_Win win);
int (*LOCAL_MPI_Win_fence)(int,R_MPI_Win);

__asm__(
".global CCMPI_Win_fence\n"
".weak MPI_Win_fence\n"
".set MPI_Win_fence,CCMPI_Win_fence\n"
".extern in_w\n"
".extern A_MPI_Win_fence\n"
".extern R_MPI_Win_fence\n"
".type CCMPI_Win_fence,@function\n"
".text\n"
"CCMPI_Win_fence:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_fence\n"
"jmp *A_MPI_Win_fence@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_fence:\n"
"jmp *R_MPI_Win_fence@GOTPCREL(%rip)\n"

);

int A_MPI_Win_fence(int assert,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_fence\n");
#endif
in_w=1;

int assert_tmp;
assert_mode_a2r(&assert,&assert_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_fence( assert_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_fence\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_fence(int assert,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_fence\n");
#endif
int ret_tmp= LOCAL_MPI_Win_fence( assert, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_fence\n");
#endif
return ret_tmp;
}
int MPI_Win_free(A_MPI_Win * win);
int (*LOCAL_MPI_Win_free)(R_MPI_Win *);

__asm__(
".global CCMPI_Win_free\n"
".weak MPI_Win_free\n"
".set MPI_Win_free,CCMPI_Win_free\n"
".extern in_w\n"
".extern A_MPI_Win_free\n"
".extern R_MPI_Win_free\n"
".type CCMPI_Win_free,@function\n"
".text\n"
"CCMPI_Win_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_free\n"
"jmp *A_MPI_Win_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_free:\n"
"jmp *R_MPI_Win_free@GOTPCREL(%rip)\n"

);

int A_MPI_Win_free(A_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_free\n");
#endif
in_w=1;

R_MPI_Win  win_ltmp;
R_MPI_Win * win_tmp=&win_ltmp;
win_conv_a2r(win,win_tmp);
int ret_tmp= LOCAL_MPI_Win_free( win_tmp);
win_conv_r2a(win,win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_free(R_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_free\n");
#endif
int ret_tmp= LOCAL_MPI_Win_free( win);
#ifdef DEBUG
printf("sort : R_MPI_Win_free\n");
#endif
return ret_tmp;
}
int MPI_Win_get_group(A_MPI_Win win,A_MPI_Group * group);
int (*LOCAL_MPI_Win_get_group)(R_MPI_Win,R_MPI_Group *);

__asm__(
".global CCMPI_Win_get_group\n"
".weak MPI_Win_get_group\n"
".set MPI_Win_get_group,CCMPI_Win_get_group\n"
".extern in_w\n"
".extern A_MPI_Win_get_group\n"
".extern R_MPI_Win_get_group\n"
".type CCMPI_Win_get_group,@function\n"
".text\n"
"CCMPI_Win_get_group:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_get_group\n"
"jmp *A_MPI_Win_get_group@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_get_group:\n"
"jmp *R_MPI_Win_get_group@GOTPCREL(%rip)\n"

);

int A_MPI_Win_get_group(A_MPI_Win win,A_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_get_group\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Group  group_ltmp;
R_MPI_Group * group_tmp=&group_ltmp;
int ret_tmp= LOCAL_MPI_Win_get_group( win_tmp, group_tmp);
group_conv_r2a(group,group_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_get_group\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_get_group(R_MPI_Win win,R_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_get_group\n");
#endif
int ret_tmp= LOCAL_MPI_Win_get_group( win, group);
#ifdef DEBUG
printf("sort : R_MPI_Win_get_group\n");
#endif
return ret_tmp;
}
int MPI_Win_lock(int lock_type,int rank,int assert,A_MPI_Win win);
int (*LOCAL_MPI_Win_lock)(int,int,int,R_MPI_Win);

__asm__(
".global CCMPI_Win_lock\n"
".weak MPI_Win_lock\n"
".set MPI_Win_lock,CCMPI_Win_lock\n"
".extern in_w\n"
".extern A_MPI_Win_lock\n"
".extern R_MPI_Win_lock\n"
".type CCMPI_Win_lock,@function\n"
".text\n"
"CCMPI_Win_lock:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_lock\n"
"jmp *A_MPI_Win_lock@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_lock:\n"
"jmp *R_MPI_Win_lock@GOTPCREL(%rip)\n"

);

int A_MPI_Win_lock(int lock_type,int rank,int assert,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_lock\n");
#endif
in_w=1;

int lock_type_tmp;
lock_conv_a2r(&lock_type,&lock_type_tmp);
int rank_tmp;
source_conv_a2r(&rank,&rank_tmp);
int assert_tmp;
assert_mode_a2r(&assert,&assert_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_lock( lock_type_tmp, rank_tmp, assert_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_lock\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_lock(int lock_type,int rank,int assert,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_lock\n");
#endif
int ret_tmp= LOCAL_MPI_Win_lock( lock_type, rank, assert, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_lock\n");
#endif
return ret_tmp;
}
int MPI_Win_post(A_MPI_Group group,int assert,A_MPI_Win win);
int (*LOCAL_MPI_Win_post)(R_MPI_Group,int,R_MPI_Win);

__asm__(
".global CCMPI_Win_post\n"
".weak MPI_Win_post\n"
".set MPI_Win_post,CCMPI_Win_post\n"
".extern in_w\n"
".extern A_MPI_Win_post\n"
".extern R_MPI_Win_post\n"
".type CCMPI_Win_post,@function\n"
".text\n"
"CCMPI_Win_post:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_post\n"
"jmp *A_MPI_Win_post@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_post:\n"
"jmp *R_MPI_Win_post@GOTPCREL(%rip)\n"

);

int A_MPI_Win_post(A_MPI_Group group,int assert,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_post\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);
int assert_tmp;
assert_mode_a2r(&assert,&assert_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_post( group_tmp, assert_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_post\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_post(R_MPI_Group group,int assert,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_post\n");
#endif
int ret_tmp= LOCAL_MPI_Win_post( group, assert, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_post\n");
#endif
return ret_tmp;
}
int MPI_Win_start(A_MPI_Group group,int assert,A_MPI_Win win);
int (*LOCAL_MPI_Win_start)(R_MPI_Group,int,R_MPI_Win);

__asm__(
".global CCMPI_Win_start\n"
".weak MPI_Win_start\n"
".set MPI_Win_start,CCMPI_Win_start\n"
".extern in_w\n"
".extern A_MPI_Win_start\n"
".extern R_MPI_Win_start\n"
".type CCMPI_Win_start,@function\n"
".text\n"
"CCMPI_Win_start:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_start\n"
"jmp *A_MPI_Win_start@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_start:\n"
"jmp *R_MPI_Win_start@GOTPCREL(%rip)\n"

);

int A_MPI_Win_start(A_MPI_Group group,int assert,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_start\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);
int assert_tmp;
assert_mode_a2r(&assert,&assert_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_start( group_tmp, assert_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_start\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_start(R_MPI_Group group,int assert,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_start\n");
#endif
int ret_tmp= LOCAL_MPI_Win_start( group, assert, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_start\n");
#endif
return ret_tmp;
}
int MPI_Win_test(A_MPI_Win win,int * flag);
int (*LOCAL_MPI_Win_test)(R_MPI_Win,int *);

__asm__(
".global CCMPI_Win_test\n"
".weak MPI_Win_test\n"
".set MPI_Win_test,CCMPI_Win_test\n"
".extern in_w\n"
".extern A_MPI_Win_test\n"
".extern R_MPI_Win_test\n"
".type CCMPI_Win_test,@function\n"
".text\n"
"CCMPI_Win_test:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_test\n"
"jmp *A_MPI_Win_test@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_test:\n"
"jmp *R_MPI_Win_test@GOTPCREL(%rip)\n"

);

int A_MPI_Win_test(A_MPI_Win win,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_test\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);

int ret_tmp= LOCAL_MPI_Win_test( win_tmp, flag);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_test\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_test(R_MPI_Win win,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_test\n");
#endif
int ret_tmp= LOCAL_MPI_Win_test( win, flag);
#ifdef DEBUG
printf("sort : R_MPI_Win_test\n");
#endif
return ret_tmp;
}
int MPI_Win_unlock(int rank,A_MPI_Win win);
int (*LOCAL_MPI_Win_unlock)(int,R_MPI_Win);

__asm__(
".global CCMPI_Win_unlock\n"
".weak MPI_Win_unlock\n"
".set MPI_Win_unlock,CCMPI_Win_unlock\n"
".extern in_w\n"
".extern A_MPI_Win_unlock\n"
".extern R_MPI_Win_unlock\n"
".type CCMPI_Win_unlock,@function\n"
".text\n"
"CCMPI_Win_unlock:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_unlock\n"
"jmp *A_MPI_Win_unlock@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_unlock:\n"
"jmp *R_MPI_Win_unlock@GOTPCREL(%rip)\n"

);

int A_MPI_Win_unlock(int rank,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_unlock\n");
#endif
in_w=1;

int rank_tmp;
source_conv_a2r(&rank,&rank_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_unlock( rank_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_unlock\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_unlock(int rank,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_unlock\n");
#endif
int ret_tmp= LOCAL_MPI_Win_unlock( rank, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_unlock\n");
#endif
return ret_tmp;
}
int MPI_Win_wait(A_MPI_Win win);
int (*LOCAL_MPI_Win_wait)(R_MPI_Win);

__asm__(
".global CCMPI_Win_wait\n"
".weak MPI_Win_wait\n"
".set MPI_Win_wait,CCMPI_Win_wait\n"
".extern in_w\n"
".extern A_MPI_Win_wait\n"
".extern R_MPI_Win_wait\n"
".type CCMPI_Win_wait,@function\n"
".text\n"
"CCMPI_Win_wait:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_wait\n"
"jmp *A_MPI_Win_wait@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_wait:\n"
"jmp *R_MPI_Win_wait@GOTPCREL(%rip)\n"

);

int A_MPI_Win_wait(A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_wait\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_wait( win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_wait\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_wait(R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_wait\n");
#endif
int ret_tmp= LOCAL_MPI_Win_wait( win);
#ifdef DEBUG
printf("sort : R_MPI_Win_wait\n");
#endif
return ret_tmp;
}
int MPI_Win_allocate(A_MPI_Aint size,int disp_unit,A_MPI_Info info,A_MPI_Comm comm,void * baseptr,A_MPI_Win * win);
int (*LOCAL_MPI_Win_allocate)(R_MPI_Aint,int,R_MPI_Info,R_MPI_Comm,void *,R_MPI_Win *);

__asm__(
".global CCMPI_Win_allocate\n"
".weak MPI_Win_allocate\n"
".set MPI_Win_allocate,CCMPI_Win_allocate\n"
".extern in_w\n"
".extern A_MPI_Win_allocate\n"
".extern R_MPI_Win_allocate\n"
".type CCMPI_Win_allocate,@function\n"
".text\n"
"CCMPI_Win_allocate:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_allocate\n"
"jmp *A_MPI_Win_allocate@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_allocate:\n"
"jmp *R_MPI_Win_allocate@GOTPCREL(%rip)\n"

);

int A_MPI_Win_allocate(A_MPI_Aint size,int disp_unit,A_MPI_Info info,A_MPI_Comm comm,void * baseptr,A_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_allocate\n");
#endif
in_w=1;

R_MPI_Aint size_tmp;
size_tmp = (R_MPI_Aint)size;


R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
void * baseptr_tmp;
buffer_conv_a2r(&baseptr,&baseptr_tmp);
R_MPI_Win  win_ltmp;
R_MPI_Win * win_tmp=&win_ltmp;
int ret_tmp= LOCAL_MPI_Win_allocate( size_tmp, disp_unit, info_tmp, comm_tmp, baseptr_tmp, win_tmp);
buffer_conv_r2a(&baseptr,&baseptr_tmp);
win_conv_r2a(win,win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_allocate\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_allocate(R_MPI_Aint size,int disp_unit,R_MPI_Info info,R_MPI_Comm comm,void * baseptr,R_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_allocate\n");
#endif
int ret_tmp= LOCAL_MPI_Win_allocate( size, disp_unit, info, comm, baseptr, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_allocate\n");
#endif
return ret_tmp;
}
int MPI_Win_allocate_shared(A_MPI_Aint size,int disp_unit,A_MPI_Info info,A_MPI_Comm comm,void * baseptr,A_MPI_Win * win);
int (*LOCAL_MPI_Win_allocate_shared)(R_MPI_Aint,int,R_MPI_Info,R_MPI_Comm,void *,R_MPI_Win *);

__asm__(
".global CCMPI_Win_allocate_shared\n"
".weak MPI_Win_allocate_shared\n"
".set MPI_Win_allocate_shared,CCMPI_Win_allocate_shared\n"
".extern in_w\n"
".extern A_MPI_Win_allocate_shared\n"
".extern R_MPI_Win_allocate_shared\n"
".type CCMPI_Win_allocate_shared,@function\n"
".text\n"
"CCMPI_Win_allocate_shared:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_allocate_shared\n"
"jmp *A_MPI_Win_allocate_shared@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_allocate_shared:\n"
"jmp *R_MPI_Win_allocate_shared@GOTPCREL(%rip)\n"

);

int A_MPI_Win_allocate_shared(A_MPI_Aint size,int disp_unit,A_MPI_Info info,A_MPI_Comm comm,void * baseptr,A_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_allocate_shared\n");
#endif
in_w=1;

R_MPI_Aint size_tmp;
size_tmp = (R_MPI_Aint)size;


R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
void * baseptr_tmp;
buffer_conv_a2r(&baseptr,&baseptr_tmp);
R_MPI_Win  win_ltmp;
R_MPI_Win * win_tmp=&win_ltmp;
int ret_tmp= LOCAL_MPI_Win_allocate_shared( size_tmp, disp_unit, info_tmp, comm_tmp, baseptr_tmp, win_tmp);
buffer_conv_r2a(&baseptr,&baseptr_tmp);
win_conv_r2a(win,win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_allocate_shared\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_allocate_shared(R_MPI_Aint size,int disp_unit,R_MPI_Info info,R_MPI_Comm comm,void * baseptr,R_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_allocate_shared\n");
#endif
int ret_tmp= LOCAL_MPI_Win_allocate_shared( size, disp_unit, info, comm, baseptr, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_allocate_shared\n");
#endif
return ret_tmp;
}
int MPI_Win_shared_query(A_MPI_Win win,int rank,A_MPI_Aint * size,int * disp_unit,void * baseptr);
int (*LOCAL_MPI_Win_shared_query)(R_MPI_Win,int,R_MPI_Aint *,int *,void *);

__asm__(
".global CCMPI_Win_shared_query\n"
".weak MPI_Win_shared_query\n"
".set MPI_Win_shared_query,CCMPI_Win_shared_query\n"
".extern in_w\n"
".extern A_MPI_Win_shared_query\n"
".extern R_MPI_Win_shared_query\n"
".type CCMPI_Win_shared_query,@function\n"
".text\n"
"CCMPI_Win_shared_query:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_shared_query\n"
"jmp *A_MPI_Win_shared_query@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_shared_query:\n"
"jmp *R_MPI_Win_shared_query@GOTPCREL(%rip)\n"

);

int A_MPI_Win_shared_query(A_MPI_Win win,int rank,A_MPI_Aint * size,int * disp_unit,void * baseptr)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_shared_query\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int rank_tmp;
source_conv_a2r(&rank,&rank_tmp);
R_MPI_Aint  size_ltmp;
R_MPI_Aint * size_tmp=&size_ltmp;

void * baseptr_tmp;
int ret_tmp= LOCAL_MPI_Win_shared_query( win_tmp, rank_tmp, size_tmp, disp_unit, baseptr_tmp);
*size= (A_MPI_Aint ) *size_tmp;

buffer_conv_r2a(&baseptr,&baseptr_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_shared_query\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_shared_query(R_MPI_Win win,int rank,R_MPI_Aint * size,int * disp_unit,void * baseptr)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_shared_query\n");
#endif
int ret_tmp= LOCAL_MPI_Win_shared_query( win, rank, size, disp_unit, baseptr);
#ifdef DEBUG
printf("sort : R_MPI_Win_shared_query\n");
#endif
return ret_tmp;
}
int MPI_Win_create_dynamic(A_MPI_Info info,A_MPI_Comm comm,A_MPI_Win * win);
int (*LOCAL_MPI_Win_create_dynamic)(R_MPI_Info,R_MPI_Comm,R_MPI_Win *);

__asm__(
".global CCMPI_Win_create_dynamic\n"
".weak MPI_Win_create_dynamic\n"
".set MPI_Win_create_dynamic,CCMPI_Win_create_dynamic\n"
".extern in_w\n"
".extern A_MPI_Win_create_dynamic\n"
".extern R_MPI_Win_create_dynamic\n"
".type CCMPI_Win_create_dynamic,@function\n"
".text\n"
"CCMPI_Win_create_dynamic:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_create_dynamic\n"
"jmp *A_MPI_Win_create_dynamic@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_create_dynamic:\n"
"jmp *R_MPI_Win_create_dynamic@GOTPCREL(%rip)\n"

);

int A_MPI_Win_create_dynamic(A_MPI_Info info,A_MPI_Comm comm,A_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_create_dynamic\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Win  win_ltmp;
R_MPI_Win * win_tmp=&win_ltmp;
int ret_tmp= LOCAL_MPI_Win_create_dynamic( info_tmp, comm_tmp, win_tmp);
win_conv_r2a(win,win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_create_dynamic\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_create_dynamic(R_MPI_Info info,R_MPI_Comm comm,R_MPI_Win * win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_create_dynamic\n");
#endif
int ret_tmp= LOCAL_MPI_Win_create_dynamic( info, comm, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_create_dynamic\n");
#endif
return ret_tmp;
}
int MPI_Win_attach(A_MPI_Win win,void * base,A_MPI_Aint size);
int (*LOCAL_MPI_Win_attach)(R_MPI_Win,void *,R_MPI_Aint);

__asm__(
".global CCMPI_Win_attach\n"
".weak MPI_Win_attach\n"
".set MPI_Win_attach,CCMPI_Win_attach\n"
".extern in_w\n"
".extern A_MPI_Win_attach\n"
".extern R_MPI_Win_attach\n"
".type CCMPI_Win_attach,@function\n"
".text\n"
"CCMPI_Win_attach:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_attach\n"
"jmp *A_MPI_Win_attach@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_attach:\n"
"jmp *R_MPI_Win_attach@GOTPCREL(%rip)\n"

);

int A_MPI_Win_attach(A_MPI_Win win,void * base,A_MPI_Aint size)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_attach\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
void * base_tmp;
buffer_conv_a2r(&base,&base_tmp);
R_MPI_Aint size_tmp;
size_tmp = (R_MPI_Aint)size;
int ret_tmp= LOCAL_MPI_Win_attach( win_tmp, base_tmp, size_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_attach\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_attach(R_MPI_Win win,void * base,R_MPI_Aint size)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_attach\n");
#endif
int ret_tmp= LOCAL_MPI_Win_attach( win, base, size);
#ifdef DEBUG
printf("sort : R_MPI_Win_attach\n");
#endif
return ret_tmp;
}
int MPI_Win_detach(A_MPI_Win win,void * base);
int (*LOCAL_MPI_Win_detach)(R_MPI_Win,void *);

__asm__(
".global CCMPI_Win_detach\n"
".weak MPI_Win_detach\n"
".set MPI_Win_detach,CCMPI_Win_detach\n"
".extern in_w\n"
".extern A_MPI_Win_detach\n"
".extern R_MPI_Win_detach\n"
".type CCMPI_Win_detach,@function\n"
".text\n"
"CCMPI_Win_detach:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_detach\n"
"jmp *A_MPI_Win_detach@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_detach:\n"
"jmp *R_MPI_Win_detach@GOTPCREL(%rip)\n"

);

int A_MPI_Win_detach(A_MPI_Win win,void * base)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_detach\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
void * base_tmp;
buffer_conv_a2r(&base,&base_tmp);
int ret_tmp= LOCAL_MPI_Win_detach( win_tmp, base_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_detach\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_detach(R_MPI_Win win,void * base)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_detach\n");
#endif
int ret_tmp= LOCAL_MPI_Win_detach( win, base);
#ifdef DEBUG
printf("sort : R_MPI_Win_detach\n");
#endif
return ret_tmp;
}
int MPI_Win_get_info(A_MPI_Win win,A_MPI_Info * info_used);
int (*LOCAL_MPI_Win_get_info)(R_MPI_Win,R_MPI_Info *);

__asm__(
".global CCMPI_Win_get_info\n"
".weak MPI_Win_get_info\n"
".set MPI_Win_get_info,CCMPI_Win_get_info\n"
".extern in_w\n"
".extern A_MPI_Win_get_info\n"
".extern R_MPI_Win_get_info\n"
".type CCMPI_Win_get_info,@function\n"
".text\n"
"CCMPI_Win_get_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_get_info\n"
"jmp *A_MPI_Win_get_info@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_get_info:\n"
"jmp *R_MPI_Win_get_info@GOTPCREL(%rip)\n"

);

int A_MPI_Win_get_info(A_MPI_Win win,A_MPI_Info * info_used)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_get_info\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Info  info_used_ltmp;
R_MPI_Info * info_used_tmp=&info_used_ltmp;
int ret_tmp= LOCAL_MPI_Win_get_info( win_tmp, info_used_tmp);
info_conv_r2a(info_used,info_used_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_get_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_get_info(R_MPI_Win win,R_MPI_Info * info_used)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_get_info\n");
#endif
int ret_tmp= LOCAL_MPI_Win_get_info( win, info_used);
#ifdef DEBUG
printf("sort : R_MPI_Win_get_info\n");
#endif
return ret_tmp;
}
int MPI_Win_set_info(A_MPI_Win win,A_MPI_Info info);
int (*LOCAL_MPI_Win_set_info)(R_MPI_Win,R_MPI_Info);

__asm__(
".global CCMPI_Win_set_info\n"
".weak MPI_Win_set_info\n"
".set MPI_Win_set_info,CCMPI_Win_set_info\n"
".extern in_w\n"
".extern A_MPI_Win_set_info\n"
".extern R_MPI_Win_set_info\n"
".type CCMPI_Win_set_info,@function\n"
".text\n"
"CCMPI_Win_set_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_set_info\n"
"jmp *A_MPI_Win_set_info@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_set_info:\n"
"jmp *R_MPI_Win_set_info@GOTPCREL(%rip)\n"

);

int A_MPI_Win_set_info(A_MPI_Win win,A_MPI_Info info)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_set_info\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
int ret_tmp= LOCAL_MPI_Win_set_info( win_tmp, info_tmp);
win_conv_r2a(&win,&win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_set_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_set_info(R_MPI_Win win,R_MPI_Info info)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_set_info\n");
#endif
int ret_tmp= LOCAL_MPI_Win_set_info( win, info);
#ifdef DEBUG
printf("sort : R_MPI_Win_set_info\n");
#endif
return ret_tmp;
}
int MPI_Get_accumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,void * result_addr,int result_count,A_MPI_Datatype result_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win);
int (*LOCAL_MPI_Get_accumulate)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Win);

__asm__(
".global CCMPI_Get_accumulate\n"
".weak MPI_Get_accumulate\n"
".set MPI_Get_accumulate,CCMPI_Get_accumulate\n"
".extern in_w\n"
".extern A_MPI_Get_accumulate\n"
".extern R_MPI_Get_accumulate\n"
".type CCMPI_Get_accumulate,@function\n"
".text\n"
"CCMPI_Get_accumulate:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_accumulate\n"
"jmp *A_MPI_Get_accumulate@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_accumulate:\n"
"jmp *R_MPI_Get_accumulate@GOTPCREL(%rip)\n"

);

int A_MPI_Get_accumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,void * result_addr,int result_count,A_MPI_Datatype result_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_accumulate\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
void * result_addr_tmp;
buffer_conv_a2r(&result_addr,&result_addr_tmp);


R_MPI_Datatype result_datatype_tmp;
datatype_conv_a2r(&result_datatype,&result_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;


R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Get_accumulate( origin_addr_tmp, origin_count, origin_datatype_tmp, result_addr_tmp, result_count, result_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count, target_datatype_tmp, op_tmp, win_tmp);
buffer_conv_r2a(&result_addr,&result_addr_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_accumulate\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_accumulate(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,void * result_addr,int result_count,R_MPI_Datatype result_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Op op,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_accumulate\n");
#endif
int ret_tmp= LOCAL_MPI_Get_accumulate( origin_addr, origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank, target_disp, target_count, target_datatype, op, win);
#ifdef DEBUG
printf("sort : R_MPI_Get_accumulate\n");
#endif
return ret_tmp;
}
int MPI_Fetch_and_op(void * origin_addr,void * result_addr,A_MPI_Datatype datatype,int target_rank,A_MPI_Aint target_disp,A_MPI_Op op,A_MPI_Win win);
int (*LOCAL_MPI_Fetch_and_op)(void *,void *,R_MPI_Datatype,int,R_MPI_Aint,R_MPI_Op,R_MPI_Win);

__asm__(
".global CCMPI_Fetch_and_op\n"
".weak MPI_Fetch_and_op\n"
".set MPI_Fetch_and_op,CCMPI_Fetch_and_op\n"
".extern in_w\n"
".extern A_MPI_Fetch_and_op\n"
".extern R_MPI_Fetch_and_op\n"
".type CCMPI_Fetch_and_op,@function\n"
".text\n"
"CCMPI_Fetch_and_op:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Fetch_and_op\n"
"jmp *A_MPI_Fetch_and_op@GOTPCREL(%rip)\n"
"inwrap_MPI_Fetch_and_op:\n"
"jmp *R_MPI_Fetch_and_op@GOTPCREL(%rip)\n"

);

int A_MPI_Fetch_and_op(void * origin_addr,void * result_addr,A_MPI_Datatype datatype,int target_rank,A_MPI_Aint target_disp,A_MPI_Op op,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Fetch_and_op\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);
void * result_addr_tmp;
buffer_conv_a2r(&result_addr,&result_addr_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Fetch_and_op( origin_addr_tmp, result_addr_tmp, datatype_tmp, target_rank_tmp, target_disp_tmp, op_tmp, win_tmp);
buffer_conv_r2a(&result_addr,&result_addr_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Fetch_and_op\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Fetch_and_op(void * origin_addr,void * result_addr,R_MPI_Datatype datatype,int target_rank,R_MPI_Aint target_disp,R_MPI_Op op,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Fetch_and_op\n");
#endif
int ret_tmp= LOCAL_MPI_Fetch_and_op( origin_addr, result_addr, datatype, target_rank, target_disp, op, win);
#ifdef DEBUG
printf("sort : R_MPI_Fetch_and_op\n");
#endif
return ret_tmp;
}
int MPI_Compare_and_swap(void * origin_addr,void * compare_addr,void * result_addr,A_MPI_Datatype datatype,int target_rank,A_MPI_Aint target_disp,A_MPI_Win win);
int (*LOCAL_MPI_Compare_and_swap)(void *,void *,void *,R_MPI_Datatype,int,R_MPI_Aint,R_MPI_Win);

__asm__(
".global CCMPI_Compare_and_swap\n"
".weak MPI_Compare_and_swap\n"
".set MPI_Compare_and_swap,CCMPI_Compare_and_swap\n"
".extern in_w\n"
".extern A_MPI_Compare_and_swap\n"
".extern R_MPI_Compare_and_swap\n"
".type CCMPI_Compare_and_swap,@function\n"
".text\n"
"CCMPI_Compare_and_swap:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Compare_and_swap\n"
"jmp *A_MPI_Compare_and_swap@GOTPCREL(%rip)\n"
"inwrap_MPI_Compare_and_swap:\n"
"jmp *R_MPI_Compare_and_swap@GOTPCREL(%rip)\n"

);

int A_MPI_Compare_and_swap(void * origin_addr,void * compare_addr,void * result_addr,A_MPI_Datatype datatype,int target_rank,A_MPI_Aint target_disp,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Compare_and_swap\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);
void * compare_addr_tmp;
buffer_conv_a2r(&compare_addr,&compare_addr_tmp);
void * result_addr_tmp;
buffer_conv_a2r(&result_addr,&result_addr_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Compare_and_swap( origin_addr_tmp, compare_addr_tmp, result_addr_tmp, datatype_tmp, target_rank_tmp, target_disp_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Compare_and_swap\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Compare_and_swap(void * origin_addr,void * compare_addr,void * result_addr,R_MPI_Datatype datatype,int target_rank,R_MPI_Aint target_disp,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Compare_and_swap\n");
#endif
int ret_tmp= LOCAL_MPI_Compare_and_swap( origin_addr, compare_addr, result_addr, datatype, target_rank, target_disp, win);
#ifdef DEBUG
printf("sort : R_MPI_Compare_and_swap\n");
#endif
return ret_tmp;
}
int MPI_Rput(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win,A_MPI_Request * request);
int (*LOCAL_MPI_Rput)(void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Win,R_MPI_Request *);

__asm__(
".global CCMPI_Rput\n"
".weak MPI_Rput\n"
".set MPI_Rput,CCMPI_Rput\n"
".extern in_w\n"
".extern A_MPI_Rput\n"
".extern R_MPI_Rput\n"
".type CCMPI_Rput,@function\n"
".text\n"
"CCMPI_Rput:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Rput\n"
"jmp *A_MPI_Rput@GOTPCREL(%rip)\n"
"inwrap_MPI_Rput:\n"
"jmp *R_MPI_Rput@GOTPCREL(%rip)\n"

);

int A_MPI_Rput(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Rput\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;


R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Rput( origin_addr_tmp, origin_count, origin_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count, target_datatype_tmp, win_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Rput\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Rput(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Win win,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Rput\n");
#endif
int ret_tmp= LOCAL_MPI_Rput( origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, request);
#ifdef DEBUG
printf("sort : R_MPI_Rput\n");
#endif
return ret_tmp;
}
int MPI_Rget(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win,A_MPI_Request * request);
int (*LOCAL_MPI_Rget)(void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Win,R_MPI_Request *);

__asm__(
".global CCMPI_Rget\n"
".weak MPI_Rget\n"
".set MPI_Rget,CCMPI_Rget\n"
".extern in_w\n"
".extern A_MPI_Rget\n"
".extern R_MPI_Rget\n"
".type CCMPI_Rget,@function\n"
".text\n"
"CCMPI_Rget:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Rget\n"
"jmp *A_MPI_Rget@GOTPCREL(%rip)\n"
"inwrap_MPI_Rget:\n"
"jmp *R_MPI_Rget@GOTPCREL(%rip)\n"

);

int A_MPI_Rget(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Win win,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Rget\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;


R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Rget( origin_addr_tmp, origin_count, origin_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count, target_datatype_tmp, win_tmp, request_tmp);
buffer_conv_r2a(&origin_addr,&origin_addr_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Rget\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Rget(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Win win,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Rget\n");
#endif
int ret_tmp= LOCAL_MPI_Rget( origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, win, request);
#ifdef DEBUG
printf("sort : R_MPI_Rget\n");
#endif
return ret_tmp;
}
int MPI_Raccumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win,A_MPI_Request * request);
int (*LOCAL_MPI_Raccumulate)(void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Win,R_MPI_Request *);

__asm__(
".global CCMPI_Raccumulate\n"
".weak MPI_Raccumulate\n"
".set MPI_Raccumulate,CCMPI_Raccumulate\n"
".extern in_w\n"
".extern A_MPI_Raccumulate\n"
".extern R_MPI_Raccumulate\n"
".type CCMPI_Raccumulate,@function\n"
".text\n"
"CCMPI_Raccumulate:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Raccumulate\n"
"jmp *A_MPI_Raccumulate@GOTPCREL(%rip)\n"
"inwrap_MPI_Raccumulate:\n"
"jmp *R_MPI_Raccumulate@GOTPCREL(%rip)\n"

);

int A_MPI_Raccumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Raccumulate\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;


R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Raccumulate( origin_addr_tmp, origin_count, origin_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count, target_datatype_tmp, op_tmp, win_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Raccumulate\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Raccumulate(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Op op,R_MPI_Win win,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Raccumulate\n");
#endif
int ret_tmp= LOCAL_MPI_Raccumulate( origin_addr, origin_count, origin_datatype, target_rank, target_disp, target_count, target_datatype, op, win, request);
#ifdef DEBUG
printf("sort : R_MPI_Raccumulate\n");
#endif
return ret_tmp;
}
int MPI_Rget_accumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,void * result_addr,int result_count,A_MPI_Datatype result_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win,A_MPI_Request * request);
int (*LOCAL_MPI_Rget_accumulate)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Aint,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Win,R_MPI_Request *);

__asm__(
".global CCMPI_Rget_accumulate\n"
".weak MPI_Rget_accumulate\n"
".set MPI_Rget_accumulate,CCMPI_Rget_accumulate\n"
".extern in_w\n"
".extern A_MPI_Rget_accumulate\n"
".extern R_MPI_Rget_accumulate\n"
".type CCMPI_Rget_accumulate,@function\n"
".text\n"
"CCMPI_Rget_accumulate:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Rget_accumulate\n"
"jmp *A_MPI_Rget_accumulate@GOTPCREL(%rip)\n"
"inwrap_MPI_Rget_accumulate:\n"
"jmp *R_MPI_Rget_accumulate@GOTPCREL(%rip)\n"

);

int A_MPI_Rget_accumulate(void * origin_addr,int origin_count,A_MPI_Datatype origin_datatype,void * result_addr,int result_count,A_MPI_Datatype result_datatype,int target_rank,A_MPI_Aint target_disp,int target_count,A_MPI_Datatype target_datatype,A_MPI_Op op,A_MPI_Win win,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Rget_accumulate\n");
#endif
in_w=1;

void * origin_addr_tmp;
buffer_conv_a2r(&origin_addr,&origin_addr_tmp);


R_MPI_Datatype origin_datatype_tmp;
datatype_conv_a2r(&origin_datatype,&origin_datatype_tmp);
void * result_addr_tmp;
buffer_conv_a2r(&result_addr,&result_addr_tmp);


R_MPI_Datatype result_datatype_tmp;
datatype_conv_a2r(&result_datatype,&result_datatype_tmp);
int target_rank_tmp;
source_conv_a2r(&target_rank,&target_rank_tmp);
R_MPI_Aint target_disp_tmp;
target_disp_tmp = (R_MPI_Aint)target_disp;


R_MPI_Datatype target_datatype_tmp;
datatype_conv_a2r(&target_datatype,&target_datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Rget_accumulate( origin_addr_tmp, origin_count, origin_datatype_tmp, result_addr_tmp, result_count, result_datatype_tmp, target_rank_tmp, target_disp_tmp, target_count, target_datatype_tmp, op_tmp, win_tmp, request_tmp);
buffer_conv_r2a(&result_addr,&result_addr_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Rget_accumulate\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Rget_accumulate(void * origin_addr,int origin_count,R_MPI_Datatype origin_datatype,void * result_addr,int result_count,R_MPI_Datatype result_datatype,int target_rank,R_MPI_Aint target_disp,int target_count,R_MPI_Datatype target_datatype,R_MPI_Op op,R_MPI_Win win,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Rget_accumulate\n");
#endif
int ret_tmp= LOCAL_MPI_Rget_accumulate( origin_addr, origin_count, origin_datatype, result_addr, result_count, result_datatype, target_rank, target_disp, target_count, target_datatype, op, win, request);
#ifdef DEBUG
printf("sort : R_MPI_Rget_accumulate\n");
#endif
return ret_tmp;
}
int MPI_Win_lock_all(int assert,A_MPI_Win win);
int (*LOCAL_MPI_Win_lock_all)(int,R_MPI_Win);

__asm__(
".global CCMPI_Win_lock_all\n"
".weak MPI_Win_lock_all\n"
".set MPI_Win_lock_all,CCMPI_Win_lock_all\n"
".extern in_w\n"
".extern A_MPI_Win_lock_all\n"
".extern R_MPI_Win_lock_all\n"
".type CCMPI_Win_lock_all,@function\n"
".text\n"
"CCMPI_Win_lock_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_lock_all\n"
"jmp *A_MPI_Win_lock_all@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_lock_all:\n"
"jmp *R_MPI_Win_lock_all@GOTPCREL(%rip)\n"

);

int A_MPI_Win_lock_all(int assert,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_lock_all\n");
#endif
in_w=1;

int assert_tmp;
assert_mode_a2r(&assert,&assert_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_lock_all( assert_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_lock_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_lock_all(int assert,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_lock_all\n");
#endif
int ret_tmp= LOCAL_MPI_Win_lock_all( assert, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_lock_all\n");
#endif
return ret_tmp;
}
int MPI_Win_unlock_all(A_MPI_Win win);
int (*LOCAL_MPI_Win_unlock_all)(R_MPI_Win);

__asm__(
".global CCMPI_Win_unlock_all\n"
".weak MPI_Win_unlock_all\n"
".set MPI_Win_unlock_all,CCMPI_Win_unlock_all\n"
".extern in_w\n"
".extern A_MPI_Win_unlock_all\n"
".extern R_MPI_Win_unlock_all\n"
".type CCMPI_Win_unlock_all,@function\n"
".text\n"
"CCMPI_Win_unlock_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_unlock_all\n"
"jmp *A_MPI_Win_unlock_all@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_unlock_all:\n"
"jmp *R_MPI_Win_unlock_all@GOTPCREL(%rip)\n"

);

int A_MPI_Win_unlock_all(A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_unlock_all\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_unlock_all( win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_unlock_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_unlock_all(R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_unlock_all\n");
#endif
int ret_tmp= LOCAL_MPI_Win_unlock_all( win);
#ifdef DEBUG
printf("sort : R_MPI_Win_unlock_all\n");
#endif
return ret_tmp;
}
int MPI_Win_flush(int rank,A_MPI_Win win);
int (*LOCAL_MPI_Win_flush)(int,R_MPI_Win);

__asm__(
".global CCMPI_Win_flush\n"
".weak MPI_Win_flush\n"
".set MPI_Win_flush,CCMPI_Win_flush\n"
".extern in_w\n"
".extern A_MPI_Win_flush\n"
".extern R_MPI_Win_flush\n"
".type CCMPI_Win_flush,@function\n"
".text\n"
"CCMPI_Win_flush:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_flush\n"
"jmp *A_MPI_Win_flush@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_flush:\n"
"jmp *R_MPI_Win_flush@GOTPCREL(%rip)\n"

);

int A_MPI_Win_flush(int rank,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_flush\n");
#endif
in_w=1;

int rank_tmp;
source_conv_a2r(&rank,&rank_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_flush( rank_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_flush\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_flush(int rank,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_flush\n");
#endif
int ret_tmp= LOCAL_MPI_Win_flush( rank, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_flush\n");
#endif
return ret_tmp;
}
int MPI_Win_flush_all(A_MPI_Win win);
int (*LOCAL_MPI_Win_flush_all)(R_MPI_Win);

__asm__(
".global CCMPI_Win_flush_all\n"
".weak MPI_Win_flush_all\n"
".set MPI_Win_flush_all,CCMPI_Win_flush_all\n"
".extern in_w\n"
".extern A_MPI_Win_flush_all\n"
".extern R_MPI_Win_flush_all\n"
".type CCMPI_Win_flush_all,@function\n"
".text\n"
"CCMPI_Win_flush_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_flush_all\n"
"jmp *A_MPI_Win_flush_all@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_flush_all:\n"
"jmp *R_MPI_Win_flush_all@GOTPCREL(%rip)\n"

);

int A_MPI_Win_flush_all(A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_flush_all\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_flush_all( win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_flush_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_flush_all(R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_flush_all\n");
#endif
int ret_tmp= LOCAL_MPI_Win_flush_all( win);
#ifdef DEBUG
printf("sort : R_MPI_Win_flush_all\n");
#endif
return ret_tmp;
}
int MPI_Win_flush_local(int rank,A_MPI_Win win);
int (*LOCAL_MPI_Win_flush_local)(int,R_MPI_Win);

__asm__(
".global CCMPI_Win_flush_local\n"
".weak MPI_Win_flush_local\n"
".set MPI_Win_flush_local,CCMPI_Win_flush_local\n"
".extern in_w\n"
".extern A_MPI_Win_flush_local\n"
".extern R_MPI_Win_flush_local\n"
".type CCMPI_Win_flush_local,@function\n"
".text\n"
"CCMPI_Win_flush_local:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_flush_local\n"
"jmp *A_MPI_Win_flush_local@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_flush_local:\n"
"jmp *R_MPI_Win_flush_local@GOTPCREL(%rip)\n"

);

int A_MPI_Win_flush_local(int rank,A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_flush_local\n");
#endif
in_w=1;

int rank_tmp;
source_conv_a2r(&rank,&rank_tmp);
R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_flush_local( rank_tmp, win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_flush_local\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_flush_local(int rank,R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_flush_local\n");
#endif
int ret_tmp= LOCAL_MPI_Win_flush_local( rank, win);
#ifdef DEBUG
printf("sort : R_MPI_Win_flush_local\n");
#endif
return ret_tmp;
}
int MPI_Win_flush_local_all(A_MPI_Win win);
int (*LOCAL_MPI_Win_flush_local_all)(R_MPI_Win);

__asm__(
".global CCMPI_Win_flush_local_all\n"
".weak MPI_Win_flush_local_all\n"
".set MPI_Win_flush_local_all,CCMPI_Win_flush_local_all\n"
".extern in_w\n"
".extern A_MPI_Win_flush_local_all\n"
".extern R_MPI_Win_flush_local_all\n"
".type CCMPI_Win_flush_local_all,@function\n"
".text\n"
"CCMPI_Win_flush_local_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_flush_local_all\n"
"jmp *A_MPI_Win_flush_local_all@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_flush_local_all:\n"
"jmp *R_MPI_Win_flush_local_all@GOTPCREL(%rip)\n"

);

int A_MPI_Win_flush_local_all(A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_flush_local_all\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_flush_local_all( win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_flush_local_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_flush_local_all(R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_flush_local_all\n");
#endif
int ret_tmp= LOCAL_MPI_Win_flush_local_all( win);
#ifdef DEBUG
printf("sort : R_MPI_Win_flush_local_all\n");
#endif
return ret_tmp;
}
int MPI_Win_sync(A_MPI_Win win);
int (*LOCAL_MPI_Win_sync)(R_MPI_Win);

__asm__(
".global CCMPI_Win_sync\n"
".weak MPI_Win_sync\n"
".set MPI_Win_sync,CCMPI_Win_sync\n"
".extern in_w\n"
".extern A_MPI_Win_sync\n"
".extern R_MPI_Win_sync\n"
".type CCMPI_Win_sync,@function\n"
".text\n"
"CCMPI_Win_sync:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_sync\n"
"jmp *A_MPI_Win_sync@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_sync:\n"
"jmp *R_MPI_Win_sync@GOTPCREL(%rip)\n"

);

int A_MPI_Win_sync(A_MPI_Win win)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_sync\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int ret_tmp= LOCAL_MPI_Win_sync( win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_sync\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_sync(R_MPI_Win win)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_sync\n");
#endif
int ret_tmp= LOCAL_MPI_Win_sync( win);
#ifdef DEBUG
printf("sort : R_MPI_Win_sync\n");
#endif
return ret_tmp;
}
int MPI_Add_error_class(int * errorclass);
int (*LOCAL_MPI_Add_error_class)(int *);

__asm__(
".global CCMPI_Add_error_class\n"
".weak MPI_Add_error_class\n"
".set MPI_Add_error_class,CCMPI_Add_error_class\n"
".extern in_w\n"
".extern A_MPI_Add_error_class\n"
".extern R_MPI_Add_error_class\n"
".type CCMPI_Add_error_class,@function\n"
".text\n"
"CCMPI_Add_error_class:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Add_error_class\n"
"jmp *A_MPI_Add_error_class@GOTPCREL(%rip)\n"
"inwrap_MPI_Add_error_class:\n"
"jmp *R_MPI_Add_error_class@GOTPCREL(%rip)\n"

);

int A_MPI_Add_error_class(int * errorclass)
{
#ifdef DEBUG
printf("entre : A_MPI_Add_error_class\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_Add_error_class( errorclass);
*errorclass = error_code_conv_r2a(*errorclass);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Add_error_class\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Add_error_class(int * errorclass)
{
#ifdef DEBUG
printf("entre : R_MPI_Add_error_class\n");
#endif
int ret_tmp= LOCAL_MPI_Add_error_class( errorclass);
#ifdef DEBUG
printf("sort : R_MPI_Add_error_class\n");
#endif
return ret_tmp;
}
int MPI_Add_error_code(int errorclass,int * errorcode);
int (*LOCAL_MPI_Add_error_code)(int,int *);

__asm__(
".global CCMPI_Add_error_code\n"
".weak MPI_Add_error_code\n"
".set MPI_Add_error_code,CCMPI_Add_error_code\n"
".extern in_w\n"
".extern A_MPI_Add_error_code\n"
".extern R_MPI_Add_error_code\n"
".type CCMPI_Add_error_code,@function\n"
".text\n"
"CCMPI_Add_error_code:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Add_error_code\n"
"jmp *A_MPI_Add_error_code@GOTPCREL(%rip)\n"
"inwrap_MPI_Add_error_code:\n"
"jmp *R_MPI_Add_error_code@GOTPCREL(%rip)\n"

);

int A_MPI_Add_error_code(int errorclass,int * errorcode)
{
#ifdef DEBUG
printf("entre : A_MPI_Add_error_code\n");
#endif
in_w=1;




int ret_tmp= LOCAL_MPI_Add_error_code( errorclass, errorcode);
*errorcode = error_code_conv_r2a(*errorcode);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Add_error_code\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Add_error_code(int errorclass,int * errorcode)
{
#ifdef DEBUG
printf("entre : R_MPI_Add_error_code\n");
#endif
int ret_tmp= LOCAL_MPI_Add_error_code( errorclass, errorcode);
#ifdef DEBUG
printf("sort : R_MPI_Add_error_code\n");
#endif
return ret_tmp;
}
int MPI_Add_error_string(int errorcode,char * string);
int (*LOCAL_MPI_Add_error_string)(int,char *);

__asm__(
".global CCMPI_Add_error_string\n"
".weak MPI_Add_error_string\n"
".set MPI_Add_error_string,CCMPI_Add_error_string\n"
".extern in_w\n"
".extern A_MPI_Add_error_string\n"
".extern R_MPI_Add_error_string\n"
".type CCMPI_Add_error_string,@function\n"
".text\n"
"CCMPI_Add_error_string:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Add_error_string\n"
"jmp *A_MPI_Add_error_string@GOTPCREL(%rip)\n"
"inwrap_MPI_Add_error_string:\n"
"jmp *R_MPI_Add_error_string@GOTPCREL(%rip)\n"

);

int A_MPI_Add_error_string(int errorcode,char * string)
{
#ifdef DEBUG
printf("entre : A_MPI_Add_error_string\n");
#endif
in_w=1;





int ret_tmp= LOCAL_MPI_Add_error_string( errorcode, string);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Add_error_string\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Add_error_string(int errorcode,char * string)
{
#ifdef DEBUG
printf("entre : R_MPI_Add_error_string\n");
#endif
int ret_tmp= LOCAL_MPI_Add_error_string( errorcode, string);
#ifdef DEBUG
printf("sort : R_MPI_Add_error_string\n");
#endif
return ret_tmp;
}
int MPI_Comm_call_errhandler(A_MPI_Comm comm,int errorcode);
int (*LOCAL_MPI_Comm_call_errhandler)(R_MPI_Comm,int);

__asm__(
".global CCMPI_Comm_call_errhandler\n"
".weak MPI_Comm_call_errhandler\n"
".set MPI_Comm_call_errhandler,CCMPI_Comm_call_errhandler\n"
".extern in_w\n"
".extern A_MPI_Comm_call_errhandler\n"
".extern R_MPI_Comm_call_errhandler\n"
".type CCMPI_Comm_call_errhandler,@function\n"
".text\n"
"CCMPI_Comm_call_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_call_errhandler\n"
"jmp *A_MPI_Comm_call_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_call_errhandler:\n"
"jmp *R_MPI_Comm_call_errhandler@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_call_errhandler(A_MPI_Comm comm,int errorcode)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_call_errhandler\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int errorcode_tmp;
errorcode_tmp =error_code_conv_a2r(errorcode);
int ret_tmp= LOCAL_MPI_Comm_call_errhandler( comm_tmp, errorcode_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_call_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_call_errhandler(R_MPI_Comm comm,int errorcode)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_call_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_call_errhandler( comm, errorcode);
#ifdef DEBUG
printf("sort : R_MPI_Comm_call_errhandler\n");
#endif
return ret_tmp;
}
int MPI_Comm_delete_attr(A_MPI_Comm comm,int comm_keyval);
int (*LOCAL_MPI_Comm_delete_attr)(R_MPI_Comm,int);

__asm__(
".global CCMPI_Comm_delete_attr\n"
".weak MPI_Comm_delete_attr\n"
".set MPI_Comm_delete_attr,CCMPI_Comm_delete_attr\n"
".extern in_w\n"
".extern A_MPI_Comm_delete_attr\n"
".extern R_MPI_Comm_delete_attr\n"
".type CCMPI_Comm_delete_attr,@function\n"
".text\n"
"CCMPI_Comm_delete_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_delete_attr\n"
"jmp *A_MPI_Comm_delete_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_delete_attr:\n"
"jmp *R_MPI_Comm_delete_attr@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_delete_attr(A_MPI_Comm comm,int comm_keyval)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_delete_attr\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);


int ret_tmp= LOCAL_MPI_Comm_delete_attr( comm_tmp, comm_keyval);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_delete_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_delete_attr(R_MPI_Comm comm,int comm_keyval)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_delete_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_delete_attr( comm, comm_keyval);
#ifdef DEBUG
printf("sort : R_MPI_Comm_delete_attr\n");
#endif
return ret_tmp;
}
int MPI_Comm_get_attr(A_MPI_Comm comm,int comm_keyval,void * attribute_val,int * flag);
int (*LOCAL_MPI_Comm_get_attr)(R_MPI_Comm,int,void *,int *);

__asm__(
".global CCMPI_Comm_get_attr\n"
".weak MPI_Comm_get_attr\n"
".set MPI_Comm_get_attr,CCMPI_Comm_get_attr\n"
".extern in_w\n"
".extern A_MPI_Comm_get_attr\n"
".extern R_MPI_Comm_get_attr\n"
".type CCMPI_Comm_get_attr,@function\n"
".text\n"
"CCMPI_Comm_get_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_get_attr\n"
"jmp *A_MPI_Comm_get_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_get_attr:\n"
"jmp *R_MPI_Comm_get_attr@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_get_attr(A_MPI_Comm comm,int comm_keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_get_attr\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int comm_keyval_tmp;
my_keyval_a2r(&comm_keyval,&comm_keyval_tmp);


int ret_tmp= LOCAL_MPI_Comm_get_attr( comm_tmp, comm_keyval_tmp, attribute_val, flag);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_get_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_get_attr(R_MPI_Comm comm,int comm_keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_get_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_get_attr( comm, comm_keyval, attribute_val, flag);
#ifdef DEBUG
printf("sort : R_MPI_Comm_get_attr\n");
#endif
return ret_tmp;
}
int MPI_Comm_get_name(A_MPI_Comm comm,char * comm_name,int * resultlen);
int (*LOCAL_MPI_Comm_get_name)(R_MPI_Comm,char *,int *);

__asm__(
".global CCMPI_Comm_get_name\n"
".weak MPI_Comm_get_name\n"
".set MPI_Comm_get_name,CCMPI_Comm_get_name\n"
".extern in_w\n"
".extern A_MPI_Comm_get_name\n"
".extern R_MPI_Comm_get_name\n"
".type CCMPI_Comm_get_name,@function\n"
".text\n"
"CCMPI_Comm_get_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_get_name\n"
"jmp *A_MPI_Comm_get_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_get_name:\n"
"jmp *R_MPI_Comm_get_name@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_get_name(A_MPI_Comm comm,char * comm_name,int * resultlen)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_get_name\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);


int ret_tmp= LOCAL_MPI_Comm_get_name( comm_tmp, comm_name, resultlen);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_get_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_get_name(R_MPI_Comm comm,char * comm_name,int * resultlen)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_get_name\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_get_name( comm, comm_name, resultlen);
#ifdef DEBUG
printf("sort : R_MPI_Comm_get_name\n");
#endif
return ret_tmp;
}
int MPI_Comm_set_attr(A_MPI_Comm comm,int comm_keyval,void * attribute_val);
int (*LOCAL_MPI_Comm_set_attr)(R_MPI_Comm,int,void *);

__asm__(
".global CCMPI_Comm_set_attr\n"
".weak MPI_Comm_set_attr\n"
".set MPI_Comm_set_attr,CCMPI_Comm_set_attr\n"
".extern in_w\n"
".extern A_MPI_Comm_set_attr\n"
".extern R_MPI_Comm_set_attr\n"
".type CCMPI_Comm_set_attr,@function\n"
".text\n"
"CCMPI_Comm_set_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_set_attr\n"
"jmp *A_MPI_Comm_set_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_set_attr:\n"
"jmp *R_MPI_Comm_set_attr@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_set_attr(A_MPI_Comm comm,int comm_keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_set_attr\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);




int ret_tmp= LOCAL_MPI_Comm_set_attr( comm_tmp, comm_keyval, attribute_val);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_set_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_set_attr(R_MPI_Comm comm,int comm_keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_set_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_set_attr( comm, comm_keyval, attribute_val);
#ifdef DEBUG
printf("sort : R_MPI_Comm_set_attr\n");
#endif
return ret_tmp;
}
int MPI_Comm_set_name(A_MPI_Comm comm,char * comm_name);
int (*LOCAL_MPI_Comm_set_name)(R_MPI_Comm,char *);

__asm__(
".global CCMPI_Comm_set_name\n"
".weak MPI_Comm_set_name\n"
".set MPI_Comm_set_name,CCMPI_Comm_set_name\n"
".extern in_w\n"
".extern A_MPI_Comm_set_name\n"
".extern R_MPI_Comm_set_name\n"
".type CCMPI_Comm_set_name,@function\n"
".text\n"
"CCMPI_Comm_set_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_set_name\n"
"jmp *A_MPI_Comm_set_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_set_name:\n"
"jmp *R_MPI_Comm_set_name@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_set_name(A_MPI_Comm comm,char * comm_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_set_name\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);


int ret_tmp= LOCAL_MPI_Comm_set_name( comm_tmp, comm_name);
comm_conv_r2a(&comm,&comm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_set_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_set_name(R_MPI_Comm comm,char * comm_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_set_name\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_set_name( comm, comm_name);
#ifdef DEBUG
printf("sort : R_MPI_Comm_set_name\n");
#endif
return ret_tmp;
}
int MPI_Grequest_complete(A_MPI_Request request);
int (*LOCAL_MPI_Grequest_complete)(R_MPI_Request);

__asm__(
".global CCMPI_Grequest_complete\n"
".weak MPI_Grequest_complete\n"
".set MPI_Grequest_complete,CCMPI_Grequest_complete\n"
".extern in_w\n"
".extern A_MPI_Grequest_complete\n"
".extern R_MPI_Grequest_complete\n"
".type CCMPI_Grequest_complete,@function\n"
".text\n"
"CCMPI_Grequest_complete:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Grequest_complete\n"
"jmp *A_MPI_Grequest_complete@GOTPCREL(%rip)\n"
"inwrap_MPI_Grequest_complete:\n"
"jmp *R_MPI_Grequest_complete@GOTPCREL(%rip)\n"

);

int A_MPI_Grequest_complete(A_MPI_Request request)
{
#ifdef DEBUG
printf("entre : A_MPI_Grequest_complete\n");
#endif
in_w=1;

R_MPI_Request request_tmp;
request_tab_conv_a2r(&request,&request_tmp);
int ret_tmp= LOCAL_MPI_Grequest_complete( request_tmp);
request_tab_conv_r2a(&request,&request_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Grequest_complete\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Grequest_complete(R_MPI_Request request)
{
#ifdef DEBUG
printf("entre : R_MPI_Grequest_complete\n");
#endif
int ret_tmp= LOCAL_MPI_Grequest_complete( request);
#ifdef DEBUG
printf("sort : R_MPI_Grequest_complete\n");
#endif
return ret_tmp;
}
int MPI_Grequest_start(A_MPI_Grequest_query_function * query_fn,A_MPI_Grequest_free_function * free_fn,A_MPI_Grequest_cancel_function * cancel_fn,void * extra_state,A_MPI_Request * request);
int (*LOCAL_MPI_Grequest_start)(R_MPI_Grequest_query_function *,R_MPI_Grequest_free_function *,R_MPI_Grequest_cancel_function *,void *,R_MPI_Request *);

__asm__(
".global CCMPI_Grequest_start\n"
".weak MPI_Grequest_start\n"
".set MPI_Grequest_start,CCMPI_Grequest_start\n"
".extern in_w\n"
".extern A_MPI_Grequest_start\n"
".extern R_MPI_Grequest_start\n"
".type CCMPI_Grequest_start,@function\n"
".text\n"
"CCMPI_Grequest_start:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Grequest_start\n"
"jmp *A_MPI_Grequest_start@GOTPCREL(%rip)\n"
"inwrap_MPI_Grequest_start:\n"
"jmp *R_MPI_Grequest_start@GOTPCREL(%rip)\n"

);

int A_MPI_Grequest_start(A_MPI_Grequest_query_function * query_fn,A_MPI_Grequest_free_function * free_fn,A_MPI_Grequest_cancel_function * cancel_fn,void * extra_state,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Grequest_start\n");
#endif
in_w=1;


ptr_grq_query_fn=(A_MPI_Grequest_query_function *)query_fn;




void * extra_state_tmp;
buffer_conv_a2r(&extra_state,&extra_state_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Grequest_start( (R_MPI_Grequest_query_function *)wrapper_grequest_query_function, free_fn, cancel_fn, extra_state_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Grequest_start\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Grequest_start(R_MPI_Grequest_query_function * query_fn,R_MPI_Grequest_free_function * free_fn,R_MPI_Grequest_cancel_function * cancel_fn,void * extra_state,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Grequest_start\n");
#endif
int ret_tmp= LOCAL_MPI_Grequest_start( query_fn, free_fn, cancel_fn, extra_state, request);
#ifdef DEBUG
printf("sort : R_MPI_Grequest_start\n");
#endif
return ret_tmp;
}
int MPI_Init_thread(int * argc,char *** argv,int required,int * provided);
int (*LOCAL_MPI_Init_thread)(int *,char ***,int,int *);

__asm__(
".global CCMPI_Init_thread\n"
".weak MPI_Init_thread\n"
".set MPI_Init_thread,CCMPI_Init_thread\n"
".extern in_w\n"
".extern A_MPI_Init_thread\n"
".extern R_MPI_Init_thread\n"
".type CCMPI_Init_thread,@function\n"
".text\n"
"CCMPI_Init_thread:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Init_thread\n"
"jmp *A_MPI_Init_thread@GOTPCREL(%rip)\n"
"inwrap_MPI_Init_thread:\n"
"jmp *R_MPI_Init_thread@GOTPCREL(%rip)\n"

);

int A_MPI_Init_thread(int * argc,char *** argv,int required,int * provided)
{
#ifdef DEBUG
printf("entre : A_MPI_Init_thread\n");
#endif
in_w=1;








int ret_tmp= LOCAL_MPI_Init_thread( argc, argv, required, provided);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Init_thread\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Init_thread(int * argc,char *** argv,int required,int * provided)
{
#ifdef DEBUG
printf("entre : R_MPI_Init_thread\n");
#endif
int ret_tmp= LOCAL_MPI_Init_thread( argc, argv, required, provided);
#ifdef DEBUG
printf("sort : R_MPI_Init_thread\n");
#endif
return ret_tmp;
}
int MPI_Is_thread_main(int * flag);
int (*LOCAL_MPI_Is_thread_main)(int *);

__asm__(
".global CCMPI_Is_thread_main\n"
".weak MPI_Is_thread_main\n"
".set MPI_Is_thread_main,CCMPI_Is_thread_main\n"
".extern in_w\n"
".extern A_MPI_Is_thread_main\n"
".extern R_MPI_Is_thread_main\n"
".type CCMPI_Is_thread_main,@function\n"
".text\n"
"CCMPI_Is_thread_main:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Is_thread_main\n"
"jmp *A_MPI_Is_thread_main@GOTPCREL(%rip)\n"
"inwrap_MPI_Is_thread_main:\n"
"jmp *R_MPI_Is_thread_main@GOTPCREL(%rip)\n"

);

int A_MPI_Is_thread_main(int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Is_thread_main\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_Is_thread_main( flag);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Is_thread_main\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Is_thread_main(int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Is_thread_main\n");
#endif
int ret_tmp= LOCAL_MPI_Is_thread_main( flag);
#ifdef DEBUG
printf("sort : R_MPI_Is_thread_main\n");
#endif
return ret_tmp;
}
int MPI_Query_thread(int * provided);
int (*LOCAL_MPI_Query_thread)(int *);

__asm__(
".global CCMPI_Query_thread\n"
".weak MPI_Query_thread\n"
".set MPI_Query_thread,CCMPI_Query_thread\n"
".extern in_w\n"
".extern A_MPI_Query_thread\n"
".extern R_MPI_Query_thread\n"
".type CCMPI_Query_thread,@function\n"
".text\n"
"CCMPI_Query_thread:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Query_thread\n"
"jmp *A_MPI_Query_thread@GOTPCREL(%rip)\n"
"inwrap_MPI_Query_thread:\n"
"jmp *R_MPI_Query_thread@GOTPCREL(%rip)\n"

);

int A_MPI_Query_thread(int * provided)
{
#ifdef DEBUG
printf("entre : A_MPI_Query_thread\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_Query_thread( provided);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Query_thread\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Query_thread(int * provided)
{
#ifdef DEBUG
printf("entre : R_MPI_Query_thread\n");
#endif
int ret_tmp= LOCAL_MPI_Query_thread( provided);
#ifdef DEBUG
printf("sort : R_MPI_Query_thread\n");
#endif
return ret_tmp;
}
int MPI_Status_set_cancelled(A_MPI_Status * status,int flag);
int (*LOCAL_MPI_Status_set_cancelled)(R_MPI_Status *,int);

__asm__(
".global CCMPI_Status_set_cancelled\n"
".weak MPI_Status_set_cancelled\n"
".set MPI_Status_set_cancelled,CCMPI_Status_set_cancelled\n"
".extern in_w\n"
".extern A_MPI_Status_set_cancelled\n"
".extern R_MPI_Status_set_cancelled\n"
".type CCMPI_Status_set_cancelled,@function\n"
".text\n"
"CCMPI_Status_set_cancelled:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Status_set_cancelled\n"
"jmp *A_MPI_Status_set_cancelled@GOTPCREL(%rip)\n"
"inwrap_MPI_Status_set_cancelled:\n"
"jmp *R_MPI_Status_set_cancelled@GOTPCREL(%rip)\n"

);

int A_MPI_Status_set_cancelled(A_MPI_Status * status,int flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Status_set_cancelled\n");
#endif
in_w=1;

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
status_prt_conv_a2r(&status,&status_tmp);


int ret_tmp= LOCAL_MPI_Status_set_cancelled( status_tmp, flag);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Status_set_cancelled\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Status_set_cancelled(R_MPI_Status * status,int flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Status_set_cancelled\n");
#endif
int ret_tmp= LOCAL_MPI_Status_set_cancelled( status, flag);
#ifdef DEBUG
printf("sort : R_MPI_Status_set_cancelled\n");
#endif
return ret_tmp;
}
int MPI_Status_set_elements(A_MPI_Status * status,A_MPI_Datatype datatype,int count);
int (*LOCAL_MPI_Status_set_elements)(R_MPI_Status *,R_MPI_Datatype,int);

__asm__(
".global CCMPI_Status_set_elements\n"
".weak MPI_Status_set_elements\n"
".set MPI_Status_set_elements,CCMPI_Status_set_elements\n"
".extern in_w\n"
".extern A_MPI_Status_set_elements\n"
".extern R_MPI_Status_set_elements\n"
".type CCMPI_Status_set_elements,@function\n"
".text\n"
"CCMPI_Status_set_elements:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Status_set_elements\n"
"jmp *A_MPI_Status_set_elements@GOTPCREL(%rip)\n"
"inwrap_MPI_Status_set_elements:\n"
"jmp *R_MPI_Status_set_elements@GOTPCREL(%rip)\n"

);

int A_MPI_Status_set_elements(A_MPI_Status * status,A_MPI_Datatype datatype,int count)
{
#ifdef DEBUG
printf("entre : A_MPI_Status_set_elements\n");
#endif
in_w=1;

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
status_prt_conv_a2r(&status,&status_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


int ret_tmp= LOCAL_MPI_Status_set_elements( status_tmp, datatype_tmp, count);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Status_set_elements\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Status_set_elements(R_MPI_Status * status,R_MPI_Datatype datatype,int count)
{
#ifdef DEBUG
printf("entre : R_MPI_Status_set_elements\n");
#endif
int ret_tmp= LOCAL_MPI_Status_set_elements( status, datatype, count);
#ifdef DEBUG
printf("sort : R_MPI_Status_set_elements\n");
#endif
return ret_tmp;
}
int MPI_Type_create_keyval(A_MPI_Type_copy_attr_function * type_copy_attr_fn,A_MPI_Type_delete_attr_function * type_delete_attr_fn,int * type_keyval,void * extra_state);
int (*LOCAL_MPI_Type_create_keyval)(R_MPI_Type_copy_attr_function *,R_MPI_Type_delete_attr_function *,int *,void *);

__asm__(
".global CCMPI_Type_create_keyval\n"
".weak MPI_Type_create_keyval\n"
".set MPI_Type_create_keyval,CCMPI_Type_create_keyval\n"
".extern in_w\n"
".extern A_MPI_Type_create_keyval\n"
".extern R_MPI_Type_create_keyval\n"
".type CCMPI_Type_create_keyval,@function\n"
".text\n"
"CCMPI_Type_create_keyval:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_keyval\n"
"jmp *A_MPI_Type_create_keyval@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_keyval:\n"
"jmp *R_MPI_Type_create_keyval@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_keyval(A_MPI_Type_copy_attr_function * type_copy_attr_fn,A_MPI_Type_delete_attr_function * type_delete_attr_fn,int * type_keyval,void * extra_state)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_keyval\n");
#endif
in_w=1;


ptr_type_cpy_attr_fn=(A_MPI_Type_copy_attr_function *)type_copy_attr_fn;

ptr_type_dlt_attr_fn=(A_MPI_Type_delete_attr_function *)type_delete_attr_fn;

void * extra_state_tmp;
buffer_conv_a2r(&extra_state,&extra_state_tmp);
int ret_tmp= LOCAL_MPI_Type_create_keyval( (R_MPI_Type_copy_attr_function *)wrapper_type_copy_attr_fn, (R_MPI_Type_delete_attr_function *)wrapper_type_delete_attr_fn, type_keyval, extra_state_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_keyval\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_keyval(R_MPI_Type_copy_attr_function * type_copy_attr_fn,R_MPI_Type_delete_attr_function * type_delete_attr_fn,int * type_keyval,void * extra_state)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_keyval\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_keyval( type_copy_attr_fn, type_delete_attr_fn, type_keyval, extra_state);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_keyval\n");
#endif
return ret_tmp;
}
int MPI_Type_delete_attr(A_MPI_Datatype datatype,int type_keyval);
int (*LOCAL_MPI_Type_delete_attr)(R_MPI_Datatype,int);

__asm__(
".global CCMPI_Type_delete_attr\n"
".weak MPI_Type_delete_attr\n"
".set MPI_Type_delete_attr,CCMPI_Type_delete_attr\n"
".extern in_w\n"
".extern A_MPI_Type_delete_attr\n"
".extern R_MPI_Type_delete_attr\n"
".type CCMPI_Type_delete_attr,@function\n"
".text\n"
"CCMPI_Type_delete_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_delete_attr\n"
"jmp *A_MPI_Type_delete_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_delete_attr:\n"
"jmp *R_MPI_Type_delete_attr@GOTPCREL(%rip)\n"

);

int A_MPI_Type_delete_attr(A_MPI_Datatype datatype,int type_keyval)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_delete_attr\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int type_keyval_tmp;
my_keyval_a2r(&type_keyval,&type_keyval_tmp);
int ret_tmp= LOCAL_MPI_Type_delete_attr( datatype_tmp, type_keyval_tmp);
datatype_conv_r2a(&datatype,&datatype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_delete_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_delete_attr(R_MPI_Datatype datatype,int type_keyval)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_delete_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Type_delete_attr( datatype, type_keyval);
#ifdef DEBUG
printf("sort : R_MPI_Type_delete_attr\n");
#endif
return ret_tmp;
}
int MPI_Type_dup(A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_dup)(R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_dup\n"
".weak MPI_Type_dup\n"
".set MPI_Type_dup,CCMPI_Type_dup\n"
".extern in_w\n"
".extern A_MPI_Type_dup\n"
".extern R_MPI_Type_dup\n"
".type CCMPI_Type_dup,@function\n"
".text\n"
"CCMPI_Type_dup:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_dup\n"
"jmp *A_MPI_Type_dup@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_dup:\n"
"jmp *R_MPI_Type_dup@GOTPCREL(%rip)\n"

);

int A_MPI_Type_dup(A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_dup\n");
#endif
in_w=1;

R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_dup( oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_dup\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_dup(R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_dup\n");
#endif
int ret_tmp= LOCAL_MPI_Type_dup( oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_dup\n");
#endif
return ret_tmp;
}
int MPI_Type_free_keyval(int * type_keyval);
int (*LOCAL_MPI_Type_free_keyval)(int *);

__asm__(
".global CCMPI_Type_free_keyval\n"
".weak MPI_Type_free_keyval\n"
".set MPI_Type_free_keyval,CCMPI_Type_free_keyval\n"
".extern in_w\n"
".extern A_MPI_Type_free_keyval\n"
".extern R_MPI_Type_free_keyval\n"
".type CCMPI_Type_free_keyval,@function\n"
".text\n"
"CCMPI_Type_free_keyval:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_free_keyval\n"
"jmp *A_MPI_Type_free_keyval@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_free_keyval:\n"
"jmp *R_MPI_Type_free_keyval@GOTPCREL(%rip)\n"

);

int A_MPI_Type_free_keyval(int * type_keyval)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_free_keyval\n");
#endif
in_w=1;

int  type_keyval_ltmp;
int * type_keyval_tmp=&type_keyval_ltmp;
my_keyval_a2r(type_keyval,type_keyval_tmp);
int ret_tmp= LOCAL_MPI_Type_free_keyval( type_keyval_tmp);
my_keyval_r2a(type_keyval,type_keyval_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_free_keyval\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_free_keyval(int * type_keyval)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_free_keyval\n");
#endif
int ret_tmp= LOCAL_MPI_Type_free_keyval( type_keyval);
#ifdef DEBUG
printf("sort : R_MPI_Type_free_keyval\n");
#endif
return ret_tmp;
}
int MPI_Type_get_attr(A_MPI_Datatype datatype,int type_keyval,void * attribute_val,int * flag);
int (*LOCAL_MPI_Type_get_attr)(R_MPI_Datatype,int,void *,int *);

__asm__(
".global CCMPI_Type_get_attr\n"
".weak MPI_Type_get_attr\n"
".set MPI_Type_get_attr,CCMPI_Type_get_attr\n"
".extern in_w\n"
".extern A_MPI_Type_get_attr\n"
".extern R_MPI_Type_get_attr\n"
".type CCMPI_Type_get_attr,@function\n"
".text\n"
"CCMPI_Type_get_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_attr\n"
"jmp *A_MPI_Type_get_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_attr:\n"
"jmp *R_MPI_Type_get_attr@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_attr(A_MPI_Datatype datatype,int type_keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_attr\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int type_keyval_tmp;
my_keyval_a2r(&type_keyval,&type_keyval_tmp);
void * attribute_val_tmp;

int ret_tmp= LOCAL_MPI_Type_get_attr( datatype_tmp, type_keyval_tmp, attribute_val_tmp, flag);
buffer_conv_r2a(&attribute_val,&attribute_val_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_attr(R_MPI_Datatype datatype,int type_keyval,void * attribute_val,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_attr( datatype, type_keyval, attribute_val, flag);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_attr\n");
#endif
return ret_tmp;
}
int MPI_Type_get_envelope(A_MPI_Datatype datatype,int * num_integers,int * num_addresses,int * num_datatypes,int * combiner);
int (*LOCAL_MPI_Type_get_envelope)(R_MPI_Datatype,int *,int *,int *,int *);

__asm__(
".global CCMPI_Type_get_envelope\n"
".weak MPI_Type_get_envelope\n"
".set MPI_Type_get_envelope,CCMPI_Type_get_envelope\n"
".extern in_w\n"
".extern A_MPI_Type_get_envelope\n"
".extern R_MPI_Type_get_envelope\n"
".type CCMPI_Type_get_envelope,@function\n"
".text\n"
"CCMPI_Type_get_envelope:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_envelope\n"
"jmp *A_MPI_Type_get_envelope@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_envelope:\n"
"jmp *R_MPI_Type_get_envelope@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_envelope(A_MPI_Datatype datatype,int * num_integers,int * num_addresses,int * num_datatypes,int * combiner)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_envelope\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);




int ret_tmp= LOCAL_MPI_Type_get_envelope( datatype_tmp, num_integers, num_addresses, num_datatypes, combiner);




in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_envelope\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_envelope(R_MPI_Datatype datatype,int * num_integers,int * num_addresses,int * num_datatypes,int * combiner)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_envelope\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_envelope( datatype, num_integers, num_addresses, num_datatypes, combiner);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_envelope\n");
#endif
return ret_tmp;
}
int MPI_Type_get_name(A_MPI_Datatype datatype,char * type_name,int * resultlen);
int (*LOCAL_MPI_Type_get_name)(R_MPI_Datatype,char *,int *);

__asm__(
".global CCMPI_Type_get_name\n"
".weak MPI_Type_get_name\n"
".set MPI_Type_get_name,CCMPI_Type_get_name\n"
".extern in_w\n"
".extern A_MPI_Type_get_name\n"
".extern R_MPI_Type_get_name\n"
".type CCMPI_Type_get_name,@function\n"
".text\n"
"CCMPI_Type_get_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_name\n"
"jmp *A_MPI_Type_get_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_name:\n"
"jmp *R_MPI_Type_get_name@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_name(A_MPI_Datatype datatype,char * type_name,int * resultlen)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_name\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


int ret_tmp= LOCAL_MPI_Type_get_name( datatype_tmp, type_name, resultlen);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_name(R_MPI_Datatype datatype,char * type_name,int * resultlen)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_name\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_name( datatype, type_name, resultlen);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_name\n");
#endif
return ret_tmp;
}
int MPI_Type_set_attr(A_MPI_Datatype datatype,int type_keyval,void * attribute_val);
int (*LOCAL_MPI_Type_set_attr)(R_MPI_Datatype,int,void *);

__asm__(
".global CCMPI_Type_set_attr\n"
".weak MPI_Type_set_attr\n"
".set MPI_Type_set_attr,CCMPI_Type_set_attr\n"
".extern in_w\n"
".extern A_MPI_Type_set_attr\n"
".extern R_MPI_Type_set_attr\n"
".type CCMPI_Type_set_attr,@function\n"
".text\n"
"CCMPI_Type_set_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_set_attr\n"
"jmp *A_MPI_Type_set_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_set_attr:\n"
"jmp *R_MPI_Type_set_attr@GOTPCREL(%rip)\n"

);

int A_MPI_Type_set_attr(A_MPI_Datatype datatype,int type_keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_set_attr\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int type_keyval_tmp;
my_keyval_a2r(&type_keyval,&type_keyval_tmp);
void * attribute_val_tmp;
buffer_conv_a2r(&attribute_val,&attribute_val_tmp);
int ret_tmp= LOCAL_MPI_Type_set_attr( datatype_tmp, type_keyval_tmp, attribute_val_tmp);
datatype_conv_r2a(&datatype,&datatype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_set_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_set_attr(R_MPI_Datatype datatype,int type_keyval,void * attribute_val)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_set_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Type_set_attr( datatype, type_keyval, attribute_val);
#ifdef DEBUG
printf("sort : R_MPI_Type_set_attr\n");
#endif
return ret_tmp;
}
int MPI_Type_set_name(A_MPI_Datatype datatype,char * type_name);
int (*LOCAL_MPI_Type_set_name)(R_MPI_Datatype,char *);

__asm__(
".global CCMPI_Type_set_name\n"
".weak MPI_Type_set_name\n"
".set MPI_Type_set_name,CCMPI_Type_set_name\n"
".extern in_w\n"
".extern A_MPI_Type_set_name\n"
".extern R_MPI_Type_set_name\n"
".type CCMPI_Type_set_name,@function\n"
".text\n"
"CCMPI_Type_set_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_set_name\n"
"jmp *A_MPI_Type_set_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_set_name:\n"
"jmp *R_MPI_Type_set_name@GOTPCREL(%rip)\n"

);

int A_MPI_Type_set_name(A_MPI_Datatype datatype,char * type_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_set_name\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


int ret_tmp= LOCAL_MPI_Type_set_name( datatype_tmp, type_name);
datatype_conv_r2a(&datatype,&datatype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_set_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_set_name(R_MPI_Datatype datatype,char * type_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_set_name\n");
#endif
int ret_tmp= LOCAL_MPI_Type_set_name( datatype, type_name);
#ifdef DEBUG
printf("sort : R_MPI_Type_set_name\n");
#endif
return ret_tmp;
}
int MPI_Type_match_size(int typeclass,int size,A_MPI_Datatype * datatype);
int (*LOCAL_MPI_Type_match_size)(int,int,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_match_size\n"
".weak MPI_Type_match_size\n"
".set MPI_Type_match_size,CCMPI_Type_match_size\n"
".extern in_w\n"
".extern A_MPI_Type_match_size\n"
".extern R_MPI_Type_match_size\n"
".type CCMPI_Type_match_size,@function\n"
".text\n"
"CCMPI_Type_match_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_match_size\n"
"jmp *A_MPI_Type_match_size@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_match_size:\n"
"jmp *R_MPI_Type_match_size@GOTPCREL(%rip)\n"

);

int A_MPI_Type_match_size(int typeclass,int size,A_MPI_Datatype * datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_match_size\n");
#endif
in_w=1;

int typeclass_tmp;
typeclass_conv_a2r(&typeclass,&typeclass_tmp);


R_MPI_Datatype  datatype_ltmp;
R_MPI_Datatype * datatype_tmp=&datatype_ltmp;
int ret_tmp= LOCAL_MPI_Type_match_size( typeclass_tmp, size, datatype_tmp);
datatype_conv_r2a(datatype,datatype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_match_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_match_size(int typeclass,int size,R_MPI_Datatype * datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_match_size\n");
#endif
int ret_tmp= LOCAL_MPI_Type_match_size( typeclass, size, datatype);
#ifdef DEBUG
printf("sort : R_MPI_Type_match_size\n");
#endif
return ret_tmp;
}
int MPI_Win_create_keyval(A_MPI_Win_copy_attr_function * win_copy_attr_fn,A_MPI_Win_delete_attr_function * win_delete_attr_fn,int * win_keyval,void * extra_state);
int (*LOCAL_MPI_Win_create_keyval)(R_MPI_Win_copy_attr_function *,R_MPI_Win_delete_attr_function *,int *,void *);

__asm__(
".global CCMPI_Win_create_keyval\n"
".weak MPI_Win_create_keyval\n"
".set MPI_Win_create_keyval,CCMPI_Win_create_keyval\n"
".extern in_w\n"
".extern A_MPI_Win_create_keyval\n"
".extern R_MPI_Win_create_keyval\n"
".type CCMPI_Win_create_keyval,@function\n"
".text\n"
"CCMPI_Win_create_keyval:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_create_keyval\n"
"jmp *A_MPI_Win_create_keyval@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_create_keyval:\n"
"jmp *R_MPI_Win_create_keyval@GOTPCREL(%rip)\n"

);

int A_MPI_Win_create_keyval(A_MPI_Win_copy_attr_function * win_copy_attr_fn,A_MPI_Win_delete_attr_function * win_delete_attr_fn,int * win_keyval,void * extra_state)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_create_keyval\n");
#endif
in_w=1;


ptr_win_copy_fn=(A_MPI_Win_copy_attr_function *)win_copy_attr_fn;

ptr_win_dlt_fn=(A_MPI_Win_delete_attr_function *)win_delete_attr_fn;

void * extra_state_tmp;
buffer_conv_a2r(&extra_state,&extra_state_tmp);
int ret_tmp= LOCAL_MPI_Win_create_keyval( (R_MPI_Win_copy_attr_function *)wrapper_win_copy_function, (R_MPI_Win_delete_attr_function *)wrapper_win_delete_function, win_keyval, extra_state_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_create_keyval\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_create_keyval(R_MPI_Win_copy_attr_function * win_copy_attr_fn,R_MPI_Win_delete_attr_function * win_delete_attr_fn,int * win_keyval,void * extra_state)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_create_keyval\n");
#endif
int ret_tmp= LOCAL_MPI_Win_create_keyval( win_copy_attr_fn, win_delete_attr_fn, win_keyval, extra_state);
#ifdef DEBUG
printf("sort : R_MPI_Win_create_keyval\n");
#endif
return ret_tmp;
}
int MPI_Win_delete_attr(A_MPI_Win win,int win_keyval);
int (*LOCAL_MPI_Win_delete_attr)(R_MPI_Win,int);

__asm__(
".global CCMPI_Win_delete_attr\n"
".weak MPI_Win_delete_attr\n"
".set MPI_Win_delete_attr,CCMPI_Win_delete_attr\n"
".extern in_w\n"
".extern A_MPI_Win_delete_attr\n"
".extern R_MPI_Win_delete_attr\n"
".type CCMPI_Win_delete_attr,@function\n"
".text\n"
"CCMPI_Win_delete_attr:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_delete_attr\n"
"jmp *A_MPI_Win_delete_attr@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_delete_attr:\n"
"jmp *R_MPI_Win_delete_attr@GOTPCREL(%rip)\n"

);

int A_MPI_Win_delete_attr(A_MPI_Win win,int win_keyval)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_delete_attr\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
int win_keyval_tmp;
my_keyval_a2r(&win_keyval,&win_keyval_tmp);
int ret_tmp= LOCAL_MPI_Win_delete_attr( win_tmp, win_keyval_tmp);
win_conv_r2a(&win,&win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_delete_attr\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_delete_attr(R_MPI_Win win,int win_keyval)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_delete_attr\n");
#endif
int ret_tmp= LOCAL_MPI_Win_delete_attr( win, win_keyval);
#ifdef DEBUG
printf("sort : R_MPI_Win_delete_attr\n");
#endif
return ret_tmp;
}
int MPI_Win_free_keyval(int * win_keyval);
int (*LOCAL_MPI_Win_free_keyval)(int *);

__asm__(
".global CCMPI_Win_free_keyval\n"
".weak MPI_Win_free_keyval\n"
".set MPI_Win_free_keyval,CCMPI_Win_free_keyval\n"
".extern in_w\n"
".extern A_MPI_Win_free_keyval\n"
".extern R_MPI_Win_free_keyval\n"
".type CCMPI_Win_free_keyval,@function\n"
".text\n"
"CCMPI_Win_free_keyval:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_free_keyval\n"
"jmp *A_MPI_Win_free_keyval@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_free_keyval:\n"
"jmp *R_MPI_Win_free_keyval@GOTPCREL(%rip)\n"

);

int A_MPI_Win_free_keyval(int * win_keyval)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_free_keyval\n");
#endif
in_w=1;

int  win_keyval_ltmp;
int * win_keyval_tmp=&win_keyval_ltmp;
my_keyval_a2r(win_keyval,win_keyval_tmp);
int ret_tmp= LOCAL_MPI_Win_free_keyval( win_keyval_tmp);
my_keyval_r2a(win_keyval,win_keyval_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_free_keyval\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_free_keyval(int * win_keyval)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_free_keyval\n");
#endif
int ret_tmp= LOCAL_MPI_Win_free_keyval( win_keyval);
#ifdef DEBUG
printf("sort : R_MPI_Win_free_keyval\n");
#endif
return ret_tmp;
}
int MPI_Win_get_name(A_MPI_Win win,char * win_name,int * resultlen);
int (*LOCAL_MPI_Win_get_name)(R_MPI_Win,char *,int *);

__asm__(
".global CCMPI_Win_get_name\n"
".weak MPI_Win_get_name\n"
".set MPI_Win_get_name,CCMPI_Win_get_name\n"
".extern in_w\n"
".extern A_MPI_Win_get_name\n"
".extern R_MPI_Win_get_name\n"
".type CCMPI_Win_get_name,@function\n"
".text\n"
"CCMPI_Win_get_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_get_name\n"
"jmp *A_MPI_Win_get_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_get_name:\n"
"jmp *R_MPI_Win_get_name@GOTPCREL(%rip)\n"

);

int A_MPI_Win_get_name(A_MPI_Win win,char * win_name,int * resultlen)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_get_name\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);


int ret_tmp= LOCAL_MPI_Win_get_name( win_tmp, win_name, resultlen);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_get_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_get_name(R_MPI_Win win,char * win_name,int * resultlen)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_get_name\n");
#endif
int ret_tmp= LOCAL_MPI_Win_get_name( win, win_name, resultlen);
#ifdef DEBUG
printf("sort : R_MPI_Win_get_name\n");
#endif
return ret_tmp;
}
int MPI_Win_set_name(A_MPI_Win win,char * win_name);
int (*LOCAL_MPI_Win_set_name)(R_MPI_Win,char *);

__asm__(
".global CCMPI_Win_set_name\n"
".weak MPI_Win_set_name\n"
".set MPI_Win_set_name,CCMPI_Win_set_name\n"
".extern in_w\n"
".extern A_MPI_Win_set_name\n"
".extern R_MPI_Win_set_name\n"
".type CCMPI_Win_set_name,@function\n"
".text\n"
"CCMPI_Win_set_name:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_set_name\n"
"jmp *A_MPI_Win_set_name@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_set_name:\n"
"jmp *R_MPI_Win_set_name@GOTPCREL(%rip)\n"

);

int A_MPI_Win_set_name(A_MPI_Win win,char * win_name)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_set_name\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);


int ret_tmp= LOCAL_MPI_Win_set_name( win_tmp, win_name);
win_conv_r2a(&win,&win_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_set_name\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_set_name(R_MPI_Win win,char * win_name)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_set_name\n");
#endif
int ret_tmp= LOCAL_MPI_Win_set_name( win, win_name);
#ifdef DEBUG
printf("sort : R_MPI_Win_set_name\n");
#endif
return ret_tmp;
}
int MPI_Alloc_mem(A_MPI_Aint size,A_MPI_Info info,void * baseptr);
int (*LOCAL_MPI_Alloc_mem)(R_MPI_Aint,R_MPI_Info,void *);

__asm__(
".global CCMPI_Alloc_mem\n"
".weak MPI_Alloc_mem\n"
".set MPI_Alloc_mem,CCMPI_Alloc_mem\n"
".extern in_w\n"
".extern A_MPI_Alloc_mem\n"
".extern R_MPI_Alloc_mem\n"
".type CCMPI_Alloc_mem,@function\n"
".text\n"
"CCMPI_Alloc_mem:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Alloc_mem\n"
"jmp *A_MPI_Alloc_mem@GOTPCREL(%rip)\n"
"inwrap_MPI_Alloc_mem:\n"
"jmp *R_MPI_Alloc_mem@GOTPCREL(%rip)\n"

);

int A_MPI_Alloc_mem(A_MPI_Aint size,A_MPI_Info info,void * baseptr)
{
#ifdef DEBUG
printf("entre : A_MPI_Alloc_mem\n");
#endif
in_w=1;

R_MPI_Aint size_tmp;
size_tmp = (R_MPI_Aint)size;
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
void * baseptr_tmp;
buffer_conv_a2r(&baseptr,&baseptr_tmp);
int ret_tmp= LOCAL_MPI_Alloc_mem( size_tmp, info_tmp, baseptr_tmp);
buffer_conv_r2a(&baseptr,&baseptr_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Alloc_mem\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Alloc_mem(R_MPI_Aint size,R_MPI_Info info,void * baseptr)
{
#ifdef DEBUG
printf("entre : R_MPI_Alloc_mem\n");
#endif
int ret_tmp= LOCAL_MPI_Alloc_mem( size, info, baseptr);
#ifdef DEBUG
printf("sort : R_MPI_Alloc_mem\n");
#endif
return ret_tmp;
}
int MPI_Comm_create_errhandler(A_MPI_Comm_errhandler_function * comm_errhandler_fn,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_Comm_create_errhandler)(R_MPI_Comm_errhandler_function *,R_MPI_Errhandler *);

__asm__(
".global CCMPI_Comm_create_errhandler\n"
".weak MPI_Comm_create_errhandler\n"
".set MPI_Comm_create_errhandler,CCMPI_Comm_create_errhandler\n"
".extern in_w\n"
".extern A_MPI_Comm_create_errhandler\n"
".extern R_MPI_Comm_create_errhandler\n"
".type CCMPI_Comm_create_errhandler,@function\n"
".text\n"
"CCMPI_Comm_create_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_create_errhandler\n"
"jmp *A_MPI_Comm_create_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_create_errhandler:\n"
"jmp *R_MPI_Comm_create_errhandler@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_create_errhandler(A_MPI_Comm_errhandler_function * comm_errhandler_fn,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_create_errhandler\n");
#endif
in_w=1;


ptr_comm_fn_handler=(A_MPI_Comm_errhandler_function *)comm_errhandler_fn;
R_MPI_Errhandler  errhandler_ltmp;
R_MPI_Errhandler * errhandler_tmp=&errhandler_ltmp;
int ret_tmp= LOCAL_MPI_Comm_create_errhandler( (R_MPI_Comm_errhandler_function *)wrapper_comm_handler_function, errhandler_tmp);
errhandler_ptr_conv_r2a(&errhandler,&errhandler_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_create_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_create_errhandler(R_MPI_Comm_errhandler_function * comm_errhandler_fn,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_create_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_create_errhandler( comm_errhandler_fn, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Comm_create_errhandler\n");
#endif
return ret_tmp;
}
int MPI_Comm_get_errhandler(A_MPI_Comm comm,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_Comm_get_errhandler)(R_MPI_Comm,R_MPI_Errhandler *);

__asm__(
".global CCMPI_Comm_get_errhandler\n"
".weak MPI_Comm_get_errhandler\n"
".set MPI_Comm_get_errhandler,CCMPI_Comm_get_errhandler\n"
".extern in_w\n"
".extern A_MPI_Comm_get_errhandler\n"
".extern R_MPI_Comm_get_errhandler\n"
".type CCMPI_Comm_get_errhandler,@function\n"
".text\n"
"CCMPI_Comm_get_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_get_errhandler\n"
"jmp *A_MPI_Comm_get_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_get_errhandler:\n"
"jmp *R_MPI_Comm_get_errhandler@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_get_errhandler(A_MPI_Comm comm,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_get_errhandler\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Errhandler  errhandler_ltmp;
R_MPI_Errhandler * errhandler_tmp=&errhandler_ltmp;
int ret_tmp= LOCAL_MPI_Comm_get_errhandler( comm_tmp, errhandler_tmp);
if(ret_tmp == R_MPI_SUCCESS){
A_MPI_Comm_errhandler_fn* ptr_err_handler_func;
communicator_fn_translation_get(comm, &ptr_err_handler_func);
errhandler_fn_translation_update(*errhandler, ptr_err_handler_func);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_get_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_get_errhandler(R_MPI_Comm comm,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_get_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_get_errhandler( comm, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Comm_get_errhandler\n");
#endif
return ret_tmp;
}
int MPI_Comm_set_errhandler(A_MPI_Comm comm,A_MPI_Errhandler errhandler);
int (*LOCAL_MPI_Comm_set_errhandler)(R_MPI_Comm,R_MPI_Errhandler);

__asm__(
".global CCMPI_Comm_set_errhandler\n"
".weak MPI_Comm_set_errhandler\n"
".set MPI_Comm_set_errhandler,CCMPI_Comm_set_errhandler\n"
".extern in_w\n"
".extern A_MPI_Comm_set_errhandler\n"
".extern R_MPI_Comm_set_errhandler\n"
".type CCMPI_Comm_set_errhandler,@function\n"
".text\n"
"CCMPI_Comm_set_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_set_errhandler\n"
"jmp *A_MPI_Comm_set_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_set_errhandler:\n"
"jmp *R_MPI_Comm_set_errhandler@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_set_errhandler(A_MPI_Comm comm,A_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_set_errhandler\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Errhandler errhandler_tmp;
errhandler_conv_a2r(&errhandler,&errhandler_tmp);
int ret_tmp= LOCAL_MPI_Comm_set_errhandler( comm_tmp, errhandler_tmp);
if(!errhandler_translation_is_const(errhandler)){
A_MPI_Comm_errhandler_fn* ptr_errhandler_func;
errhandler_fn_translation_get(errhandler, &ptr_errhandler_func);
communicator_fn_translation_update(comm, ptr_errhandler_func);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_set_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_set_errhandler(R_MPI_Comm comm,R_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_set_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_set_errhandler( comm, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Comm_set_errhandler\n");
#endif
return ret_tmp;
}
int MPI_File_get_errhandler(A_MPI_File file,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_File_get_errhandler)(R_MPI_File,R_MPI_Errhandler *);

__asm__(
".global CCMPI_File_get_errhandler\n"
".weak MPI_File_get_errhandler\n"
".set MPI_File_get_errhandler,CCMPI_File_get_errhandler\n"
".extern in_w\n"
".extern A_MPI_File_get_errhandler\n"
".extern R_MPI_File_get_errhandler\n"
".type CCMPI_File_get_errhandler,@function\n"
".text\n"
"CCMPI_File_get_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_errhandler\n"
"jmp *A_MPI_File_get_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_errhandler:\n"
"jmp *R_MPI_File_get_errhandler@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_errhandler(A_MPI_File file,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_errhandler\n");
#endif
in_w=1;

R_MPI_File file_tmp;
file_conv_a2r(&file,&file_tmp);
R_MPI_Errhandler  errhandler_ltmp;
R_MPI_Errhandler * errhandler_tmp=&errhandler_ltmp;
int ret_tmp= LOCAL_MPI_File_get_errhandler( file_tmp, errhandler_tmp);
if(ret_tmp == R_MPI_SUCCESS){
errhandler_ptr_conv_r2a(&errhandler,&errhandler_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_errhandler(R_MPI_File file,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_errhandler( file, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_File_get_errhandler\n");
#endif
return ret_tmp;
}
int MPI_File_set_errhandler(A_MPI_File file,A_MPI_Errhandler errhandler);
int (*LOCAL_MPI_File_set_errhandler)(R_MPI_File,R_MPI_Errhandler);

__asm__(
".global CCMPI_File_set_errhandler\n"
".weak MPI_File_set_errhandler\n"
".set MPI_File_set_errhandler,CCMPI_File_set_errhandler\n"
".extern in_w\n"
".extern A_MPI_File_set_errhandler\n"
".extern R_MPI_File_set_errhandler\n"
".type CCMPI_File_set_errhandler,@function\n"
".text\n"
"CCMPI_File_set_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_set_errhandler\n"
"jmp *A_MPI_File_set_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_File_set_errhandler:\n"
"jmp *R_MPI_File_set_errhandler@GOTPCREL(%rip)\n"

);

int A_MPI_File_set_errhandler(A_MPI_File file,A_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_File_set_errhandler\n");
#endif
in_w=1;

R_MPI_File file_tmp;
file_conv_a2r(&file,&file_tmp);
R_MPI_Errhandler errhandler_tmp;
errhandler_conv_a2r(&errhandler,&errhandler_tmp);
int ret_tmp= LOCAL_MPI_File_set_errhandler( file_tmp, errhandler_tmp);
file_conv_r2a(&file,&file_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_set_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_set_errhandler(R_MPI_File file,R_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_File_set_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_File_set_errhandler( file, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_File_set_errhandler\n");
#endif
return ret_tmp;
}
int MPI_Finalized(int * flag);
int (*LOCAL_MPI_Finalized)(int *);

__asm__(
".global CCMPI_Finalized\n"
".weak MPI_Finalized\n"
".set MPI_Finalized,CCMPI_Finalized\n"
".extern in_w\n"
".extern A_MPI_Finalized\n"
".extern R_MPI_Finalized\n"
".type CCMPI_Finalized,@function\n"
".text\n"
"CCMPI_Finalized:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Finalized\n"
"jmp *A_MPI_Finalized@GOTPCREL(%rip)\n"
"inwrap_MPI_Finalized:\n"
"jmp *R_MPI_Finalized@GOTPCREL(%rip)\n"

);

int A_MPI_Finalized(int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Finalized\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_Finalized( flag);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Finalized\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Finalized(int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Finalized\n");
#endif
int ret_tmp= LOCAL_MPI_Finalized( flag);
#ifdef DEBUG
printf("sort : R_MPI_Finalized\n");
#endif
return ret_tmp;
}
int MPI_Free_mem(void * base);
int (*LOCAL_MPI_Free_mem)(void *);

__asm__(
".global CCMPI_Free_mem\n"
".weak MPI_Free_mem\n"
".set MPI_Free_mem,CCMPI_Free_mem\n"
".extern in_w\n"
".extern A_MPI_Free_mem\n"
".extern R_MPI_Free_mem\n"
".type CCMPI_Free_mem,@function\n"
".text\n"
"CCMPI_Free_mem:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Free_mem\n"
"jmp *A_MPI_Free_mem@GOTPCREL(%rip)\n"
"inwrap_MPI_Free_mem:\n"
"jmp *R_MPI_Free_mem@GOTPCREL(%rip)\n"

);

int A_MPI_Free_mem(void * base)
{
#ifdef DEBUG
printf("entre : A_MPI_Free_mem\n");
#endif
in_w=1;

void * base_tmp;
buffer_conv_a2r(&base,&base_tmp);
int ret_tmp= LOCAL_MPI_Free_mem( base_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Free_mem\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Free_mem(void * base)
{
#ifdef DEBUG
printf("entre : R_MPI_Free_mem\n");
#endif
int ret_tmp= LOCAL_MPI_Free_mem( base);
#ifdef DEBUG
printf("sort : R_MPI_Free_mem\n");
#endif
return ret_tmp;
}
int MPI_Get_address(void * location,A_MPI_Aint * address);
int (*LOCAL_MPI_Get_address)(void *,R_MPI_Aint *);

__asm__(
".global CCMPI_Get_address\n"
".weak MPI_Get_address\n"
".set MPI_Get_address,CCMPI_Get_address\n"
".extern in_w\n"
".extern A_MPI_Get_address\n"
".extern R_MPI_Get_address\n"
".type CCMPI_Get_address,@function\n"
".text\n"
"CCMPI_Get_address:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_address\n"
"jmp *A_MPI_Get_address@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_address:\n"
"jmp *R_MPI_Get_address@GOTPCREL(%rip)\n"

);

int A_MPI_Get_address(void * location,A_MPI_Aint * address)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_address\n");
#endif
in_w=1;

void * location_tmp;
buffer_conv_a2r(&location,&location_tmp);
R_MPI_Aint  address_ltmp;
R_MPI_Aint * address_tmp=&address_ltmp;
int ret_tmp= LOCAL_MPI_Get_address( location_tmp, address_tmp);
*address= (A_MPI_Aint ) *address_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_address\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_address(void * location,R_MPI_Aint * address)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_address\n");
#endif
int ret_tmp= LOCAL_MPI_Get_address( location, address);
#ifdef DEBUG
printf("sort : R_MPI_Get_address\n");
#endif
return ret_tmp;
}
int MPI_Info_create(A_MPI_Info * info);
int (*LOCAL_MPI_Info_create)(R_MPI_Info *);

__asm__(
".global CCMPI_Info_create\n"
".weak MPI_Info_create\n"
".set MPI_Info_create,CCMPI_Info_create\n"
".extern in_w\n"
".extern A_MPI_Info_create\n"
".extern R_MPI_Info_create\n"
".type CCMPI_Info_create,@function\n"
".text\n"
"CCMPI_Info_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_create\n"
"jmp *A_MPI_Info_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_create:\n"
"jmp *R_MPI_Info_create@GOTPCREL(%rip)\n"

);

int A_MPI_Info_create(A_MPI_Info * info)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_create\n");
#endif
in_w=1;

R_MPI_Info  info_ltmp;
R_MPI_Info * info_tmp=&info_ltmp;
int ret_tmp= LOCAL_MPI_Info_create( info_tmp);
info_conv_r2a(info,info_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_create(R_MPI_Info * info)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_create\n");
#endif
int ret_tmp= LOCAL_MPI_Info_create( info);
#ifdef DEBUG
printf("sort : R_MPI_Info_create\n");
#endif
return ret_tmp;
}
int MPI_Info_delete(A_MPI_Info info,char * key);
int (*LOCAL_MPI_Info_delete)(R_MPI_Info,char *);

__asm__(
".global CCMPI_Info_delete\n"
".weak MPI_Info_delete\n"
".set MPI_Info_delete,CCMPI_Info_delete\n"
".extern in_w\n"
".extern A_MPI_Info_delete\n"
".extern R_MPI_Info_delete\n"
".type CCMPI_Info_delete,@function\n"
".text\n"
"CCMPI_Info_delete:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_delete\n"
"jmp *A_MPI_Info_delete@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_delete:\n"
"jmp *R_MPI_Info_delete@GOTPCREL(%rip)\n"

);

int A_MPI_Info_delete(A_MPI_Info info,char * key)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_delete\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


int ret_tmp= LOCAL_MPI_Info_delete( info_tmp, key);
info_conv_r2a(&info,&info_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_delete\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_delete(R_MPI_Info info,char * key)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_delete\n");
#endif
int ret_tmp= LOCAL_MPI_Info_delete( info, key);
#ifdef DEBUG
printf("sort : R_MPI_Info_delete\n");
#endif
return ret_tmp;
}
int MPI_Info_dup(A_MPI_Info info,A_MPI_Info * newinfo);
int (*LOCAL_MPI_Info_dup)(R_MPI_Info,R_MPI_Info *);

__asm__(
".global CCMPI_Info_dup\n"
".weak MPI_Info_dup\n"
".set MPI_Info_dup,CCMPI_Info_dup\n"
".extern in_w\n"
".extern A_MPI_Info_dup\n"
".extern R_MPI_Info_dup\n"
".type CCMPI_Info_dup,@function\n"
".text\n"
"CCMPI_Info_dup:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_dup\n"
"jmp *A_MPI_Info_dup@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_dup:\n"
"jmp *R_MPI_Info_dup@GOTPCREL(%rip)\n"

);

int A_MPI_Info_dup(A_MPI_Info info,A_MPI_Info * newinfo)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_dup\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_Info  newinfo_ltmp;
R_MPI_Info * newinfo_tmp=&newinfo_ltmp;
int ret_tmp= LOCAL_MPI_Info_dup( info_tmp, newinfo_tmp);
info_conv_r2a(newinfo,newinfo_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_dup\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_dup(R_MPI_Info info,R_MPI_Info * newinfo)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_dup\n");
#endif
int ret_tmp= LOCAL_MPI_Info_dup( info, newinfo);
#ifdef DEBUG
printf("sort : R_MPI_Info_dup\n");
#endif
return ret_tmp;
}
int MPI_Info_free(A_MPI_Info * info);
int (*LOCAL_MPI_Info_free)(R_MPI_Info *);

__asm__(
".global CCMPI_Info_free\n"
".weak MPI_Info_free\n"
".set MPI_Info_free,CCMPI_Info_free\n"
".extern in_w\n"
".extern A_MPI_Info_free\n"
".extern R_MPI_Info_free\n"
".type CCMPI_Info_free,@function\n"
".text\n"
"CCMPI_Info_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_free\n"
"jmp *A_MPI_Info_free@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_free:\n"
"jmp *R_MPI_Info_free@GOTPCREL(%rip)\n"

);

int A_MPI_Info_free(A_MPI_Info * info)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_free\n");
#endif
in_w=1;

R_MPI_Info  info_ltmp;
R_MPI_Info * info_tmp=&info_ltmp;
info_conv_a2r(info,info_tmp);
int ret_tmp= LOCAL_MPI_Info_free( info_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_free(R_MPI_Info * info)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_free\n");
#endif
int ret_tmp= LOCAL_MPI_Info_free( info);
#ifdef DEBUG
printf("sort : R_MPI_Info_free\n");
#endif
return ret_tmp;
}
int MPI_Info_get(A_MPI_Info info,char * key,int valuelen,char * value,int * flag);
int (*LOCAL_MPI_Info_get)(R_MPI_Info,char *,int,char *,int *);

__asm__(
".global CCMPI_Info_get\n"
".weak MPI_Info_get\n"
".set MPI_Info_get,CCMPI_Info_get\n"
".extern in_w\n"
".extern A_MPI_Info_get\n"
".extern R_MPI_Info_get\n"
".type CCMPI_Info_get,@function\n"
".text\n"
"CCMPI_Info_get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_get\n"
"jmp *A_MPI_Info_get@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_get:\n"
"jmp *R_MPI_Info_get@GOTPCREL(%rip)\n"

);

int A_MPI_Info_get(A_MPI_Info info,char * key,int valuelen,char * value,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_get\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);






int ret_tmp= LOCAL_MPI_Info_get( info_tmp, key, valuelen, value, flag);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_get(R_MPI_Info info,char * key,int valuelen,char * value,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_get\n");
#endif
int ret_tmp= LOCAL_MPI_Info_get( info, key, valuelen, value, flag);
#ifdef DEBUG
printf("sort : R_MPI_Info_get\n");
#endif
return ret_tmp;
}
int MPI_Info_get_nkeys(A_MPI_Info info,int * nkeys);
int (*LOCAL_MPI_Info_get_nkeys)(R_MPI_Info,int *);

__asm__(
".global CCMPI_Info_get_nkeys\n"
".weak MPI_Info_get_nkeys\n"
".set MPI_Info_get_nkeys,CCMPI_Info_get_nkeys\n"
".extern in_w\n"
".extern A_MPI_Info_get_nkeys\n"
".extern R_MPI_Info_get_nkeys\n"
".type CCMPI_Info_get_nkeys,@function\n"
".text\n"
"CCMPI_Info_get_nkeys:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_get_nkeys\n"
"jmp *A_MPI_Info_get_nkeys@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_get_nkeys:\n"
"jmp *R_MPI_Info_get_nkeys@GOTPCREL(%rip)\n"

);

int A_MPI_Info_get_nkeys(A_MPI_Info info,int * nkeys)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_get_nkeys\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);

int ret_tmp= LOCAL_MPI_Info_get_nkeys( info_tmp, nkeys);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_get_nkeys\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_get_nkeys(R_MPI_Info info,int * nkeys)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_get_nkeys\n");
#endif
int ret_tmp= LOCAL_MPI_Info_get_nkeys( info, nkeys);
#ifdef DEBUG
printf("sort : R_MPI_Info_get_nkeys\n");
#endif
return ret_tmp;
}
int MPI_Info_get_nthkey(A_MPI_Info info,int n,char * key);
int (*LOCAL_MPI_Info_get_nthkey)(R_MPI_Info,int,char *);

__asm__(
".global CCMPI_Info_get_nthkey\n"
".weak MPI_Info_get_nthkey\n"
".set MPI_Info_get_nthkey,CCMPI_Info_get_nthkey\n"
".extern in_w\n"
".extern A_MPI_Info_get_nthkey\n"
".extern R_MPI_Info_get_nthkey\n"
".type CCMPI_Info_get_nthkey,@function\n"
".text\n"
"CCMPI_Info_get_nthkey:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_get_nthkey\n"
"jmp *A_MPI_Info_get_nthkey@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_get_nthkey:\n"
"jmp *R_MPI_Info_get_nthkey@GOTPCREL(%rip)\n"

);

int A_MPI_Info_get_nthkey(A_MPI_Info info,int n,char * key)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_get_nthkey\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);



int ret_tmp= LOCAL_MPI_Info_get_nthkey( info_tmp, n, key);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_get_nthkey\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_get_nthkey(R_MPI_Info info,int n,char * key)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_get_nthkey\n");
#endif
int ret_tmp= LOCAL_MPI_Info_get_nthkey( info, n, key);
#ifdef DEBUG
printf("sort : R_MPI_Info_get_nthkey\n");
#endif
return ret_tmp;
}
int MPI_Info_get_valuelen(A_MPI_Info info,char * key,int * valuelen,int * flag);
int (*LOCAL_MPI_Info_get_valuelen)(R_MPI_Info,char *,int *,int *);

__asm__(
".global CCMPI_Info_get_valuelen\n"
".weak MPI_Info_get_valuelen\n"
".set MPI_Info_get_valuelen,CCMPI_Info_get_valuelen\n"
".extern in_w\n"
".extern A_MPI_Info_get_valuelen\n"
".extern R_MPI_Info_get_valuelen\n"
".type CCMPI_Info_get_valuelen,@function\n"
".text\n"
"CCMPI_Info_get_valuelen:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_get_valuelen\n"
"jmp *A_MPI_Info_get_valuelen@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_get_valuelen:\n"
"jmp *R_MPI_Info_get_valuelen@GOTPCREL(%rip)\n"

);

int A_MPI_Info_get_valuelen(A_MPI_Info info,char * key,int * valuelen,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_get_valuelen\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);




int ret_tmp= LOCAL_MPI_Info_get_valuelen( info_tmp, key, valuelen, flag);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_get_valuelen\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_get_valuelen(R_MPI_Info info,char * key,int * valuelen,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_get_valuelen\n");
#endif
int ret_tmp= LOCAL_MPI_Info_get_valuelen( info, key, valuelen, flag);
#ifdef DEBUG
printf("sort : R_MPI_Info_get_valuelen\n");
#endif
return ret_tmp;
}
int MPI_Info_set(A_MPI_Info info,char * key,char * value);
int (*LOCAL_MPI_Info_set)(R_MPI_Info,char *,char *);

__asm__(
".global CCMPI_Info_set\n"
".weak MPI_Info_set\n"
".set MPI_Info_set,CCMPI_Info_set\n"
".extern in_w\n"
".extern A_MPI_Info_set\n"
".extern R_MPI_Info_set\n"
".type CCMPI_Info_set,@function\n"
".text\n"
"CCMPI_Info_set:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Info_set\n"
"jmp *A_MPI_Info_set@GOTPCREL(%rip)\n"
"inwrap_MPI_Info_set:\n"
"jmp *R_MPI_Info_set@GOTPCREL(%rip)\n"

);

int A_MPI_Info_set(A_MPI_Info info,char * key,char * value)
{
#ifdef DEBUG
printf("entre : A_MPI_Info_set\n");
#endif
in_w=1;

R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);




int ret_tmp= LOCAL_MPI_Info_set( info_tmp, key, value);
info_conv_r2a(&info,&info_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Info_set\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Info_set(R_MPI_Info info,char * key,char * value)
{
#ifdef DEBUG
printf("entre : R_MPI_Info_set\n");
#endif
int ret_tmp= LOCAL_MPI_Info_set( info, key, value);
#ifdef DEBUG
printf("sort : R_MPI_Info_set\n");
#endif
return ret_tmp;
}
int MPI_Request_get_status(A_MPI_Request request,int * flag,A_MPI_Status * status);
int (*LOCAL_MPI_Request_get_status)(R_MPI_Request,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Request_get_status\n"
".weak MPI_Request_get_status\n"
".set MPI_Request_get_status,CCMPI_Request_get_status\n"
".extern in_w\n"
".extern A_MPI_Request_get_status\n"
".extern R_MPI_Request_get_status\n"
".type CCMPI_Request_get_status,@function\n"
".text\n"
"CCMPI_Request_get_status:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Request_get_status\n"
"jmp *A_MPI_Request_get_status@GOTPCREL(%rip)\n"
"inwrap_MPI_Request_get_status:\n"
"jmp *R_MPI_Request_get_status@GOTPCREL(%rip)\n"

);

int A_MPI_Request_get_status(A_MPI_Request request,int * flag,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Request_get_status\n");
#endif
in_w=1;

R_MPI_Request request_tmp;
request_tab_conv_a2r(&request,&request_tmp);

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Request_get_status( request_tmp, flag, status_tmp);

status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Request_get_status\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Request_get_status(R_MPI_Request request,int * flag,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Request_get_status\n");
#endif
int ret_tmp= LOCAL_MPI_Request_get_status( request, flag, status);
#ifdef DEBUG
printf("sort : R_MPI_Request_get_status\n");
#endif
return ret_tmp;
}
int MPI_Type_create_hvector(int count,int blocklength,A_MPI_Aint stride,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_hvector)(int,int,R_MPI_Aint,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_hvector\n"
".weak MPI_Type_create_hvector\n"
".set MPI_Type_create_hvector,CCMPI_Type_create_hvector\n"
".extern in_w\n"
".extern A_MPI_Type_create_hvector\n"
".extern R_MPI_Type_create_hvector\n"
".type CCMPI_Type_create_hvector,@function\n"
".text\n"
"CCMPI_Type_create_hvector:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_hvector\n"
"jmp *A_MPI_Type_create_hvector@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_hvector:\n"
"jmp *R_MPI_Type_create_hvector@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_hvector(int count,int blocklength,A_MPI_Aint stride,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_hvector\n");
#endif
in_w=1;





R_MPI_Aint stride_tmp;
stride_tmp = (R_MPI_Aint)stride;
R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_hvector( count, blocklength, stride_tmp, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_hvector\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_hvector(int count,int blocklength,R_MPI_Aint stride,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_hvector\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_hvector( count, blocklength, stride, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_hvector\n");
#endif
return ret_tmp;
}
int MPI_Type_create_resized(A_MPI_Datatype oldtype,A_MPI_Aint lb,A_MPI_Aint extent,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_resized)(R_MPI_Datatype,R_MPI_Aint,R_MPI_Aint,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_resized\n"
".weak MPI_Type_create_resized\n"
".set MPI_Type_create_resized,CCMPI_Type_create_resized\n"
".extern in_w\n"
".extern A_MPI_Type_create_resized\n"
".extern R_MPI_Type_create_resized\n"
".type CCMPI_Type_create_resized,@function\n"
".text\n"
"CCMPI_Type_create_resized:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_resized\n"
"jmp *A_MPI_Type_create_resized@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_resized:\n"
"jmp *R_MPI_Type_create_resized@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_resized(A_MPI_Datatype oldtype,A_MPI_Aint lb,A_MPI_Aint extent,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_resized\n");
#endif
in_w=1;

R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Aint lb_tmp;
lb_tmp = (R_MPI_Aint)lb;
R_MPI_Aint extent_tmp;
extent_tmp = (R_MPI_Aint)extent;
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_resized( oldtype_tmp, lb_tmp, extent_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_resized\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_resized(R_MPI_Datatype oldtype,R_MPI_Aint lb,R_MPI_Aint extent,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_resized\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_resized( oldtype, lb, extent, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_resized\n");
#endif
return ret_tmp;
}
int MPI_Type_get_extent(A_MPI_Datatype datatype,A_MPI_Aint * lb,A_MPI_Aint * extent);
int (*LOCAL_MPI_Type_get_extent)(R_MPI_Datatype,R_MPI_Aint *,R_MPI_Aint *);

__asm__(
".global CCMPI_Type_get_extent\n"
".weak MPI_Type_get_extent\n"
".set MPI_Type_get_extent,CCMPI_Type_get_extent\n"
".extern in_w\n"
".extern A_MPI_Type_get_extent\n"
".extern R_MPI_Type_get_extent\n"
".type CCMPI_Type_get_extent,@function\n"
".text\n"
"CCMPI_Type_get_extent:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_extent\n"
"jmp *A_MPI_Type_get_extent@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_extent:\n"
"jmp *R_MPI_Type_get_extent@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_extent(A_MPI_Datatype datatype,A_MPI_Aint * lb,A_MPI_Aint * extent)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_extent\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Aint  lb_ltmp;
R_MPI_Aint * lb_tmp=&lb_ltmp;
R_MPI_Aint  extent_ltmp;
R_MPI_Aint * extent_tmp=&extent_ltmp;
int ret_tmp= LOCAL_MPI_Type_get_extent( datatype_tmp, lb_tmp, extent_tmp);
*lb= (A_MPI_Aint ) *lb_tmp;
*extent= (A_MPI_Aint ) *extent_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_extent\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_extent(R_MPI_Datatype datatype,R_MPI_Aint * lb,R_MPI_Aint * extent)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_extent\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_extent( datatype, lb, extent);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_extent\n");
#endif
return ret_tmp;
}
int MPI_Type_get_true_extent(A_MPI_Datatype datatype,A_MPI_Aint * true_lb,A_MPI_Aint * true_extent);
int (*LOCAL_MPI_Type_get_true_extent)(R_MPI_Datatype,R_MPI_Aint *,R_MPI_Aint *);

__asm__(
".global CCMPI_Type_get_true_extent\n"
".weak MPI_Type_get_true_extent\n"
".set MPI_Type_get_true_extent,CCMPI_Type_get_true_extent\n"
".extern in_w\n"
".extern A_MPI_Type_get_true_extent\n"
".extern R_MPI_Type_get_true_extent\n"
".type CCMPI_Type_get_true_extent,@function\n"
".text\n"
"CCMPI_Type_get_true_extent:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_true_extent\n"
"jmp *A_MPI_Type_get_true_extent@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_true_extent:\n"
"jmp *R_MPI_Type_get_true_extent@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_true_extent(A_MPI_Datatype datatype,A_MPI_Aint * true_lb,A_MPI_Aint * true_extent)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_true_extent\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Aint  true_lb_ltmp;
R_MPI_Aint * true_lb_tmp=&true_lb_ltmp;
R_MPI_Aint  true_extent_ltmp;
R_MPI_Aint * true_extent_tmp=&true_extent_ltmp;
int ret_tmp= LOCAL_MPI_Type_get_true_extent( datatype_tmp, true_lb_tmp, true_extent_tmp);
*true_lb= (A_MPI_Aint ) *true_lb_tmp;
*true_extent= (A_MPI_Aint ) *true_extent_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_true_extent\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_true_extent(R_MPI_Datatype datatype,R_MPI_Aint * true_lb,R_MPI_Aint * true_extent)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_true_extent\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_true_extent( datatype, true_lb, true_extent);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_true_extent\n");
#endif
return ret_tmp;
}
int MPI_Win_get_errhandler(A_MPI_Win win,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_Win_get_errhandler)(R_MPI_Win,R_MPI_Errhandler *);

__asm__(
".global CCMPI_Win_get_errhandler\n"
".weak MPI_Win_get_errhandler\n"
".set MPI_Win_get_errhandler,CCMPI_Win_get_errhandler\n"
".extern in_w\n"
".extern A_MPI_Win_get_errhandler\n"
".extern R_MPI_Win_get_errhandler\n"
".type CCMPI_Win_get_errhandler,@function\n"
".text\n"
"CCMPI_Win_get_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_get_errhandler\n"
"jmp *A_MPI_Win_get_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_get_errhandler:\n"
"jmp *R_MPI_Win_get_errhandler@GOTPCREL(%rip)\n"

);

int A_MPI_Win_get_errhandler(A_MPI_Win win,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_get_errhandler\n");
#endif
in_w=1;

R_MPI_Win win_tmp;
win_conv_a2r(&win,&win_tmp);
R_MPI_Errhandler  errhandler_ltmp;
R_MPI_Errhandler * errhandler_tmp=&errhandler_ltmp;
int ret_tmp= LOCAL_MPI_Win_get_errhandler( win_tmp, errhandler_tmp);
errhandler_ptr_conv_r2a(&errhandler,&errhandler_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_get_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_get_errhandler(R_MPI_Win win,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_get_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Win_get_errhandler( win, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Win_get_errhandler\n");
#endif
return ret_tmp;
}
int MPI_Type_create_f90_integer(int range,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_f90_integer)(int,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_f90_integer\n"
".weak MPI_Type_create_f90_integer\n"
".set MPI_Type_create_f90_integer,CCMPI_Type_create_f90_integer\n"
".extern in_w\n"
".extern A_MPI_Type_create_f90_integer\n"
".extern R_MPI_Type_create_f90_integer\n"
".type CCMPI_Type_create_f90_integer,@function\n"
".text\n"
"CCMPI_Type_create_f90_integer:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_f90_integer\n"
"jmp *A_MPI_Type_create_f90_integer@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_f90_integer:\n"
"jmp *R_MPI_Type_create_f90_integer@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_f90_integer(int range,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_f90_integer\n");
#endif
in_w=1;



R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_f90_integer( range, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_f90_integer\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_f90_integer(int range,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_f90_integer\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_f90_integer( range, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_f90_integer\n");
#endif
return ret_tmp;
}
int MPI_Type_create_f90_real(int precision,int range,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_f90_real)(int,int,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_f90_real\n"
".weak MPI_Type_create_f90_real\n"
".set MPI_Type_create_f90_real,CCMPI_Type_create_f90_real\n"
".extern in_w\n"
".extern A_MPI_Type_create_f90_real\n"
".extern R_MPI_Type_create_f90_real\n"
".type CCMPI_Type_create_f90_real,@function\n"
".text\n"
"CCMPI_Type_create_f90_real:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_f90_real\n"
"jmp *A_MPI_Type_create_f90_real@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_f90_real:\n"
"jmp *R_MPI_Type_create_f90_real@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_f90_real(int precision,int range,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_f90_real\n");
#endif
in_w=1;





R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_f90_real( precision, range, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_f90_real\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_f90_real(int precision,int range,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_f90_real\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_f90_real( precision, range, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_f90_real\n");
#endif
return ret_tmp;
}
int MPI_Type_create_f90_complex(int precision,int range,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_f90_complex)(int,int,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_f90_complex\n"
".weak MPI_Type_create_f90_complex\n"
".set MPI_Type_create_f90_complex,CCMPI_Type_create_f90_complex\n"
".extern in_w\n"
".extern A_MPI_Type_create_f90_complex\n"
".extern R_MPI_Type_create_f90_complex\n"
".type CCMPI_Type_create_f90_complex,@function\n"
".text\n"
"CCMPI_Type_create_f90_complex:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_f90_complex\n"
"jmp *A_MPI_Type_create_f90_complex@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_f90_complex:\n"
"jmp *R_MPI_Type_create_f90_complex@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_f90_complex(int precision,int range,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_f90_complex\n");
#endif
in_w=1;





R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_f90_complex( precision, range, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_f90_complex\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_f90_complex(int precision,int range,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_f90_complex\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_f90_complex( precision, range, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_f90_complex\n");
#endif
return ret_tmp;
}
int MPI_Reduce_local(void * inbuf,void * inoutbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op);
int (*LOCAL_MPI_Reduce_local)(void *,void *,int,R_MPI_Datatype,R_MPI_Op);

__asm__(
".global CCMPI_Reduce_local\n"
".weak MPI_Reduce_local\n"
".set MPI_Reduce_local,CCMPI_Reduce_local\n"
".extern in_w\n"
".extern A_MPI_Reduce_local\n"
".extern R_MPI_Reduce_local\n"
".type CCMPI_Reduce_local,@function\n"
".text\n"
"CCMPI_Reduce_local:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Reduce_local\n"
"jmp *A_MPI_Reduce_local@GOTPCREL(%rip)\n"
"inwrap_MPI_Reduce_local:\n"
"jmp *R_MPI_Reduce_local@GOTPCREL(%rip)\n"

);

int A_MPI_Reduce_local(void * inbuf,void * inoutbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op)
{
#ifdef DEBUG
printf("entre : A_MPI_Reduce_local\n");
#endif
in_w=1;

void * inbuf_tmp;
buffer_conv_a2r(&inbuf,&inbuf_tmp);
void * inoutbuf_tmp;
buffer_conv_a2r(&inoutbuf,&inoutbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
int ret_tmp= LOCAL_MPI_Reduce_local( inbuf_tmp, inoutbuf_tmp, count, datatype_tmp, op_tmp);
buffer_conv_r2a(&inoutbuf,&inoutbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Reduce_local\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Reduce_local(void * inbuf,void * inoutbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op)
{
#ifdef DEBUG
printf("entre : R_MPI_Reduce_local\n");
#endif
int ret_tmp= LOCAL_MPI_Reduce_local( inbuf, inoutbuf, count, datatype, op);
#ifdef DEBUG
printf("sort : R_MPI_Reduce_local\n");
#endif
return ret_tmp;
}
int MPI_Op_commutative(A_MPI_Op op,int * commute);
int (*LOCAL_MPI_Op_commutative)(R_MPI_Op,int *);

__asm__(
".global CCMPI_Op_commutative\n"
".weak MPI_Op_commutative\n"
".set MPI_Op_commutative,CCMPI_Op_commutative\n"
".extern in_w\n"
".extern A_MPI_Op_commutative\n"
".extern R_MPI_Op_commutative\n"
".type CCMPI_Op_commutative,@function\n"
".text\n"
"CCMPI_Op_commutative:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Op_commutative\n"
"jmp *A_MPI_Op_commutative@GOTPCREL(%rip)\n"
"inwrap_MPI_Op_commutative:\n"
"jmp *R_MPI_Op_commutative@GOTPCREL(%rip)\n"

);

int A_MPI_Op_commutative(A_MPI_Op op,int * commute)
{
#ifdef DEBUG
printf("entre : A_MPI_Op_commutative\n");
#endif
in_w=1;

R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);

int ret_tmp= LOCAL_MPI_Op_commutative( op_tmp, commute);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Op_commutative\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Op_commutative(R_MPI_Op op,int * commute)
{
#ifdef DEBUG
printf("entre : R_MPI_Op_commutative\n");
#endif
int ret_tmp= LOCAL_MPI_Op_commutative( op, commute);
#ifdef DEBUG
printf("sort : R_MPI_Op_commutative\n");
#endif
return ret_tmp;
}
int MPI_Dist_graph_neighbors_count(A_MPI_Comm comm,int * indegree,int * outdegree,int * weighted);
int (*LOCAL_MPI_Dist_graph_neighbors_count)(R_MPI_Comm,int *,int *,int *);

__asm__(
".global CCMPI_Dist_graph_neighbors_count\n"
".weak MPI_Dist_graph_neighbors_count\n"
".set MPI_Dist_graph_neighbors_count,CCMPI_Dist_graph_neighbors_count\n"
".extern in_w\n"
".extern A_MPI_Dist_graph_neighbors_count\n"
".extern R_MPI_Dist_graph_neighbors_count\n"
".type CCMPI_Dist_graph_neighbors_count,@function\n"
".text\n"
"CCMPI_Dist_graph_neighbors_count:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Dist_graph_neighbors_count\n"
"jmp *A_MPI_Dist_graph_neighbors_count@GOTPCREL(%rip)\n"
"inwrap_MPI_Dist_graph_neighbors_count:\n"
"jmp *R_MPI_Dist_graph_neighbors_count@GOTPCREL(%rip)\n"

);

int A_MPI_Dist_graph_neighbors_count(A_MPI_Comm comm,int * indegree,int * outdegree,int * weighted)
{
#ifdef DEBUG
printf("entre : A_MPI_Dist_graph_neighbors_count\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);



int ret_tmp= LOCAL_MPI_Dist_graph_neighbors_count( comm_tmp, indegree, outdegree, weighted);



in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Dist_graph_neighbors_count\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Dist_graph_neighbors_count(R_MPI_Comm comm,int * indegree,int * outdegree,int * weighted)
{
#ifdef DEBUG
printf("entre : R_MPI_Dist_graph_neighbors_count\n");
#endif
int ret_tmp= LOCAL_MPI_Dist_graph_neighbors_count( comm, indegree, outdegree, weighted);
#ifdef DEBUG
printf("sort : R_MPI_Dist_graph_neighbors_count\n");
#endif
return ret_tmp;
}
int MPI_Improbe(int source,int tag,A_MPI_Comm comm,int * flag,A_MPI_Message * message,A_MPI_Status * status);
int (*LOCAL_MPI_Improbe)(int,int,R_MPI_Comm,int *,R_MPI_Message *,R_MPI_Status *);

__asm__(
".global CCMPI_Improbe\n"
".weak MPI_Improbe\n"
".set MPI_Improbe,CCMPI_Improbe\n"
".extern in_w\n"
".extern A_MPI_Improbe\n"
".extern R_MPI_Improbe\n"
".type CCMPI_Improbe,@function\n"
".text\n"
"CCMPI_Improbe:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Improbe\n"
"jmp *A_MPI_Improbe@GOTPCREL(%rip)\n"
"inwrap_MPI_Improbe:\n"
"jmp *R_MPI_Improbe@GOTPCREL(%rip)\n"

);

int A_MPI_Improbe(int source,int tag,A_MPI_Comm comm,int * flag,A_MPI_Message * message,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Improbe\n");
#endif
in_w=1;

int source_tmp;
source_conv_a2r(&source,&source_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);

R_MPI_Message  message_ltmp;
R_MPI_Message * message_tmp=&message_ltmp;
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Improbe( source_tmp, tag_tmp, comm_tmp, flag, message_tmp, status_tmp);

message_conv_r2a(message,message_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Improbe\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Improbe(int source,int tag,R_MPI_Comm comm,int * flag,R_MPI_Message * message,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Improbe\n");
#endif
int ret_tmp= LOCAL_MPI_Improbe( source, tag, comm, flag, message, status);
#ifdef DEBUG
printf("sort : R_MPI_Improbe\n");
#endif
return ret_tmp;
}
int MPI_Imrecv(void * buf,int count,A_MPI_Datatype datatype,A_MPI_Message * message,A_MPI_Request * request);
int (*LOCAL_MPI_Imrecv)(void *,int,R_MPI_Datatype,R_MPI_Message *,R_MPI_Request *);

__asm__(
".global CCMPI_Imrecv\n"
".weak MPI_Imrecv\n"
".set MPI_Imrecv,CCMPI_Imrecv\n"
".extern in_w\n"
".extern A_MPI_Imrecv\n"
".extern R_MPI_Imrecv\n"
".type CCMPI_Imrecv,@function\n"
".text\n"
"CCMPI_Imrecv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Imrecv\n"
"jmp *A_MPI_Imrecv@GOTPCREL(%rip)\n"
"inwrap_MPI_Imrecv:\n"
"jmp *R_MPI_Imrecv@GOTPCREL(%rip)\n"

);

int A_MPI_Imrecv(void * buf,int count,A_MPI_Datatype datatype,A_MPI_Message * message,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Imrecv\n");
#endif
in_w=1;

void * buf_tmp;


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Message  message_ltmp;
R_MPI_Message * message_tmp=&message_ltmp;
message_conv_a2r(message,message_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Imrecv( buf_tmp, count, datatype_tmp, message_tmp, request_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
message_conv_r2a(message,message_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Imrecv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Imrecv(void * buf,int count,R_MPI_Datatype datatype,R_MPI_Message * message,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Imrecv\n");
#endif
int ret_tmp= LOCAL_MPI_Imrecv( buf, count, datatype, message, request);
#ifdef DEBUG
printf("sort : R_MPI_Imrecv\n");
#endif
return ret_tmp;
}
int MPI_Mprobe(int source,int tag,A_MPI_Comm comm,A_MPI_Message * message,A_MPI_Status * status);
int (*LOCAL_MPI_Mprobe)(int,int,R_MPI_Comm,R_MPI_Message *,R_MPI_Status *);

__asm__(
".global CCMPI_Mprobe\n"
".weak MPI_Mprobe\n"
".set MPI_Mprobe,CCMPI_Mprobe\n"
".extern in_w\n"
".extern A_MPI_Mprobe\n"
".extern R_MPI_Mprobe\n"
".type CCMPI_Mprobe,@function\n"
".text\n"
"CCMPI_Mprobe:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Mprobe\n"
"jmp *A_MPI_Mprobe@GOTPCREL(%rip)\n"
"inwrap_MPI_Mprobe:\n"
"jmp *R_MPI_Mprobe@GOTPCREL(%rip)\n"

);

int A_MPI_Mprobe(int source,int tag,A_MPI_Comm comm,A_MPI_Message * message,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Mprobe\n");
#endif
in_w=1;

int source_tmp;
source_conv_a2r(&source,&source_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Message  message_ltmp;
R_MPI_Message * message_tmp=&message_ltmp;
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Mprobe( source_tmp, tag_tmp, comm_tmp, message_tmp, status_tmp);
message_conv_r2a(message,message_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Mprobe\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Mprobe(int source,int tag,R_MPI_Comm comm,R_MPI_Message * message,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Mprobe\n");
#endif
int ret_tmp= LOCAL_MPI_Mprobe( source, tag, comm, message, status);
#ifdef DEBUG
printf("sort : R_MPI_Mprobe\n");
#endif
return ret_tmp;
}
int MPI_Mrecv(void * buf,int count,A_MPI_Datatype datatype,A_MPI_Message * message,A_MPI_Status * status);
int (*LOCAL_MPI_Mrecv)(void *,int,R_MPI_Datatype,R_MPI_Message *,R_MPI_Status *);

__asm__(
".global CCMPI_Mrecv\n"
".weak MPI_Mrecv\n"
".set MPI_Mrecv,CCMPI_Mrecv\n"
".extern in_w\n"
".extern A_MPI_Mrecv\n"
".extern R_MPI_Mrecv\n"
".type CCMPI_Mrecv,@function\n"
".text\n"
"CCMPI_Mrecv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Mrecv\n"
"jmp *A_MPI_Mrecv@GOTPCREL(%rip)\n"
"inwrap_MPI_Mrecv:\n"
"jmp *R_MPI_Mrecv@GOTPCREL(%rip)\n"

);

int A_MPI_Mrecv(void * buf,int count,A_MPI_Datatype datatype,A_MPI_Message * message,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Mrecv\n");
#endif
in_w=1;

void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Message  message_ltmp;
R_MPI_Message * message_tmp=&message_ltmp;
message_conv_a2r(message,message_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Mrecv( buf_tmp, count, datatype_tmp, message_tmp, status_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
message_conv_r2a(message,message_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Mrecv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Mrecv(void * buf,int count,R_MPI_Datatype datatype,R_MPI_Message * message,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Mrecv\n");
#endif
int ret_tmp= LOCAL_MPI_Mrecv( buf, count, datatype, message, status);
#ifdef DEBUG
printf("sort : R_MPI_Mrecv\n");
#endif
return ret_tmp;
}
int MPI_Comm_idup(A_MPI_Comm comm,A_MPI_Comm * newcomm,A_MPI_Request * request);
int (*LOCAL_MPI_Comm_idup)(R_MPI_Comm,R_MPI_Comm *,R_MPI_Request *);

__asm__(
".global CCMPI_Comm_idup\n"
".weak MPI_Comm_idup\n"
".set MPI_Comm_idup,CCMPI_Comm_idup\n"
".extern in_w\n"
".extern A_MPI_Comm_idup\n"
".extern R_MPI_Comm_idup\n"
".type CCMPI_Comm_idup,@function\n"
".text\n"
"CCMPI_Comm_idup:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_idup\n"
"jmp *A_MPI_Comm_idup@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_idup:\n"
"jmp *R_MPI_Comm_idup@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_idup(A_MPI_Comm comm,A_MPI_Comm * newcomm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_idup\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Comm_idup( comm_tmp, newcomm_tmp, request_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_idup\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_idup(R_MPI_Comm comm,R_MPI_Comm * newcomm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_idup\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_idup( comm, newcomm, request);
#ifdef DEBUG
printf("sort : R_MPI_Comm_idup\n");
#endif
return ret_tmp;
}
int MPI_Ibarrier(A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ibarrier)(R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ibarrier\n"
".weak MPI_Ibarrier\n"
".set MPI_Ibarrier,CCMPI_Ibarrier\n"
".extern in_w\n"
".extern A_MPI_Ibarrier\n"
".extern R_MPI_Ibarrier\n"
".type CCMPI_Ibarrier,@function\n"
".text\n"
"CCMPI_Ibarrier:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ibarrier\n"
"jmp *A_MPI_Ibarrier@GOTPCREL(%rip)\n"
"inwrap_MPI_Ibarrier:\n"
"jmp *R_MPI_Ibarrier@GOTPCREL(%rip)\n"

);

int A_MPI_Ibarrier(A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ibarrier\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ibarrier( comm_tmp, request_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ibarrier\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ibarrier(R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ibarrier\n");
#endif
int ret_tmp= LOCAL_MPI_Ibarrier( comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ibarrier\n");
#endif
return ret_tmp;
}
int MPI_Ibcast(void * buffer,int count,A_MPI_Datatype datatype,int root,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ibcast)(void *,int,R_MPI_Datatype,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ibcast\n"
".weak MPI_Ibcast\n"
".set MPI_Ibcast,CCMPI_Ibcast\n"
".extern in_w\n"
".extern A_MPI_Ibcast\n"
".extern R_MPI_Ibcast\n"
".type CCMPI_Ibcast,@function\n"
".text\n"
"CCMPI_Ibcast:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ibcast\n"
"jmp *A_MPI_Ibcast@GOTPCREL(%rip)\n"
"inwrap_MPI_Ibcast:\n"
"jmp *R_MPI_Ibcast@GOTPCREL(%rip)\n"

);

int A_MPI_Ibcast(void * buffer,int count,A_MPI_Datatype datatype,int root,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ibcast\n");
#endif
in_w=1;

void * buffer_tmp;
buffer_conv_a2r(&buffer,&buffer_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ibcast( buffer_tmp, count, datatype_tmp, root, comm_tmp, request_tmp);
buffer_conv_r2a(&buffer,&buffer_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ibcast\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ibcast(void * buffer,int count,R_MPI_Datatype datatype,int root,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ibcast\n");
#endif
int ret_tmp= LOCAL_MPI_Ibcast( buffer, count, datatype, root, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ibcast\n");
#endif
return ret_tmp;
}
int MPI_Igather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Igather)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Igather\n"
".weak MPI_Igather\n"
".set MPI_Igather,CCMPI_Igather\n"
".extern in_w\n"
".extern A_MPI_Igather\n"
".extern R_MPI_Igather\n"
".type CCMPI_Igather,@function\n"
".text\n"
"CCMPI_Igather:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Igather\n"
"jmp *A_MPI_Igather@GOTPCREL(%rip)\n"
"inwrap_MPI_Igather:\n"
"jmp *R_MPI_Igather@GOTPCREL(%rip)\n"

);

int A_MPI_Igather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Igather\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Igather( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, root, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Igather\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Igather(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,int root,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Igather\n");
#endif
int ret_tmp= LOCAL_MPI_Igather( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Igather\n");
#endif
return ret_tmp;
}
int MPI_Iscatter(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Iscatter)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Iscatter\n"
".weak MPI_Iscatter\n"
".set MPI_Iscatter,CCMPI_Iscatter\n"
".extern in_w\n"
".extern A_MPI_Iscatter\n"
".extern R_MPI_Iscatter\n"
".type CCMPI_Iscatter,@function\n"
".text\n"
"CCMPI_Iscatter:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iscatter\n"
"jmp *A_MPI_Iscatter@GOTPCREL(%rip)\n"
"inwrap_MPI_Iscatter:\n"
"jmp *R_MPI_Iscatter@GOTPCREL(%rip)\n"

);

int A_MPI_Iscatter(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Iscatter\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Iscatter( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, root, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iscatter\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iscatter(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,int root,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Iscatter\n");
#endif
int ret_tmp= LOCAL_MPI_Iscatter( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, root, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Iscatter\n");
#endif
return ret_tmp;
}
int MPI_Iallgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Iallgather)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Iallgather\n"
".weak MPI_Iallgather\n"
".set MPI_Iallgather,CCMPI_Iallgather\n"
".extern in_w\n"
".extern A_MPI_Iallgather\n"
".extern R_MPI_Iallgather\n"
".type CCMPI_Iallgather,@function\n"
".text\n"
"CCMPI_Iallgather:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iallgather\n"
"jmp *A_MPI_Iallgather@GOTPCREL(%rip)\n"
"inwrap_MPI_Iallgather:\n"
"jmp *R_MPI_Iallgather@GOTPCREL(%rip)\n"

);

int A_MPI_Iallgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Iallgather\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Iallgather( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iallgather\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iallgather(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Iallgather\n");
#endif
int ret_tmp= LOCAL_MPI_Iallgather( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Iallgather\n");
#endif
return ret_tmp;
}
int MPI_Ialltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ialltoall)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ialltoall\n"
".weak MPI_Ialltoall\n"
".set MPI_Ialltoall,CCMPI_Ialltoall\n"
".extern in_w\n"
".extern A_MPI_Ialltoall\n"
".extern R_MPI_Ialltoall\n"
".type CCMPI_Ialltoall,@function\n"
".text\n"
"CCMPI_Ialltoall:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ialltoall\n"
"jmp *A_MPI_Ialltoall@GOTPCREL(%rip)\n"
"inwrap_MPI_Ialltoall:\n"
"jmp *R_MPI_Ialltoall@GOTPCREL(%rip)\n"

);

int A_MPI_Ialltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ialltoall\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ialltoall( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ialltoall\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ialltoall(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ialltoall\n");
#endif
int ret_tmp= LOCAL_MPI_Ialltoall( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ialltoall\n");
#endif
return ret_tmp;
}
int MPI_Ireduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,int root,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ireduce)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ireduce\n"
".weak MPI_Ireduce\n"
".set MPI_Ireduce,CCMPI_Ireduce\n"
".extern in_w\n"
".extern A_MPI_Ireduce\n"
".extern R_MPI_Ireduce\n"
".type CCMPI_Ireduce,@function\n"
".text\n"
"CCMPI_Ireduce:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ireduce\n"
"jmp *A_MPI_Ireduce@GOTPCREL(%rip)\n"
"inwrap_MPI_Ireduce:\n"
"jmp *R_MPI_Ireduce@GOTPCREL(%rip)\n"

);

int A_MPI_Ireduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,int root,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ireduce\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ireduce( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, root, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ireduce\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ireduce(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,int root,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ireduce\n");
#endif
int ret_tmp= LOCAL_MPI_Ireduce( sendbuf, recvbuf, count, datatype, op, root, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ireduce\n");
#endif
return ret_tmp;
}
int MPI_Iallreduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Iallreduce)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Iallreduce\n"
".weak MPI_Iallreduce\n"
".set MPI_Iallreduce,CCMPI_Iallreduce\n"
".extern in_w\n"
".extern A_MPI_Iallreduce\n"
".extern R_MPI_Iallreduce\n"
".type CCMPI_Iallreduce,@function\n"
".text\n"
"CCMPI_Iallreduce:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iallreduce\n"
"jmp *A_MPI_Iallreduce@GOTPCREL(%rip)\n"
"inwrap_MPI_Iallreduce:\n"
"jmp *R_MPI_Iallreduce@GOTPCREL(%rip)\n"

);

int A_MPI_Iallreduce(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Iallreduce\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Iallreduce( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iallreduce\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iallreduce(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Iallreduce\n");
#endif
int ret_tmp= LOCAL_MPI_Iallreduce( sendbuf, recvbuf, count, datatype, op, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Iallreduce\n");
#endif
return ret_tmp;
}
int MPI_Ireduce_scatter_block(void * sendbuf,void * recvbuf,int recvcount,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ireduce_scatter_block)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ireduce_scatter_block\n"
".weak MPI_Ireduce_scatter_block\n"
".set MPI_Ireduce_scatter_block,CCMPI_Ireduce_scatter_block\n"
".extern in_w\n"
".extern A_MPI_Ireduce_scatter_block\n"
".extern R_MPI_Ireduce_scatter_block\n"
".type CCMPI_Ireduce_scatter_block,@function\n"
".text\n"
"CCMPI_Ireduce_scatter_block:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ireduce_scatter_block\n"
"jmp *A_MPI_Ireduce_scatter_block@GOTPCREL(%rip)\n"
"inwrap_MPI_Ireduce_scatter_block:\n"
"jmp *R_MPI_Ireduce_scatter_block@GOTPCREL(%rip)\n"

);

int A_MPI_Ireduce_scatter_block(void * sendbuf,void * recvbuf,int recvcount,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ireduce_scatter_block\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ireduce_scatter_block( sendbuf_tmp, recvbuf_tmp, recvcount, datatype_tmp, op_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ireduce_scatter_block\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ireduce_scatter_block(void * sendbuf,void * recvbuf,int recvcount,R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ireduce_scatter_block\n");
#endif
int ret_tmp= LOCAL_MPI_Ireduce_scatter_block( sendbuf, recvbuf, recvcount, datatype, op, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ireduce_scatter_block\n");
#endif
return ret_tmp;
}
int MPI_Iscan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Iscan)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Iscan\n"
".weak MPI_Iscan\n"
".set MPI_Iscan,CCMPI_Iscan\n"
".extern in_w\n"
".extern A_MPI_Iscan\n"
".extern R_MPI_Iscan\n"
".type CCMPI_Iscan,@function\n"
".text\n"
"CCMPI_Iscan:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iscan\n"
"jmp *A_MPI_Iscan@GOTPCREL(%rip)\n"
"inwrap_MPI_Iscan:\n"
"jmp *R_MPI_Iscan@GOTPCREL(%rip)\n"

);

int A_MPI_Iscan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Iscan\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Iscan( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iscan\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iscan(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Iscan\n");
#endif
int ret_tmp= LOCAL_MPI_Iscan( sendbuf, recvbuf, count, datatype, op, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Iscan\n");
#endif
return ret_tmp;
}
int MPI_Iexscan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Iexscan)(void *,void *,int,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Iexscan\n"
".weak MPI_Iexscan\n"
".set MPI_Iexscan,CCMPI_Iexscan\n"
".extern in_w\n"
".extern A_MPI_Iexscan\n"
".extern R_MPI_Iexscan\n"
".type CCMPI_Iexscan,@function\n"
".text\n"
"CCMPI_Iexscan:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iexscan\n"
"jmp *A_MPI_Iexscan@GOTPCREL(%rip)\n"
"inwrap_MPI_Iexscan:\n"
"jmp *R_MPI_Iexscan@GOTPCREL(%rip)\n"

);

int A_MPI_Iexscan(void * sendbuf,void * recvbuf,int count,A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Iexscan\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Iexscan( sendbuf_tmp, recvbuf_tmp, count, datatype_tmp, op_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iexscan\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iexscan(void * sendbuf,void * recvbuf,int count,R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Iexscan\n");
#endif
int ret_tmp= LOCAL_MPI_Iexscan( sendbuf, recvbuf, count, datatype, op, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Iexscan\n");
#endif
return ret_tmp;
}
int MPI_Ineighbor_allgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ineighbor_allgather)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ineighbor_allgather\n"
".weak MPI_Ineighbor_allgather\n"
".set MPI_Ineighbor_allgather,CCMPI_Ineighbor_allgather\n"
".extern in_w\n"
".extern A_MPI_Ineighbor_allgather\n"
".extern R_MPI_Ineighbor_allgather\n"
".type CCMPI_Ineighbor_allgather,@function\n"
".text\n"
"CCMPI_Ineighbor_allgather:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ineighbor_allgather\n"
"jmp *A_MPI_Ineighbor_allgather@GOTPCREL(%rip)\n"
"inwrap_MPI_Ineighbor_allgather:\n"
"jmp *R_MPI_Ineighbor_allgather@GOTPCREL(%rip)\n"

);

int A_MPI_Ineighbor_allgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ineighbor_allgather\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ineighbor_allgather( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ineighbor_allgather\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ineighbor_allgather(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ineighbor_allgather\n");
#endif
int ret_tmp= LOCAL_MPI_Ineighbor_allgather( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ineighbor_allgather\n");
#endif
return ret_tmp;
}
int MPI_Ineighbor_alltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ineighbor_alltoall)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ineighbor_alltoall\n"
".weak MPI_Ineighbor_alltoall\n"
".set MPI_Ineighbor_alltoall,CCMPI_Ineighbor_alltoall\n"
".extern in_w\n"
".extern A_MPI_Ineighbor_alltoall\n"
".extern R_MPI_Ineighbor_alltoall\n"
".type CCMPI_Ineighbor_alltoall,@function\n"
".text\n"
"CCMPI_Ineighbor_alltoall:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ineighbor_alltoall\n"
"jmp *A_MPI_Ineighbor_alltoall@GOTPCREL(%rip)\n"
"inwrap_MPI_Ineighbor_alltoall:\n"
"jmp *R_MPI_Ineighbor_alltoall@GOTPCREL(%rip)\n"

);

int A_MPI_Ineighbor_alltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ineighbor_alltoall\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ineighbor_alltoall( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ineighbor_alltoall\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ineighbor_alltoall(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ineighbor_alltoall\n");
#endif
int ret_tmp= LOCAL_MPI_Ineighbor_alltoall( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ineighbor_alltoall\n");
#endif
return ret_tmp;
}
int MPI_Neighbor_allgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Neighbor_allgather)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Neighbor_allgather\n"
".weak MPI_Neighbor_allgather\n"
".set MPI_Neighbor_allgather,CCMPI_Neighbor_allgather\n"
".extern in_w\n"
".extern A_MPI_Neighbor_allgather\n"
".extern R_MPI_Neighbor_allgather\n"
".type CCMPI_Neighbor_allgather,@function\n"
".text\n"
"CCMPI_Neighbor_allgather:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Neighbor_allgather\n"
"jmp *A_MPI_Neighbor_allgather@GOTPCREL(%rip)\n"
"inwrap_MPI_Neighbor_allgather:\n"
"jmp *R_MPI_Neighbor_allgather@GOTPCREL(%rip)\n"

);

int A_MPI_Neighbor_allgather(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Neighbor_allgather\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Neighbor_allgather( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Neighbor_allgather\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Neighbor_allgather(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Neighbor_allgather\n");
#endif
int ret_tmp= LOCAL_MPI_Neighbor_allgather( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Neighbor_allgather\n");
#endif
return ret_tmp;
}
int MPI_Neighbor_alltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Neighbor_alltoall)(void *,int,R_MPI_Datatype,void *,int,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Neighbor_alltoall\n"
".weak MPI_Neighbor_alltoall\n"
".set MPI_Neighbor_alltoall,CCMPI_Neighbor_alltoall\n"
".extern in_w\n"
".extern A_MPI_Neighbor_alltoall\n"
".extern R_MPI_Neighbor_alltoall\n"
".type CCMPI_Neighbor_alltoall,@function\n"
".text\n"
"CCMPI_Neighbor_alltoall:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Neighbor_alltoall\n"
"jmp *A_MPI_Neighbor_alltoall@GOTPCREL(%rip)\n"
"inwrap_MPI_Neighbor_alltoall:\n"
"jmp *R_MPI_Neighbor_alltoall@GOTPCREL(%rip)\n"

);

int A_MPI_Neighbor_alltoall(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Neighbor_alltoall\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Neighbor_alltoall( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Neighbor_alltoall\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Neighbor_alltoall(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Neighbor_alltoall\n");
#endif
int ret_tmp= LOCAL_MPI_Neighbor_alltoall( sendbuf, sendcount, sendtype, recvbuf, recvcount, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Neighbor_alltoall\n");
#endif
return ret_tmp;
}
int MPI_Comm_split_type(A_MPI_Comm comm,int split_type,int key,A_MPI_Info info,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_split_type)(R_MPI_Comm,int,int,R_MPI_Info,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_split_type\n"
".weak MPI_Comm_split_type\n"
".set MPI_Comm_split_type,CCMPI_Comm_split_type\n"
".extern in_w\n"
".extern A_MPI_Comm_split_type\n"
".extern R_MPI_Comm_split_type\n"
".type CCMPI_Comm_split_type,@function\n"
".text\n"
"CCMPI_Comm_split_type:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_split_type\n"
"jmp *A_MPI_Comm_split_type@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_split_type:\n"
"jmp *R_MPI_Comm_split_type@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_split_type(A_MPI_Comm comm,int split_type,int key,A_MPI_Info info,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_split_type\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int split_type_tmp;
splittype_conv_a2r(&split_type,&split_type_tmp);


R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_split_type( comm_tmp, split_type_tmp, key, info_tmp, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_split_type\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_split_type(R_MPI_Comm comm,int split_type,int key,R_MPI_Info info,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_split_type\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_split_type( comm, split_type, key, info, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_split_type\n");
#endif
return ret_tmp;
}
int MPI_Get_elements_x(A_MPI_Status * status,A_MPI_Datatype datatype,A_MPI_Count * count);
int (*LOCAL_MPI_Get_elements_x)(R_MPI_Status *,R_MPI_Datatype,R_MPI_Count *);

__asm__(
".global CCMPI_Get_elements_x\n"
".weak MPI_Get_elements_x\n"
".set MPI_Get_elements_x,CCMPI_Get_elements_x\n"
".extern in_w\n"
".extern A_MPI_Get_elements_x\n"
".extern R_MPI_Get_elements_x\n"
".type CCMPI_Get_elements_x,@function\n"
".text\n"
"CCMPI_Get_elements_x:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Get_elements_x\n"
"jmp *A_MPI_Get_elements_x@GOTPCREL(%rip)\n"
"inwrap_MPI_Get_elements_x:\n"
"jmp *R_MPI_Get_elements_x@GOTPCREL(%rip)\n"

);

int A_MPI_Get_elements_x(A_MPI_Status * status,A_MPI_Datatype datatype,A_MPI_Count * count)
{
#ifdef DEBUG
printf("entre : A_MPI_Get_elements_x\n");
#endif
in_w=1;

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
status_prt_conv_a2r(&status,&status_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);

int ret_tmp= LOCAL_MPI_Get_elements_x( status_tmp, datatype_tmp, count);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Get_elements_x\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Get_elements_x(R_MPI_Status * status,R_MPI_Datatype datatype,R_MPI_Count * count)
{
#ifdef DEBUG
printf("entre : R_MPI_Get_elements_x\n");
#endif
int ret_tmp= LOCAL_MPI_Get_elements_x( status, datatype, count);
#ifdef DEBUG
printf("sort : R_MPI_Get_elements_x\n");
#endif
return ret_tmp;
}
int MPI_Status_set_elements_x(A_MPI_Status * status,A_MPI_Datatype datatype,A_MPI_Count count);
int (*LOCAL_MPI_Status_set_elements_x)(R_MPI_Status *,R_MPI_Datatype,R_MPI_Count);

__asm__(
".global CCMPI_Status_set_elements_x\n"
".weak MPI_Status_set_elements_x\n"
".set MPI_Status_set_elements_x,CCMPI_Status_set_elements_x\n"
".extern in_w\n"
".extern A_MPI_Status_set_elements_x\n"
".extern R_MPI_Status_set_elements_x\n"
".type CCMPI_Status_set_elements_x,@function\n"
".text\n"
"CCMPI_Status_set_elements_x:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Status_set_elements_x\n"
"jmp *A_MPI_Status_set_elements_x@GOTPCREL(%rip)\n"
"inwrap_MPI_Status_set_elements_x:\n"
"jmp *R_MPI_Status_set_elements_x@GOTPCREL(%rip)\n"

);

int A_MPI_Status_set_elements_x(A_MPI_Status * status,A_MPI_Datatype datatype,A_MPI_Count count)
{
#ifdef DEBUG
printf("entre : A_MPI_Status_set_elements_x\n");
#endif
in_w=1;

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
status_prt_conv_a2r(&status,&status_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


int ret_tmp= LOCAL_MPI_Status_set_elements_x( status_tmp, datatype_tmp, count);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Status_set_elements_x\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Status_set_elements_x(R_MPI_Status * status,R_MPI_Datatype datatype,R_MPI_Count count)
{
#ifdef DEBUG
printf("entre : R_MPI_Status_set_elements_x\n");
#endif
int ret_tmp= LOCAL_MPI_Status_set_elements_x( status, datatype, count);
#ifdef DEBUG
printf("sort : R_MPI_Status_set_elements_x\n");
#endif
return ret_tmp;
}
int MPI_Type_get_extent_x(A_MPI_Datatype datatype,A_MPI_Count * lb,A_MPI_Count * extent);
int (*LOCAL_MPI_Type_get_extent_x)(R_MPI_Datatype,R_MPI_Count *,R_MPI_Count *);

__asm__(
".global CCMPI_Type_get_extent_x\n"
".weak MPI_Type_get_extent_x\n"
".set MPI_Type_get_extent_x,CCMPI_Type_get_extent_x\n"
".extern in_w\n"
".extern A_MPI_Type_get_extent_x\n"
".extern R_MPI_Type_get_extent_x\n"
".type CCMPI_Type_get_extent_x,@function\n"
".text\n"
"CCMPI_Type_get_extent_x:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_extent_x\n"
"jmp *A_MPI_Type_get_extent_x@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_extent_x:\n"
"jmp *R_MPI_Type_get_extent_x@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_extent_x(A_MPI_Datatype datatype,A_MPI_Count * lb,A_MPI_Count * extent)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_extent_x\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


int ret_tmp= LOCAL_MPI_Type_get_extent_x( datatype_tmp, lb, extent);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_extent_x\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_extent_x(R_MPI_Datatype datatype,R_MPI_Count * lb,R_MPI_Count * extent)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_extent_x\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_extent_x( datatype, lb, extent);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_extent_x\n");
#endif
return ret_tmp;
}
int MPI_Type_get_true_extent_x(A_MPI_Datatype datatype,A_MPI_Count * lb,A_MPI_Count * extent);
int (*LOCAL_MPI_Type_get_true_extent_x)(R_MPI_Datatype,R_MPI_Count *,R_MPI_Count *);

__asm__(
".global CCMPI_Type_get_true_extent_x\n"
".weak MPI_Type_get_true_extent_x\n"
".set MPI_Type_get_true_extent_x,CCMPI_Type_get_true_extent_x\n"
".extern in_w\n"
".extern A_MPI_Type_get_true_extent_x\n"
".extern R_MPI_Type_get_true_extent_x\n"
".type CCMPI_Type_get_true_extent_x,@function\n"
".text\n"
"CCMPI_Type_get_true_extent_x:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_true_extent_x\n"
"jmp *A_MPI_Type_get_true_extent_x@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_true_extent_x:\n"
"jmp *R_MPI_Type_get_true_extent_x@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_true_extent_x(A_MPI_Datatype datatype,A_MPI_Count * lb,A_MPI_Count * extent)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_true_extent_x\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);


int ret_tmp= LOCAL_MPI_Type_get_true_extent_x( datatype_tmp, lb, extent);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_true_extent_x\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_true_extent_x(R_MPI_Datatype datatype,R_MPI_Count * lb,R_MPI_Count * extent)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_true_extent_x\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_true_extent_x( datatype, lb, extent);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_true_extent_x\n");
#endif
return ret_tmp;
}
int MPI_Type_size_x(A_MPI_Datatype datatype,A_MPI_Count * size);
int (*LOCAL_MPI_Type_size_x)(R_MPI_Datatype,R_MPI_Count *);

__asm__(
".global CCMPI_Type_size_x\n"
".weak MPI_Type_size_x\n"
".set MPI_Type_size_x,CCMPI_Type_size_x\n"
".extern in_w\n"
".extern A_MPI_Type_size_x\n"
".extern R_MPI_Type_size_x\n"
".type CCMPI_Type_size_x,@function\n"
".text\n"
"CCMPI_Type_size_x:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_size_x\n"
"jmp *A_MPI_Type_size_x@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_size_x:\n"
"jmp *R_MPI_Type_size_x@GOTPCREL(%rip)\n"

);

int A_MPI_Type_size_x(A_MPI_Datatype datatype,A_MPI_Count * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_size_x\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);

int ret_tmp= LOCAL_MPI_Type_size_x( datatype_tmp, size);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_size_x\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_size_x(R_MPI_Datatype datatype,R_MPI_Count * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_size_x\n");
#endif
int ret_tmp= LOCAL_MPI_Type_size_x( datatype, size);
#ifdef DEBUG
printf("sort : R_MPI_Type_size_x\n");
#endif
return ret_tmp;
}
int MPI_Comm_create_group(A_MPI_Comm comm,A_MPI_Group group,int tag,A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Comm_create_group)(R_MPI_Comm,R_MPI_Group,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Comm_create_group\n"
".weak MPI_Comm_create_group\n"
".set MPI_Comm_create_group,CCMPI_Comm_create_group\n"
".extern in_w\n"
".extern A_MPI_Comm_create_group\n"
".extern R_MPI_Comm_create_group\n"
".type CCMPI_Comm_create_group,@function\n"
".text\n"
"CCMPI_Comm_create_group:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_create_group\n"
"jmp *A_MPI_Comm_create_group@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_create_group:\n"
"jmp *R_MPI_Comm_create_group@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_create_group(A_MPI_Comm comm,A_MPI_Group group,int tag,A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_create_group\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);
int tag_tmp;
tag_conv_a2r(&tag,&tag_tmp);
R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Comm_create_group( comm_tmp, group_tmp, tag_tmp, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_create_group\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_create_group(R_MPI_Comm comm,R_MPI_Group group,int tag,R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_create_group\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_create_group( comm, group, tag, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Comm_create_group\n");
#endif
return ret_tmp;
}
int MPI_T_init_thread(int required,int * provided);
int (*LOCAL_MPI_T_init_thread)(int,int *);

__asm__(
".global CCMPI_T_init_thread\n"
".weak MPI_T_init_thread\n"
".set MPI_T_init_thread,CCMPI_T_init_thread\n"
".extern in_w\n"
".extern A_MPI_T_init_thread\n"
".extern R_MPI_T_init_thread\n"
".type CCMPI_T_init_thread,@function\n"
".text\n"
"CCMPI_T_init_thread:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_init_thread\n"
"jmp *A_MPI_T_init_thread@GOTPCREL(%rip)\n"
"inwrap_MPI_T_init_thread:\n"
"jmp *R_MPI_T_init_thread@GOTPCREL(%rip)\n"

);

int A_MPI_T_init_thread(int required,int * provided)
{
#ifdef DEBUG
printf("entre : A_MPI_T_init_thread\n");
#endif
in_w=1;




int ret_tmp= LOCAL_MPI_T_init_thread( required, provided);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_init_thread\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_init_thread(int required,int * provided)
{
#ifdef DEBUG
printf("entre : R_MPI_T_init_thread\n");
#endif
int ret_tmp= LOCAL_MPI_T_init_thread( required, provided);
#ifdef DEBUG
printf("sort : R_MPI_T_init_thread\n");
#endif
return ret_tmp;
}
int MPI_T_enum_get_info(A_MPI_T_enum enumtype,int * num,char * name,int * name_len);
int (*LOCAL_MPI_T_enum_get_info)(R_MPI_T_enum,int *,char *,int *);

__asm__(
".global CCMPI_T_enum_get_info\n"
".weak MPI_T_enum_get_info\n"
".set MPI_T_enum_get_info,CCMPI_T_enum_get_info\n"
".extern in_w\n"
".extern A_MPI_T_enum_get_info\n"
".extern R_MPI_T_enum_get_info\n"
".type CCMPI_T_enum_get_info,@function\n"
".text\n"
"CCMPI_T_enum_get_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_enum_get_info\n"
"jmp *A_MPI_T_enum_get_info@GOTPCREL(%rip)\n"
"inwrap_MPI_T_enum_get_info:\n"
"jmp *R_MPI_T_enum_get_info@GOTPCREL(%rip)\n"

);

int A_MPI_T_enum_get_info(A_MPI_T_enum enumtype,int * num,char * name,int * name_len)
{
#ifdef DEBUG
printf("entre : A_MPI_T_enum_get_info\n");
#endif
in_w=1;

R_MPI_T_enum enumtype_tmp;
t_enum_conv_a2r(&enumtype,&enumtype_tmp);




int ret_tmp= LOCAL_MPI_T_enum_get_info( enumtype_tmp, num, name, name_len);



in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_enum_get_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_enum_get_info(R_MPI_T_enum enumtype,int * num,char * name,int * name_len)
{
#ifdef DEBUG
printf("entre : R_MPI_T_enum_get_info\n");
#endif
int ret_tmp= LOCAL_MPI_T_enum_get_info( enumtype, num, name, name_len);
#ifdef DEBUG
printf("sort : R_MPI_T_enum_get_info\n");
#endif
return ret_tmp;
}
int MPI_T_enum_get_item(A_MPI_T_enum enumtype,int indx,int * value,char * name,int * name_len);
int (*LOCAL_MPI_T_enum_get_item)(R_MPI_T_enum,int,int *,char *,int *);

__asm__(
".global CCMPI_T_enum_get_item\n"
".weak MPI_T_enum_get_item\n"
".set MPI_T_enum_get_item,CCMPI_T_enum_get_item\n"
".extern in_w\n"
".extern A_MPI_T_enum_get_item\n"
".extern R_MPI_T_enum_get_item\n"
".type CCMPI_T_enum_get_item,@function\n"
".text\n"
"CCMPI_T_enum_get_item:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_enum_get_item\n"
"jmp *A_MPI_T_enum_get_item@GOTPCREL(%rip)\n"
"inwrap_MPI_T_enum_get_item:\n"
"jmp *R_MPI_T_enum_get_item@GOTPCREL(%rip)\n"

);

int A_MPI_T_enum_get_item(A_MPI_T_enum enumtype,int indx,int * value,char * name,int * name_len)
{
#ifdef DEBUG
printf("entre : A_MPI_T_enum_get_item\n");
#endif
in_w=1;

R_MPI_T_enum enumtype_tmp;
t_enum_conv_a2r(&enumtype,&enumtype_tmp);






int ret_tmp= LOCAL_MPI_T_enum_get_item( enumtype_tmp, indx, value, name, name_len);



in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_enum_get_item\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_enum_get_item(R_MPI_T_enum enumtype,int indx,int * value,char * name,int * name_len)
{
#ifdef DEBUG
printf("entre : R_MPI_T_enum_get_item\n");
#endif
int ret_tmp= LOCAL_MPI_T_enum_get_item( enumtype, indx, value, name, name_len);
#ifdef DEBUG
printf("sort : R_MPI_T_enum_get_item\n");
#endif
return ret_tmp;
}
int MPI_T_cvar_get_num(int * num_cvar);
int (*LOCAL_MPI_T_cvar_get_num)(int *);

__asm__(
".global CCMPI_T_cvar_get_num\n"
".weak MPI_T_cvar_get_num\n"
".set MPI_T_cvar_get_num,CCMPI_T_cvar_get_num\n"
".extern in_w\n"
".extern A_MPI_T_cvar_get_num\n"
".extern R_MPI_T_cvar_get_num\n"
".type CCMPI_T_cvar_get_num,@function\n"
".text\n"
"CCMPI_T_cvar_get_num:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_cvar_get_num\n"
"jmp *A_MPI_T_cvar_get_num@GOTPCREL(%rip)\n"
"inwrap_MPI_T_cvar_get_num:\n"
"jmp *R_MPI_T_cvar_get_num@GOTPCREL(%rip)\n"

);

int A_MPI_T_cvar_get_num(int * num_cvar)
{
#ifdef DEBUG
printf("entre : A_MPI_T_cvar_get_num\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_T_cvar_get_num( num_cvar);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_cvar_get_num\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_cvar_get_num(int * num_cvar)
{
#ifdef DEBUG
printf("entre : R_MPI_T_cvar_get_num\n");
#endif
int ret_tmp= LOCAL_MPI_T_cvar_get_num( num_cvar);
#ifdef DEBUG
printf("sort : R_MPI_T_cvar_get_num\n");
#endif
return ret_tmp;
}
int MPI_T_cvar_get_info(int cvar_index,char * name,int * name_len,int * verbosity,A_MPI_Datatype * datatype,A_MPI_T_enum * enumtype,char * desc,int * desc_len,int * binding,int * scope);
int (*LOCAL_MPI_T_cvar_get_info)(int,char *,int *,int *,R_MPI_Datatype *,R_MPI_T_enum *,char *,int *,int *,int *);

__asm__(
".global CCMPI_T_cvar_get_info\n"
".weak MPI_T_cvar_get_info\n"
".set MPI_T_cvar_get_info,CCMPI_T_cvar_get_info\n"
".extern in_w\n"
".extern A_MPI_T_cvar_get_info\n"
".extern R_MPI_T_cvar_get_info\n"
".type CCMPI_T_cvar_get_info,@function\n"
".text\n"
"CCMPI_T_cvar_get_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_cvar_get_info\n"
"jmp *A_MPI_T_cvar_get_info@GOTPCREL(%rip)\n"
"inwrap_MPI_T_cvar_get_info:\n"
"jmp *R_MPI_T_cvar_get_info@GOTPCREL(%rip)\n"

);

int A_MPI_T_cvar_get_info(int cvar_index,char * name,int * name_len,int * verbosity,A_MPI_Datatype * datatype,A_MPI_T_enum * enumtype,char * desc,int * desc_len,int * binding,int * scope)
{
#ifdef DEBUG
printf("entre : A_MPI_T_cvar_get_info\n");
#endif
in_w=1;







R_MPI_Datatype  datatype_ltmp;
R_MPI_Datatype * datatype_tmp=&datatype_ltmp;
R_MPI_T_enum  enumtype_ltmp;
R_MPI_T_enum * enumtype_tmp=&enumtype_ltmp;





int ret_tmp= LOCAL_MPI_T_cvar_get_info( cvar_index, name, name_len, verbosity, datatype_tmp, enumtype_tmp, desc, desc_len, binding, scope);



datatype_conv_r2a(datatype,datatype_tmp);
t_enum_conv_r2a(enumtype,enumtype_tmp);




in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_cvar_get_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_cvar_get_info(int cvar_index,char * name,int * name_len,int * verbosity,R_MPI_Datatype * datatype,R_MPI_T_enum * enumtype,char * desc,int * desc_len,int * binding,int * scope)
{
#ifdef DEBUG
printf("entre : R_MPI_T_cvar_get_info\n");
#endif
int ret_tmp= LOCAL_MPI_T_cvar_get_info( cvar_index, name, name_len, verbosity, datatype, enumtype, desc, desc_len, binding, scope);
#ifdef DEBUG
printf("sort : R_MPI_T_cvar_get_info\n");
#endif
return ret_tmp;
}
int MPI_T_cvar_handle_alloc(int cvar_index,void * obj_handle,A_MPI_T_cvar_handle * handle,int * count);
int (*LOCAL_MPI_T_cvar_handle_alloc)(int,void *,R_MPI_T_cvar_handle *,int *);

__asm__(
".global CCMPI_T_cvar_handle_alloc\n"
".weak MPI_T_cvar_handle_alloc\n"
".set MPI_T_cvar_handle_alloc,CCMPI_T_cvar_handle_alloc\n"
".extern in_w\n"
".extern A_MPI_T_cvar_handle_alloc\n"
".extern R_MPI_T_cvar_handle_alloc\n"
".type CCMPI_T_cvar_handle_alloc,@function\n"
".text\n"
"CCMPI_T_cvar_handle_alloc:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_cvar_handle_alloc\n"
"jmp *A_MPI_T_cvar_handle_alloc@GOTPCREL(%rip)\n"
"inwrap_MPI_T_cvar_handle_alloc:\n"
"jmp *R_MPI_T_cvar_handle_alloc@GOTPCREL(%rip)\n"

);

int A_MPI_T_cvar_handle_alloc(int cvar_index,void * obj_handle,A_MPI_T_cvar_handle * handle,int * count)
{
#ifdef DEBUG
printf("entre : A_MPI_T_cvar_handle_alloc\n");
#endif
in_w=1;



void * obj_handle_tmp;
buffer_conv_a2r(&obj_handle,&obj_handle_tmp);
R_MPI_T_cvar_handle  handle_ltmp;
R_MPI_T_cvar_handle * handle_tmp=&handle_ltmp;

int ret_tmp= LOCAL_MPI_T_cvar_handle_alloc( cvar_index, obj_handle_tmp, handle_tmp, count);
cvar_handle_conv_r2a(handle,handle_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_cvar_handle_alloc\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_cvar_handle_alloc(int cvar_index,void * obj_handle,R_MPI_T_cvar_handle * handle,int * count)
{
#ifdef DEBUG
printf("entre : R_MPI_T_cvar_handle_alloc\n");
#endif
int ret_tmp= LOCAL_MPI_T_cvar_handle_alloc( cvar_index, obj_handle, handle, count);
#ifdef DEBUG
printf("sort : R_MPI_T_cvar_handle_alloc\n");
#endif
return ret_tmp;
}
int MPI_T_cvar_handle_free(A_MPI_T_cvar_handle * handle);
int (*LOCAL_MPI_T_cvar_handle_free)(R_MPI_T_cvar_handle *);

__asm__(
".global CCMPI_T_cvar_handle_free\n"
".weak MPI_T_cvar_handle_free\n"
".set MPI_T_cvar_handle_free,CCMPI_T_cvar_handle_free\n"
".extern in_w\n"
".extern A_MPI_T_cvar_handle_free\n"
".extern R_MPI_T_cvar_handle_free\n"
".type CCMPI_T_cvar_handle_free,@function\n"
".text\n"
"CCMPI_T_cvar_handle_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_cvar_handle_free\n"
"jmp *A_MPI_T_cvar_handle_free@GOTPCREL(%rip)\n"
"inwrap_MPI_T_cvar_handle_free:\n"
"jmp *R_MPI_T_cvar_handle_free@GOTPCREL(%rip)\n"

);

int A_MPI_T_cvar_handle_free(A_MPI_T_cvar_handle * handle)
{
#ifdef DEBUG
printf("entre : A_MPI_T_cvar_handle_free\n");
#endif
in_w=1;

R_MPI_T_cvar_handle  handle_ltmp;
R_MPI_T_cvar_handle * handle_tmp=&handle_ltmp;
cvar_handle_conv_a2r(handle,handle_tmp);
int ret_tmp= LOCAL_MPI_T_cvar_handle_free( handle_tmp);
cvar_handle_conv_r2a(handle,handle_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_cvar_handle_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_cvar_handle_free(R_MPI_T_cvar_handle * handle)
{
#ifdef DEBUG
printf("entre : R_MPI_T_cvar_handle_free\n");
#endif
int ret_tmp= LOCAL_MPI_T_cvar_handle_free( handle);
#ifdef DEBUG
printf("sort : R_MPI_T_cvar_handle_free\n");
#endif
return ret_tmp;
}
int MPI_T_cvar_read(A_MPI_T_cvar_handle handle,void * buf);
int (*LOCAL_MPI_T_cvar_read)(R_MPI_T_cvar_handle,void *);

__asm__(
".global CCMPI_T_cvar_read\n"
".weak MPI_T_cvar_read\n"
".set MPI_T_cvar_read,CCMPI_T_cvar_read\n"
".extern in_w\n"
".extern A_MPI_T_cvar_read\n"
".extern R_MPI_T_cvar_read\n"
".type CCMPI_T_cvar_read,@function\n"
".text\n"
"CCMPI_T_cvar_read:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_cvar_read\n"
"jmp *A_MPI_T_cvar_read@GOTPCREL(%rip)\n"
"inwrap_MPI_T_cvar_read:\n"
"jmp *R_MPI_T_cvar_read@GOTPCREL(%rip)\n"

);

int A_MPI_T_cvar_read(A_MPI_T_cvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : A_MPI_T_cvar_read\n");
#endif
in_w=1;

R_MPI_T_cvar_handle handle_tmp;
cvar_handle_conv_a2r(&handle,&handle_tmp);
void * buf_tmp;
int ret_tmp= LOCAL_MPI_T_cvar_read( handle_tmp, buf_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_cvar_read\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_cvar_read(R_MPI_T_cvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : R_MPI_T_cvar_read\n");
#endif
int ret_tmp= LOCAL_MPI_T_cvar_read( handle, buf);
#ifdef DEBUG
printf("sort : R_MPI_T_cvar_read\n");
#endif
return ret_tmp;
}
int MPI_T_cvar_write(A_MPI_T_cvar_handle handle,void * buf);
int (*LOCAL_MPI_T_cvar_write)(R_MPI_T_cvar_handle,void *);

__asm__(
".global CCMPI_T_cvar_write\n"
".weak MPI_T_cvar_write\n"
".set MPI_T_cvar_write,CCMPI_T_cvar_write\n"
".extern in_w\n"
".extern A_MPI_T_cvar_write\n"
".extern R_MPI_T_cvar_write\n"
".type CCMPI_T_cvar_write,@function\n"
".text\n"
"CCMPI_T_cvar_write:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_cvar_write\n"
"jmp *A_MPI_T_cvar_write@GOTPCREL(%rip)\n"
"inwrap_MPI_T_cvar_write:\n"
"jmp *R_MPI_T_cvar_write@GOTPCREL(%rip)\n"

);

int A_MPI_T_cvar_write(A_MPI_T_cvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : A_MPI_T_cvar_write\n");
#endif
in_w=1;

R_MPI_T_cvar_handle handle_tmp;
cvar_handle_conv_a2r(&handle,&handle_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);
int ret_tmp= LOCAL_MPI_T_cvar_write( handle_tmp, buf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_cvar_write\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_cvar_write(R_MPI_T_cvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : R_MPI_T_cvar_write\n");
#endif
int ret_tmp= LOCAL_MPI_T_cvar_write( handle, buf);
#ifdef DEBUG
printf("sort : R_MPI_T_cvar_write\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_get_num(int * num_pvar);
int (*LOCAL_MPI_T_pvar_get_num)(int *);

__asm__(
".global CCMPI_T_pvar_get_num\n"
".weak MPI_T_pvar_get_num\n"
".set MPI_T_pvar_get_num,CCMPI_T_pvar_get_num\n"
".extern in_w\n"
".extern A_MPI_T_pvar_get_num\n"
".extern R_MPI_T_pvar_get_num\n"
".type CCMPI_T_pvar_get_num,@function\n"
".text\n"
"CCMPI_T_pvar_get_num:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_get_num\n"
"jmp *A_MPI_T_pvar_get_num@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_get_num:\n"
"jmp *R_MPI_T_pvar_get_num@GOTPCREL(%rip)\n"

);

int A_MPI_T_pvar_get_num(int * num_pvar)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_get_num\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_T_pvar_get_num( num_pvar);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_get_num\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_get_num(int * num_pvar)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_get_num\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_get_num( num_pvar);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_get_num\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_get_info(int pvar_index,char * name,int * name_len,int * verbosity,int * var_class,A_MPI_Datatype * datatype,A_MPI_T_enum * enumtype,char * desc,int * desc_len,int * binding,int * readonly,int * continuous,int * atomic);
int (*LOCAL_MPI_T_pvar_get_info)(int,char *,int *,int *,int *,R_MPI_Datatype *,R_MPI_T_enum *,char *,int *,int *,int *,int *,int *);

__asm__(
".global CCMPI_T_pvar_get_info\n"
".weak MPI_T_pvar_get_info\n"
".set MPI_T_pvar_get_info,CCMPI_T_pvar_get_info\n"
".extern in_w\n"
".extern A_MPI_T_pvar_get_info\n"
".extern R_MPI_T_pvar_get_info\n"
".type CCMPI_T_pvar_get_info,@function\n"
".text\n"
"CCMPI_T_pvar_get_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_get_info\n"
"jmp *A_MPI_T_pvar_get_info@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_get_info:\n"
"jmp *R_MPI_T_pvar_get_info@GOTPCREL(%rip)\n"

);

int A_MPI_T_pvar_get_info(int pvar_index,char * name,int * name_len,int * verbosity,int * var_class,A_MPI_Datatype * datatype,A_MPI_T_enum * enumtype,char * desc,int * desc_len,int * binding,int * readonly,int * continuous,int * atomic)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_get_info\n");
#endif
in_w=1;








R_MPI_Datatype  datatype_ltmp;
R_MPI_Datatype * datatype_tmp=&datatype_ltmp;
R_MPI_T_enum  enumtype_ltmp;
R_MPI_T_enum * enumtype_tmp=&enumtype_ltmp;







int ret_tmp= LOCAL_MPI_T_pvar_get_info( pvar_index, name, name_len, verbosity, var_class, datatype_tmp, enumtype_tmp, desc, desc_len, binding, readonly, continuous, atomic);




datatype_conv_r2a(datatype,datatype_tmp);
t_enum_conv_r2a(enumtype,enumtype_tmp);






in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_get_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_get_info(int pvar_index,char * name,int * name_len,int * verbosity,int * var_class,R_MPI_Datatype * datatype,R_MPI_T_enum * enumtype,char * desc,int * desc_len,int * binding,int * readonly,int * continuous,int * atomic)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_get_info\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_get_info( pvar_index, name, name_len, verbosity, var_class, datatype, enumtype, desc, desc_len, binding, readonly, continuous, atomic);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_get_info\n");
#endif
return ret_tmp;
}
int MPI_T_category_get_num(int * num_cat);
int (*LOCAL_MPI_T_category_get_num)(int *);

__asm__(
".global CCMPI_T_category_get_num\n"
".weak MPI_T_category_get_num\n"
".set MPI_T_category_get_num,CCMPI_T_category_get_num\n"
".extern in_w\n"
".extern A_MPI_T_category_get_num\n"
".extern R_MPI_T_category_get_num\n"
".type CCMPI_T_category_get_num,@function\n"
".text\n"
"CCMPI_T_category_get_num:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_category_get_num\n"
"jmp *A_MPI_T_category_get_num@GOTPCREL(%rip)\n"
"inwrap_MPI_T_category_get_num:\n"
"jmp *R_MPI_T_category_get_num@GOTPCREL(%rip)\n"

);

int A_MPI_T_category_get_num(int * num_cat)
{
#ifdef DEBUG
printf("entre : A_MPI_T_category_get_num\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_T_category_get_num( num_cat);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_category_get_num\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_category_get_num(int * num_cat)
{
#ifdef DEBUG
printf("entre : R_MPI_T_category_get_num\n");
#endif
int ret_tmp= LOCAL_MPI_T_category_get_num( num_cat);
#ifdef DEBUG
printf("sort : R_MPI_T_category_get_num\n");
#endif
return ret_tmp;
}
int MPI_T_category_get_info(int cat_index,char * name,int * name_len,char * desc,int * desc_len,int * num_cvars,int * num_pvars,int * num_categories);
int (*LOCAL_MPI_T_category_get_info)(int,char *,int *,char *,int *,int *,int *,int *);

__asm__(
".global CCMPI_T_category_get_info\n"
".weak MPI_T_category_get_info\n"
".set MPI_T_category_get_info,CCMPI_T_category_get_info\n"
".extern in_w\n"
".extern A_MPI_T_category_get_info\n"
".extern R_MPI_T_category_get_info\n"
".type CCMPI_T_category_get_info,@function\n"
".text\n"
"CCMPI_T_category_get_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_category_get_info\n"
"jmp *A_MPI_T_category_get_info@GOTPCREL(%rip)\n"
"inwrap_MPI_T_category_get_info:\n"
"jmp *R_MPI_T_category_get_info@GOTPCREL(%rip)\n"

);

int A_MPI_T_category_get_info(int cat_index,char * name,int * name_len,char * desc,int * desc_len,int * num_cvars,int * num_pvars,int * num_categories)
{
#ifdef DEBUG
printf("entre : A_MPI_T_category_get_info\n");
#endif
in_w=1;












int ret_tmp= LOCAL_MPI_T_category_get_info( cat_index, name, name_len, desc, desc_len, num_cvars, num_pvars, num_categories);







in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_category_get_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_category_get_info(int cat_index,char * name,int * name_len,char * desc,int * desc_len,int * num_cvars,int * num_pvars,int * num_categories)
{
#ifdef DEBUG
printf("entre : R_MPI_T_category_get_info\n");
#endif
int ret_tmp= LOCAL_MPI_T_category_get_info( cat_index, name, name_len, desc, desc_len, num_cvars, num_pvars, num_categories);
#ifdef DEBUG
printf("sort : R_MPI_T_category_get_info\n");
#endif
return ret_tmp;
}
int MPI_File_open(A_MPI_Comm comm,char * filename,int amode,A_MPI_Info info,A_MPI_File * fh);
int (*LOCAL_MPI_File_open)(R_MPI_Comm,char *,int,R_MPI_Info,R_MPI_File *);

__asm__(
".global CCMPI_File_open\n"
".weak MPI_File_open\n"
".set MPI_File_open,CCMPI_File_open\n"
".extern in_w\n"
".extern A_MPI_File_open\n"
".extern R_MPI_File_open\n"
".type CCMPI_File_open,@function\n"
".text\n"
"CCMPI_File_open:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_open\n"
"jmp *A_MPI_File_open@GOTPCREL(%rip)\n"
"inwrap_MPI_File_open:\n"
"jmp *R_MPI_File_open@GOTPCREL(%rip)\n"

);

int A_MPI_File_open(A_MPI_Comm comm,char * filename,int amode,A_MPI_Info info,A_MPI_File * fh)
{
#ifdef DEBUG
printf("entre : A_MPI_File_open\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);


int amode_tmp =0;
amode_conv_a2r(&amode,&amode_tmp);
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
R_MPI_File  fh_ltmp;
R_MPI_File * fh_tmp=&fh_ltmp;
int ret_tmp= LOCAL_MPI_File_open( comm_tmp, filename, amode_tmp, info_tmp, fh_tmp);
file_conv_r2a(fh,fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_open\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_open(R_MPI_Comm comm,char * filename,int amode,R_MPI_Info info,R_MPI_File * fh)
{
#ifdef DEBUG
printf("entre : R_MPI_File_open\n");
#endif
int ret_tmp= LOCAL_MPI_File_open( comm, filename, amode, info, fh);
#ifdef DEBUG
printf("sort : R_MPI_File_open\n");
#endif
return ret_tmp;
}
int MPI_File_close(A_MPI_File * fh);
int (*LOCAL_MPI_File_close)(R_MPI_File *);

__asm__(
".global CCMPI_File_close\n"
".weak MPI_File_close\n"
".set MPI_File_close,CCMPI_File_close\n"
".extern in_w\n"
".extern A_MPI_File_close\n"
".extern R_MPI_File_close\n"
".type CCMPI_File_close,@function\n"
".text\n"
"CCMPI_File_close:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_close\n"
"jmp *A_MPI_File_close@GOTPCREL(%rip)\n"
"inwrap_MPI_File_close:\n"
"jmp *R_MPI_File_close@GOTPCREL(%rip)\n"

);

int A_MPI_File_close(A_MPI_File * fh)
{
#ifdef DEBUG
printf("entre : A_MPI_File_close\n");
#endif
in_w=1;

R_MPI_File  fh_ltmp;
R_MPI_File * fh_tmp=&fh_ltmp;
file_conv_a2r(fh,fh_tmp);
int ret_tmp= LOCAL_MPI_File_close( fh_tmp);
file_conv_r2a(fh,fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_close\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_close(R_MPI_File * fh)
{
#ifdef DEBUG
printf("entre : R_MPI_File_close\n");
#endif
int ret_tmp= LOCAL_MPI_File_close( fh);
#ifdef DEBUG
printf("sort : R_MPI_File_close\n");
#endif
return ret_tmp;
}
int MPI_File_delete(char * filename,A_MPI_Info info);
int (*LOCAL_MPI_File_delete)(char *,R_MPI_Info);

__asm__(
".global CCMPI_File_delete\n"
".weak MPI_File_delete\n"
".set MPI_File_delete,CCMPI_File_delete\n"
".extern in_w\n"
".extern A_MPI_File_delete\n"
".extern R_MPI_File_delete\n"
".type CCMPI_File_delete,@function\n"
".text\n"
"CCMPI_File_delete:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_delete\n"
"jmp *A_MPI_File_delete@GOTPCREL(%rip)\n"
"inwrap_MPI_File_delete:\n"
"jmp *R_MPI_File_delete@GOTPCREL(%rip)\n"

);

int A_MPI_File_delete(char * filename,A_MPI_Info info)
{
#ifdef DEBUG
printf("entre : A_MPI_File_delete\n");
#endif
in_w=1;



R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
int ret_tmp= LOCAL_MPI_File_delete( filename, info_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_delete\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_delete(char * filename,R_MPI_Info info)
{
#ifdef DEBUG
printf("entre : R_MPI_File_delete\n");
#endif
int ret_tmp= LOCAL_MPI_File_delete( filename, info);
#ifdef DEBUG
printf("sort : R_MPI_File_delete\n");
#endif
return ret_tmp;
}
int MPI_File_set_size(A_MPI_File fh,A_MPI_Offset size);
int (*LOCAL_MPI_File_set_size)(R_MPI_File,R_MPI_Offset);

__asm__(
".global CCMPI_File_set_size\n"
".weak MPI_File_set_size\n"
".set MPI_File_set_size,CCMPI_File_set_size\n"
".extern in_w\n"
".extern A_MPI_File_set_size\n"
".extern R_MPI_File_set_size\n"
".type CCMPI_File_set_size,@function\n"
".text\n"
"CCMPI_File_set_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_set_size\n"
"jmp *A_MPI_File_set_size@GOTPCREL(%rip)\n"
"inwrap_MPI_File_set_size:\n"
"jmp *R_MPI_File_set_size@GOTPCREL(%rip)\n"

);

int A_MPI_File_set_size(A_MPI_File fh,A_MPI_Offset size)
{
#ifdef DEBUG
printf("entre : A_MPI_File_set_size\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset size_tmp;
size_tmp = (R_MPI_Offset)size;
int ret_tmp= LOCAL_MPI_File_set_size( fh_tmp, size_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_set_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_set_size(R_MPI_File fh,R_MPI_Offset size)
{
#ifdef DEBUG
printf("entre : R_MPI_File_set_size\n");
#endif
int ret_tmp= LOCAL_MPI_File_set_size( fh, size);
#ifdef DEBUG
printf("sort : R_MPI_File_set_size\n");
#endif
return ret_tmp;
}
int MPI_File_preallocate(A_MPI_File fh,A_MPI_Offset size);
int (*LOCAL_MPI_File_preallocate)(R_MPI_File,R_MPI_Offset);

__asm__(
".global CCMPI_File_preallocate\n"
".weak MPI_File_preallocate\n"
".set MPI_File_preallocate,CCMPI_File_preallocate\n"
".extern in_w\n"
".extern A_MPI_File_preallocate\n"
".extern R_MPI_File_preallocate\n"
".type CCMPI_File_preallocate,@function\n"
".text\n"
"CCMPI_File_preallocate:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_preallocate\n"
"jmp *A_MPI_File_preallocate@GOTPCREL(%rip)\n"
"inwrap_MPI_File_preallocate:\n"
"jmp *R_MPI_File_preallocate@GOTPCREL(%rip)\n"

);

int A_MPI_File_preallocate(A_MPI_File fh,A_MPI_Offset size)
{
#ifdef DEBUG
printf("entre : A_MPI_File_preallocate\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset size_tmp;
size_tmp = (R_MPI_Offset)size;
int ret_tmp= LOCAL_MPI_File_preallocate( fh_tmp, size_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_preallocate\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_preallocate(R_MPI_File fh,R_MPI_Offset size)
{
#ifdef DEBUG
printf("entre : R_MPI_File_preallocate\n");
#endif
int ret_tmp= LOCAL_MPI_File_preallocate( fh, size);
#ifdef DEBUG
printf("sort : R_MPI_File_preallocate\n");
#endif
return ret_tmp;
}
int MPI_File_get_size(A_MPI_File fh,A_MPI_Offset * size);
int (*LOCAL_MPI_File_get_size)(R_MPI_File,R_MPI_Offset *);

__asm__(
".global CCMPI_File_get_size\n"
".weak MPI_File_get_size\n"
".set MPI_File_get_size,CCMPI_File_get_size\n"
".extern in_w\n"
".extern A_MPI_File_get_size\n"
".extern R_MPI_File_get_size\n"
".type CCMPI_File_get_size,@function\n"
".text\n"
"CCMPI_File_get_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_size\n"
"jmp *A_MPI_File_get_size@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_size:\n"
"jmp *R_MPI_File_get_size@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_size(A_MPI_File fh,A_MPI_Offset * size)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_size\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset  size_ltmp;
R_MPI_Offset * size_tmp=&size_ltmp;
int ret_tmp= LOCAL_MPI_File_get_size( fh_tmp, size_tmp);
*size= (A_MPI_Offset ) *size_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_size(R_MPI_File fh,R_MPI_Offset * size)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_size\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_size( fh, size);
#ifdef DEBUG
printf("sort : R_MPI_File_get_size\n");
#endif
return ret_tmp;
}
int MPI_File_get_group(A_MPI_File fh,A_MPI_Group * group);
int (*LOCAL_MPI_File_get_group)(R_MPI_File,R_MPI_Group *);

__asm__(
".global CCMPI_File_get_group\n"
".weak MPI_File_get_group\n"
".set MPI_File_get_group,CCMPI_File_get_group\n"
".extern in_w\n"
".extern A_MPI_File_get_group\n"
".extern R_MPI_File_get_group\n"
".type CCMPI_File_get_group,@function\n"
".text\n"
"CCMPI_File_get_group:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_group\n"
"jmp *A_MPI_File_get_group@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_group:\n"
"jmp *R_MPI_File_get_group@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_group(A_MPI_File fh,A_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_group\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Group  group_ltmp;
R_MPI_Group * group_tmp=&group_ltmp;
int ret_tmp= LOCAL_MPI_File_get_group( fh_tmp, group_tmp);
group_conv_r2a(group,group_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_group\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_group(R_MPI_File fh,R_MPI_Group * group)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_group\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_group( fh, group);
#ifdef DEBUG
printf("sort : R_MPI_File_get_group\n");
#endif
return ret_tmp;
}
int MPI_File_get_amode(A_MPI_File fh,int * amode);
int (*LOCAL_MPI_File_get_amode)(R_MPI_File,int *);

__asm__(
".global CCMPI_File_get_amode\n"
".weak MPI_File_get_amode\n"
".set MPI_File_get_amode,CCMPI_File_get_amode\n"
".extern in_w\n"
".extern A_MPI_File_get_amode\n"
".extern R_MPI_File_get_amode\n"
".type CCMPI_File_get_amode,@function\n"
".text\n"
"CCMPI_File_get_amode:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_amode\n"
"jmp *A_MPI_File_get_amode@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_amode:\n"
"jmp *R_MPI_File_get_amode@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_amode(A_MPI_File fh,int * amode)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_amode\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
int  amode_ltmp;
int * amode_tmp=&amode_ltmp;
int ret_tmp= LOCAL_MPI_File_get_amode( fh_tmp, amode_tmp);
amode_conv_r2a(amode,amode_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_amode\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_amode(R_MPI_File fh,int * amode)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_amode\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_amode( fh, amode);
#ifdef DEBUG
printf("sort : R_MPI_File_get_amode\n");
#endif
return ret_tmp;
}
int MPI_File_set_info(A_MPI_File fh,A_MPI_Info info);
int (*LOCAL_MPI_File_set_info)(R_MPI_File,R_MPI_Info);

__asm__(
".global CCMPI_File_set_info\n"
".weak MPI_File_set_info\n"
".set MPI_File_set_info,CCMPI_File_set_info\n"
".extern in_w\n"
".extern A_MPI_File_set_info\n"
".extern R_MPI_File_set_info\n"
".type CCMPI_File_set_info,@function\n"
".text\n"
"CCMPI_File_set_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_set_info\n"
"jmp *A_MPI_File_set_info@GOTPCREL(%rip)\n"
"inwrap_MPI_File_set_info:\n"
"jmp *R_MPI_File_set_info@GOTPCREL(%rip)\n"

);

int A_MPI_File_set_info(A_MPI_File fh,A_MPI_Info info)
{
#ifdef DEBUG
printf("entre : A_MPI_File_set_info\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
int ret_tmp= LOCAL_MPI_File_set_info( fh_tmp, info_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_set_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_set_info(R_MPI_File fh,R_MPI_Info info)
{
#ifdef DEBUG
printf("entre : R_MPI_File_set_info\n");
#endif
int ret_tmp= LOCAL_MPI_File_set_info( fh, info);
#ifdef DEBUG
printf("sort : R_MPI_File_set_info\n");
#endif
return ret_tmp;
}
int MPI_File_get_info(A_MPI_File fh,A_MPI_Info * info_used);
int (*LOCAL_MPI_File_get_info)(R_MPI_File,R_MPI_Info *);

__asm__(
".global CCMPI_File_get_info\n"
".weak MPI_File_get_info\n"
".set MPI_File_get_info,CCMPI_File_get_info\n"
".extern in_w\n"
".extern A_MPI_File_get_info\n"
".extern R_MPI_File_get_info\n"
".type CCMPI_File_get_info,@function\n"
".text\n"
"CCMPI_File_get_info:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_info\n"
"jmp *A_MPI_File_get_info@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_info:\n"
"jmp *R_MPI_File_get_info@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_info(A_MPI_File fh,A_MPI_Info * info_used)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_info\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Info  info_used_ltmp;
R_MPI_Info * info_used_tmp=&info_used_ltmp;
int ret_tmp= LOCAL_MPI_File_get_info( fh_tmp, info_used_tmp);
file_conv_r2a(&fh,&fh_tmp);
info_conv_r2a(info_used,info_used_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_info\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_info(R_MPI_File fh,R_MPI_Info * info_used)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_info\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_info( fh, info_used);
#ifdef DEBUG
printf("sort : R_MPI_File_get_info\n");
#endif
return ret_tmp;
}
int MPI_File_set_view(A_MPI_File fh,A_MPI_Offset disp,A_MPI_Datatype etype,A_MPI_Datatype filetype,char * datarep,A_MPI_Info info);
int (*LOCAL_MPI_File_set_view)(R_MPI_File,R_MPI_Offset,R_MPI_Datatype,R_MPI_Datatype,char *,R_MPI_Info);

__asm__(
".global CCMPI_File_set_view\n"
".weak MPI_File_set_view\n"
".set MPI_File_set_view,CCMPI_File_set_view\n"
".extern in_w\n"
".extern A_MPI_File_set_view\n"
".extern R_MPI_File_set_view\n"
".type CCMPI_File_set_view,@function\n"
".text\n"
"CCMPI_File_set_view:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_set_view\n"
"jmp *A_MPI_File_set_view@GOTPCREL(%rip)\n"
"inwrap_MPI_File_set_view:\n"
"jmp *R_MPI_File_set_view@GOTPCREL(%rip)\n"

);

int A_MPI_File_set_view(A_MPI_File fh,A_MPI_Offset disp,A_MPI_Datatype etype,A_MPI_Datatype filetype,char * datarep,A_MPI_Info info)
{
#ifdef DEBUG
printf("entre : A_MPI_File_set_view\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset disp_tmp;
disp_tmp = (R_MPI_Offset)disp;
R_MPI_Datatype etype_tmp;
datatype_conv_a2r(&etype,&etype_tmp);
R_MPI_Datatype filetype_tmp;
datatype_conv_a2r(&filetype,&filetype_tmp);


R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);
int ret_tmp= LOCAL_MPI_File_set_view( fh_tmp, disp_tmp, etype_tmp, filetype_tmp, datarep, info_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_set_view\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_set_view(R_MPI_File fh,R_MPI_Offset disp,R_MPI_Datatype etype,R_MPI_Datatype filetype,char * datarep,R_MPI_Info info)
{
#ifdef DEBUG
printf("entre : R_MPI_File_set_view\n");
#endif
int ret_tmp= LOCAL_MPI_File_set_view( fh, disp, etype, filetype, datarep, info);
#ifdef DEBUG
printf("sort : R_MPI_File_set_view\n");
#endif
return ret_tmp;
}
int MPI_File_get_view(A_MPI_File fh,A_MPI_Offset * disp,A_MPI_Datatype * etype,A_MPI_Datatype * filetype,char * datarep);
int (*LOCAL_MPI_File_get_view)(R_MPI_File,R_MPI_Offset *,R_MPI_Datatype *,R_MPI_Datatype *,char *);

__asm__(
".global CCMPI_File_get_view\n"
".weak MPI_File_get_view\n"
".set MPI_File_get_view,CCMPI_File_get_view\n"
".extern in_w\n"
".extern A_MPI_File_get_view\n"
".extern R_MPI_File_get_view\n"
".type CCMPI_File_get_view,@function\n"
".text\n"
"CCMPI_File_get_view:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_view\n"
"jmp *A_MPI_File_get_view@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_view:\n"
"jmp *R_MPI_File_get_view@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_view(A_MPI_File fh,A_MPI_Offset * disp,A_MPI_Datatype * etype,A_MPI_Datatype * filetype,char * datarep)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_view\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset  disp_ltmp;
R_MPI_Offset * disp_tmp=&disp_ltmp;
R_MPI_Datatype  etype_ltmp;
R_MPI_Datatype * etype_tmp=&etype_ltmp;
R_MPI_Datatype  filetype_ltmp;
R_MPI_Datatype * filetype_tmp=&filetype_ltmp;

int ret_tmp= LOCAL_MPI_File_get_view( fh_tmp, disp_tmp, etype_tmp, filetype_tmp, datarep);
*disp= (A_MPI_Offset ) *disp_tmp;
datatype_conv_r2a(etype,etype_tmp);
datatype_conv_r2a(filetype,filetype_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_view\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_view(R_MPI_File fh,R_MPI_Offset * disp,R_MPI_Datatype * etype,R_MPI_Datatype * filetype,char * datarep)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_view\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_view( fh, disp, etype, filetype, datarep);
#ifdef DEBUG
printf("sort : R_MPI_File_get_view\n");
#endif
return ret_tmp;
}
int MPI_File_read_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_at)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_at\n"
".weak MPI_File_read_at\n"
".set MPI_File_read_at,CCMPI_File_read_at\n"
".extern in_w\n"
".extern A_MPI_File_read_at\n"
".extern R_MPI_File_read_at\n"
".type CCMPI_File_read_at,@function\n"
".text\n"
"CCMPI_File_read_at:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_at\n"
"jmp *A_MPI_File_read_at@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_at:\n"
"jmp *R_MPI_File_read_at@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_at\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_at( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, status_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_at\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_at(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_at\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_at( fh, offset, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_at\n");
#endif
return ret_tmp;
}
int MPI_File_read_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_at_all)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_at_all\n"
".weak MPI_File_read_at_all\n"
".set MPI_File_read_at_all,CCMPI_File_read_at_all\n"
".extern in_w\n"
".extern A_MPI_File_read_at_all\n"
".extern R_MPI_File_read_at_all\n"
".type CCMPI_File_read_at_all,@function\n"
".text\n"
"CCMPI_File_read_at_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_at_all\n"
"jmp *A_MPI_File_read_at_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_at_all:\n"
"jmp *R_MPI_File_read_at_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_at_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_at_all( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, status_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_at_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_at_all(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_at_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_at_all( fh, offset, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_at_all\n");
#endif
return ret_tmp;
}
int MPI_File_write_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_at)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_at\n"
".weak MPI_File_write_at\n"
".set MPI_File_write_at,CCMPI_File_write_at\n"
".extern in_w\n"
".extern A_MPI_File_write_at\n"
".extern R_MPI_File_write_at\n"
".type CCMPI_File_write_at,@function\n"
".text\n"
"CCMPI_File_write_at:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_at\n"
"jmp *A_MPI_File_write_at@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_at:\n"
"jmp *R_MPI_File_write_at@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_at\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_at( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_at\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_at(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_at\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_at( fh, offset, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_at\n");
#endif
return ret_tmp;
}
int MPI_File_write_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_at_all)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_at_all\n"
".weak MPI_File_write_at_all\n"
".set MPI_File_write_at_all,CCMPI_File_write_at_all\n"
".extern in_w\n"
".extern A_MPI_File_write_at_all\n"
".extern R_MPI_File_write_at_all\n"
".type CCMPI_File_write_at_all,@function\n"
".text\n"
"CCMPI_File_write_at_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_at_all\n"
"jmp *A_MPI_File_write_at_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_at_all:\n"
"jmp *R_MPI_File_write_at_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_at_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_at_all( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_at_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_at_all(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_at_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_at_all( fh, offset, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_at_all\n");
#endif
return ret_tmp;
}
int MPI_File_iread_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iread_at)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iread_at\n"
".weak MPI_File_iread_at\n"
".set MPI_File_iread_at,CCMPI_File_iread_at\n"
".extern in_w\n"
".extern A_MPI_File_iread_at\n"
".extern R_MPI_File_iread_at\n"
".type CCMPI_File_iread_at,@function\n"
".text\n"
"CCMPI_File_iread_at:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iread_at\n"
"jmp *A_MPI_File_iread_at@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iread_at:\n"
"jmp *R_MPI_File_iread_at@GOTPCREL(%rip)\n"

);

int A_MPI_File_iread_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iread_at\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iread_at( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, request_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iread_at\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iread_at(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iread_at\n");
#endif
int ret_tmp= LOCAL_MPI_File_iread_at( fh, offset, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iread_at\n");
#endif
return ret_tmp;
}
int MPI_File_iwrite_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iwrite_at)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iwrite_at\n"
".weak MPI_File_iwrite_at\n"
".set MPI_File_iwrite_at,CCMPI_File_iwrite_at\n"
".extern in_w\n"
".extern A_MPI_File_iwrite_at\n"
".extern R_MPI_File_iwrite_at\n"
".type CCMPI_File_iwrite_at,@function\n"
".text\n"
"CCMPI_File_iwrite_at:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iwrite_at\n"
"jmp *A_MPI_File_iwrite_at@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iwrite_at:\n"
"jmp *R_MPI_File_iwrite_at@GOTPCREL(%rip)\n"

);

int A_MPI_File_iwrite_at(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iwrite_at\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iwrite_at( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iwrite_at\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iwrite_at(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iwrite_at\n");
#endif
int ret_tmp= LOCAL_MPI_File_iwrite_at( fh, offset, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iwrite_at\n");
#endif
return ret_tmp;
}
int MPI_File_read(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_read)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_read\n"
".weak MPI_File_read\n"
".set MPI_File_read,CCMPI_File_read\n"
".extern in_w\n"
".extern A_MPI_File_read\n"
".extern R_MPI_File_read\n"
".type CCMPI_File_read,@function\n"
".text\n"
"CCMPI_File_read:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read\n"
"jmp *A_MPI_File_read@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read:\n"
"jmp *R_MPI_File_read@GOTPCREL(%rip)\n"

);

int A_MPI_File_read(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read\n");
#endif
int ret_tmp= LOCAL_MPI_File_read( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read\n");
#endif
return ret_tmp;
}
int MPI_File_read_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_all)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_all\n"
".weak MPI_File_read_all\n"
".set MPI_File_read_all,CCMPI_File_read_all\n"
".extern in_w\n"
".extern A_MPI_File_read_all\n"
".extern R_MPI_File_read_all\n"
".type CCMPI_File_read_all,@function\n"
".text\n"
"CCMPI_File_read_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_all\n"
"jmp *A_MPI_File_read_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_all:\n"
"jmp *R_MPI_File_read_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_all( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_all(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_all( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_all\n");
#endif
return ret_tmp;
}
int MPI_File_write(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_write)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_write\n"
".weak MPI_File_write\n"
".set MPI_File_write,CCMPI_File_write\n"
".extern in_w\n"
".extern A_MPI_File_write\n"
".extern R_MPI_File_write\n"
".type CCMPI_File_write,@function\n"
".text\n"
"CCMPI_File_write:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write\n"
"jmp *A_MPI_File_write@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write:\n"
"jmp *R_MPI_File_write@GOTPCREL(%rip)\n"

);

int A_MPI_File_write(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write\n");
#endif
int ret_tmp= LOCAL_MPI_File_write( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write\n");
#endif
return ret_tmp;
}
int MPI_File_write_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_all)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_all\n"
".weak MPI_File_write_all\n"
".set MPI_File_write_all,CCMPI_File_write_all\n"
".extern in_w\n"
".extern A_MPI_File_write_all\n"
".extern R_MPI_File_write_all\n"
".type CCMPI_File_write_all,@function\n"
".text\n"
"CCMPI_File_write_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_all\n"
"jmp *A_MPI_File_write_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_all:\n"
"jmp *R_MPI_File_write_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_all( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_all(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_all( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_all\n");
#endif
return ret_tmp;
}
int MPI_File_iread(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iread)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iread\n"
".weak MPI_File_iread\n"
".set MPI_File_iread,CCMPI_File_iread\n"
".extern in_w\n"
".extern A_MPI_File_iread\n"
".extern R_MPI_File_iread\n"
".type CCMPI_File_iread,@function\n"
".text\n"
"CCMPI_File_iread:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iread\n"
"jmp *A_MPI_File_iread@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iread:\n"
"jmp *R_MPI_File_iread@GOTPCREL(%rip)\n"

);

int A_MPI_File_iread(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iread\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iread( fh_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iread\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iread(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iread\n");
#endif
int ret_tmp= LOCAL_MPI_File_iread( fh, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iread\n");
#endif
return ret_tmp;
}
int MPI_File_iwrite(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iwrite)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iwrite\n"
".weak MPI_File_iwrite\n"
".set MPI_File_iwrite,CCMPI_File_iwrite\n"
".extern in_w\n"
".extern A_MPI_File_iwrite\n"
".extern R_MPI_File_iwrite\n"
".type CCMPI_File_iwrite,@function\n"
".text\n"
"CCMPI_File_iwrite:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iwrite\n"
"jmp *A_MPI_File_iwrite@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iwrite:\n"
"jmp *R_MPI_File_iwrite@GOTPCREL(%rip)\n"

);

int A_MPI_File_iwrite(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iwrite\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iwrite( fh_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iwrite\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iwrite(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iwrite\n");
#endif
int ret_tmp= LOCAL_MPI_File_iwrite( fh, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iwrite\n");
#endif
return ret_tmp;
}
int MPI_File_seek(A_MPI_File fh,A_MPI_Offset offset,int whence);
int (*LOCAL_MPI_File_seek)(R_MPI_File,R_MPI_Offset,int);

__asm__(
".global CCMPI_File_seek\n"
".weak MPI_File_seek\n"
".set MPI_File_seek,CCMPI_File_seek\n"
".extern in_w\n"
".extern A_MPI_File_seek\n"
".extern R_MPI_File_seek\n"
".type CCMPI_File_seek,@function\n"
".text\n"
"CCMPI_File_seek:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_seek\n"
"jmp *A_MPI_File_seek@GOTPCREL(%rip)\n"
"inwrap_MPI_File_seek:\n"
"jmp *R_MPI_File_seek@GOTPCREL(%rip)\n"

);

int A_MPI_File_seek(A_MPI_File fh,A_MPI_Offset offset,int whence)
{
#ifdef DEBUG
printf("entre : A_MPI_File_seek\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;


int ret_tmp= LOCAL_MPI_File_seek( fh_tmp, offset_tmp, whence);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_seek\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_seek(R_MPI_File fh,R_MPI_Offset offset,int whence)
{
#ifdef DEBUG
printf("entre : R_MPI_File_seek\n");
#endif
int ret_tmp= LOCAL_MPI_File_seek( fh, offset, whence);
#ifdef DEBUG
printf("sort : R_MPI_File_seek\n");
#endif
return ret_tmp;
}
int MPI_File_get_position(A_MPI_File fh,A_MPI_Offset * offset);
int (*LOCAL_MPI_File_get_position)(R_MPI_File,R_MPI_Offset *);

__asm__(
".global CCMPI_File_get_position\n"
".weak MPI_File_get_position\n"
".set MPI_File_get_position,CCMPI_File_get_position\n"
".extern in_w\n"
".extern A_MPI_File_get_position\n"
".extern R_MPI_File_get_position\n"
".type CCMPI_File_get_position,@function\n"
".text\n"
"CCMPI_File_get_position:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_position\n"
"jmp *A_MPI_File_get_position@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_position:\n"
"jmp *R_MPI_File_get_position@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_position(A_MPI_File fh,A_MPI_Offset * offset)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_position\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset  offset_ltmp;
R_MPI_Offset * offset_tmp=&offset_ltmp;
int ret_tmp= LOCAL_MPI_File_get_position( fh_tmp, offset_tmp);
*offset= (A_MPI_Offset ) *offset_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_position\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_position(R_MPI_File fh,R_MPI_Offset * offset)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_position\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_position( fh, offset);
#ifdef DEBUG
printf("sort : R_MPI_File_get_position\n");
#endif
return ret_tmp;
}
int MPI_File_get_byte_offset(A_MPI_File fh,A_MPI_Offset offset,A_MPI_Offset * disp);
int (*LOCAL_MPI_File_get_byte_offset)(R_MPI_File,R_MPI_Offset,R_MPI_Offset *);

__asm__(
".global CCMPI_File_get_byte_offset\n"
".weak MPI_File_get_byte_offset\n"
".set MPI_File_get_byte_offset,CCMPI_File_get_byte_offset\n"
".extern in_w\n"
".extern A_MPI_File_get_byte_offset\n"
".extern R_MPI_File_get_byte_offset\n"
".type CCMPI_File_get_byte_offset,@function\n"
".text\n"
"CCMPI_File_get_byte_offset:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_byte_offset\n"
"jmp *A_MPI_File_get_byte_offset@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_byte_offset:\n"
"jmp *R_MPI_File_get_byte_offset@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_byte_offset(A_MPI_File fh,A_MPI_Offset offset,A_MPI_Offset * disp)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_byte_offset\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
R_MPI_Offset  disp_ltmp;
R_MPI_Offset * disp_tmp=&disp_ltmp;
int ret_tmp= LOCAL_MPI_File_get_byte_offset( fh_tmp, offset_tmp, disp_tmp);
*disp= (A_MPI_Offset ) *disp_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_byte_offset\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_byte_offset(R_MPI_File fh,R_MPI_Offset offset,R_MPI_Offset * disp)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_byte_offset\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_byte_offset( fh, offset, disp);
#ifdef DEBUG
printf("sort : R_MPI_File_get_byte_offset\n");
#endif
return ret_tmp;
}
int MPI_File_read_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_shared)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_shared\n"
".weak MPI_File_read_shared\n"
".set MPI_File_read_shared,CCMPI_File_read_shared\n"
".extern in_w\n"
".extern A_MPI_File_read_shared\n"
".extern R_MPI_File_read_shared\n"
".type CCMPI_File_read_shared,@function\n"
".text\n"
"CCMPI_File_read_shared:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_shared\n"
"jmp *A_MPI_File_read_shared@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_shared:\n"
"jmp *R_MPI_File_read_shared@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_shared\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_shared( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_shared\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_shared(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_shared\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_shared( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_shared\n");
#endif
return ret_tmp;
}
int MPI_File_write_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_shared)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_shared\n"
".weak MPI_File_write_shared\n"
".set MPI_File_write_shared,CCMPI_File_write_shared\n"
".extern in_w\n"
".extern A_MPI_File_write_shared\n"
".extern R_MPI_File_write_shared\n"
".type CCMPI_File_write_shared,@function\n"
".text\n"
"CCMPI_File_write_shared:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_shared\n"
"jmp *A_MPI_File_write_shared@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_shared:\n"
"jmp *R_MPI_File_write_shared@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_shared\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_shared( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_shared\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_shared(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_shared\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_shared( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_shared\n");
#endif
return ret_tmp;
}
int MPI_File_iread_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iread_shared)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iread_shared\n"
".weak MPI_File_iread_shared\n"
".set MPI_File_iread_shared,CCMPI_File_iread_shared\n"
".extern in_w\n"
".extern A_MPI_File_iread_shared\n"
".extern R_MPI_File_iread_shared\n"
".type CCMPI_File_iread_shared,@function\n"
".text\n"
"CCMPI_File_iread_shared:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iread_shared\n"
"jmp *A_MPI_File_iread_shared@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iread_shared:\n"
"jmp *R_MPI_File_iread_shared@GOTPCREL(%rip)\n"

);

int A_MPI_File_iread_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iread_shared\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iread_shared( fh_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iread_shared\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iread_shared(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iread_shared\n");
#endif
int ret_tmp= LOCAL_MPI_File_iread_shared( fh, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iread_shared\n");
#endif
return ret_tmp;
}
int MPI_File_iwrite_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iwrite_shared)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iwrite_shared\n"
".weak MPI_File_iwrite_shared\n"
".set MPI_File_iwrite_shared,CCMPI_File_iwrite_shared\n"
".extern in_w\n"
".extern A_MPI_File_iwrite_shared\n"
".extern R_MPI_File_iwrite_shared\n"
".type CCMPI_File_iwrite_shared,@function\n"
".text\n"
"CCMPI_File_iwrite_shared:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iwrite_shared\n"
"jmp *A_MPI_File_iwrite_shared@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iwrite_shared:\n"
"jmp *R_MPI_File_iwrite_shared@GOTPCREL(%rip)\n"

);

int A_MPI_File_iwrite_shared(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iwrite_shared\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iwrite_shared( fh_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iwrite_shared\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iwrite_shared(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iwrite_shared\n");
#endif
int ret_tmp= LOCAL_MPI_File_iwrite_shared( fh, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iwrite_shared\n");
#endif
return ret_tmp;
}
int MPI_File_read_ordered(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_ordered)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_ordered\n"
".weak MPI_File_read_ordered\n"
".set MPI_File_read_ordered,CCMPI_File_read_ordered\n"
".extern in_w\n"
".extern A_MPI_File_read_ordered\n"
".extern R_MPI_File_read_ordered\n"
".type CCMPI_File_read_ordered,@function\n"
".text\n"
"CCMPI_File_read_ordered:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_ordered\n"
"jmp *A_MPI_File_read_ordered@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_ordered:\n"
"jmp *R_MPI_File_read_ordered@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_ordered(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_ordered\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_ordered( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_ordered\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_ordered(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_ordered\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_ordered( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_ordered\n");
#endif
return ret_tmp;
}
int MPI_File_write_ordered(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_ordered)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_ordered\n"
".weak MPI_File_write_ordered\n"
".set MPI_File_write_ordered,CCMPI_File_write_ordered\n"
".extern in_w\n"
".extern A_MPI_File_write_ordered\n"
".extern R_MPI_File_write_ordered\n"
".type CCMPI_File_write_ordered,@function\n"
".text\n"
"CCMPI_File_write_ordered:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_ordered\n"
"jmp *A_MPI_File_write_ordered@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_ordered:\n"
"jmp *R_MPI_File_write_ordered@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_ordered(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_ordered\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_ordered( fh_tmp, buf_tmp, count, datatype_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_ordered\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_ordered(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_ordered\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_ordered( fh, buf, count, datatype, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_ordered\n");
#endif
return ret_tmp;
}
int MPI_File_seek_shared(A_MPI_File fh,A_MPI_Offset offset,int whence);
int (*LOCAL_MPI_File_seek_shared)(R_MPI_File,R_MPI_Offset,int);

__asm__(
".global CCMPI_File_seek_shared\n"
".weak MPI_File_seek_shared\n"
".set MPI_File_seek_shared,CCMPI_File_seek_shared\n"
".extern in_w\n"
".extern A_MPI_File_seek_shared\n"
".extern R_MPI_File_seek_shared\n"
".type CCMPI_File_seek_shared,@function\n"
".text\n"
"CCMPI_File_seek_shared:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_seek_shared\n"
"jmp *A_MPI_File_seek_shared@GOTPCREL(%rip)\n"
"inwrap_MPI_File_seek_shared:\n"
"jmp *R_MPI_File_seek_shared@GOTPCREL(%rip)\n"

);

int A_MPI_File_seek_shared(A_MPI_File fh,A_MPI_Offset offset,int whence)
{
#ifdef DEBUG
printf("entre : A_MPI_File_seek_shared\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;


int ret_tmp= LOCAL_MPI_File_seek_shared( fh_tmp, offset_tmp, whence);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_seek_shared\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_seek_shared(R_MPI_File fh,R_MPI_Offset offset,int whence)
{
#ifdef DEBUG
printf("entre : R_MPI_File_seek_shared\n");
#endif
int ret_tmp= LOCAL_MPI_File_seek_shared( fh, offset, whence);
#ifdef DEBUG
printf("sort : R_MPI_File_seek_shared\n");
#endif
return ret_tmp;
}
int MPI_File_get_position_shared(A_MPI_File fh,A_MPI_Offset * offset);
int (*LOCAL_MPI_File_get_position_shared)(R_MPI_File,R_MPI_Offset *);

__asm__(
".global CCMPI_File_get_position_shared\n"
".weak MPI_File_get_position_shared\n"
".set MPI_File_get_position_shared,CCMPI_File_get_position_shared\n"
".extern in_w\n"
".extern A_MPI_File_get_position_shared\n"
".extern R_MPI_File_get_position_shared\n"
".type CCMPI_File_get_position_shared,@function\n"
".text\n"
"CCMPI_File_get_position_shared:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_position_shared\n"
"jmp *A_MPI_File_get_position_shared@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_position_shared:\n"
"jmp *R_MPI_File_get_position_shared@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_position_shared(A_MPI_File fh,A_MPI_Offset * offset)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_position_shared\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset  offset_ltmp;
R_MPI_Offset * offset_tmp=&offset_ltmp;
int ret_tmp= LOCAL_MPI_File_get_position_shared( fh_tmp, offset_tmp);
*offset= (A_MPI_Offset ) *offset_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_position_shared\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_position_shared(R_MPI_File fh,R_MPI_Offset * offset)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_position_shared\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_position_shared( fh, offset);
#ifdef DEBUG
printf("sort : R_MPI_File_get_position_shared\n");
#endif
return ret_tmp;
}
int MPI_File_read_at_all_begin(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype);
int (*LOCAL_MPI_File_read_at_all_begin)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype);

__asm__(
".global CCMPI_File_read_at_all_begin\n"
".weak MPI_File_read_at_all_begin\n"
".set MPI_File_read_at_all_begin,CCMPI_File_read_at_all_begin\n"
".extern in_w\n"
".extern A_MPI_File_read_at_all_begin\n"
".extern R_MPI_File_read_at_all_begin\n"
".type CCMPI_File_read_at_all_begin,@function\n"
".text\n"
"CCMPI_File_read_at_all_begin:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_at_all_begin\n"
"jmp *A_MPI_File_read_at_all_begin@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_at_all_begin:\n"
"jmp *R_MPI_File_read_at_all_begin@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_at_all_begin(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_at_all_begin\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int ret_tmp= LOCAL_MPI_File_read_at_all_begin( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_at_all_begin\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_at_all_begin(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_at_all_begin\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_at_all_begin( fh, offset, buf, count, datatype);
#ifdef DEBUG
printf("sort : R_MPI_File_read_at_all_begin\n");
#endif
return ret_tmp;
}
int MPI_File_read_at_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_at_all_end)(R_MPI_File,void *,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_at_all_end\n"
".weak MPI_File_read_at_all_end\n"
".set MPI_File_read_at_all_end,CCMPI_File_read_at_all_end\n"
".extern in_w\n"
".extern A_MPI_File_read_at_all_end\n"
".extern R_MPI_File_read_at_all_end\n"
".type CCMPI_File_read_at_all_end,@function\n"
".text\n"
"CCMPI_File_read_at_all_end:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_at_all_end\n"
"jmp *A_MPI_File_read_at_all_end@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_at_all_end:\n"
"jmp *R_MPI_File_read_at_all_end@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_at_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_at_all_end\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_at_all_end( fh_tmp, buf_tmp, status_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_at_all_end\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_at_all_end(R_MPI_File fh,void * buf,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_at_all_end\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_at_all_end( fh, buf, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_at_all_end\n");
#endif
return ret_tmp;
}
int MPI_File_write_at_all_begin(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype);
int (*LOCAL_MPI_File_write_at_all_begin)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype);

__asm__(
".global CCMPI_File_write_at_all_begin\n"
".weak MPI_File_write_at_all_begin\n"
".set MPI_File_write_at_all_begin,CCMPI_File_write_at_all_begin\n"
".extern in_w\n"
".extern A_MPI_File_write_at_all_begin\n"
".extern R_MPI_File_write_at_all_begin\n"
".type CCMPI_File_write_at_all_begin,@function\n"
".text\n"
"CCMPI_File_write_at_all_begin:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_at_all_begin\n"
"jmp *A_MPI_File_write_at_all_begin@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_at_all_begin:\n"
"jmp *R_MPI_File_write_at_all_begin@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_at_all_begin(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_at_all_begin\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int ret_tmp= LOCAL_MPI_File_write_at_all_begin( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_at_all_begin\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_at_all_begin(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_at_all_begin\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_at_all_begin( fh, offset, buf, count, datatype);
#ifdef DEBUG
printf("sort : R_MPI_File_write_at_all_begin\n");
#endif
return ret_tmp;
}
int MPI_File_write_at_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_at_all_end)(R_MPI_File,void *,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_at_all_end\n"
".weak MPI_File_write_at_all_end\n"
".set MPI_File_write_at_all_end,CCMPI_File_write_at_all_end\n"
".extern in_w\n"
".extern A_MPI_File_write_at_all_end\n"
".extern R_MPI_File_write_at_all_end\n"
".type CCMPI_File_write_at_all_end,@function\n"
".text\n"
"CCMPI_File_write_at_all_end:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_at_all_end\n"
"jmp *A_MPI_File_write_at_all_end@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_at_all_end:\n"
"jmp *R_MPI_File_write_at_all_end@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_at_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_at_all_end\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_at_all_end( fh_tmp, buf_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_at_all_end\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_at_all_end(R_MPI_File fh,void * buf,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_at_all_end\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_at_all_end( fh, buf, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_at_all_end\n");
#endif
return ret_tmp;
}
int MPI_File_read_all_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype);
int (*LOCAL_MPI_File_read_all_begin)(R_MPI_File,void *,int,R_MPI_Datatype);

__asm__(
".global CCMPI_File_read_all_begin\n"
".weak MPI_File_read_all_begin\n"
".set MPI_File_read_all_begin,CCMPI_File_read_all_begin\n"
".extern in_w\n"
".extern A_MPI_File_read_all_begin\n"
".extern R_MPI_File_read_all_begin\n"
".type CCMPI_File_read_all_begin,@function\n"
".text\n"
"CCMPI_File_read_all_begin:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_all_begin\n"
"jmp *A_MPI_File_read_all_begin@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_all_begin:\n"
"jmp *R_MPI_File_read_all_begin@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_all_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_all_begin\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int ret_tmp= LOCAL_MPI_File_read_all_begin( fh_tmp, buf_tmp, count, datatype_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_all_begin\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_all_begin(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_all_begin\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_all_begin( fh, buf, count, datatype);
#ifdef DEBUG
printf("sort : R_MPI_File_read_all_begin\n");
#endif
return ret_tmp;
}
int MPI_File_read_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_all_end)(R_MPI_File,void *,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_all_end\n"
".weak MPI_File_read_all_end\n"
".set MPI_File_read_all_end,CCMPI_File_read_all_end\n"
".extern in_w\n"
".extern A_MPI_File_read_all_end\n"
".extern R_MPI_File_read_all_end\n"
".type CCMPI_File_read_all_end,@function\n"
".text\n"
"CCMPI_File_read_all_end:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_all_end\n"
"jmp *A_MPI_File_read_all_end@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_all_end:\n"
"jmp *R_MPI_File_read_all_end@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_all_end\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_all_end( fh_tmp, buf_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_all_end\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_all_end(R_MPI_File fh,void * buf,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_all_end\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_all_end( fh, buf, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_all_end\n");
#endif
return ret_tmp;
}
int MPI_File_write_all_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype);
int (*LOCAL_MPI_File_write_all_begin)(R_MPI_File,void *,int,R_MPI_Datatype);

__asm__(
".global CCMPI_File_write_all_begin\n"
".weak MPI_File_write_all_begin\n"
".set MPI_File_write_all_begin,CCMPI_File_write_all_begin\n"
".extern in_w\n"
".extern A_MPI_File_write_all_begin\n"
".extern R_MPI_File_write_all_begin\n"
".type CCMPI_File_write_all_begin,@function\n"
".text\n"
"CCMPI_File_write_all_begin:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_all_begin\n"
"jmp *A_MPI_File_write_all_begin@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_all_begin:\n"
"jmp *R_MPI_File_write_all_begin@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_all_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_all_begin\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int ret_tmp= LOCAL_MPI_File_write_all_begin( fh_tmp, buf_tmp, count, datatype_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_all_begin\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_all_begin(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_all_begin\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_all_begin( fh, buf, count, datatype);
#ifdef DEBUG
printf("sort : R_MPI_File_write_all_begin\n");
#endif
return ret_tmp;
}
int MPI_File_write_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_all_end)(R_MPI_File,void *,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_all_end\n"
".weak MPI_File_write_all_end\n"
".set MPI_File_write_all_end,CCMPI_File_write_all_end\n"
".extern in_w\n"
".extern A_MPI_File_write_all_end\n"
".extern R_MPI_File_write_all_end\n"
".type CCMPI_File_write_all_end,@function\n"
".text\n"
"CCMPI_File_write_all_end:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_all_end\n"
"jmp *A_MPI_File_write_all_end@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_all_end:\n"
"jmp *R_MPI_File_write_all_end@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_all_end(A_MPI_File fh,void * buf,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_all_end\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_all_end( fh_tmp, buf_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_all_end\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_all_end(R_MPI_File fh,void * buf,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_all_end\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_all_end( fh, buf, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_all_end\n");
#endif
return ret_tmp;
}
int MPI_File_read_ordered_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype);
int (*LOCAL_MPI_File_read_ordered_begin)(R_MPI_File,void *,int,R_MPI_Datatype);

__asm__(
".global CCMPI_File_read_ordered_begin\n"
".weak MPI_File_read_ordered_begin\n"
".set MPI_File_read_ordered_begin,CCMPI_File_read_ordered_begin\n"
".extern in_w\n"
".extern A_MPI_File_read_ordered_begin\n"
".extern R_MPI_File_read_ordered_begin\n"
".type CCMPI_File_read_ordered_begin,@function\n"
".text\n"
"CCMPI_File_read_ordered_begin:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_ordered_begin\n"
"jmp *A_MPI_File_read_ordered_begin@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_ordered_begin:\n"
"jmp *R_MPI_File_read_ordered_begin@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_ordered_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_ordered_begin\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int ret_tmp= LOCAL_MPI_File_read_ordered_begin( fh_tmp, buf_tmp, count, datatype_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_ordered_begin\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_ordered_begin(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_ordered_begin\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_ordered_begin( fh, buf, count, datatype);
#ifdef DEBUG
printf("sort : R_MPI_File_read_ordered_begin\n");
#endif
return ret_tmp;
}
int MPI_File_read_ordered_end(A_MPI_File fh,void * buf,A_MPI_Status * status);
int (*LOCAL_MPI_File_read_ordered_end)(R_MPI_File,void *,R_MPI_Status *);

__asm__(
".global CCMPI_File_read_ordered_end\n"
".weak MPI_File_read_ordered_end\n"
".set MPI_File_read_ordered_end,CCMPI_File_read_ordered_end\n"
".extern in_w\n"
".extern A_MPI_File_read_ordered_end\n"
".extern R_MPI_File_read_ordered_end\n"
".type CCMPI_File_read_ordered_end,@function\n"
".text\n"
"CCMPI_File_read_ordered_end:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_read_ordered_end\n"
"jmp *A_MPI_File_read_ordered_end@GOTPCREL(%rip)\n"
"inwrap_MPI_File_read_ordered_end:\n"
"jmp *R_MPI_File_read_ordered_end@GOTPCREL(%rip)\n"

);

int A_MPI_File_read_ordered_end(A_MPI_File fh,void * buf,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_read_ordered_end\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_read_ordered_end( fh_tmp, buf_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_read_ordered_end\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_read_ordered_end(R_MPI_File fh,void * buf,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_read_ordered_end\n");
#endif
int ret_tmp= LOCAL_MPI_File_read_ordered_end( fh, buf, status);
#ifdef DEBUG
printf("sort : R_MPI_File_read_ordered_end\n");
#endif
return ret_tmp;
}
int MPI_File_write_ordered_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype);
int (*LOCAL_MPI_File_write_ordered_begin)(R_MPI_File,void *,int,R_MPI_Datatype);

__asm__(
".global CCMPI_File_write_ordered_begin\n"
".weak MPI_File_write_ordered_begin\n"
".set MPI_File_write_ordered_begin,CCMPI_File_write_ordered_begin\n"
".extern in_w\n"
".extern A_MPI_File_write_ordered_begin\n"
".extern R_MPI_File_write_ordered_begin\n"
".type CCMPI_File_write_ordered_begin,@function\n"
".text\n"
"CCMPI_File_write_ordered_begin:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_ordered_begin\n"
"jmp *A_MPI_File_write_ordered_begin@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_ordered_begin:\n"
"jmp *R_MPI_File_write_ordered_begin@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_ordered_begin(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_ordered_begin\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int ret_tmp= LOCAL_MPI_File_write_ordered_begin( fh_tmp, buf_tmp, count, datatype_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_ordered_begin\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_ordered_begin(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_ordered_begin\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_ordered_begin( fh, buf, count, datatype);
#ifdef DEBUG
printf("sort : R_MPI_File_write_ordered_begin\n");
#endif
return ret_tmp;
}
int MPI_File_write_ordered_end(A_MPI_File fh,void * buf,A_MPI_Status * status);
int (*LOCAL_MPI_File_write_ordered_end)(R_MPI_File,void *,R_MPI_Status *);

__asm__(
".global CCMPI_File_write_ordered_end\n"
".weak MPI_File_write_ordered_end\n"
".set MPI_File_write_ordered_end,CCMPI_File_write_ordered_end\n"
".extern in_w\n"
".extern A_MPI_File_write_ordered_end\n"
".extern R_MPI_File_write_ordered_end\n"
".type CCMPI_File_write_ordered_end,@function\n"
".text\n"
"CCMPI_File_write_ordered_end:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_write_ordered_end\n"
"jmp *A_MPI_File_write_ordered_end@GOTPCREL(%rip)\n"
"inwrap_MPI_File_write_ordered_end:\n"
"jmp *R_MPI_File_write_ordered_end@GOTPCREL(%rip)\n"

);

int A_MPI_File_write_ordered_end(A_MPI_File fh,void * buf,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_File_write_ordered_end\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);
R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_File_write_ordered_end( fh_tmp, buf_tmp, status_tmp);
file_conv_r2a(&fh,&fh_tmp);
status_prt_conv_r2a(&status,&status_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_write_ordered_end\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_write_ordered_end(R_MPI_File fh,void * buf,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_File_write_ordered_end\n");
#endif
int ret_tmp= LOCAL_MPI_File_write_ordered_end( fh, buf, status);
#ifdef DEBUG
printf("sort : R_MPI_File_write_ordered_end\n");
#endif
return ret_tmp;
}
int MPI_File_get_type_extent(A_MPI_File fh,A_MPI_Datatype datatype,A_MPI_Aint * extent);
int (*LOCAL_MPI_File_get_type_extent)(R_MPI_File,R_MPI_Datatype,R_MPI_Aint *);

__asm__(
".global CCMPI_File_get_type_extent\n"
".weak MPI_File_get_type_extent\n"
".set MPI_File_get_type_extent,CCMPI_File_get_type_extent\n"
".extern in_w\n"
".extern A_MPI_File_get_type_extent\n"
".extern R_MPI_File_get_type_extent\n"
".type CCMPI_File_get_type_extent,@function\n"
".text\n"
"CCMPI_File_get_type_extent:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_type_extent\n"
"jmp *A_MPI_File_get_type_extent@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_type_extent:\n"
"jmp *R_MPI_File_get_type_extent@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_type_extent(A_MPI_File fh,A_MPI_Datatype datatype,A_MPI_Aint * extent)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_type_extent\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Aint  extent_ltmp;
R_MPI_Aint * extent_tmp=&extent_ltmp;
int ret_tmp= LOCAL_MPI_File_get_type_extent( fh_tmp, datatype_tmp, extent_tmp);
*extent= (A_MPI_Aint ) *extent_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_type_extent\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_type_extent(R_MPI_File fh,R_MPI_Datatype datatype,R_MPI_Aint * extent)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_type_extent\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_type_extent( fh, datatype, extent);
#ifdef DEBUG
printf("sort : R_MPI_File_get_type_extent\n");
#endif
return ret_tmp;
}
int MPI_Register_datarep(char * datarep,A_MPI_Datarep_conversion_function * read_conversion_fn,A_MPI_Datarep_conversion_function * write_conversion_fn,A_MPI_Datarep_extent_function * dtype_file_extent_fn,void * extra_state);
int (*LOCAL_MPI_Register_datarep)(char *,R_MPI_Datarep_conversion_function *,R_MPI_Datarep_conversion_function *,R_MPI_Datarep_extent_function *,void *);

__asm__(
".global CCMPI_Register_datarep\n"
".weak MPI_Register_datarep\n"
".set MPI_Register_datarep,CCMPI_Register_datarep\n"
".extern in_w\n"
".extern A_MPI_Register_datarep\n"
".extern R_MPI_Register_datarep\n"
".type CCMPI_Register_datarep,@function\n"
".text\n"
"CCMPI_Register_datarep:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Register_datarep\n"
"jmp *A_MPI_Register_datarep@GOTPCREL(%rip)\n"
"inwrap_MPI_Register_datarep:\n"
"jmp *R_MPI_Register_datarep@GOTPCREL(%rip)\n"

);

int A_MPI_Register_datarep(char * datarep,A_MPI_Datarep_conversion_function * read_conversion_fn,A_MPI_Datarep_conversion_function * write_conversion_fn,A_MPI_Datarep_extent_function * dtype_file_extent_fn,void * extra_state)
{
#ifdef DEBUG
printf("entre : A_MPI_Register_datarep\n");
#endif
in_w=1;




ptr_read_conversion_fn=(A_MPI_Datarep_conversion_function *)read_conversion_fn;

ptr_write_conversion_fn=(A_MPI_Datarep_conversion_function *)write_conversion_fn;

ptr_extent_fn=(A_MPI_Datarep_extent_function *)dtype_file_extent_fn;
void * extra_state_tmp;
buffer_conv_a2r(&extra_state,&extra_state_tmp);
int ret_tmp= LOCAL_MPI_Register_datarep( datarep, (R_MPI_Datarep_conversion_function *)wrapper_datarep_read_conversion_fn, (R_MPI_Datarep_conversion_function *)wrapper_datarep_write_conversion_fn, (R_MPI_Datarep_extent_function *)wrapper_datarep_extent_fn, extra_state_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Register_datarep\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Register_datarep(char * datarep,R_MPI_Datarep_conversion_function * read_conversion_fn,R_MPI_Datarep_conversion_function * write_conversion_fn,R_MPI_Datarep_extent_function * dtype_file_extent_fn,void * extra_state)
{
#ifdef DEBUG
printf("entre : R_MPI_Register_datarep\n");
#endif
int ret_tmp= LOCAL_MPI_Register_datarep( datarep, read_conversion_fn, write_conversion_fn, dtype_file_extent_fn, extra_state);
#ifdef DEBUG
printf("sort : R_MPI_Register_datarep\n");
#endif
return ret_tmp;
}
int MPI_File_set_atomicity(A_MPI_File fh,int flag);
int (*LOCAL_MPI_File_set_atomicity)(R_MPI_File,int);

__asm__(
".global CCMPI_File_set_atomicity\n"
".weak MPI_File_set_atomicity\n"
".set MPI_File_set_atomicity,CCMPI_File_set_atomicity\n"
".extern in_w\n"
".extern A_MPI_File_set_atomicity\n"
".extern R_MPI_File_set_atomicity\n"
".type CCMPI_File_set_atomicity,@function\n"
".text\n"
"CCMPI_File_set_atomicity:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_set_atomicity\n"
"jmp *A_MPI_File_set_atomicity@GOTPCREL(%rip)\n"
"inwrap_MPI_File_set_atomicity:\n"
"jmp *R_MPI_File_set_atomicity@GOTPCREL(%rip)\n"

);

int A_MPI_File_set_atomicity(A_MPI_File fh,int flag)
{
#ifdef DEBUG
printf("entre : A_MPI_File_set_atomicity\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);


int ret_tmp= LOCAL_MPI_File_set_atomicity( fh_tmp, flag);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_set_atomicity\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_set_atomicity(R_MPI_File fh,int flag)
{
#ifdef DEBUG
printf("entre : R_MPI_File_set_atomicity\n");
#endif
int ret_tmp= LOCAL_MPI_File_set_atomicity( fh, flag);
#ifdef DEBUG
printf("sort : R_MPI_File_set_atomicity\n");
#endif
return ret_tmp;
}
int MPI_File_get_atomicity(A_MPI_File fh,int * flag);
int (*LOCAL_MPI_File_get_atomicity)(R_MPI_File,int *);

__asm__(
".global CCMPI_File_get_atomicity\n"
".weak MPI_File_get_atomicity\n"
".set MPI_File_get_atomicity,CCMPI_File_get_atomicity\n"
".extern in_w\n"
".extern A_MPI_File_get_atomicity\n"
".extern R_MPI_File_get_atomicity\n"
".type CCMPI_File_get_atomicity,@function\n"
".text\n"
"CCMPI_File_get_atomicity:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_get_atomicity\n"
"jmp *A_MPI_File_get_atomicity@GOTPCREL(%rip)\n"
"inwrap_MPI_File_get_atomicity:\n"
"jmp *R_MPI_File_get_atomicity@GOTPCREL(%rip)\n"

);

int A_MPI_File_get_atomicity(A_MPI_File fh,int * flag)
{
#ifdef DEBUG
printf("entre : A_MPI_File_get_atomicity\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);

int ret_tmp= LOCAL_MPI_File_get_atomicity( fh_tmp, flag);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_get_atomicity\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_get_atomicity(R_MPI_File fh,int * flag)
{
#ifdef DEBUG
printf("entre : R_MPI_File_get_atomicity\n");
#endif
int ret_tmp= LOCAL_MPI_File_get_atomicity( fh, flag);
#ifdef DEBUG
printf("sort : R_MPI_File_get_atomicity\n");
#endif
return ret_tmp;
}
int MPI_File_sync(A_MPI_File fh);
int (*LOCAL_MPI_File_sync)(R_MPI_File);

__asm__(
".global CCMPI_File_sync\n"
".weak MPI_File_sync\n"
".set MPI_File_sync,CCMPI_File_sync\n"
".extern in_w\n"
".extern A_MPI_File_sync\n"
".extern R_MPI_File_sync\n"
".type CCMPI_File_sync,@function\n"
".text\n"
"CCMPI_File_sync:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_sync\n"
"jmp *A_MPI_File_sync@GOTPCREL(%rip)\n"
"inwrap_MPI_File_sync:\n"
"jmp *R_MPI_File_sync@GOTPCREL(%rip)\n"

);

int A_MPI_File_sync(A_MPI_File fh)
{
#ifdef DEBUG
printf("entre : A_MPI_File_sync\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
int ret_tmp= LOCAL_MPI_File_sync( fh_tmp);
file_conv_r2a(&fh,&fh_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_sync\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_sync(R_MPI_File fh)
{
#ifdef DEBUG
printf("entre : R_MPI_File_sync\n");
#endif
int ret_tmp= LOCAL_MPI_File_sync( fh);
#ifdef DEBUG
printf("sort : R_MPI_File_sync\n");
#endif
return ret_tmp;
}
int MPI_T_finalize( );
int (*LOCAL_MPI_T_finalize)();

__asm__(
".global CCMPI_T_finalize\n"
".weak MPI_T_finalize\n"
".set MPI_T_finalize,CCMPI_T_finalize\n"
".extern in_w\n"
".extern A_MPI_T_finalize\n"
".extern R_MPI_T_finalize\n"
".type CCMPI_T_finalize,@function\n"
".text\n"
"CCMPI_T_finalize:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_finalize\n"
"jmp *A_MPI_T_finalize@GOTPCREL(%rip)\n"
"inwrap_MPI_T_finalize:\n"
"jmp *R_MPI_T_finalize@GOTPCREL(%rip)\n"

);

int A_MPI_T_finalize( )
{
#ifdef DEBUG
printf("entre : A_MPI_T_finalize\n");
#endif
in_w=1;

int ret_tmp= LOCAL_MPI_T_finalize( );
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_finalize\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_finalize( )
{
#ifdef DEBUG
printf("entre : R_MPI_T_finalize\n");
#endif
int ret_tmp= LOCAL_MPI_T_finalize( );
#ifdef DEBUG
printf("sort : R_MPI_T_finalize\n");
#endif
return ret_tmp;
}
double MPI_Wtime( );
double (*LOCAL_MPI_Wtime)();

__asm__(
".global CCMPI_Wtime\n"
".weak MPI_Wtime\n"
".set MPI_Wtime,CCMPI_Wtime\n"
".extern in_w\n"
".extern A_MPI_Wtime\n"
".extern R_MPI_Wtime\n"
".type CCMPI_Wtime,@function\n"
".text\n"
"CCMPI_Wtime:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Wtime\n"
"jmp *A_MPI_Wtime@GOTPCREL(%rip)\n"
"inwrap_MPI_Wtime:\n"
"jmp *R_MPI_Wtime@GOTPCREL(%rip)\n"

);

double A_MPI_Wtime( )
{
#ifdef DEBUG
printf("entre : A_MPI_Wtime\n");
#endif
in_w=1;

double ret_tmp= LOCAL_MPI_Wtime( );
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Wtime\n");
#endif
return ret_tmp;
}
double R_MPI_Wtime( )
{
#ifdef DEBUG
printf("entre : R_MPI_Wtime\n");
#endif
double ret_tmp= LOCAL_MPI_Wtime( );
#ifdef DEBUG
printf("sort : R_MPI_Wtime\n");
#endif
return ret_tmp;
}
double MPI_Wtick( );
double (*LOCAL_MPI_Wtick)();

__asm__(
".global CCMPI_Wtick\n"
".weak MPI_Wtick\n"
".set MPI_Wtick,CCMPI_Wtick\n"
".extern in_w\n"
".extern A_MPI_Wtick\n"
".extern R_MPI_Wtick\n"
".type CCMPI_Wtick,@function\n"
".text\n"
"CCMPI_Wtick:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Wtick\n"
"jmp *A_MPI_Wtick@GOTPCREL(%rip)\n"
"inwrap_MPI_Wtick:\n"
"jmp *R_MPI_Wtick@GOTPCREL(%rip)\n"

);

double A_MPI_Wtick( )
{
#ifdef DEBUG
printf("entre : A_MPI_Wtick\n");
#endif
in_w=1;

double ret_tmp= LOCAL_MPI_Wtick( );
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Wtick\n");
#endif
return ret_tmp;
}
double R_MPI_Wtick( )
{
#ifdef DEBUG
printf("entre : R_MPI_Wtick\n");
#endif
double ret_tmp= LOCAL_MPI_Wtick( );
#ifdef DEBUG
printf("sort : R_MPI_Wtick\n");
#endif
return ret_tmp;
}
int MPI_Finalize( );
int (*LOCAL_MPI_Finalize)();

__asm__(
".global CCMPI_Finalize\n"
".weak MPI_Finalize\n"
".set MPI_Finalize,CCMPI_Finalize\n"
".extern in_w\n"
".extern A_MPI_Finalize\n"
".extern R_MPI_Finalize\n"
".type CCMPI_Finalize,@function\n"
".text\n"
"CCMPI_Finalize:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Finalize\n"
"jmp *A_MPI_Finalize@GOTPCREL(%rip)\n"
"inwrap_MPI_Finalize:\n"
"jmp *R_MPI_Finalize@GOTPCREL(%rip)\n"

);

int A_MPI_Finalize( )
{
#ifdef DEBUG
printf("entre : A_MPI_Finalize\n");
#endif
in_w=1;

int ret_tmp= LOCAL_MPI_Finalize( );
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Finalize\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Finalize( )
{
#ifdef DEBUG
printf("entre : R_MPI_Finalize\n");
#endif
int ret_tmp= LOCAL_MPI_Finalize( );
#ifdef DEBUG
printf("sort : R_MPI_Finalize\n");
#endif
return ret_tmp;
}
int MPI_Waitany(int count,R_MPI_Request * array_of_requests[],int * indx,A_MPI_Status * status);
int (*LOCAL_MPI_Waitany)(int,R_MPI_Request *,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Waitany\n"
".weak MPI_Waitany\n"
".set MPI_Waitany,CCMPI_Waitany\n"
".extern in_w\n"
".extern A_MPI_Waitany\n"
".extern R_MPI_Waitany\n"
".type CCMPI_Waitany,@function\n"
".text\n"
"CCMPI_Waitany:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Waitany\n"
"jmp *A_MPI_Waitany@GOTPCREL(%rip)\n"
"inwrap_MPI_Waitany:\n"
"jmp *R_MPI_Waitany@GOTPCREL(%rip)\n"

);

int A_MPI_Waitany(int count,A_MPI_Request array_of_requests[],int * indx,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Waitany\n");
#endif
in_w=1;



R_MPI_Request *array_of_requests_tmp = malloc(sizeof(R_MPI_Request)*count);
int i1;
for(i1=0; i1 < count;i1++){
request_tab_conv_a2r(&array_of_requests[i1],&array_of_requests_tmp[i1]);
}

R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Waitany( count, array_of_requests_tmp, indx, status_tmp);
if(ret_tmp == R_MPI_SUCCESS){
 if(array_of_requests_tmp[*indx] == R_MPI_REQUEST_NULL){
request_array_delete(&array_of_requests[*indx],&array_of_requests_tmp[*indx]);
}
}

status_prt_conv_r2a(&status,&status_tmp);
free(array_of_requests_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Waitany\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Waitany(int count,R_MPI_Request array_of_requests[],int * indx,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Waitany\n");
#endif
int ret_tmp= LOCAL_MPI_Waitany( count, array_of_requests, indx, status);
#ifdef DEBUG
printf("sort : R_MPI_Waitany\n");
#endif
return ret_tmp;
}
int MPI_Testany(int count,R_MPI_Request * array_of_requests[],int * indx,int * flag,A_MPI_Status * status);
int (*LOCAL_MPI_Testany)(int,R_MPI_Request *,int *,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Testany\n"
".weak MPI_Testany\n"
".set MPI_Testany,CCMPI_Testany\n"
".extern in_w\n"
".extern A_MPI_Testany\n"
".extern R_MPI_Testany\n"
".type CCMPI_Testany,@function\n"
".text\n"
"CCMPI_Testany:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Testany\n"
"jmp *A_MPI_Testany@GOTPCREL(%rip)\n"
"inwrap_MPI_Testany:\n"
"jmp *R_MPI_Testany@GOTPCREL(%rip)\n"

);

int A_MPI_Testany(int count,A_MPI_Request array_of_requests[],int * indx,int * flag,A_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : A_MPI_Testany\n");
#endif
in_w=1;



R_MPI_Request *array_of_requests_tmp = malloc(sizeof(R_MPI_Request)*count);
int i1;
for(i1=0; i1 < count;i1++){
request_tab_conv_a2r(&array_of_requests[i1],&array_of_requests_tmp[i1]);
}


R_MPI_Status  status_ltmp;
R_MPI_Status * status_tmp=&status_ltmp;
int ret_tmp= LOCAL_MPI_Testany( count, array_of_requests_tmp, indx, flag, status_tmp);
if(ret_tmp == R_MPI_SUCCESS){
if(*flag)
 if(array_of_requests_tmp[*indx] == R_MPI_REQUEST_NULL){
request_array_delete(&array_of_requests[*indx],&array_of_requests_tmp[*indx]);
}
}


status_prt_conv_r2a(&status,&status_tmp);
free(array_of_requests_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Testany\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Testany(int count,R_MPI_Request array_of_requests[],int * indx,int * flag,R_MPI_Status * status)
{
#ifdef DEBUG
printf("entre : R_MPI_Testany\n");
#endif
int ret_tmp= LOCAL_MPI_Testany( count, array_of_requests, indx, flag, status);
#ifdef DEBUG
printf("sort : R_MPI_Testany\n");
#endif
return ret_tmp;
}
int MPI_Waitall(int count,R_MPI_Request * array_of_requests[],R_MPI_Status * array_of_statuses[]);
int (*LOCAL_MPI_Waitall)(int,R_MPI_Request *,R_MPI_Status *);

__asm__(
".global CCMPI_Waitall\n"
".weak MPI_Waitall\n"
".set MPI_Waitall,CCMPI_Waitall\n"
".extern in_w\n"
".extern A_MPI_Waitall\n"
".extern R_MPI_Waitall\n"
".type CCMPI_Waitall,@function\n"
".text\n"
"CCMPI_Waitall:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Waitall\n"
"jmp *A_MPI_Waitall@GOTPCREL(%rip)\n"
"inwrap_MPI_Waitall:\n"
"jmp *R_MPI_Waitall@GOTPCREL(%rip)\n"

);

int A_MPI_Waitall(int count,A_MPI_Request array_of_requests[],A_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : A_MPI_Waitall\n");
#endif
in_w=1;



R_MPI_Request *array_of_requests_tmp = malloc(sizeof(R_MPI_Request)*count);
int i1;
for(i1=0; i1 < count;i1++){
request_tab_conv_a2r(&array_of_requests[i1],&array_of_requests_tmp[i1]);
}
R_MPI_Status *array_of_statuses_tmp=(array_of_statuses==A_MPI_STATUSES_IGNORE?R_MPI_STATUSES_IGNORE:(R_MPI_Status *) malloc(sizeof(R_MPI_Status)*count));
int ret_tmp= LOCAL_MPI_Waitall( count, array_of_requests_tmp, array_of_statuses_tmp);
int i2;
if(ret_tmp == R_MPI_SUCCESS){
for(i2 = 0; i2 < count; i2++){
if(array_of_requests_tmp[i2]==R_MPI_REQUEST_NULL){
request_array_delete(&array_of_requests[i2],&array_of_requests_tmp[i2]);
}
}
}
int i3;
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
{
for(i3=0; i3 < count;i3++){
status_tab_conv_r2a(&array_of_statuses[i3],&array_of_statuses_tmp[i3]);
}
}
free(array_of_requests_tmp);
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
free(array_of_statuses_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Waitall\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Waitall(int count,R_MPI_Request array_of_requests[],R_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : R_MPI_Waitall\n");
#endif
int ret_tmp= LOCAL_MPI_Waitall( count, array_of_requests, array_of_statuses);
#ifdef DEBUG
printf("sort : R_MPI_Waitall\n");
#endif
return ret_tmp;
}
int MPI_Testall(int count,R_MPI_Request * array_of_requests[],int * flag,R_MPI_Status * array_of_statuses[]);
int (*LOCAL_MPI_Testall)(int,R_MPI_Request *,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Testall\n"
".weak MPI_Testall\n"
".set MPI_Testall,CCMPI_Testall\n"
".extern in_w\n"
".extern A_MPI_Testall\n"
".extern R_MPI_Testall\n"
".type CCMPI_Testall,@function\n"
".text\n"
"CCMPI_Testall:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Testall\n"
"jmp *A_MPI_Testall@GOTPCREL(%rip)\n"
"inwrap_MPI_Testall:\n"
"jmp *R_MPI_Testall@GOTPCREL(%rip)\n"

);

int A_MPI_Testall(int count,A_MPI_Request array_of_requests[],int * flag,A_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : A_MPI_Testall\n");
#endif
in_w=1;



R_MPI_Request *array_of_requests_tmp = malloc(sizeof(R_MPI_Request)*count);
int i1;
for(i1=0; i1 < count;i1++){
request_tab_conv_a2r(&array_of_requests[i1],&array_of_requests_tmp[i1]);
}

R_MPI_Status *array_of_statuses_tmp=(array_of_statuses==A_MPI_STATUSES_IGNORE?R_MPI_STATUSES_IGNORE:(R_MPI_Status *) malloc(sizeof(R_MPI_Status)*count));
int ret_tmp= LOCAL_MPI_Testall( count, array_of_requests_tmp, flag, array_of_statuses_tmp);
int i2;
if(ret_tmp == R_MPI_SUCCESS){
if(*flag)
for(i2 = 0; i2 < count; i2++){
if(array_of_requests_tmp[i2]==R_MPI_REQUEST_NULL){
request_array_delete(&array_of_requests[i2],&array_of_requests_tmp[i2]);
}
}
}

int i3;
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
{
for(i3=0; i3 < count;i3++){
status_tab_conv_r2a(&array_of_statuses[i3],&array_of_statuses_tmp[i3]);
}
}
free(array_of_requests_tmp);
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
free(array_of_statuses_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Testall\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Testall(int count,R_MPI_Request array_of_requests[],int * flag,R_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : R_MPI_Testall\n");
#endif
int ret_tmp= LOCAL_MPI_Testall( count, array_of_requests, flag, array_of_statuses);
#ifdef DEBUG
printf("sort : R_MPI_Testall\n");
#endif
return ret_tmp;
}
int MPI_Waitsome(int incount,R_MPI_Request * array_of_requests[],int * outcount,int array_of_indices[],R_MPI_Status * array_of_statuses[]);
int (*LOCAL_MPI_Waitsome)(int,R_MPI_Request *,int *,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Waitsome\n"
".weak MPI_Waitsome\n"
".set MPI_Waitsome,CCMPI_Waitsome\n"
".extern in_w\n"
".extern A_MPI_Waitsome\n"
".extern R_MPI_Waitsome\n"
".type CCMPI_Waitsome,@function\n"
".text\n"
"CCMPI_Waitsome:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Waitsome\n"
"jmp *A_MPI_Waitsome@GOTPCREL(%rip)\n"
"inwrap_MPI_Waitsome:\n"
"jmp *R_MPI_Waitsome@GOTPCREL(%rip)\n"

);

int A_MPI_Waitsome(int incount,A_MPI_Request array_of_requests[],int * outcount,int array_of_indices[],A_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : A_MPI_Waitsome\n");
#endif
in_w=1;



R_MPI_Request *array_of_requests_tmp = malloc(sizeof(R_MPI_Request)*incount);
int i1;
for(i1=0; i1 < incount;i1++){
request_tab_conv_a2r(&array_of_requests[i1],&array_of_requests_tmp[i1]);
}


R_MPI_Status *array_of_statuses_tmp=(array_of_statuses==A_MPI_STATUSES_IGNORE?R_MPI_STATUSES_IGNORE:(R_MPI_Status *) malloc(sizeof(R_MPI_Status)*incount));
int ret_tmp= LOCAL_MPI_Waitsome( incount, array_of_requests_tmp, outcount, array_of_indices, array_of_statuses_tmp);
int i2;
if(ret_tmp == R_MPI_SUCCESS){
for(i2 = 0; i2 < *outcount; i2++){
if(array_of_requests_tmp[array_of_indices[i2]]==R_MPI_REQUEST_NULL){
request_array_delete(&array_of_requests[array_of_indices[i2]],&array_of_requests_tmp[array_of_indices[i2]]);
}
}
}


int i4;
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
{
for(i4=0; i4 < *outcount;i4++){
status_tab_conv_r2a(&array_of_statuses[i4],&array_of_statuses_tmp[i4]);
}
}
free(array_of_requests_tmp);
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
free(array_of_statuses_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Waitsome\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Waitsome(int incount,R_MPI_Request array_of_requests[],int * outcount,int array_of_indices[],R_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : R_MPI_Waitsome\n");
#endif
int ret_tmp= LOCAL_MPI_Waitsome( incount, array_of_requests, outcount, array_of_indices, array_of_statuses);
#ifdef DEBUG
printf("sort : R_MPI_Waitsome\n");
#endif
return ret_tmp;
}
int MPI_Testsome(int incount,R_MPI_Request * array_of_requests[],int * outcount,int array_of_indices[],R_MPI_Status * array_of_statuses[]);
int (*LOCAL_MPI_Testsome)(int,R_MPI_Request *,int *,int *,R_MPI_Status *);

__asm__(
".global CCMPI_Testsome\n"
".weak MPI_Testsome\n"
".set MPI_Testsome,CCMPI_Testsome\n"
".extern in_w\n"
".extern A_MPI_Testsome\n"
".extern R_MPI_Testsome\n"
".type CCMPI_Testsome,@function\n"
".text\n"
"CCMPI_Testsome:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Testsome\n"
"jmp *A_MPI_Testsome@GOTPCREL(%rip)\n"
"inwrap_MPI_Testsome:\n"
"jmp *R_MPI_Testsome@GOTPCREL(%rip)\n"

);

int A_MPI_Testsome(int incount,A_MPI_Request array_of_requests[],int * outcount,int array_of_indices[],A_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : A_MPI_Testsome\n");
#endif
in_w=1;



R_MPI_Request *array_of_requests_tmp = malloc(sizeof(R_MPI_Request)*incount);
int i1;
for(i1=0; i1 < incount;i1++){
request_tab_conv_a2r(&array_of_requests[i1],&array_of_requests_tmp[i1]);
}


R_MPI_Status *array_of_statuses_tmp=(array_of_statuses==A_MPI_STATUSES_IGNORE?R_MPI_STATUSES_IGNORE:(R_MPI_Status *) malloc(sizeof(R_MPI_Status)*incount));
int ret_tmp= LOCAL_MPI_Testsome( incount, array_of_requests_tmp, outcount, array_of_indices, array_of_statuses_tmp);
int i2;
if(ret_tmp == R_MPI_SUCCESS){
for(i2 = 0; i2 < *outcount; i2++){
if(array_of_requests_tmp[array_of_indices[i2]]==R_MPI_REQUEST_NULL){
request_array_delete(&array_of_requests[array_of_indices[i2]],&array_of_requests_tmp[array_of_indices[i2]]);
}
}
}


int i4;
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
{
for(i4=0; i4 < *outcount;i4++){
status_tab_conv_r2a(&array_of_statuses[i4],&array_of_statuses_tmp[i4]);
}
}
free(array_of_requests_tmp);
if (array_of_statuses!=A_MPI_STATUSES_IGNORE)
free(array_of_statuses_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Testsome\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Testsome(int incount,R_MPI_Request array_of_requests[],int * outcount,int array_of_indices[],R_MPI_Status array_of_statuses[])
{
#ifdef DEBUG
printf("entre : R_MPI_Testsome\n");
#endif
int ret_tmp= LOCAL_MPI_Testsome( incount, array_of_requests, outcount, array_of_indices, array_of_statuses);
#ifdef DEBUG
printf("sort : R_MPI_Testsome\n");
#endif
return ret_tmp;
}
int MPI_Startall(int count,R_MPI_Request * array_of_requests[]);
int (*LOCAL_MPI_Startall)(int,R_MPI_Request *);

__asm__(
".global CCMPI_Startall\n"
".weak MPI_Startall\n"
".set MPI_Startall,CCMPI_Startall\n"
".extern in_w\n"
".extern A_MPI_Startall\n"
".extern R_MPI_Startall\n"
".type CCMPI_Startall,@function\n"
".text\n"
"CCMPI_Startall:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Startall\n"
"jmp *A_MPI_Startall@GOTPCREL(%rip)\n"
"inwrap_MPI_Startall:\n"
"jmp *R_MPI_Startall@GOTPCREL(%rip)\n"

);

int A_MPI_Startall(int count,A_MPI_Request array_of_requests[])
{
#ifdef DEBUG
printf("entre : A_MPI_Startall\n");
#endif
in_w=1;



R_MPI_Request *array_of_requests_tmp = malloc(sizeof(R_MPI_Request)*count);
int i1;
for(i1=0; i1 < count;i1++){
request_tab_conv_a2r(&array_of_requests[i1],&array_of_requests_tmp[i1]);
}
int ret_tmp= LOCAL_MPI_Startall( count, array_of_requests_tmp);
free(array_of_requests_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Startall\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Startall(int count,R_MPI_Request array_of_requests[])
{
#ifdef DEBUG
printf("entre : R_MPI_Startall\n");
#endif
int ret_tmp= LOCAL_MPI_Startall( count, array_of_requests);
#ifdef DEBUG
printf("sort : R_MPI_Startall\n");
#endif
return ret_tmp;
}
int MPI_Alltoallw(void * sendbuf,int sendcounts[],int sdispls[],R_MPI_Datatype * sendtypes[],void * recvbuf,int recvcounts[],int rdispls[],R_MPI_Datatype * recvtypes[],A_MPI_Comm comm);
int (*LOCAL_MPI_Alltoallw)(void *,int *,int *,R_MPI_Datatype *,void *,int *,int *,R_MPI_Datatype *,R_MPI_Comm);

__asm__(
".global CCMPI_Alltoallw\n"
".weak MPI_Alltoallw\n"
".set MPI_Alltoallw,CCMPI_Alltoallw\n"
".extern in_w\n"
".extern A_MPI_Alltoallw\n"
".extern R_MPI_Alltoallw\n"
".type CCMPI_Alltoallw,@function\n"
".text\n"
"CCMPI_Alltoallw:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Alltoallw\n"
"jmp *A_MPI_Alltoallw@GOTPCREL(%rip)\n"
"inwrap_MPI_Alltoallw:\n"
"jmp *R_MPI_Alltoallw@GOTPCREL(%rip)\n"

);

int A_MPI_Alltoallw(void * sendbuf,int sendcounts[],int sdispls[],A_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],int rdispls[],A_MPI_Datatype recvtypes[],A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Alltoallw\n");
#endif
in_w=1;
R_MPI_Comm comm_tmp1;
comm_conv_a2r(&comm,&comm_tmp1);
int Comm_size;
LOCAL_MPI_Comm_size(comm_tmp1, &Comm_size);
void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);




R_MPI_Datatype *sendtypes_tmp = malloc(sizeof(R_MPI_Datatype)*Comm_size);
int i1;
for(i1=0; i1 < Comm_size;i1++){
datatype_conv_a2r(&sendtypes[i1],&sendtypes_tmp[i1]);
}
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype *recvtypes_tmp = malloc(sizeof(R_MPI_Datatype)*Comm_size);
int i2;
for(i2=0; i2 < Comm_size;i2++){
datatype_conv_a2r(&recvtypes[i2],&recvtypes_tmp[i2]);
}
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Alltoallw( sendbuf_tmp, sendcounts, sdispls, sendtypes_tmp, recvbuf_tmp, recvcounts, rdispls, recvtypes_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
free(sendtypes_tmp);
free(recvtypes_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Alltoallw\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Alltoallw(void * sendbuf,int sendcounts[],int sdispls[],R_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],int rdispls[],R_MPI_Datatype recvtypes[],R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Alltoallw\n");
#endif
int ret_tmp= LOCAL_MPI_Alltoallw( sendbuf, sendcounts, sdispls, sendtypes, recvbuf, recvcounts, rdispls, recvtypes, comm);
#ifdef DEBUG
printf("sort : R_MPI_Alltoallw\n");
#endif
return ret_tmp;
}
int MPI_Reduce_scatter(void * sendbuf,void * recvbuf,int recvcounts[],A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm);
int (*LOCAL_MPI_Reduce_scatter)(void *,void *,int *,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm);

__asm__(
".global CCMPI_Reduce_scatter\n"
".weak MPI_Reduce_scatter\n"
".set MPI_Reduce_scatter,CCMPI_Reduce_scatter\n"
".extern in_w\n"
".extern A_MPI_Reduce_scatter\n"
".extern R_MPI_Reduce_scatter\n"
".type CCMPI_Reduce_scatter,@function\n"
".text\n"
"CCMPI_Reduce_scatter:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Reduce_scatter\n"
"jmp *A_MPI_Reduce_scatter@GOTPCREL(%rip)\n"
"inwrap_MPI_Reduce_scatter:\n"
"jmp *R_MPI_Reduce_scatter@GOTPCREL(%rip)\n"

);

int A_MPI_Reduce_scatter(void * sendbuf,void * recvbuf,int recvcounts[],A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Reduce_scatter\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Reduce_scatter( sendbuf_tmp, recvbuf_tmp, recvcounts, datatype_tmp, op_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Reduce_scatter\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Reduce_scatter(void * sendbuf,void * recvbuf,int recvcounts[],R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Reduce_scatter\n");
#endif
int ret_tmp= LOCAL_MPI_Reduce_scatter( sendbuf, recvbuf, recvcounts, datatype, op, comm);
#ifdef DEBUG
printf("sort : R_MPI_Reduce_scatter\n");
#endif
return ret_tmp;
}
int MPI_Group_translate_ranks(A_MPI_Group group1,int n,int ranks1[],A_MPI_Group group2,int ranks2[]);
int (*LOCAL_MPI_Group_translate_ranks)(R_MPI_Group,int,int *,R_MPI_Group,int *);

__asm__(
".global CCMPI_Group_translate_ranks\n"
".weak MPI_Group_translate_ranks\n"
".set MPI_Group_translate_ranks,CCMPI_Group_translate_ranks\n"
".extern in_w\n"
".extern A_MPI_Group_translate_ranks\n"
".extern R_MPI_Group_translate_ranks\n"
".type CCMPI_Group_translate_ranks,@function\n"
".text\n"
"CCMPI_Group_translate_ranks:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_translate_ranks\n"
"jmp *A_MPI_Group_translate_ranks@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_translate_ranks:\n"
"jmp *R_MPI_Group_translate_ranks@GOTPCREL(%rip)\n"

);

int A_MPI_Group_translate_ranks(A_MPI_Group group1,int n,int ranks1[],A_MPI_Group group2,int ranks2[])
{
#ifdef DEBUG
printf("entre : A_MPI_Group_translate_ranks\n");
#endif
in_w=1;

R_MPI_Group group1_tmp;
group_conv_a2r(&group1,&group1_tmp);




R_MPI_Group group2_tmp;
group_conv_a2r(&group2,&group2_tmp);

int ret_tmp= LOCAL_MPI_Group_translate_ranks( group1_tmp, n, ranks1, group2_tmp, ranks2);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_translate_ranks\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_translate_ranks(R_MPI_Group group1,int n,int ranks1[],R_MPI_Group group2,int ranks2[])
{
#ifdef DEBUG
printf("entre : R_MPI_Group_translate_ranks\n");
#endif
int ret_tmp= LOCAL_MPI_Group_translate_ranks( group1, n, ranks1, group2, ranks2);
#ifdef DEBUG
printf("sort : R_MPI_Group_translate_ranks\n");
#endif
return ret_tmp;
}
int MPI_Group_incl(A_MPI_Group group,int n,int ranks[],A_MPI_Group * newgroup);
int (*LOCAL_MPI_Group_incl)(R_MPI_Group,int,int *,R_MPI_Group *);

__asm__(
".global CCMPI_Group_incl\n"
".weak MPI_Group_incl\n"
".set MPI_Group_incl,CCMPI_Group_incl\n"
".extern in_w\n"
".extern A_MPI_Group_incl\n"
".extern R_MPI_Group_incl\n"
".type CCMPI_Group_incl,@function\n"
".text\n"
"CCMPI_Group_incl:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_incl\n"
"jmp *A_MPI_Group_incl@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_incl:\n"
"jmp *R_MPI_Group_incl@GOTPCREL(%rip)\n"

);

int A_MPI_Group_incl(A_MPI_Group group,int n,int ranks[],A_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_incl\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);




R_MPI_Group  newgroup_ltmp;
R_MPI_Group * newgroup_tmp=&newgroup_ltmp;
int ret_tmp= LOCAL_MPI_Group_incl( group_tmp, n, ranks, newgroup_tmp);
group_conv_r2a(newgroup,newgroup_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_incl\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_incl(R_MPI_Group group,int n,int ranks[],R_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_incl\n");
#endif
int ret_tmp= LOCAL_MPI_Group_incl( group, n, ranks, newgroup);
#ifdef DEBUG
printf("sort : R_MPI_Group_incl\n");
#endif
return ret_tmp;
}
int MPI_Group_excl(A_MPI_Group group,int n,int ranks[],A_MPI_Group * newgroup);
int (*LOCAL_MPI_Group_excl)(R_MPI_Group,int,int *,R_MPI_Group *);

__asm__(
".global CCMPI_Group_excl\n"
".weak MPI_Group_excl\n"
".set MPI_Group_excl,CCMPI_Group_excl\n"
".extern in_w\n"
".extern A_MPI_Group_excl\n"
".extern R_MPI_Group_excl\n"
".type CCMPI_Group_excl,@function\n"
".text\n"
"CCMPI_Group_excl:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_excl\n"
"jmp *A_MPI_Group_excl@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_excl:\n"
"jmp *R_MPI_Group_excl@GOTPCREL(%rip)\n"

);

int A_MPI_Group_excl(A_MPI_Group group,int n,int ranks[],A_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_excl\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);




R_MPI_Group  newgroup_ltmp;
R_MPI_Group * newgroup_tmp=&newgroup_ltmp;
int ret_tmp= LOCAL_MPI_Group_excl( group_tmp, n, ranks, newgroup_tmp);
group_conv_r2a(newgroup,newgroup_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_excl\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_excl(R_MPI_Group group,int n,int ranks[],R_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_excl\n");
#endif
int ret_tmp= LOCAL_MPI_Group_excl( group, n, ranks, newgroup);
#ifdef DEBUG
printf("sort : R_MPI_Group_excl\n");
#endif
return ret_tmp;
}
int MPI_Group_range_incl(A_MPI_Group group,int n,int ranges[][3],A_MPI_Group * newgroup);
int (*LOCAL_MPI_Group_range_incl)(R_MPI_Group,int,int[][3],R_MPI_Group *);

__asm__(
".global CCMPI_Group_range_incl\n"
".weak MPI_Group_range_incl\n"
".set MPI_Group_range_incl,CCMPI_Group_range_incl\n"
".extern in_w\n"
".extern A_MPI_Group_range_incl\n"
".extern R_MPI_Group_range_incl\n"
".type CCMPI_Group_range_incl,@function\n"
".text\n"
"CCMPI_Group_range_incl:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_range_incl\n"
"jmp *A_MPI_Group_range_incl@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_range_incl:\n"
"jmp *R_MPI_Group_range_incl@GOTPCREL(%rip)\n"

);

int A_MPI_Group_range_incl(A_MPI_Group group,int n,int ranges[][3],A_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_range_incl\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);




R_MPI_Group  newgroup_ltmp;
R_MPI_Group * newgroup_tmp=&newgroup_ltmp;
int ret_tmp= LOCAL_MPI_Group_range_incl( group_tmp, n, ranges, newgroup_tmp);
group_conv_r2a(newgroup,newgroup_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_range_incl\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_range_incl(R_MPI_Group group,int n,int ranges[][3],R_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_range_incl\n");
#endif
int ret_tmp= LOCAL_MPI_Group_range_incl( group, n, ranges, newgroup);
#ifdef DEBUG
printf("sort : R_MPI_Group_range_incl\n");
#endif
return ret_tmp;
}
int MPI_Group_range_excl(A_MPI_Group group,int n,int ranges[][3],A_MPI_Group * newgroup);
int (*LOCAL_MPI_Group_range_excl)(R_MPI_Group,int,int[][3],R_MPI_Group *);

__asm__(
".global CCMPI_Group_range_excl\n"
".weak MPI_Group_range_excl\n"
".set MPI_Group_range_excl,CCMPI_Group_range_excl\n"
".extern in_w\n"
".extern A_MPI_Group_range_excl\n"
".extern R_MPI_Group_range_excl\n"
".type CCMPI_Group_range_excl,@function\n"
".text\n"
"CCMPI_Group_range_excl:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Group_range_excl\n"
"jmp *A_MPI_Group_range_excl@GOTPCREL(%rip)\n"
"inwrap_MPI_Group_range_excl:\n"
"jmp *R_MPI_Group_range_excl@GOTPCREL(%rip)\n"

);

int A_MPI_Group_range_excl(A_MPI_Group group,int n,int ranges[][3],A_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : A_MPI_Group_range_excl\n");
#endif
in_w=1;

R_MPI_Group group_tmp;
group_conv_a2r(&group,&group_tmp);




R_MPI_Group  newgroup_ltmp;
R_MPI_Group * newgroup_tmp=&newgroup_ltmp;
int ret_tmp= LOCAL_MPI_Group_range_excl( group_tmp, n, ranges, newgroup_tmp);
group_conv_r2a(newgroup,newgroup_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Group_range_excl\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Group_range_excl(R_MPI_Group group,int n,int ranges[][3],R_MPI_Group * newgroup)
{
#ifdef DEBUG
printf("entre : R_MPI_Group_range_excl\n");
#endif
int ret_tmp= LOCAL_MPI_Group_range_excl( group, n, ranges, newgroup);
#ifdef DEBUG
printf("sort : R_MPI_Group_range_excl\n");
#endif
return ret_tmp;
}
int MPI_Cart_create(A_MPI_Comm comm_old,int ndims,int dims[],int periods[],int reorder,A_MPI_Comm * comm_cart);
int (*LOCAL_MPI_Cart_create)(R_MPI_Comm,int,int *,int *,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Cart_create\n"
".weak MPI_Cart_create\n"
".set MPI_Cart_create,CCMPI_Cart_create\n"
".extern in_w\n"
".extern A_MPI_Cart_create\n"
".extern R_MPI_Cart_create\n"
".type CCMPI_Cart_create,@function\n"
".text\n"
"CCMPI_Cart_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cart_create\n"
"jmp *A_MPI_Cart_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Cart_create:\n"
"jmp *R_MPI_Cart_create@GOTPCREL(%rip)\n"

);

int A_MPI_Cart_create(A_MPI_Comm comm_old,int ndims,int dims[],int periods[],int reorder,A_MPI_Comm * comm_cart)
{
#ifdef DEBUG
printf("entre : A_MPI_Cart_create\n");
#endif
in_w=1;

R_MPI_Comm comm_old_tmp;
comm_conv_a2r(&comm_old,&comm_old_tmp);








R_MPI_Comm  comm_cart_ltmp;
R_MPI_Comm * comm_cart_tmp=&comm_cart_ltmp;
int ret_tmp= LOCAL_MPI_Cart_create( comm_old_tmp, ndims, dims, periods, reorder, comm_cart_tmp);
comm_conv_r2a(comm_cart,comm_cart_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cart_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cart_create(R_MPI_Comm comm_old,int ndims,int dims[],int periods[],int reorder,R_MPI_Comm * comm_cart)
{
#ifdef DEBUG
printf("entre : R_MPI_Cart_create\n");
#endif
int ret_tmp= LOCAL_MPI_Cart_create( comm_old, ndims, dims, periods, reorder, comm_cart);
#ifdef DEBUG
printf("sort : R_MPI_Cart_create\n");
#endif
return ret_tmp;
}
int MPI_Dims_create(int nnodes,int ndims,int dims[]);
int (*LOCAL_MPI_Dims_create)(int,int,int *);

__asm__(
".global CCMPI_Dims_create\n"
".weak MPI_Dims_create\n"
".set MPI_Dims_create,CCMPI_Dims_create\n"
".extern in_w\n"
".extern A_MPI_Dims_create\n"
".extern R_MPI_Dims_create\n"
".type CCMPI_Dims_create,@function\n"
".text\n"
"CCMPI_Dims_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Dims_create\n"
"jmp *A_MPI_Dims_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Dims_create:\n"
"jmp *R_MPI_Dims_create@GOTPCREL(%rip)\n"

);

int A_MPI_Dims_create(int nnodes,int ndims,int dims[])
{
#ifdef DEBUG
printf("entre : A_MPI_Dims_create\n");
#endif
in_w=1;







int ret_tmp= LOCAL_MPI_Dims_create( nnodes, ndims, dims);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Dims_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Dims_create(int nnodes,int ndims,int dims[])
{
#ifdef DEBUG
printf("entre : R_MPI_Dims_create\n");
#endif
int ret_tmp= LOCAL_MPI_Dims_create( nnodes, ndims, dims);
#ifdef DEBUG
printf("sort : R_MPI_Dims_create\n");
#endif
return ret_tmp;
}
int MPI_Graph_create(A_MPI_Comm comm_old,int nnodes,int indx[],int edges[],int reorder,A_MPI_Comm * comm_graph);
int (*LOCAL_MPI_Graph_create)(R_MPI_Comm,int,int *,int *,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Graph_create\n"
".weak MPI_Graph_create\n"
".set MPI_Graph_create,CCMPI_Graph_create\n"
".extern in_w\n"
".extern A_MPI_Graph_create\n"
".extern R_MPI_Graph_create\n"
".type CCMPI_Graph_create,@function\n"
".text\n"
"CCMPI_Graph_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Graph_create\n"
"jmp *A_MPI_Graph_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Graph_create:\n"
"jmp *R_MPI_Graph_create@GOTPCREL(%rip)\n"

);

int A_MPI_Graph_create(A_MPI_Comm comm_old,int nnodes,int indx[],int edges[],int reorder,A_MPI_Comm * comm_graph)
{
#ifdef DEBUG
printf("entre : A_MPI_Graph_create\n");
#endif
in_w=1;

R_MPI_Comm comm_old_tmp;
comm_conv_a2r(&comm_old,&comm_old_tmp);








R_MPI_Comm  comm_graph_ltmp;
R_MPI_Comm * comm_graph_tmp=&comm_graph_ltmp;
int ret_tmp= LOCAL_MPI_Graph_create( comm_old_tmp, nnodes, indx, edges, reorder, comm_graph_tmp);
comm_conv_r2a(comm_graph,comm_graph_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Graph_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Graph_create(R_MPI_Comm comm_old,int nnodes,int indx[],int edges[],int reorder,R_MPI_Comm * comm_graph)
{
#ifdef DEBUG
printf("entre : R_MPI_Graph_create\n");
#endif
int ret_tmp= LOCAL_MPI_Graph_create( comm_old, nnodes, indx, edges, reorder, comm_graph);
#ifdef DEBUG
printf("sort : R_MPI_Graph_create\n");
#endif
return ret_tmp;
}
int MPI_Graph_get(A_MPI_Comm comm,int maxindex,int maxedges,int indx[],int edges[]);
int (*LOCAL_MPI_Graph_get)(R_MPI_Comm,int,int,int *,int *);

__asm__(
".global CCMPI_Graph_get\n"
".weak MPI_Graph_get\n"
".set MPI_Graph_get,CCMPI_Graph_get\n"
".extern in_w\n"
".extern A_MPI_Graph_get\n"
".extern R_MPI_Graph_get\n"
".type CCMPI_Graph_get,@function\n"
".text\n"
"CCMPI_Graph_get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Graph_get\n"
"jmp *A_MPI_Graph_get@GOTPCREL(%rip)\n"
"inwrap_MPI_Graph_get:\n"
"jmp *R_MPI_Graph_get@GOTPCREL(%rip)\n"

);

int A_MPI_Graph_get(A_MPI_Comm comm,int maxindex,int maxedges,int indx[],int edges[])
{
#ifdef DEBUG
printf("entre : A_MPI_Graph_get\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);






int ret_tmp= LOCAL_MPI_Graph_get( comm_tmp, maxindex, maxedges, indx, edges);


in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Graph_get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Graph_get(R_MPI_Comm comm,int maxindex,int maxedges,int indx[],int edges[])
{
#ifdef DEBUG
printf("entre : R_MPI_Graph_get\n");
#endif
int ret_tmp= LOCAL_MPI_Graph_get( comm, maxindex, maxedges, indx, edges);
#ifdef DEBUG
printf("sort : R_MPI_Graph_get\n");
#endif
return ret_tmp;
}
int MPI_Cart_get(A_MPI_Comm comm,int maxdims,int dims[],int periods[],int coords[]);
int (*LOCAL_MPI_Cart_get)(R_MPI_Comm,int,int *,int *,int *);

__asm__(
".global CCMPI_Cart_get\n"
".weak MPI_Cart_get\n"
".set MPI_Cart_get,CCMPI_Cart_get\n"
".extern in_w\n"
".extern A_MPI_Cart_get\n"
".extern R_MPI_Cart_get\n"
".type CCMPI_Cart_get,@function\n"
".text\n"
"CCMPI_Cart_get:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cart_get\n"
"jmp *A_MPI_Cart_get@GOTPCREL(%rip)\n"
"inwrap_MPI_Cart_get:\n"
"jmp *R_MPI_Cart_get@GOTPCREL(%rip)\n"

);

int A_MPI_Cart_get(A_MPI_Comm comm,int maxdims,int dims[],int periods[],int coords[])
{
#ifdef DEBUG
printf("entre : A_MPI_Cart_get\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);





int ret_tmp= LOCAL_MPI_Cart_get( comm_tmp, maxdims, dims, periods, coords);



in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cart_get\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cart_get(R_MPI_Comm comm,int maxdims,int dims[],int periods[],int coords[])
{
#ifdef DEBUG
printf("entre : R_MPI_Cart_get\n");
#endif
int ret_tmp= LOCAL_MPI_Cart_get( comm, maxdims, dims, periods, coords);
#ifdef DEBUG
printf("sort : R_MPI_Cart_get\n");
#endif
return ret_tmp;
}
int MPI_Cart_rank(A_MPI_Comm comm,int coords[],int * rank);
int (*LOCAL_MPI_Cart_rank)(R_MPI_Comm,int *,int *);

__asm__(
".global CCMPI_Cart_rank\n"
".weak MPI_Cart_rank\n"
".set MPI_Cart_rank,CCMPI_Cart_rank\n"
".extern in_w\n"
".extern A_MPI_Cart_rank\n"
".extern R_MPI_Cart_rank\n"
".type CCMPI_Cart_rank,@function\n"
".text\n"
"CCMPI_Cart_rank:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cart_rank\n"
"jmp *A_MPI_Cart_rank@GOTPCREL(%rip)\n"
"inwrap_MPI_Cart_rank:\n"
"jmp *R_MPI_Cart_rank@GOTPCREL(%rip)\n"

);

int A_MPI_Cart_rank(A_MPI_Comm comm,int coords[],int * rank)
{
#ifdef DEBUG
printf("entre : A_MPI_Cart_rank\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);



int ret_tmp= LOCAL_MPI_Cart_rank( comm_tmp, coords, rank);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cart_rank\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cart_rank(R_MPI_Comm comm,int coords[],int * rank)
{
#ifdef DEBUG
printf("entre : R_MPI_Cart_rank\n");
#endif
int ret_tmp= LOCAL_MPI_Cart_rank( comm, coords, rank);
#ifdef DEBUG
printf("sort : R_MPI_Cart_rank\n");
#endif
return ret_tmp;
}
int MPI_Cart_coords(A_MPI_Comm comm,int rank,int maxdims,int coords[]);
int (*LOCAL_MPI_Cart_coords)(R_MPI_Comm,int,int,int *);

__asm__(
".global CCMPI_Cart_coords\n"
".weak MPI_Cart_coords\n"
".set MPI_Cart_coords,CCMPI_Cart_coords\n"
".extern in_w\n"
".extern A_MPI_Cart_coords\n"
".extern R_MPI_Cart_coords\n"
".type CCMPI_Cart_coords,@function\n"
".text\n"
"CCMPI_Cart_coords:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cart_coords\n"
"jmp *A_MPI_Cart_coords@GOTPCREL(%rip)\n"
"inwrap_MPI_Cart_coords:\n"
"jmp *R_MPI_Cart_coords@GOTPCREL(%rip)\n"

);

int A_MPI_Cart_coords(A_MPI_Comm comm,int rank,int maxdims,int coords[])
{
#ifdef DEBUG
printf("entre : A_MPI_Cart_coords\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);





int ret_tmp= LOCAL_MPI_Cart_coords( comm_tmp, rank, maxdims, coords);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cart_coords\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cart_coords(R_MPI_Comm comm,int rank,int maxdims,int coords[])
{
#ifdef DEBUG
printf("entre : R_MPI_Cart_coords\n");
#endif
int ret_tmp= LOCAL_MPI_Cart_coords( comm, rank, maxdims, coords);
#ifdef DEBUG
printf("sort : R_MPI_Cart_coords\n");
#endif
return ret_tmp;
}
int MPI_Graph_neighbors(A_MPI_Comm comm,int rank,int maxneighbors,int neighbors[]);
int (*LOCAL_MPI_Graph_neighbors)(R_MPI_Comm,int,int,int *);

__asm__(
".global CCMPI_Graph_neighbors\n"
".weak MPI_Graph_neighbors\n"
".set MPI_Graph_neighbors,CCMPI_Graph_neighbors\n"
".extern in_w\n"
".extern A_MPI_Graph_neighbors\n"
".extern R_MPI_Graph_neighbors\n"
".type CCMPI_Graph_neighbors,@function\n"
".text\n"
"CCMPI_Graph_neighbors:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Graph_neighbors\n"
"jmp *A_MPI_Graph_neighbors@GOTPCREL(%rip)\n"
"inwrap_MPI_Graph_neighbors:\n"
"jmp *R_MPI_Graph_neighbors@GOTPCREL(%rip)\n"

);

int A_MPI_Graph_neighbors(A_MPI_Comm comm,int rank,int maxneighbors,int neighbors[])
{
#ifdef DEBUG
printf("entre : A_MPI_Graph_neighbors\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);





int ret_tmp= LOCAL_MPI_Graph_neighbors( comm_tmp, rank, maxneighbors, neighbors);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Graph_neighbors\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Graph_neighbors(R_MPI_Comm comm,int rank,int maxneighbors,int neighbors[])
{
#ifdef DEBUG
printf("entre : R_MPI_Graph_neighbors\n");
#endif
int ret_tmp= LOCAL_MPI_Graph_neighbors( comm, rank, maxneighbors, neighbors);
#ifdef DEBUG
printf("sort : R_MPI_Graph_neighbors\n");
#endif
return ret_tmp;
}
int MPI_Cart_sub(A_MPI_Comm comm,int remain_dims[],A_MPI_Comm * newcomm);
int (*LOCAL_MPI_Cart_sub)(R_MPI_Comm,int *,R_MPI_Comm *);

__asm__(
".global CCMPI_Cart_sub\n"
".weak MPI_Cart_sub\n"
".set MPI_Cart_sub,CCMPI_Cart_sub\n"
".extern in_w\n"
".extern A_MPI_Cart_sub\n"
".extern R_MPI_Cart_sub\n"
".type CCMPI_Cart_sub,@function\n"
".text\n"
"CCMPI_Cart_sub:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cart_sub\n"
"jmp *A_MPI_Cart_sub@GOTPCREL(%rip)\n"
"inwrap_MPI_Cart_sub:\n"
"jmp *R_MPI_Cart_sub@GOTPCREL(%rip)\n"

);

int A_MPI_Cart_sub(A_MPI_Comm comm,int remain_dims[],A_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : A_MPI_Cart_sub\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);


R_MPI_Comm  newcomm_ltmp;
R_MPI_Comm * newcomm_tmp=&newcomm_ltmp;
int ret_tmp= LOCAL_MPI_Cart_sub( comm_tmp, remain_dims, newcomm_tmp);
comm_conv_r2a(newcomm,newcomm_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cart_sub\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cart_sub(R_MPI_Comm comm,int remain_dims[],R_MPI_Comm * newcomm)
{
#ifdef DEBUG
printf("entre : R_MPI_Cart_sub\n");
#endif
int ret_tmp= LOCAL_MPI_Cart_sub( comm, remain_dims, newcomm);
#ifdef DEBUG
printf("sort : R_MPI_Cart_sub\n");
#endif
return ret_tmp;
}
int MPI_Cart_map(A_MPI_Comm comm,int ndims,int dims[],int periods[],int * newrank);
int (*LOCAL_MPI_Cart_map)(R_MPI_Comm,int,int *,int *,int *);

__asm__(
".global CCMPI_Cart_map\n"
".weak MPI_Cart_map\n"
".set MPI_Cart_map,CCMPI_Cart_map\n"
".extern in_w\n"
".extern A_MPI_Cart_map\n"
".extern R_MPI_Cart_map\n"
".type CCMPI_Cart_map,@function\n"
".text\n"
"CCMPI_Cart_map:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Cart_map\n"
"jmp *A_MPI_Cart_map@GOTPCREL(%rip)\n"
"inwrap_MPI_Cart_map:\n"
"jmp *R_MPI_Cart_map@GOTPCREL(%rip)\n"

);

int A_MPI_Cart_map(A_MPI_Comm comm,int ndims,int dims[],int periods[],int * newrank)
{
#ifdef DEBUG
printf("entre : A_MPI_Cart_map\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);







int ret_tmp= LOCAL_MPI_Cart_map( comm_tmp, ndims, dims, periods, newrank);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Cart_map\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Cart_map(R_MPI_Comm comm,int ndims,int dims[],int periods[],int * newrank)
{
#ifdef DEBUG
printf("entre : R_MPI_Cart_map\n");
#endif
int ret_tmp= LOCAL_MPI_Cart_map( comm, ndims, dims, periods, newrank);
#ifdef DEBUG
printf("sort : R_MPI_Cart_map\n");
#endif
return ret_tmp;
}
int MPI_Graph_map(A_MPI_Comm comm,int nnodes,int indx[],int edges[],int * newrank);
int (*LOCAL_MPI_Graph_map)(R_MPI_Comm,int,int *,int *,int *);

__asm__(
".global CCMPI_Graph_map\n"
".weak MPI_Graph_map\n"
".set MPI_Graph_map,CCMPI_Graph_map\n"
".extern in_w\n"
".extern A_MPI_Graph_map\n"
".extern R_MPI_Graph_map\n"
".type CCMPI_Graph_map,@function\n"
".text\n"
"CCMPI_Graph_map:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Graph_map\n"
"jmp *A_MPI_Graph_map@GOTPCREL(%rip)\n"
"inwrap_MPI_Graph_map:\n"
"jmp *R_MPI_Graph_map@GOTPCREL(%rip)\n"

);

int A_MPI_Graph_map(A_MPI_Comm comm,int nnodes,int indx[],int edges[],int * newrank)
{
#ifdef DEBUG
printf("entre : A_MPI_Graph_map\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);







int ret_tmp= LOCAL_MPI_Graph_map( comm_tmp, nnodes, indx, edges, newrank);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Graph_map\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Graph_map(R_MPI_Comm comm,int nnodes,int indx[],int edges[],int * newrank)
{
#ifdef DEBUG
printf("entre : R_MPI_Graph_map\n");
#endif
int ret_tmp= LOCAL_MPI_Graph_map( comm, nnodes, indx, edges, newrank);
#ifdef DEBUG
printf("sort : R_MPI_Graph_map\n");
#endif
return ret_tmp;
}
int MPI_Comm_spawn(char * command,char * argv[],int maxprocs,A_MPI_Info info,int root,A_MPI_Comm comm,A_MPI_Comm * intercomm,int array_of_errcodes[]);
int (*LOCAL_MPI_Comm_spawn)(char *,char * *,int,R_MPI_Info,int,R_MPI_Comm,R_MPI_Comm *,int *);

__asm__(
".global CCMPI_Comm_spawn\n"
".weak MPI_Comm_spawn\n"
".set MPI_Comm_spawn,CCMPI_Comm_spawn\n"
".extern in_w\n"
".extern A_MPI_Comm_spawn\n"
".extern R_MPI_Comm_spawn\n"
".type CCMPI_Comm_spawn,@function\n"
".text\n"
"CCMPI_Comm_spawn:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_spawn\n"
"jmp *A_MPI_Comm_spawn@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_spawn:\n"
"jmp *R_MPI_Comm_spawn@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_spawn(char * command,char * argv[],int maxprocs,A_MPI_Info info,int root,A_MPI_Comm comm,A_MPI_Comm * intercomm,int array_of_errcodes[])
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_spawn\n");
#endif
in_w=1;







R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Comm  intercomm_ltmp;
R_MPI_Comm * intercomm_tmp=&intercomm_ltmp;

int ret_tmp= LOCAL_MPI_Comm_spawn( command, argv, maxprocs, info_tmp, root, comm_tmp, intercomm_tmp, array_of_errcodes);
comm_conv_r2a(intercomm,intercomm_tmp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_spawn\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_spawn(char * command,char * argv[],int maxprocs,R_MPI_Info info,int root,R_MPI_Comm comm,R_MPI_Comm * intercomm,int array_of_errcodes[])
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_spawn\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_spawn( command, argv, maxprocs, info, root, comm, intercomm, array_of_errcodes);
#ifdef DEBUG
printf("sort : R_MPI_Comm_spawn\n");
#endif
return ret_tmp;
}
int MPI_Comm_spawn_multiple(int count,char * array_of_commands[],char ** array_of_argv[],int array_of_maxprocs[],R_MPI_Info * array_of_info[],int root,A_MPI_Comm comm,A_MPI_Comm * intercomm,int array_of_errcodes[]);
int (*LOCAL_MPI_Comm_spawn_multiple)(int,char * *,char ** *,int *,R_MPI_Info *,int,R_MPI_Comm,R_MPI_Comm *,int *);

__asm__(
".global CCMPI_Comm_spawn_multiple\n"
".weak MPI_Comm_spawn_multiple\n"
".set MPI_Comm_spawn_multiple,CCMPI_Comm_spawn_multiple\n"
".extern in_w\n"
".extern A_MPI_Comm_spawn_multiple\n"
".extern R_MPI_Comm_spawn_multiple\n"
".type CCMPI_Comm_spawn_multiple,@function\n"
".text\n"
"CCMPI_Comm_spawn_multiple:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Comm_spawn_multiple\n"
"jmp *A_MPI_Comm_spawn_multiple@GOTPCREL(%rip)\n"
"inwrap_MPI_Comm_spawn_multiple:\n"
"jmp *R_MPI_Comm_spawn_multiple@GOTPCREL(%rip)\n"

);

int A_MPI_Comm_spawn_multiple(int count,char * array_of_commands[],char ** array_of_argv[],int array_of_maxprocs[],A_MPI_Info array_of_info[],int root,A_MPI_Comm comm,A_MPI_Comm * intercomm,int array_of_errcodes[])
{
#ifdef DEBUG
printf("entre : A_MPI_Comm_spawn_multiple\n");
#endif
in_w=1;









R_MPI_Info *array_of_info_tmp = malloc(sizeof(R_MPI_Info)*count);
int i1;
for(i1=0; i1 < count;i1++){
info_conv_a2r(&array_of_info[i1],&array_of_info_tmp[i1]);
}


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Comm  intercomm_ltmp;
R_MPI_Comm * intercomm_tmp=&intercomm_ltmp;

int ret_tmp= LOCAL_MPI_Comm_spawn_multiple( count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info_tmp, root, comm_tmp, intercomm_tmp, array_of_errcodes);
comm_conv_r2a(intercomm,intercomm_tmp);

free(array_of_info_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Comm_spawn_multiple\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Comm_spawn_multiple(int count,char * array_of_commands[],char ** array_of_argv[],int array_of_maxprocs[],R_MPI_Info array_of_info[],int root,R_MPI_Comm comm,R_MPI_Comm * intercomm,int array_of_errcodes[])
{
#ifdef DEBUG
printf("entre : R_MPI_Comm_spawn_multiple\n");
#endif
int ret_tmp= LOCAL_MPI_Comm_spawn_multiple( count, array_of_commands, array_of_argv, array_of_maxprocs, array_of_info, root, comm, intercomm, array_of_errcodes);
#ifdef DEBUG
printf("sort : R_MPI_Comm_spawn_multiple\n");
#endif
return ret_tmp;
}
int MPI_Type_get_contents(A_MPI_Datatype datatype,int max_integers,int max_addresses,int max_datatypes,int array_of_integers[],R_MPI_Aint * array_of_addresses[],R_MPI_Datatype * array_of_datatypes[]);
int (*LOCAL_MPI_Type_get_contents)(R_MPI_Datatype,int,int,int,int *,R_MPI_Aint *,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_get_contents\n"
".weak MPI_Type_get_contents\n"
".set MPI_Type_get_contents,CCMPI_Type_get_contents\n"
".extern in_w\n"
".extern A_MPI_Type_get_contents\n"
".extern R_MPI_Type_get_contents\n"
".type CCMPI_Type_get_contents,@function\n"
".text\n"
"CCMPI_Type_get_contents:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_get_contents\n"
"jmp *A_MPI_Type_get_contents@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_get_contents:\n"
"jmp *R_MPI_Type_get_contents@GOTPCREL(%rip)\n"

);

int A_MPI_Type_get_contents(A_MPI_Datatype datatype,int max_integers,int max_addresses,int max_datatypes,int array_of_integers[],A_MPI_Aint array_of_addresses[],A_MPI_Datatype array_of_datatypes[])
{
#ifdef DEBUG
printf("entre : A_MPI_Type_get_contents\n");
#endif
in_w=1;

R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);







R_MPI_Aint *array_of_addresses_tmp = malloc(sizeof(R_MPI_Aint)*max_addresses);
R_MPI_Datatype *array_of_datatypes_tmp = malloc(sizeof(R_MPI_Datatype)*max_datatypes);
int ret_tmp= LOCAL_MPI_Type_get_contents( datatype_tmp, max_integers, max_addresses, max_datatypes, array_of_integers, array_of_addresses_tmp, array_of_datatypes_tmp);

int i1;
for(i1=0; i1 < max_addresses;i1++){
array_of_addresses[i1]= (A_MPI_Aint)array_of_addresses_tmp[i1];
}
int i2;
for(i2=0; i2 < max_datatypes;i2++){
datatype_conv_r2a(&array_of_datatypes[i2],&array_of_datatypes_tmp[i2]);
}
free(array_of_addresses_tmp);
free(array_of_datatypes_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_get_contents\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_get_contents(R_MPI_Datatype datatype,int max_integers,int max_addresses,int max_datatypes,int array_of_integers[],R_MPI_Aint array_of_addresses[],R_MPI_Datatype array_of_datatypes[])
{
#ifdef DEBUG
printf("entre : R_MPI_Type_get_contents\n");
#endif
int ret_tmp= LOCAL_MPI_Type_get_contents( datatype, max_integers, max_addresses, max_datatypes, array_of_integers, array_of_addresses, array_of_datatypes);
#ifdef DEBUG
printf("sort : R_MPI_Type_get_contents\n");
#endif
return ret_tmp;
}
int MPI_Pack_external(char datarep[],void * inbuf,int incount,A_MPI_Datatype datatype,void * outbuf,A_MPI_Aint outsize,A_MPI_Aint * position);
int (*LOCAL_MPI_Pack_external)(char *,void *,int,R_MPI_Datatype,void *,R_MPI_Aint,R_MPI_Aint *);

__asm__(
".global CCMPI_Pack_external\n"
".weak MPI_Pack_external\n"
".set MPI_Pack_external,CCMPI_Pack_external\n"
".extern in_w\n"
".extern A_MPI_Pack_external\n"
".extern R_MPI_Pack_external\n"
".type CCMPI_Pack_external,@function\n"
".text\n"
"CCMPI_Pack_external:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Pack_external\n"
"jmp *A_MPI_Pack_external@GOTPCREL(%rip)\n"
"inwrap_MPI_Pack_external:\n"
"jmp *R_MPI_Pack_external@GOTPCREL(%rip)\n"

);

int A_MPI_Pack_external(char datarep[],void * inbuf,int incount,A_MPI_Datatype datatype,void * outbuf,A_MPI_Aint outsize,A_MPI_Aint * position)
{
#ifdef DEBUG
printf("entre : A_MPI_Pack_external\n");
#endif
in_w=1;



void * inbuf_tmp;
const_buffer_conv_a2r(&inbuf,&inbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
void * outbuf_tmp;
R_MPI_Aint outsize_tmp;
outsize_tmp = (R_MPI_Aint)outsize;
R_MPI_Aint  position_ltmp;
R_MPI_Aint * position_tmp=&position_ltmp;
int ret_tmp= LOCAL_MPI_Pack_external( datarep, inbuf_tmp, incount, datatype_tmp, outbuf_tmp, outsize_tmp, position_tmp);
buffer_conv_r2a(&outbuf,&outbuf_tmp);
*position= (A_MPI_Aint ) *position_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Pack_external\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Pack_external(char datarep[],void * inbuf,int incount,R_MPI_Datatype datatype,void * outbuf,R_MPI_Aint outsize,R_MPI_Aint * position)
{
#ifdef DEBUG
printf("entre : R_MPI_Pack_external\n");
#endif
int ret_tmp= LOCAL_MPI_Pack_external( datarep, inbuf, incount, datatype, outbuf, outsize, position);
#ifdef DEBUG
printf("sort : R_MPI_Pack_external\n");
#endif
return ret_tmp;
}
int MPI_Pack_external_size(char datarep[],int incount,A_MPI_Datatype datatype,A_MPI_Aint * size);
int (*LOCAL_MPI_Pack_external_size)(char *,int,R_MPI_Datatype,R_MPI_Aint *);

__asm__(
".global CCMPI_Pack_external_size\n"
".weak MPI_Pack_external_size\n"
".set MPI_Pack_external_size,CCMPI_Pack_external_size\n"
".extern in_w\n"
".extern A_MPI_Pack_external_size\n"
".extern R_MPI_Pack_external_size\n"
".type CCMPI_Pack_external_size,@function\n"
".text\n"
"CCMPI_Pack_external_size:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Pack_external_size\n"
"jmp *A_MPI_Pack_external_size@GOTPCREL(%rip)\n"
"inwrap_MPI_Pack_external_size:\n"
"jmp *R_MPI_Pack_external_size@GOTPCREL(%rip)\n"

);

int A_MPI_Pack_external_size(char datarep[],int incount,A_MPI_Datatype datatype,A_MPI_Aint * size)
{
#ifdef DEBUG
printf("entre : A_MPI_Pack_external_size\n");
#endif
in_w=1;





R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Aint  size_ltmp;
R_MPI_Aint * size_tmp=&size_ltmp;
int ret_tmp= LOCAL_MPI_Pack_external_size( datarep, incount, datatype_tmp, size_tmp);
*size= (A_MPI_Aint ) *size_tmp;
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Pack_external_size\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Pack_external_size(char datarep[],int incount,R_MPI_Datatype datatype,R_MPI_Aint * size)
{
#ifdef DEBUG
printf("entre : R_MPI_Pack_external_size\n");
#endif
int ret_tmp= LOCAL_MPI_Pack_external_size( datarep, incount, datatype, size);
#ifdef DEBUG
printf("sort : R_MPI_Pack_external_size\n");
#endif
return ret_tmp;
}
int MPI_Type_create_darray(int size,int rank,int ndims,int array_of_gsizes[],int array_of_distribs[],int array_of_dargs[],int array_of_psizes[],int order,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_darray)(int,int,int,int *,int *,int *,int *,int,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_darray\n"
".weak MPI_Type_create_darray\n"
".set MPI_Type_create_darray,CCMPI_Type_create_darray\n"
".extern in_w\n"
".extern A_MPI_Type_create_darray\n"
".extern R_MPI_Type_create_darray\n"
".type CCMPI_Type_create_darray,@function\n"
".text\n"
"CCMPI_Type_create_darray:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_darray\n"
"jmp *A_MPI_Type_create_darray@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_darray:\n"
"jmp *R_MPI_Type_create_darray@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_darray(int size,int rank,int ndims,int array_of_gsizes[],int array_of_distribs[],int array_of_dargs[],int array_of_psizes[],int order,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_darray\n");
#endif
in_w=1;















int order_tmp =0;
order2_conv_a2r(&order,&order_tmp);
R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_darray( size, rank, ndims, array_of_gsizes, array_of_distribs, array_of_dargs, array_of_psizes, order_tmp, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_darray\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_darray(int size,int rank,int ndims,int array_of_gsizes[],int array_of_distribs[],int array_of_dargs[],int array_of_psizes[],int order,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_darray\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_darray( size, rank, ndims, array_of_gsizes, array_of_distribs, array_of_dargs, array_of_psizes, order, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_darray\n");
#endif
return ret_tmp;
}
int MPI_Type_create_hindexed(int count,int array_of_blocklengths[],R_MPI_Aint * array_of_displacements[],A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_hindexed)(int,int *,R_MPI_Aint *,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_hindexed\n"
".weak MPI_Type_create_hindexed\n"
".set MPI_Type_create_hindexed,CCMPI_Type_create_hindexed\n"
".extern in_w\n"
".extern A_MPI_Type_create_hindexed\n"
".extern R_MPI_Type_create_hindexed\n"
".type CCMPI_Type_create_hindexed,@function\n"
".text\n"
"CCMPI_Type_create_hindexed:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_hindexed\n"
"jmp *A_MPI_Type_create_hindexed@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_hindexed:\n"
"jmp *R_MPI_Type_create_hindexed@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_hindexed(int count,int array_of_blocklengths[],A_MPI_Aint array_of_displacements[],A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_hindexed\n");
#endif
in_w=1;





R_MPI_Aint *array_of_displacements_tmp = malloc(sizeof(R_MPI_Aint)*count);
int i1;
for(i1=0; i1 < count;i1++){
array_of_displacements_tmp[i1]= (R_MPI_Aint)array_of_displacements[i1];
}
R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_hindexed( count, array_of_blocklengths, array_of_displacements_tmp, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
free(array_of_displacements_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_hindexed\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_hindexed(int count,int array_of_blocklengths[],R_MPI_Aint array_of_displacements[],R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_hindexed\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_hindexed( count, array_of_blocklengths, array_of_displacements, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_hindexed\n");
#endif
return ret_tmp;
}
int MPI_Type_create_indexed_block(int count,int blocklength,int array_of_displacements[],A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_indexed_block)(int,int,int *,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_indexed_block\n"
".weak MPI_Type_create_indexed_block\n"
".set MPI_Type_create_indexed_block,CCMPI_Type_create_indexed_block\n"
".extern in_w\n"
".extern A_MPI_Type_create_indexed_block\n"
".extern R_MPI_Type_create_indexed_block\n"
".type CCMPI_Type_create_indexed_block,@function\n"
".text\n"
"CCMPI_Type_create_indexed_block:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_indexed_block\n"
"jmp *A_MPI_Type_create_indexed_block@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_indexed_block:\n"
"jmp *R_MPI_Type_create_indexed_block@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_indexed_block(int count,int blocklength,int array_of_displacements[],A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_indexed_block\n");
#endif
in_w=1;







R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_indexed_block( count, blocklength, array_of_displacements, oldtype_tmp, newtype_tmp);

datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_indexed_block\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_indexed_block(int count,int blocklength,int array_of_displacements[],R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_indexed_block\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_indexed_block( count, blocklength, array_of_displacements, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_indexed_block\n");
#endif
return ret_tmp;
}
int MPI_Type_create_hindexed_block(int count,int blocklength,R_MPI_Aint * array_of_displacements[],A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_hindexed_block)(int,int,R_MPI_Aint *,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_hindexed_block\n"
".weak MPI_Type_create_hindexed_block\n"
".set MPI_Type_create_hindexed_block,CCMPI_Type_create_hindexed_block\n"
".extern in_w\n"
".extern A_MPI_Type_create_hindexed_block\n"
".extern R_MPI_Type_create_hindexed_block\n"
".type CCMPI_Type_create_hindexed_block,@function\n"
".text\n"
"CCMPI_Type_create_hindexed_block:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_hindexed_block\n"
"jmp *A_MPI_Type_create_hindexed_block@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_hindexed_block:\n"
"jmp *R_MPI_Type_create_hindexed_block@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_hindexed_block(int count,int blocklength,A_MPI_Aint array_of_displacements[],A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_hindexed_block\n");
#endif
in_w=1;





R_MPI_Aint *array_of_displacements_tmp = malloc(sizeof(R_MPI_Aint)*count);
int i1;
for(i1=0; i1 < count;i1++){
array_of_displacements_tmp[i1]= (R_MPI_Aint)array_of_displacements[i1];
}
R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_hindexed_block( count, blocklength, array_of_displacements_tmp, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
free(array_of_displacements_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_hindexed_block\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_hindexed_block(int count,int blocklength,R_MPI_Aint array_of_displacements[],R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_hindexed_block\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_hindexed_block( count, blocklength, array_of_displacements, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_hindexed_block\n");
#endif
return ret_tmp;
}
int MPI_Type_create_struct(int count,int array_of_blocklengths[],R_MPI_Aint * array_of_displacements[],R_MPI_Datatype * array_of_types[],A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_struct)(int,int *,R_MPI_Aint *,R_MPI_Datatype *,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_struct\n"
".weak MPI_Type_create_struct\n"
".set MPI_Type_create_struct,CCMPI_Type_create_struct\n"
".extern in_w\n"
".extern A_MPI_Type_create_struct\n"
".extern R_MPI_Type_create_struct\n"
".type CCMPI_Type_create_struct,@function\n"
".text\n"
"CCMPI_Type_create_struct:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_struct\n"
"jmp *A_MPI_Type_create_struct@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_struct:\n"
"jmp *R_MPI_Type_create_struct@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_struct(int count,int array_of_blocklengths[],A_MPI_Aint array_of_displacements[],A_MPI_Datatype array_of_types[],A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_struct\n");
#endif
in_w=1;





R_MPI_Aint *array_of_displacements_tmp = malloc(sizeof(R_MPI_Aint)*count);
int i2;
for(i2=0; i2 < count;i2++){
array_of_displacements_tmp[i2]= (R_MPI_Aint)array_of_displacements[i2];
}
R_MPI_Datatype *array_of_types_tmp = malloc(sizeof(R_MPI_Datatype)*count);
int i3;
for(i3=0; i3 < count;i3++){
datatype_conv_a2r(&array_of_types[i3],&array_of_types_tmp[i3]);
}
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_struct( count, array_of_blocklengths, array_of_displacements_tmp, array_of_types_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
free(array_of_displacements_tmp);
free(array_of_types_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_struct\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_struct(int count,int array_of_blocklengths[],R_MPI_Aint array_of_displacements[],R_MPI_Datatype array_of_types[],R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_struct\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_struct( count, array_of_blocklengths, array_of_displacements, array_of_types, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_struct\n");
#endif
return ret_tmp;
}
int MPI_Type_create_subarray(int ndims,int array_of_sizes[],int array_of_subsizes[],int array_of_starts[],int order,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype);
int (*LOCAL_MPI_Type_create_subarray)(int,int *,int *,int *,int,R_MPI_Datatype,R_MPI_Datatype *);

__asm__(
".global CCMPI_Type_create_subarray\n"
".weak MPI_Type_create_subarray\n"
".set MPI_Type_create_subarray,CCMPI_Type_create_subarray\n"
".extern in_w\n"
".extern A_MPI_Type_create_subarray\n"
".extern R_MPI_Type_create_subarray\n"
".type CCMPI_Type_create_subarray,@function\n"
".text\n"
"CCMPI_Type_create_subarray:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Type_create_subarray\n"
"jmp *A_MPI_Type_create_subarray@GOTPCREL(%rip)\n"
"inwrap_MPI_Type_create_subarray:\n"
"jmp *R_MPI_Type_create_subarray@GOTPCREL(%rip)\n"

);

int A_MPI_Type_create_subarray(int ndims,int array_of_sizes[],int array_of_subsizes[],int array_of_starts[],int order,A_MPI_Datatype oldtype,A_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : A_MPI_Type_create_subarray\n");
#endif
in_w=1;









int order_tmp =0;
order_conv_a2r(&order,&order_tmp);
R_MPI_Datatype oldtype_tmp;
datatype_conv_a2r(&oldtype,&oldtype_tmp);
R_MPI_Datatype  newtype_ltmp;
R_MPI_Datatype * newtype_tmp=&newtype_ltmp;
int ret_tmp= LOCAL_MPI_Type_create_subarray( ndims, array_of_sizes, array_of_subsizes, array_of_starts, order_tmp, oldtype_tmp, newtype_tmp);
datatype_conv_r2a(newtype,newtype_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Type_create_subarray\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Type_create_subarray(int ndims,int array_of_sizes[],int array_of_subsizes[],int array_of_starts[],int order,R_MPI_Datatype oldtype,R_MPI_Datatype * newtype)
{
#ifdef DEBUG
printf("entre : R_MPI_Type_create_subarray\n");
#endif
int ret_tmp= LOCAL_MPI_Type_create_subarray( ndims, array_of_sizes, array_of_subsizes, array_of_starts, order, oldtype, newtype);
#ifdef DEBUG
printf("sort : R_MPI_Type_create_subarray\n");
#endif
return ret_tmp;
}
int MPI_Unpack_external(char datarep[],void * inbuf,A_MPI_Aint insize,A_MPI_Aint * position,void * outbuf,int outcount,A_MPI_Datatype datatype);
int (*LOCAL_MPI_Unpack_external)(char *,void *,R_MPI_Aint,R_MPI_Aint *,void *,int,R_MPI_Datatype);

__asm__(
".global CCMPI_Unpack_external\n"
".weak MPI_Unpack_external\n"
".set MPI_Unpack_external,CCMPI_Unpack_external\n"
".extern in_w\n"
".extern A_MPI_Unpack_external\n"
".extern R_MPI_Unpack_external\n"
".type CCMPI_Unpack_external,@function\n"
".text\n"
"CCMPI_Unpack_external:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Unpack_external\n"
"jmp *A_MPI_Unpack_external@GOTPCREL(%rip)\n"
"inwrap_MPI_Unpack_external:\n"
"jmp *R_MPI_Unpack_external@GOTPCREL(%rip)\n"

);

int A_MPI_Unpack_external(char datarep[],void * inbuf,A_MPI_Aint insize,A_MPI_Aint * position,void * outbuf,int outcount,A_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : A_MPI_Unpack_external\n");
#endif
in_w=1;



void * inbuf_tmp;
const_buffer_conv_a2r(&inbuf,&inbuf_tmp);
R_MPI_Aint insize_tmp;
insize_tmp = (R_MPI_Aint)insize;
R_MPI_Aint  position_ltmp;
R_MPI_Aint * position_tmp=&position_ltmp;
void * outbuf_tmp;
buffer_conv_a2r(&outbuf,&outbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
int ret_tmp= LOCAL_MPI_Unpack_external( datarep, inbuf_tmp, insize_tmp, position_tmp, outbuf_tmp, outcount, datatype_tmp);
*position= (A_MPI_Aint ) *position_tmp;
buffer_conv_r2a(&outbuf,&outbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Unpack_external\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Unpack_external(char datarep[],void * inbuf,R_MPI_Aint insize,R_MPI_Aint * position,void * outbuf,int outcount,R_MPI_Datatype datatype)
{
#ifdef DEBUG
printf("entre : R_MPI_Unpack_external\n");
#endif
int ret_tmp= LOCAL_MPI_Unpack_external( datarep, inbuf, insize, position, outbuf, outcount, datatype);
#ifdef DEBUG
printf("sort : R_MPI_Unpack_external\n");
#endif
return ret_tmp;
}
int MPI_Dist_graph_create_adjacent(A_MPI_Comm comm_old,int indegree,int sources[],int * sourceweights,int outdegree,int destinations[],int * destweights,A_MPI_Info info,int reorder,A_MPI_Comm * comm_dist_graph);
int (*LOCAL_MPI_Dist_graph_create_adjacent)(R_MPI_Comm,int,int *,int *,int,int *,int *,R_MPI_Info,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Dist_graph_create_adjacent\n"
".weak MPI_Dist_graph_create_adjacent\n"
".set MPI_Dist_graph_create_adjacent,CCMPI_Dist_graph_create_adjacent\n"
".extern in_w\n"
".extern A_MPI_Dist_graph_create_adjacent\n"
".extern R_MPI_Dist_graph_create_adjacent\n"
".type CCMPI_Dist_graph_create_adjacent,@function\n"
".text\n"
"CCMPI_Dist_graph_create_adjacent:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Dist_graph_create_adjacent\n"
"jmp *A_MPI_Dist_graph_create_adjacent@GOTPCREL(%rip)\n"
"inwrap_MPI_Dist_graph_create_adjacent:\n"
"jmp *R_MPI_Dist_graph_create_adjacent@GOTPCREL(%rip)\n"

);

int A_MPI_Dist_graph_create_adjacent(A_MPI_Comm comm_old,int indegree,int sources[],int * sourceweights,int outdegree,int destinations[],int * destweights,A_MPI_Info info,int reorder,A_MPI_Comm * comm_dist_graph)
{
#ifdef DEBUG
printf("entre : A_MPI_Dist_graph_create_adjacent\n");
#endif
in_w=1;

R_MPI_Comm comm_old_tmp;
comm_conv_a2r(&comm_old,&comm_old_tmp);




int * sourceweights_tmp;
weight_conv_a2r(&sourceweights,&sourceweights_tmp);




int * destweights_tmp;
weight_conv_a2r(&destweights,&destweights_tmp);
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


R_MPI_Comm  comm_dist_graph_ltmp;
R_MPI_Comm * comm_dist_graph_tmp=&comm_dist_graph_ltmp;
int ret_tmp= LOCAL_MPI_Dist_graph_create_adjacent( comm_old_tmp, indegree, sources, sourceweights_tmp, outdegree, destinations, destweights_tmp, info_tmp, reorder, comm_dist_graph_tmp);
comm_conv_r2a(comm_dist_graph,comm_dist_graph_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Dist_graph_create_adjacent\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Dist_graph_create_adjacent(R_MPI_Comm comm_old,int indegree,int sources[],int * sourceweights,int outdegree,int destinations[],int * destweights,R_MPI_Info info,int reorder,R_MPI_Comm * comm_dist_graph)
{
#ifdef DEBUG
printf("entre : R_MPI_Dist_graph_create_adjacent\n");
#endif
int ret_tmp= LOCAL_MPI_Dist_graph_create_adjacent( comm_old, indegree, sources, sourceweights, outdegree, destinations, destweights, info, reorder, comm_dist_graph);
#ifdef DEBUG
printf("sort : R_MPI_Dist_graph_create_adjacent\n");
#endif
return ret_tmp;
}
int MPI_Dist_graph_create(A_MPI_Comm comm_old,int n,int sources[],int degrees[],int destinations[],int * weights,A_MPI_Info info,int reorder,A_MPI_Comm * comm_dist_graph);
int (*LOCAL_MPI_Dist_graph_create)(R_MPI_Comm,int,int *,int *,int *,int *,R_MPI_Info,int,R_MPI_Comm *);

__asm__(
".global CCMPI_Dist_graph_create\n"
".weak MPI_Dist_graph_create\n"
".set MPI_Dist_graph_create,CCMPI_Dist_graph_create\n"
".extern in_w\n"
".extern A_MPI_Dist_graph_create\n"
".extern R_MPI_Dist_graph_create\n"
".type CCMPI_Dist_graph_create,@function\n"
".text\n"
"CCMPI_Dist_graph_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Dist_graph_create\n"
"jmp *A_MPI_Dist_graph_create@GOTPCREL(%rip)\n"
"inwrap_MPI_Dist_graph_create:\n"
"jmp *R_MPI_Dist_graph_create@GOTPCREL(%rip)\n"

);

int A_MPI_Dist_graph_create(A_MPI_Comm comm_old,int n,int sources[],int degrees[],int destinations[],int * weights,A_MPI_Info info,int reorder,A_MPI_Comm * comm_dist_graph)
{
#ifdef DEBUG
printf("entre : A_MPI_Dist_graph_create\n");
#endif
in_w=1;

R_MPI_Comm comm_old_tmp;
comm_conv_a2r(&comm_old,&comm_old_tmp);








int * weights_tmp;
weight_conv_a2r(&weights,&weights_tmp);
R_MPI_Info info_tmp;
info_conv_a2r(&info,&info_tmp);


R_MPI_Comm  comm_dist_graph_ltmp;
R_MPI_Comm * comm_dist_graph_tmp=&comm_dist_graph_ltmp;
int ret_tmp= LOCAL_MPI_Dist_graph_create( comm_old_tmp, n, sources, degrees, destinations, weights_tmp, info_tmp, reorder, comm_dist_graph_tmp);
comm_conv_r2a(comm_dist_graph,comm_dist_graph_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Dist_graph_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Dist_graph_create(R_MPI_Comm comm_old,int n,int sources[],int degrees[],int destinations[],int * weights,R_MPI_Info info,int reorder,R_MPI_Comm * comm_dist_graph)
{
#ifdef DEBUG
printf("entre : R_MPI_Dist_graph_create\n");
#endif
int ret_tmp= LOCAL_MPI_Dist_graph_create( comm_old, n, sources, degrees, destinations, weights, info, reorder, comm_dist_graph);
#ifdef DEBUG
printf("sort : R_MPI_Dist_graph_create\n");
#endif
return ret_tmp;
}
int MPI_Dist_graph_neighbors(A_MPI_Comm comm,int maxindegree,int sources[],int * sourceweights,int maxoutdegree,int destinations[],int * destweights);
int (*LOCAL_MPI_Dist_graph_neighbors)(R_MPI_Comm,int,int *,int *,int,int *,int *);

__asm__(
".global CCMPI_Dist_graph_neighbors\n"
".weak MPI_Dist_graph_neighbors\n"
".set MPI_Dist_graph_neighbors,CCMPI_Dist_graph_neighbors\n"
".extern in_w\n"
".extern A_MPI_Dist_graph_neighbors\n"
".extern R_MPI_Dist_graph_neighbors\n"
".type CCMPI_Dist_graph_neighbors,@function\n"
".text\n"
"CCMPI_Dist_graph_neighbors:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Dist_graph_neighbors\n"
"jmp *A_MPI_Dist_graph_neighbors@GOTPCREL(%rip)\n"
"inwrap_MPI_Dist_graph_neighbors:\n"
"jmp *R_MPI_Dist_graph_neighbors@GOTPCREL(%rip)\n"

);

int A_MPI_Dist_graph_neighbors(A_MPI_Comm comm,int maxindegree,int sources[],int * sourceweights,int maxoutdegree,int destinations[],int * destweights)
{
#ifdef DEBUG
printf("entre : A_MPI_Dist_graph_neighbors\n");
#endif
in_w=1;

R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);



int * sourceweights_tmp;



int * destweights_tmp;
int ret_tmp= LOCAL_MPI_Dist_graph_neighbors( comm_tmp, maxindegree, sources, sourceweights_tmp, maxoutdegree, destinations, destweights_tmp);

weight_conv_r2a(&sourceweights,&sourceweights_tmp);

weight_conv_r2a(&destweights,&destweights_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Dist_graph_neighbors\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Dist_graph_neighbors(R_MPI_Comm comm,int maxindegree,int sources[],int * sourceweights,int maxoutdegree,int destinations[],int * destweights)
{
#ifdef DEBUG
printf("entre : R_MPI_Dist_graph_neighbors\n");
#endif
int ret_tmp= LOCAL_MPI_Dist_graph_neighbors( comm, maxindegree, sources, sourceweights, maxoutdegree, destinations, destweights);
#ifdef DEBUG
printf("sort : R_MPI_Dist_graph_neighbors\n");
#endif
return ret_tmp;
}
int MPI_Igatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Igatherv)(void *,int,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Igatherv\n"
".weak MPI_Igatherv\n"
".set MPI_Igatherv,CCMPI_Igatherv\n"
".extern in_w\n"
".extern A_MPI_Igatherv\n"
".extern R_MPI_Igatherv\n"
".type CCMPI_Igatherv,@function\n"
".text\n"
"CCMPI_Igatherv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Igatherv\n"
"jmp *A_MPI_Igatherv@GOTPCREL(%rip)\n"
"inwrap_MPI_Igatherv:\n"
"jmp *R_MPI_Igatherv@GOTPCREL(%rip)\n"

);

int A_MPI_Igatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Igatherv\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Igatherv( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcounts, displs, recvtype_tmp, root, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Igatherv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Igatherv(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],R_MPI_Datatype recvtype,int root,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Igatherv\n");
#endif
int ret_tmp= LOCAL_MPI_Igatherv( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, root, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Igatherv\n");
#endif
return ret_tmp;
}
int MPI_Iscatterv(void * sendbuf,int sendcounts[],int * displs,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Iscatterv)(void *,int *,int *,R_MPI_Datatype,void *,int,R_MPI_Datatype,int,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Iscatterv\n"
".weak MPI_Iscatterv\n"
".set MPI_Iscatterv,CCMPI_Iscatterv\n"
".extern in_w\n"
".extern A_MPI_Iscatterv\n"
".extern R_MPI_Iscatterv\n"
".type CCMPI_Iscatterv,@function\n"
".text\n"
"CCMPI_Iscatterv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iscatterv\n"
"jmp *A_MPI_Iscatterv@GOTPCREL(%rip)\n"
"inwrap_MPI_Iscatterv:\n"
"jmp *R_MPI_Iscatterv@GOTPCREL(%rip)\n"

);

int A_MPI_Iscatterv(void * sendbuf,int sendcounts[],int * displs,A_MPI_Datatype sendtype,void * recvbuf,int recvcount,A_MPI_Datatype recvtype,int root,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Iscatterv\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);


R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Iscatterv( sendbuf_tmp, sendcounts, displs, sendtype_tmp, recvbuf_tmp, recvcount, recvtype_tmp, root, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iscatterv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iscatterv(void * sendbuf,int sendcounts[],int * displs,R_MPI_Datatype sendtype,void * recvbuf,int recvcount,R_MPI_Datatype recvtype,int root,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Iscatterv\n");
#endif
int ret_tmp= LOCAL_MPI_Iscatterv( sendbuf, sendcounts, displs, sendtype, recvbuf, recvcount, recvtype, root, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Iscatterv\n");
#endif
return ret_tmp;
}
int MPI_Iallgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Iallgatherv)(void *,int,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Iallgatherv\n"
".weak MPI_Iallgatherv\n"
".set MPI_Iallgatherv,CCMPI_Iallgatherv\n"
".extern in_w\n"
".extern A_MPI_Iallgatherv\n"
".extern R_MPI_Iallgatherv\n"
".type CCMPI_Iallgatherv,@function\n"
".text\n"
"CCMPI_Iallgatherv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Iallgatherv\n"
"jmp *A_MPI_Iallgatherv@GOTPCREL(%rip)\n"
"inwrap_MPI_Iallgatherv:\n"
"jmp *R_MPI_Iallgatherv@GOTPCREL(%rip)\n"

);

int A_MPI_Iallgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Iallgatherv\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Iallgatherv( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcounts, displs, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Iallgatherv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Iallgatherv(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Iallgatherv\n");
#endif
int ret_tmp= LOCAL_MPI_Iallgatherv( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Iallgatherv\n");
#endif
return ret_tmp;
}
int MPI_Ialltoallv(void * sendbuf,int * sendcounts,int * sdispls,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * rdispls,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ialltoallv)(void *,int *,int *,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ialltoallv\n"
".weak MPI_Ialltoallv\n"
".set MPI_Ialltoallv,CCMPI_Ialltoallv\n"
".extern in_w\n"
".extern A_MPI_Ialltoallv\n"
".extern R_MPI_Ialltoallv\n"
".type CCMPI_Ialltoallv,@function\n"
".text\n"
"CCMPI_Ialltoallv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ialltoallv\n"
"jmp *A_MPI_Ialltoallv@GOTPCREL(%rip)\n"
"inwrap_MPI_Ialltoallv:\n"
"jmp *R_MPI_Ialltoallv@GOTPCREL(%rip)\n"

);

int A_MPI_Ialltoallv(void * sendbuf,int * sendcounts,int * sdispls,A_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * rdispls,A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ialltoallv\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ialltoallv( sendbuf_tmp, sendcounts, sdispls, sendtype_tmp, recvbuf_tmp, recvcounts, rdispls, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&sendbuf,&sendbuf_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ialltoallv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ialltoallv(void * sendbuf,int * sendcounts,int * sdispls,R_MPI_Datatype sendtype,void * recvbuf,int * recvcounts,int * rdispls,R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ialltoallv\n");
#endif
int ret_tmp= LOCAL_MPI_Ialltoallv( sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ialltoallv\n");
#endif
return ret_tmp;
}
int MPI_Ialltoallw(void * sendbuf,int sendcounts[],int sdispls[],R_MPI_Datatype * sendtypes[],void * recvbuf,int recvcounts[],int rdispls[],R_MPI_Datatype * recvtypes[],A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ialltoallw)(void *,int *,int *,R_MPI_Datatype *,void *,int *,int *,R_MPI_Datatype *,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ialltoallw\n"
".weak MPI_Ialltoallw\n"
".set MPI_Ialltoallw,CCMPI_Ialltoallw\n"
".extern in_w\n"
".extern A_MPI_Ialltoallw\n"
".extern R_MPI_Ialltoallw\n"
".type CCMPI_Ialltoallw,@function\n"
".text\n"
"CCMPI_Ialltoallw:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ialltoallw\n"
"jmp *A_MPI_Ialltoallw@GOTPCREL(%rip)\n"
"inwrap_MPI_Ialltoallw:\n"
"jmp *R_MPI_Ialltoallw@GOTPCREL(%rip)\n"

);

int A_MPI_Ialltoallw(void * sendbuf,int sendcounts[],int sdispls[],A_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],int rdispls[],A_MPI_Datatype recvtypes[],A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ialltoallw\n");
#endif
in_w=1;
R_MPI_Comm comm_tmp1;
comm_conv_a2r(&comm,&comm_tmp1);
int Comm_size;
LOCAL_MPI_Comm_size(comm_tmp1, &Comm_size);
void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);




R_MPI_Datatype *sendtypes_tmp = malloc(sizeof(R_MPI_Datatype)*Comm_size);
int i1;
for(i1=0; i1 < Comm_size;i1++){
datatype_conv_a2r(&sendtypes[i1],&sendtypes_tmp[i1]);
}
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype *recvtypes_tmp = malloc(sizeof(R_MPI_Datatype)*Comm_size);
int i2;
for(i2=0; i2 < Comm_size;i2++){
datatype_conv_a2r(&recvtypes[i2],&recvtypes_tmp[i2]);
}
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ialltoallw( sendbuf_tmp, sendcounts, sdispls, sendtypes_tmp, recvbuf_tmp, recvcounts, rdispls, recvtypes_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
free(sendtypes_tmp);
free(recvtypes_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ialltoallw\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ialltoallw(void * sendbuf,int sendcounts[],int sdispls[],R_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],int rdispls[],R_MPI_Datatype recvtypes[],R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ialltoallw\n");
#endif
int ret_tmp= LOCAL_MPI_Ialltoallw( sendbuf, sendcounts, sdispls, sendtypes, recvbuf, recvcounts, rdispls, recvtypes, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ialltoallw\n");
#endif
return ret_tmp;
}
int MPI_Ireduce_scatter(void * sendbuf,void * recvbuf,int recvcounts[],A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ireduce_scatter)(void *,void *,int *,R_MPI_Datatype,R_MPI_Op,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ireduce_scatter\n"
".weak MPI_Ireduce_scatter\n"
".set MPI_Ireduce_scatter,CCMPI_Ireduce_scatter\n"
".extern in_w\n"
".extern A_MPI_Ireduce_scatter\n"
".extern R_MPI_Ireduce_scatter\n"
".type CCMPI_Ireduce_scatter,@function\n"
".text\n"
"CCMPI_Ireduce_scatter:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ireduce_scatter\n"
"jmp *A_MPI_Ireduce_scatter@GOTPCREL(%rip)\n"
"inwrap_MPI_Ireduce_scatter:\n"
"jmp *R_MPI_Ireduce_scatter@GOTPCREL(%rip)\n"

);

int A_MPI_Ireduce_scatter(void * sendbuf,void * recvbuf,int recvcounts[],A_MPI_Datatype datatype,A_MPI_Op op,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ireduce_scatter\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Op op_tmp;
op_conv_a2r(&op,&op_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ireduce_scatter( sendbuf_tmp, recvbuf_tmp, recvcounts, datatype_tmp, op_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ireduce_scatter\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ireduce_scatter(void * sendbuf,void * recvbuf,int recvcounts[],R_MPI_Datatype datatype,R_MPI_Op op,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ireduce_scatter\n");
#endif
int ret_tmp= LOCAL_MPI_Ireduce_scatter( sendbuf, recvbuf, recvcounts, datatype, op, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ireduce_scatter\n");
#endif
return ret_tmp;
}
int MPI_Ineighbor_allgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ineighbor_allgatherv)(void *,int,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ineighbor_allgatherv\n"
".weak MPI_Ineighbor_allgatherv\n"
".set MPI_Ineighbor_allgatherv,CCMPI_Ineighbor_allgatherv\n"
".extern in_w\n"
".extern A_MPI_Ineighbor_allgatherv\n"
".extern R_MPI_Ineighbor_allgatherv\n"
".type CCMPI_Ineighbor_allgatherv,@function\n"
".text\n"
"CCMPI_Ineighbor_allgatherv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ineighbor_allgatherv\n"
"jmp *A_MPI_Ineighbor_allgatherv@GOTPCREL(%rip)\n"
"inwrap_MPI_Ineighbor_allgatherv:\n"
"jmp *R_MPI_Ineighbor_allgatherv@GOTPCREL(%rip)\n"

);

int A_MPI_Ineighbor_allgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ineighbor_allgatherv\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ineighbor_allgatherv( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcounts, displs, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ineighbor_allgatherv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ineighbor_allgatherv(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ineighbor_allgatherv\n");
#endif
int ret_tmp= LOCAL_MPI_Ineighbor_allgatherv( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ineighbor_allgatherv\n");
#endif
return ret_tmp;
}
int MPI_Ineighbor_alltoallv(void * sendbuf,int sendcounts[],int sdispls[],A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int rdispls[],A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ineighbor_alltoallv)(void *,int *,int *,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ineighbor_alltoallv\n"
".weak MPI_Ineighbor_alltoallv\n"
".set MPI_Ineighbor_alltoallv,CCMPI_Ineighbor_alltoallv\n"
".extern in_w\n"
".extern A_MPI_Ineighbor_alltoallv\n"
".extern R_MPI_Ineighbor_alltoallv\n"
".type CCMPI_Ineighbor_alltoallv,@function\n"
".text\n"
"CCMPI_Ineighbor_alltoallv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ineighbor_alltoallv\n"
"jmp *A_MPI_Ineighbor_alltoallv@GOTPCREL(%rip)\n"
"inwrap_MPI_Ineighbor_alltoallv:\n"
"jmp *R_MPI_Ineighbor_alltoallv@GOTPCREL(%rip)\n"

);

int A_MPI_Ineighbor_alltoallv(void * sendbuf,int sendcounts[],int sdispls[],A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int rdispls[],A_MPI_Datatype recvtype,A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ineighbor_alltoallv\n");
#endif
in_w=1;

void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);




R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ineighbor_alltoallv( sendbuf_tmp, sendcounts, sdispls, sendtype_tmp, recvbuf_tmp, recvcounts, rdispls, recvtype_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ineighbor_alltoallv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ineighbor_alltoallv(void * sendbuf,int sendcounts[],int sdispls[],R_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int rdispls[],R_MPI_Datatype recvtype,R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ineighbor_alltoallv\n");
#endif
int ret_tmp= LOCAL_MPI_Ineighbor_alltoallv( sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ineighbor_alltoallv\n");
#endif
return ret_tmp;
}
int MPI_Ineighbor_alltoallw(void * sendbuf,int sendcounts[],R_MPI_Aint * sdispls[],R_MPI_Datatype * sendtypes[],void * recvbuf,int recvcounts[],R_MPI_Aint * rdispls[],R_MPI_Datatype * recvtypes[],A_MPI_Comm comm,A_MPI_Request * request);
int (*LOCAL_MPI_Ineighbor_alltoallw)(void *,int *,R_MPI_Aint *,R_MPI_Datatype *,void *,int *,R_MPI_Aint *,R_MPI_Datatype *,R_MPI_Comm,R_MPI_Request *);

__asm__(
".global CCMPI_Ineighbor_alltoallw\n"
".weak MPI_Ineighbor_alltoallw\n"
".set MPI_Ineighbor_alltoallw,CCMPI_Ineighbor_alltoallw\n"
".extern in_w\n"
".extern A_MPI_Ineighbor_alltoallw\n"
".extern R_MPI_Ineighbor_alltoallw\n"
".type CCMPI_Ineighbor_alltoallw,@function\n"
".text\n"
"CCMPI_Ineighbor_alltoallw:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Ineighbor_alltoallw\n"
"jmp *A_MPI_Ineighbor_alltoallw@GOTPCREL(%rip)\n"
"inwrap_MPI_Ineighbor_alltoallw:\n"
"jmp *R_MPI_Ineighbor_alltoallw@GOTPCREL(%rip)\n"

);

int A_MPI_Ineighbor_alltoallw(void * sendbuf,int sendcounts[],A_MPI_Aint sdispls[],A_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],A_MPI_Aint rdispls[],A_MPI_Datatype recvtypes[],A_MPI_Comm comm,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_Ineighbor_alltoallw\n");
#endif
in_w=1;
R_MPI_Comm comm_tmp1;
comm_conv_a2r(&comm,&comm_tmp1);
int indegree, outdegree, weighted;
LOCAL_MPI_Dist_graph_neighbors_count(comm_tmp1, &indegree,&outdegree, &weighted);
void * sendbuf_tmp;
const_buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Aint *sdispls_tmp = malloc(sizeof(R_MPI_Aint)*outdegree);
int i2;
for(i2=0; i2 < outdegree;i2++){
sdispls_tmp[i2]= (R_MPI_Aint)sdispls[i2];
}
R_MPI_Datatype *sendtypes_tmp = malloc(sizeof(R_MPI_Datatype)*outdegree);
int i3;
for(i3=0; i3 < outdegree;i3++){
datatype_conv_a2r(&sendtypes[i3],&sendtypes_tmp[i3]);
}
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Aint *rdispls_tmp = malloc(sizeof(R_MPI_Aint)*indegree);
int i5;
for(i5=0; i5 < indegree;i5++){
rdispls_tmp[i5]= (R_MPI_Aint)rdispls[i5];
}
R_MPI_Datatype *recvtypes_tmp = malloc(sizeof(R_MPI_Datatype)*indegree);
int i6;
for(i6=0; i6 < indegree;i6++){
datatype_conv_a2r(&recvtypes[i6],&recvtypes_tmp[i6]);
}
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_Ineighbor_alltoallw( sendbuf_tmp, sendcounts, sdispls_tmp, sendtypes_tmp, recvbuf_tmp, recvcounts, rdispls_tmp, recvtypes_tmp, comm_tmp, request_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
free(sdispls_tmp);
free(sendtypes_tmp);
free(rdispls_tmp);
free(recvtypes_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Ineighbor_alltoallw\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Ineighbor_alltoallw(void * sendbuf,int sendcounts[],R_MPI_Aint sdispls[],R_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],R_MPI_Aint rdispls[],R_MPI_Datatype recvtypes[],R_MPI_Comm comm,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_Ineighbor_alltoallw\n");
#endif
int ret_tmp= LOCAL_MPI_Ineighbor_alltoallw( sendbuf, sendcounts, sdispls, sendtypes, recvbuf, recvcounts, rdispls, recvtypes, comm, request);
#ifdef DEBUG
printf("sort : R_MPI_Ineighbor_alltoallw\n");
#endif
return ret_tmp;
}
int MPI_Neighbor_allgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Neighbor_allgatherv)(void *,int,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Neighbor_allgatherv\n"
".weak MPI_Neighbor_allgatherv\n"
".set MPI_Neighbor_allgatherv,CCMPI_Neighbor_allgatherv\n"
".extern in_w\n"
".extern A_MPI_Neighbor_allgatherv\n"
".extern R_MPI_Neighbor_allgatherv\n"
".type CCMPI_Neighbor_allgatherv,@function\n"
".text\n"
"CCMPI_Neighbor_allgatherv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Neighbor_allgatherv\n"
"jmp *A_MPI_Neighbor_allgatherv@GOTPCREL(%rip)\n"
"inwrap_MPI_Neighbor_allgatherv:\n"
"jmp *R_MPI_Neighbor_allgatherv@GOTPCREL(%rip)\n"

);

int A_MPI_Neighbor_allgatherv(void * sendbuf,int sendcount,A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Neighbor_allgatherv\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Neighbor_allgatherv( sendbuf_tmp, sendcount, sendtype_tmp, recvbuf_tmp, recvcounts, displs, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Neighbor_allgatherv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Neighbor_allgatherv(void * sendbuf,int sendcount,R_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int displs[],R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Neighbor_allgatherv\n");
#endif
int ret_tmp= LOCAL_MPI_Neighbor_allgatherv( sendbuf, sendcount, sendtype, recvbuf, recvcounts, displs, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Neighbor_allgatherv\n");
#endif
return ret_tmp;
}
int MPI_Neighbor_alltoallv(void * sendbuf,int sendcounts[],int sdispls[],A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int rdispls[],A_MPI_Datatype recvtype,A_MPI_Comm comm);
int (*LOCAL_MPI_Neighbor_alltoallv)(void *,int *,int *,R_MPI_Datatype,void *,int *,int *,R_MPI_Datatype,R_MPI_Comm);

__asm__(
".global CCMPI_Neighbor_alltoallv\n"
".weak MPI_Neighbor_alltoallv\n"
".set MPI_Neighbor_alltoallv,CCMPI_Neighbor_alltoallv\n"
".extern in_w\n"
".extern A_MPI_Neighbor_alltoallv\n"
".extern R_MPI_Neighbor_alltoallv\n"
".type CCMPI_Neighbor_alltoallv,@function\n"
".text\n"
"CCMPI_Neighbor_alltoallv:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Neighbor_alltoallv\n"
"jmp *A_MPI_Neighbor_alltoallv@GOTPCREL(%rip)\n"
"inwrap_MPI_Neighbor_alltoallv:\n"
"jmp *R_MPI_Neighbor_alltoallv@GOTPCREL(%rip)\n"

);

int A_MPI_Neighbor_alltoallv(void * sendbuf,int sendcounts[],int sdispls[],A_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int rdispls[],A_MPI_Datatype recvtype,A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Neighbor_alltoallv\n");
#endif
in_w=1;

void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);




R_MPI_Datatype sendtype_tmp;
datatype_conv_a2r(&sendtype,&sendtype_tmp);
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);




R_MPI_Datatype recvtype_tmp;
datatype_conv_a2r(&recvtype,&recvtype_tmp);
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Neighbor_alltoallv( sendbuf_tmp, sendcounts, sdispls, sendtype_tmp, recvbuf_tmp, recvcounts, rdispls, recvtype_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Neighbor_alltoallv\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Neighbor_alltoallv(void * sendbuf,int sendcounts[],int sdispls[],R_MPI_Datatype sendtype,void * recvbuf,int recvcounts[],int rdispls[],R_MPI_Datatype recvtype,R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Neighbor_alltoallv\n");
#endif
int ret_tmp= LOCAL_MPI_Neighbor_alltoallv( sendbuf, sendcounts, sdispls, sendtype, recvbuf, recvcounts, rdispls, recvtype, comm);
#ifdef DEBUG
printf("sort : R_MPI_Neighbor_alltoallv\n");
#endif
return ret_tmp;
}
int MPI_Neighbor_alltoallw(void * sendbuf,int sendcounts[],R_MPI_Aint * sdispls[],R_MPI_Datatype * sendtypes[],void * recvbuf,int recvcounts[],R_MPI_Aint * rdispls[],R_MPI_Datatype * recvtypes[],A_MPI_Comm comm);
int (*LOCAL_MPI_Neighbor_alltoallw)(void *,int *,R_MPI_Aint *,R_MPI_Datatype *,void *,int *,R_MPI_Aint *,R_MPI_Datatype *,R_MPI_Comm);

__asm__(
".global CCMPI_Neighbor_alltoallw\n"
".weak MPI_Neighbor_alltoallw\n"
".set MPI_Neighbor_alltoallw,CCMPI_Neighbor_alltoallw\n"
".extern in_w\n"
".extern A_MPI_Neighbor_alltoallw\n"
".extern R_MPI_Neighbor_alltoallw\n"
".type CCMPI_Neighbor_alltoallw,@function\n"
".text\n"
"CCMPI_Neighbor_alltoallw:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Neighbor_alltoallw\n"
"jmp *A_MPI_Neighbor_alltoallw@GOTPCREL(%rip)\n"
"inwrap_MPI_Neighbor_alltoallw:\n"
"jmp *R_MPI_Neighbor_alltoallw@GOTPCREL(%rip)\n"

);

int A_MPI_Neighbor_alltoallw(void * sendbuf,int sendcounts[],A_MPI_Aint sdispls[],A_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],A_MPI_Aint rdispls[],A_MPI_Datatype recvtypes[],A_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : A_MPI_Neighbor_alltoallw\n");
#endif
in_w=1;
R_MPI_Comm comm_tmp1;
comm_conv_a2r(&comm,&comm_tmp1);
int indegree, outdegree, weighted;
LOCAL_MPI_Dist_graph_neighbors_count(comm_tmp1, &indegree,&outdegree, &weighted);
void * sendbuf_tmp;
buffer_conv_a2r(&sendbuf,&sendbuf_tmp);


R_MPI_Aint *sdispls_tmp = malloc(sizeof(R_MPI_Aint)*outdegree);
int i1;
for(i1=0; i1 < outdegree;i1++){
sdispls_tmp[i1]= (R_MPI_Aint)sdispls[i1];
}
R_MPI_Datatype *sendtypes_tmp = malloc(sizeof(R_MPI_Datatype)*outdegree);
int i2;
for(i2=0; i2 < outdegree;i2++){
datatype_conv_a2r(&sendtypes[i2],&sendtypes_tmp[i2]);
}
void * recvbuf_tmp;
buffer_conv_a2r(&recvbuf,&recvbuf_tmp);


R_MPI_Aint *rdispls_tmp = malloc(sizeof(R_MPI_Aint)*indegree);
int i3;
for(i3=0; i3 < indegree;i3++){
rdispls_tmp[i3]= (R_MPI_Aint)rdispls[i3];
}
R_MPI_Datatype *recvtypes_tmp = malloc(sizeof(R_MPI_Datatype)*indegree);
int i4;
for(i4=0; i4 < indegree;i4++){
datatype_conv_a2r(&recvtypes[i4],&recvtypes_tmp[i4]);
}
R_MPI_Comm comm_tmp;
comm_conv_a2r(&comm,&comm_tmp);
int ret_tmp= LOCAL_MPI_Neighbor_alltoallw( sendbuf_tmp, sendcounts, sdispls_tmp, sendtypes_tmp, recvbuf_tmp, recvcounts, rdispls_tmp, recvtypes_tmp, comm_tmp);
buffer_conv_r2a(&recvbuf,&recvbuf_tmp);
free(sdispls_tmp);
free(sendtypes_tmp);
free(rdispls_tmp);
free(recvtypes_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Neighbor_alltoallw\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Neighbor_alltoallw(void * sendbuf,int sendcounts[],R_MPI_Aint sdispls[],R_MPI_Datatype sendtypes[],void * recvbuf,int recvcounts[],R_MPI_Aint rdispls[],R_MPI_Datatype recvtypes[],R_MPI_Comm comm)
{
#ifdef DEBUG
printf("entre : R_MPI_Neighbor_alltoallw\n");
#endif
int ret_tmp= LOCAL_MPI_Neighbor_alltoallw( sendbuf, sendcounts, sdispls, sendtypes, recvbuf, recvcounts, rdispls, recvtypes, comm);
#ifdef DEBUG
printf("sort : R_MPI_Neighbor_alltoallw\n");
#endif
return ret_tmp;
}
int MPI_T_category_get_cvars(int cat_index,int len,int indices[]);
int (*LOCAL_MPI_T_category_get_cvars)(int,int,int *);

__asm__(
".global CCMPI_T_category_get_cvars\n"
".weak MPI_T_category_get_cvars\n"
".set MPI_T_category_get_cvars,CCMPI_T_category_get_cvars\n"
".extern in_w\n"
".extern A_MPI_T_category_get_cvars\n"
".extern R_MPI_T_category_get_cvars\n"
".type CCMPI_T_category_get_cvars,@function\n"
".text\n"
"CCMPI_T_category_get_cvars:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_category_get_cvars\n"
"jmp *A_MPI_T_category_get_cvars@GOTPCREL(%rip)\n"
"inwrap_MPI_T_category_get_cvars:\n"
"jmp *R_MPI_T_category_get_cvars@GOTPCREL(%rip)\n"

);

int A_MPI_T_category_get_cvars(int cat_index,int len,int indices[])
{
#ifdef DEBUG
printf("entre : A_MPI_T_category_get_cvars\n");
#endif
in_w=1;






int ret_tmp= LOCAL_MPI_T_category_get_cvars( cat_index, len, indices);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_category_get_cvars\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_category_get_cvars(int cat_index,int len,int indices[])
{
#ifdef DEBUG
printf("entre : R_MPI_T_category_get_cvars\n");
#endif
int ret_tmp= LOCAL_MPI_T_category_get_cvars( cat_index, len, indices);
#ifdef DEBUG
printf("sort : R_MPI_T_category_get_cvars\n");
#endif
return ret_tmp;
}
int MPI_T_category_get_pvars(int cat_index,int len,int indices[]);
int (*LOCAL_MPI_T_category_get_pvars)(int,int,int *);

__asm__(
".global CCMPI_T_category_get_pvars\n"
".weak MPI_T_category_get_pvars\n"
".set MPI_T_category_get_pvars,CCMPI_T_category_get_pvars\n"
".extern in_w\n"
".extern A_MPI_T_category_get_pvars\n"
".extern R_MPI_T_category_get_pvars\n"
".type CCMPI_T_category_get_pvars,@function\n"
".text\n"
"CCMPI_T_category_get_pvars:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_category_get_pvars\n"
"jmp *A_MPI_T_category_get_pvars@GOTPCREL(%rip)\n"
"inwrap_MPI_T_category_get_pvars:\n"
"jmp *R_MPI_T_category_get_pvars@GOTPCREL(%rip)\n"

);

int A_MPI_T_category_get_pvars(int cat_index,int len,int indices[])
{
#ifdef DEBUG
printf("entre : A_MPI_T_category_get_pvars\n");
#endif
in_w=1;






int ret_tmp= LOCAL_MPI_T_category_get_pvars( cat_index, len, indices);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_category_get_pvars\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_category_get_pvars(int cat_index,int len,int indices[])
{
#ifdef DEBUG
printf("entre : R_MPI_T_category_get_pvars\n");
#endif
int ret_tmp= LOCAL_MPI_T_category_get_pvars( cat_index, len, indices);
#ifdef DEBUG
printf("sort : R_MPI_T_category_get_pvars\n");
#endif
return ret_tmp;
}
int MPI_T_category_get_categories(int cat_index,int len,int indices[]);
int (*LOCAL_MPI_T_category_get_categories)(int,int,int *);

__asm__(
".global CCMPI_T_category_get_categories\n"
".weak MPI_T_category_get_categories\n"
".set MPI_T_category_get_categories,CCMPI_T_category_get_categories\n"
".extern in_w\n"
".extern A_MPI_T_category_get_categories\n"
".extern R_MPI_T_category_get_categories\n"
".type CCMPI_T_category_get_categories,@function\n"
".text\n"
"CCMPI_T_category_get_categories:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_category_get_categories\n"
"jmp *A_MPI_T_category_get_categories@GOTPCREL(%rip)\n"
"inwrap_MPI_T_category_get_categories:\n"
"jmp *R_MPI_T_category_get_categories@GOTPCREL(%rip)\n"

);

int A_MPI_T_category_get_categories(int cat_index,int len,int indices[])
{
#ifdef DEBUG
printf("entre : A_MPI_T_category_get_categories\n");
#endif
in_w=1;






int ret_tmp= LOCAL_MPI_T_category_get_categories( cat_index, len, indices);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_category_get_categories\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_category_get_categories(int cat_index,int len,int indices[])
{
#ifdef DEBUG
printf("entre : R_MPI_T_category_get_categories\n");
#endif
int ret_tmp= LOCAL_MPI_T_category_get_categories( cat_index, len, indices);
#ifdef DEBUG
printf("sort : R_MPI_T_category_get_categories\n");
#endif
return ret_tmp;
}
int MPI_File_iwrite_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iwrite_all)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iwrite_all\n"
".weak MPI_File_iwrite_all\n"
".set MPI_File_iwrite_all,CCMPI_File_iwrite_all\n"
".extern in_w\n"
".extern A_MPI_File_iwrite_all\n"
".extern R_MPI_File_iwrite_all\n"
".type CCMPI_File_iwrite_all,@function\n"
".text\n"
"CCMPI_File_iwrite_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iwrite_all\n"
"jmp *A_MPI_File_iwrite_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iwrite_all:\n"
"jmp *R_MPI_File_iwrite_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_iwrite_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iwrite_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iwrite_all( fh_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iwrite_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iwrite_all(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iwrite_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_iwrite_all( fh, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iwrite_all\n");
#endif
return ret_tmp;
}
int MPI_File_iwrite_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iwrite_at_all)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iwrite_at_all\n"
".weak MPI_File_iwrite_at_all\n"
".set MPI_File_iwrite_at_all,CCMPI_File_iwrite_at_all\n"
".extern in_w\n"
".extern A_MPI_File_iwrite_at_all\n"
".extern R_MPI_File_iwrite_at_all\n"
".type CCMPI_File_iwrite_at_all,@function\n"
".text\n"
"CCMPI_File_iwrite_at_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iwrite_at_all\n"
"jmp *A_MPI_File_iwrite_at_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iwrite_at_all:\n"
"jmp *R_MPI_File_iwrite_at_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_iwrite_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iwrite_at_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
const_buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iwrite_at_all( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iwrite_at_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iwrite_at_all(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iwrite_at_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_iwrite_at_all( fh, offset, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iwrite_at_all\n");
#endif
return ret_tmp;
}
int MPI_T_category_get_index(char * name,int * cat_index);
int (*LOCAL_MPI_T_category_get_index)(char *,int *);

__asm__(
".global CCMPI_T_category_get_index\n"
".weak MPI_T_category_get_index\n"
".set MPI_T_category_get_index,CCMPI_T_category_get_index\n"
".extern in_w\n"
".extern A_MPI_T_category_get_index\n"
".extern R_MPI_T_category_get_index\n"
".type CCMPI_T_category_get_index,@function\n"
".text\n"
"CCMPI_T_category_get_index:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_category_get_index\n"
"jmp *A_MPI_T_category_get_index@GOTPCREL(%rip)\n"
"inwrap_MPI_T_category_get_index:\n"
"jmp *R_MPI_T_category_get_index@GOTPCREL(%rip)\n"

);

int A_MPI_T_category_get_index(char * name,int * cat_index)
{
#ifdef DEBUG
printf("entre : A_MPI_T_category_get_index\n");
#endif
in_w=1;




int ret_tmp= LOCAL_MPI_T_category_get_index( name, cat_index);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_category_get_index\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_category_get_index(char * name,int * cat_index)
{
#ifdef DEBUG
printf("entre : R_MPI_T_category_get_index\n");
#endif
int ret_tmp= LOCAL_MPI_T_category_get_index( name, cat_index);
#ifdef DEBUG
printf("sort : R_MPI_T_category_get_index\n");
#endif
return ret_tmp;
}
int MPI_T_cvar_get_index(char * name,int * cvar_index);
int (*LOCAL_MPI_T_cvar_get_index)(char *,int *);

__asm__(
".global CCMPI_T_cvar_get_index\n"
".weak MPI_T_cvar_get_index\n"
".set MPI_T_cvar_get_index,CCMPI_T_cvar_get_index\n"
".extern in_w\n"
".extern A_MPI_T_cvar_get_index\n"
".extern R_MPI_T_cvar_get_index\n"
".type CCMPI_T_cvar_get_index,@function\n"
".text\n"
"CCMPI_T_cvar_get_index:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_cvar_get_index\n"
"jmp *A_MPI_T_cvar_get_index@GOTPCREL(%rip)\n"
"inwrap_MPI_T_cvar_get_index:\n"
"jmp *R_MPI_T_cvar_get_index@GOTPCREL(%rip)\n"

);

int A_MPI_T_cvar_get_index(char * name,int * cvar_index)
{
#ifdef DEBUG
printf("entre : A_MPI_T_cvar_get_index\n");
#endif
in_w=1;




int ret_tmp= LOCAL_MPI_T_cvar_get_index( name, cvar_index);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_cvar_get_index\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_cvar_get_index(char * name,int * cvar_index)
{
#ifdef DEBUG
printf("entre : R_MPI_T_cvar_get_index\n");
#endif
int ret_tmp= LOCAL_MPI_T_cvar_get_index( name, cvar_index);
#ifdef DEBUG
printf("sort : R_MPI_T_cvar_get_index\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_get_index(char * name,int var_class,int * pvar_index);
int (*LOCAL_MPI_T_pvar_get_index)(char *,int,int *);

__asm__(
".global CCMPI_T_pvar_get_index\n"
".weak MPI_T_pvar_get_index\n"
".set MPI_T_pvar_get_index,CCMPI_T_pvar_get_index\n"
".extern in_w\n"
".extern A_MPI_T_pvar_get_index\n"
".extern R_MPI_T_pvar_get_index\n"
".type CCMPI_T_pvar_get_index,@function\n"
".text\n"
"CCMPI_T_pvar_get_index:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_get_index\n"
"jmp *A_MPI_T_pvar_get_index@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_get_index:\n"
"jmp *R_MPI_T_pvar_get_index@GOTPCREL(%rip)\n"

);

int A_MPI_T_pvar_get_index(char * name,int var_class,int * pvar_index)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_get_index\n");
#endif
in_w=1;






int ret_tmp= LOCAL_MPI_T_pvar_get_index( name, var_class, pvar_index);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_get_index\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_get_index(char * name,int var_class,int * pvar_index)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_get_index\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_get_index( name, var_class, pvar_index);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_get_index\n");
#endif
return ret_tmp;
}
A_MPI_Aint MPI_Aint_add(A_MPI_Aint base,A_MPI_Aint disp);
R_MPI_Aint (*LOCAL_MPI_Aint_add)(R_MPI_Aint,R_MPI_Aint);

__asm__(
".global CCMPI_Aint_add\n"
".weak MPI_Aint_add\n"
".set MPI_Aint_add,CCMPI_Aint_add\n"
".extern in_w\n"
".extern A_MPI_Aint_add\n"
".extern R_MPI_Aint_add\n"
".type CCMPI_Aint_add,@function\n"
".text\n"
"CCMPI_Aint_add:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Aint_add\n"
"jmp *A_MPI_Aint_add@GOTPCREL(%rip)\n"
"inwrap_MPI_Aint_add:\n"
"jmp *R_MPI_Aint_add@GOTPCREL(%rip)\n"

);

A_MPI_Aint A_MPI_Aint_add(A_MPI_Aint base,A_MPI_Aint disp)
{
#ifdef DEBUG
printf("entre : A_MPI_Aint_add\n");
#endif
in_w=1;

R_MPI_Aint base_tmp;
base_tmp = (R_MPI_Aint)base;
R_MPI_Aint disp_tmp;
disp_tmp = (R_MPI_Aint)disp;
R_MPI_Aint ret_tmp= LOCAL_MPI_Aint_add( base_tmp, disp_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Aint_add\n");
#endif
return (A_MPI_Aint)ret_tmp;
}
R_MPI_Aint R_MPI_Aint_add(R_MPI_Aint base,R_MPI_Aint disp)
{
#ifdef DEBUG
printf("entre : R_MPI_Aint_add\n");
#endif
R_MPI_Aint ret_tmp= LOCAL_MPI_Aint_add( base, disp);
#ifdef DEBUG
printf("sort : R_MPI_Aint_add\n");
#endif
return ret_tmp;
}
A_MPI_Aint MPI_Aint_diff(A_MPI_Aint addr1,A_MPI_Aint addr2);
R_MPI_Aint (*LOCAL_MPI_Aint_diff)(R_MPI_Aint,R_MPI_Aint);

__asm__(
".global CCMPI_Aint_diff\n"
".weak MPI_Aint_diff\n"
".set MPI_Aint_diff,CCMPI_Aint_diff\n"
".extern in_w\n"
".extern A_MPI_Aint_diff\n"
".extern R_MPI_Aint_diff\n"
".type CCMPI_Aint_diff,@function\n"
".text\n"
"CCMPI_Aint_diff:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Aint_diff\n"
"jmp *A_MPI_Aint_diff@GOTPCREL(%rip)\n"
"inwrap_MPI_Aint_diff:\n"
"jmp *R_MPI_Aint_diff@GOTPCREL(%rip)\n"

);

A_MPI_Aint A_MPI_Aint_diff(A_MPI_Aint addr1,A_MPI_Aint addr2)
{
#ifdef DEBUG
printf("entre : A_MPI_Aint_diff\n");
#endif
in_w=1;

R_MPI_Aint addr1_tmp;
addr1_tmp = (R_MPI_Aint)addr1;
R_MPI_Aint addr2_tmp;
addr2_tmp = (R_MPI_Aint)addr2;
R_MPI_Aint ret_tmp= LOCAL_MPI_Aint_diff( addr1_tmp, addr2_tmp);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Aint_diff\n");
#endif
return (A_MPI_Aint)ret_tmp;
}
R_MPI_Aint R_MPI_Aint_diff(R_MPI_Aint addr1,R_MPI_Aint addr2)
{
#ifdef DEBUG
printf("entre : R_MPI_Aint_diff\n");
#endif
R_MPI_Aint ret_tmp= LOCAL_MPI_Aint_diff( addr1, addr2);
#ifdef DEBUG
printf("sort : R_MPI_Aint_diff\n");
#endif
return ret_tmp;
}
int MPI_File_iread_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iread_all)(R_MPI_File,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iread_all\n"
".weak MPI_File_iread_all\n"
".set MPI_File_iread_all,CCMPI_File_iread_all\n"
".extern in_w\n"
".extern A_MPI_File_iread_all\n"
".extern R_MPI_File_iread_all\n"
".type CCMPI_File_iread_all,@function\n"
".text\n"
"CCMPI_File_iread_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iread_all\n"
"jmp *A_MPI_File_iread_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iread_all:\n"
"jmp *R_MPI_File_iread_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_iread_all(A_MPI_File fh,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iread_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iread_all( fh_tmp, buf_tmp, count, datatype_tmp, request_tmp);
file_conv_r2a(&fh,&fh_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iread_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iread_all(R_MPI_File fh,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iread_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_iread_all( fh, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iread_all\n");
#endif
return ret_tmp;
}
int MPI_File_iread_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request);
int (*LOCAL_MPI_File_iread_at_all)(R_MPI_File,R_MPI_Offset,void *,int,R_MPI_Datatype,R_MPI_Request *);

__asm__(
".global CCMPI_File_iread_at_all\n"
".weak MPI_File_iread_at_all\n"
".set MPI_File_iread_at_all,CCMPI_File_iread_at_all\n"
".extern in_w\n"
".extern A_MPI_File_iread_at_all\n"
".extern R_MPI_File_iread_at_all\n"
".type CCMPI_File_iread_at_all,@function\n"
".text\n"
"CCMPI_File_iread_at_all:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
"mov %r9, -0x30(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"mov -0x30(%rbp), %r9\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_iread_at_all\n"
"jmp *A_MPI_File_iread_at_all@GOTPCREL(%rip)\n"
"inwrap_MPI_File_iread_at_all:\n"
"jmp *R_MPI_File_iread_at_all@GOTPCREL(%rip)\n"

);

int A_MPI_File_iread_at_all(A_MPI_File fh,A_MPI_Offset offset,void * buf,int count,A_MPI_Datatype datatype,A_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : A_MPI_File_iread_at_all\n");
#endif
in_w=1;

R_MPI_File fh_tmp;
file_conv_a2r(&fh,&fh_tmp);
R_MPI_Offset offset_tmp;
offset_tmp = (R_MPI_Offset)offset;
void * buf_tmp;
buffer_conv_a2r(&buf,&buf_tmp);


R_MPI_Datatype datatype_tmp;
datatype_conv_a2r(&datatype,&datatype_tmp);
R_MPI_Request  request_ltmp;
R_MPI_Request * request_tmp=&request_ltmp;
int ret_tmp= LOCAL_MPI_File_iread_at_all( fh_tmp, offset_tmp, buf_tmp, count, datatype_tmp, request_tmp);
buffer_conv_r2a(&buf,&buf_tmp);
if(ret_tmp == R_MPI_SUCCESS){
request_ptr_conv_r2a(&request,&request_tmp);
}
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_iread_at_all\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_iread_at_all(R_MPI_File fh,R_MPI_Offset offset,void * buf,int count,R_MPI_Datatype datatype,R_MPI_Request * request)
{
#ifdef DEBUG
printf("entre : R_MPI_File_iread_at_all\n");
#endif
int ret_tmp= LOCAL_MPI_File_iread_at_all( fh, offset, buf, count, datatype, request);
#ifdef DEBUG
printf("sort : R_MPI_File_iread_at_all\n");
#endif
return ret_tmp;
}
int MPI_T_category_changed(int * stamp);
int (*LOCAL_MPI_T_category_changed)(int *);

__asm__(
".global CCMPI_T_category_changed\n"
".weak MPI_T_category_changed\n"
".set MPI_T_category_changed,CCMPI_T_category_changed\n"
".extern in_w\n"
".extern A_MPI_T_category_changed\n"
".extern R_MPI_T_category_changed\n"
".type CCMPI_T_category_changed,@function\n"
".text\n"
"CCMPI_T_category_changed:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_category_changed\n"
"jmp *A_MPI_T_category_changed@GOTPCREL(%rip)\n"
"inwrap_MPI_T_category_changed:\n"
"jmp *R_MPI_T_category_changed@GOTPCREL(%rip)\n"

);

int A_MPI_T_category_changed(int * stamp)
{
#ifdef DEBUG
printf("entre : A_MPI_T_category_changed\n");
#endif
in_w=1;


int ret_tmp= LOCAL_MPI_T_category_changed( stamp);

in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_category_changed\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_category_changed(int * stamp)
{
#ifdef DEBUG
printf("entre : R_MPI_T_category_changed\n");
#endif
int ret_tmp= LOCAL_MPI_T_category_changed( stamp);
#ifdef DEBUG
printf("sort : R_MPI_T_category_changed\n");
#endif
return ret_tmp;
}
int MPI_Pcontrol(int level);
int (*LOCAL_MPI_Pcontrol)(int);

__asm__(
".global CCMPI_Pcontrol\n"
".weak MPI_Pcontrol\n"
".set MPI_Pcontrol,CCMPI_Pcontrol\n"
".extern in_w\n"
".extern A_MPI_Pcontrol\n"
".extern R_MPI_Pcontrol\n"
".type CCMPI_Pcontrol,@function\n"
".text\n"
"CCMPI_Pcontrol:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Pcontrol\n"
"jmp *A_MPI_Pcontrol@GOTPCREL(%rip)\n"
"inwrap_MPI_Pcontrol:\n"
"jmp *R_MPI_Pcontrol@GOTPCREL(%rip)\n"


);

int A_MPI_Pcontrol(int level)
{
#ifdef DEBUG
printf("entre : A_MPI_Pcontrol\n");
#endif
in_w=1;
//fprintf(stderr, "A_MPI_Pcontrol Not implemented yet\n");
//int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Pcontrol\n");
#endif
//return error_code_conv_r2a(ret_tmp);
return A_MPI_SUCCESS;
}
int R_MPI_Pcontrol(int level)
{
#ifdef DEBUG
printf("entre : R_MPI_Pcontrol\n");
#endif
int ret_tmp= LOCAL_MPI_Pcontrol( level);
#ifdef DEBUG
printf("sort : R_MPI_Pcontrol\n");
#endif
return ret_tmp;
}
int MPI_Win_create_errhandler(A_MPI_Win_errhandler_function * win_errhandler_fn,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_Win_create_errhandler)(R_MPI_Win_errhandler_function *,R_MPI_Errhandler *);

__asm__(
".global CCMPI_Win_create_errhandler\n"
".weak MPI_Win_create_errhandler\n"
".set MPI_Win_create_errhandler,CCMPI_Win_create_errhandler\n"
".extern in_w\n"
".extern A_MPI_Win_create_errhandler\n"
".extern R_MPI_Win_create_errhandler\n"
".type CCMPI_Win_create_errhandler,@function\n"
".text\n"
"CCMPI_Win_create_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_create_errhandler\n"
"jmp *A_MPI_Win_create_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_create_errhandler:\n"
"jmp *R_MPI_Win_create_errhandler@GOTPCREL(%rip)\n"


);

int A_MPI_Win_create_errhandler(A_MPI_Win_errhandler_function * win_errhandler_fn,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_create_errhandler\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_Win_create_errhandler Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_create_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_create_errhandler(R_MPI_Win_errhandler_function * win_errhandler_fn,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_create_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Win_create_errhandler( win_errhandler_fn, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Win_create_errhandler\n");
#endif
return ret_tmp;
}
int MPI_Win_call_errhandler(A_MPI_Win win,int errorcode);
int (*LOCAL_MPI_Win_call_errhandler)(R_MPI_Win,int);

__asm__(
".global CCMPI_Win_call_errhandler\n"
".weak MPI_Win_call_errhandler\n"
".set MPI_Win_call_errhandler,CCMPI_Win_call_errhandler\n"
".extern in_w\n"
".extern A_MPI_Win_call_errhandler\n"
".extern R_MPI_Win_call_errhandler\n"
".type CCMPI_Win_call_errhandler,@function\n"
".text\n"
"CCMPI_Win_call_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_call_errhandler\n"
"jmp *A_MPI_Win_call_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_call_errhandler:\n"
"jmp *R_MPI_Win_call_errhandler@GOTPCREL(%rip)\n"


);

int A_MPI_Win_call_errhandler(A_MPI_Win win,int errorcode)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_call_errhandler\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_Win_call_errhandler Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_call_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_call_errhandler(R_MPI_Win win,int errorcode)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_call_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Win_call_errhandler( win, errorcode);
#ifdef DEBUG
printf("sort : R_MPI_Win_call_errhandler\n");
#endif
return ret_tmp;
}
int MPI_Win_set_errhandler(A_MPI_Win win,A_MPI_Errhandler errhandler);
int (*LOCAL_MPI_Win_set_errhandler)(R_MPI_Win,R_MPI_Errhandler);

__asm__(
".global CCMPI_Win_set_errhandler\n"
".weak MPI_Win_set_errhandler\n"
".set MPI_Win_set_errhandler,CCMPI_Win_set_errhandler\n"
".extern in_w\n"
".extern A_MPI_Win_set_errhandler\n"
".extern R_MPI_Win_set_errhandler\n"
".type CCMPI_Win_set_errhandler,@function\n"
".text\n"
"CCMPI_Win_set_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Win_set_errhandler\n"
"jmp *A_MPI_Win_set_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_Win_set_errhandler:\n"
"jmp *R_MPI_Win_set_errhandler@GOTPCREL(%rip)\n"


);

int A_MPI_Win_set_errhandler(A_MPI_Win win,A_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_Win_set_errhandler\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_Win_set_errhandler Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Win_set_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_Win_set_errhandler(R_MPI_Win win,R_MPI_Errhandler errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_Win_set_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_Win_set_errhandler( win, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_Win_set_errhandler\n");
#endif
return ret_tmp;
}
int MPI_File_call_errhandler(A_MPI_File fh,int errorcode);
int (*LOCAL_MPI_File_call_errhandler)(R_MPI_File,int);

__asm__(
".global CCMPI_File_call_errhandler\n"
".weak MPI_File_call_errhandler\n"
".set MPI_File_call_errhandler,CCMPI_File_call_errhandler\n"
".extern in_w\n"
".extern A_MPI_File_call_errhandler\n"
".extern R_MPI_File_call_errhandler\n"
".type CCMPI_File_call_errhandler,@function\n"
".text\n"
"CCMPI_File_call_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_call_errhandler\n"
"jmp *A_MPI_File_call_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_File_call_errhandler:\n"
"jmp *R_MPI_File_call_errhandler@GOTPCREL(%rip)\n"


);

int A_MPI_File_call_errhandler(A_MPI_File fh,int errorcode)
{
#ifdef DEBUG
printf("entre : A_MPI_File_call_errhandler\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_File_call_errhandler Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_call_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_call_errhandler(R_MPI_File fh,int errorcode)
{
#ifdef DEBUG
printf("entre : R_MPI_File_call_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_File_call_errhandler( fh, errorcode);
#ifdef DEBUG
printf("sort : R_MPI_File_call_errhandler\n");
#endif
return ret_tmp;
}

int MPI_File_create_errhandler(A_MPI_File_errhandler_function * file_errhandler_fn,A_MPI_Errhandler * errhandler);
int (*LOCAL_MPI_File_create_errhandler)(R_MPI_File_errhandler_function *,R_MPI_Errhandler *);

__asm__(
".global CCMPI_File_create_errhandler\n"
".weak MPI_File_create_errhandler\n"
".set MPI_File_create_errhandler,CCMPI_File_create_errhandler\n"
".extern in_w\n"
".extern A_MPI_File_create_errhandler\n"
".extern R_MPI_File_create_errhandler\n"
".type CCMPI_File_create_errhandler,@function\n"
".text\n"
"CCMPI_File_create_errhandler:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_File_create_errhandler\n"
"jmp *A_MPI_File_create_errhandler@GOTPCREL(%rip)\n"
"inwrap_MPI_File_create_errhandler:\n"
"jmp *R_MPI_File_create_errhandler@GOTPCREL(%rip)\n"


);

int A_MPI_File_create_errhandler(A_MPI_File_errhandler_function * file_errhandler_fn,A_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : A_MPI_File_create_errhandler\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_File_create_errhandler Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_File_create_errhandler\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_File_create_errhandler(R_MPI_File_errhandler_function * file_errhandler_fn,R_MPI_Errhandler * errhandler)
{
#ifdef DEBUG
printf("entre : R_MPI_File_create_errhandler\n");
#endif
int ret_tmp= LOCAL_MPI_File_create_errhandler( file_errhandler_fn, errhandler);
#ifdef DEBUG
printf("sort : R_MPI_File_create_errhandler\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_read(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle,void * buf);
int (*LOCAL_MPI_T_pvar_read)(R_MPI_T_pvar_session,R_MPI_T_pvar_handle,void *);

__asm__(
".global CCMPI_T_pvar_read\n"
".weak MPI_T_pvar_read\n"
".set MPI_T_pvar_read,CCMPI_T_pvar_read\n"
".extern in_w\n"
".extern A_MPI_T_pvar_read\n"
".extern R_MPI_T_pvar_read\n"
".type CCMPI_T_pvar_read,@function\n"
".text\n"
"CCMPI_T_pvar_read:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_read\n"
"jmp *A_MPI_T_pvar_read@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_read:\n"
"jmp *R_MPI_T_pvar_read@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_read(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_read\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_read Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_read\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_read(R_MPI_T_pvar_session session,R_MPI_T_pvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_read\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_read( session, handle, buf);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_read\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_readreset(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle,void * buf);
int (*LOCAL_MPI_T_pvar_readreset)(R_MPI_T_pvar_session,R_MPI_T_pvar_handle,void *);

__asm__(
".global CCMPI_T_pvar_readreset\n"
".weak MPI_T_pvar_readreset\n"
".set MPI_T_pvar_readreset,CCMPI_T_pvar_readreset\n"
".extern in_w\n"
".extern A_MPI_T_pvar_readreset\n"
".extern R_MPI_T_pvar_readreset\n"
".type CCMPI_T_pvar_readreset,@function\n"
".text\n"
"CCMPI_T_pvar_readreset:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_readreset\n"
"jmp *A_MPI_T_pvar_readreset@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_readreset:\n"
"jmp *R_MPI_T_pvar_readreset@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_readreset(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_readreset\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_readreset Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_readreset\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_readreset(R_MPI_T_pvar_session session,R_MPI_T_pvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_readreset\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_readreset( session, handle, buf);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_readreset\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_reset(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle);
int (*LOCAL_MPI_T_pvar_reset)(R_MPI_T_pvar_session,R_MPI_T_pvar_handle);

__asm__(
".global CCMPI_T_pvar_reset\n"
".weak MPI_T_pvar_reset\n"
".set MPI_T_pvar_reset,CCMPI_T_pvar_reset\n"
".extern in_w\n"
".extern A_MPI_T_pvar_reset\n"
".extern R_MPI_T_pvar_reset\n"
".type CCMPI_T_pvar_reset,@function\n"
".text\n"
"CCMPI_T_pvar_reset:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_reset\n"
"jmp *A_MPI_T_pvar_reset@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_reset:\n"
"jmp *R_MPI_T_pvar_reset@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_reset(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_reset\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_reset Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_reset\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_reset(R_MPI_T_pvar_session session,R_MPI_T_pvar_handle handle)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_reset\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_reset( session, handle);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_reset\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_session_create(A_MPI_T_pvar_session * session);
int (*LOCAL_MPI_T_pvar_session_create)(R_MPI_T_pvar_session *);

__asm__(
".global CCMPI_T_pvar_session_create\n"
".weak MPI_T_pvar_session_create\n"
".set MPI_T_pvar_session_create,CCMPI_T_pvar_session_create\n"
".extern in_w\n"
".extern A_MPI_T_pvar_session_create\n"
".extern R_MPI_T_pvar_session_create\n"
".type CCMPI_T_pvar_session_create,@function\n"
".text\n"
"CCMPI_T_pvar_session_create:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_session_create\n"
"jmp *A_MPI_T_pvar_session_create@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_session_create:\n"
"jmp *R_MPI_T_pvar_session_create@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_session_create(A_MPI_T_pvar_session * session)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_session_create\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_session_create Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_session_create\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_session_create(R_MPI_T_pvar_session * session)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_session_create\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_session_create( session);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_session_create\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_session_free(A_MPI_T_pvar_session * session);
int (*LOCAL_MPI_T_pvar_session_free)(R_MPI_T_pvar_session *);

__asm__(
".global CCMPI_T_pvar_session_free\n"
".weak MPI_T_pvar_session_free\n"
".set MPI_T_pvar_session_free,CCMPI_T_pvar_session_free\n"
".extern in_w\n"
".extern A_MPI_T_pvar_session_free\n"
".extern R_MPI_T_pvar_session_free\n"
".type CCMPI_T_pvar_session_free,@function\n"
".text\n"
"CCMPI_T_pvar_session_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_session_free\n"
"jmp *A_MPI_T_pvar_session_free@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_session_free:\n"
"jmp *R_MPI_T_pvar_session_free@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_session_free(A_MPI_T_pvar_session * session)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_session_free\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_session_free Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_session_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_session_free(R_MPI_T_pvar_session * session)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_session_free\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_session_free( session);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_session_free\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_start(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle);
int (*LOCAL_MPI_T_pvar_start)(R_MPI_T_pvar_session,R_MPI_T_pvar_handle);

__asm__(
".global CCMPI_T_pvar_start\n"
".weak MPI_T_pvar_start\n"
".set MPI_T_pvar_start,CCMPI_T_pvar_start\n"
".extern in_w\n"
".extern A_MPI_T_pvar_start\n"
".extern R_MPI_T_pvar_start\n"
".type CCMPI_T_pvar_start,@function\n"
".text\n"
"CCMPI_T_pvar_start:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_start\n"
"jmp *A_MPI_T_pvar_start@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_start:\n"
"jmp *R_MPI_T_pvar_start@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_start(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_start\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_start Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_start\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_start(R_MPI_T_pvar_session session,R_MPI_T_pvar_handle handle)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_start\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_start( session, handle);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_start\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_stop(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle);
int (*LOCAL_MPI_T_pvar_stop)(R_MPI_T_pvar_session,R_MPI_T_pvar_handle);

__asm__(
".global CCMPI_T_pvar_stop\n"
".weak MPI_T_pvar_stop\n"
".set MPI_T_pvar_stop,CCMPI_T_pvar_stop\n"
".extern in_w\n"
".extern A_MPI_T_pvar_stop\n"
".extern R_MPI_T_pvar_stop\n"
".type CCMPI_T_pvar_stop,@function\n"
".text\n"
"CCMPI_T_pvar_stop:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_stop\n"
"jmp *A_MPI_T_pvar_stop@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_stop:\n"
"jmp *R_MPI_T_pvar_stop@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_stop(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_stop\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_stop Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_stop\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_stop(R_MPI_T_pvar_session session,R_MPI_T_pvar_handle handle)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_stop\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_stop( session, handle);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_stop\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_write(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle,void * buf);
int (*LOCAL_MPI_T_pvar_write)(R_MPI_T_pvar_session,R_MPI_T_pvar_handle,void *);

__asm__(
".global CCMPI_T_pvar_write\n"
".weak MPI_T_pvar_write\n"
".set MPI_T_pvar_write,CCMPI_T_pvar_write\n"
".extern in_w\n"
".extern A_MPI_T_pvar_write\n"
".extern R_MPI_T_pvar_write\n"
".type CCMPI_T_pvar_write,@function\n"
".text\n"
"CCMPI_T_pvar_write:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x20, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_write\n"
"jmp *A_MPI_T_pvar_write@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_write:\n"
"jmp *R_MPI_T_pvar_write@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_write(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_write\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_write Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_write\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_write(R_MPI_T_pvar_session session,R_MPI_T_pvar_handle handle,void * buf)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_write\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_write( session, handle, buf);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_write\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_handle_alloc(A_MPI_T_pvar_session session,int pvar_index,void * obj_handle,A_MPI_T_pvar_handle * handle,int * count);
int (*LOCAL_MPI_T_pvar_handle_alloc)(R_MPI_T_pvar_session,int,void *,R_MPI_T_pvar_handle *,int *);

__asm__(
".global CCMPI_T_pvar_handle_alloc\n"
".weak MPI_T_pvar_handle_alloc\n"
".set MPI_T_pvar_handle_alloc,CCMPI_T_pvar_handle_alloc\n"
".extern in_w\n"
".extern A_MPI_T_pvar_handle_alloc\n"
".extern R_MPI_T_pvar_handle_alloc\n"
".type CCMPI_T_pvar_handle_alloc,@function\n"
".text\n"
"CCMPI_T_pvar_handle_alloc:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x30, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
"mov %rdx, -0x18(%rbp)\n"
"mov %rcx, -0x20(%rbp)\n"
"mov %r8, -0x28(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"mov -0x18(%rbp), %rdx\n"
"mov -0x20(%rbp), %rcx\n"
"mov -0x28(%rbp), %r8\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_handle_alloc\n"
"jmp *A_MPI_T_pvar_handle_alloc@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_handle_alloc:\n"
"jmp *R_MPI_T_pvar_handle_alloc@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_handle_alloc(A_MPI_T_pvar_session session,int pvar_index,void * obj_handle,A_MPI_T_pvar_handle * handle,int * count)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_handle_alloc\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_handle_alloc Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_handle_alloc\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_handle_alloc(R_MPI_T_pvar_session session,int pvar_index,void * obj_handle,R_MPI_T_pvar_handle * handle,int * count)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_handle_alloc\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_handle_alloc( session, pvar_index, obj_handle, handle, count);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_handle_alloc\n");
#endif
return ret_tmp;
}
int MPI_T_pvar_handle_free(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle * handle);
int (*LOCAL_MPI_T_pvar_handle_free)(R_MPI_T_pvar_session,R_MPI_T_pvar_handle *);

__asm__(
".global CCMPI_T_pvar_handle_free\n"
".weak MPI_T_pvar_handle_free\n"
".set MPI_T_pvar_handle_free,CCMPI_T_pvar_handle_free\n"
".extern in_w\n"
".extern A_MPI_T_pvar_handle_free\n"
".extern R_MPI_T_pvar_handle_free\n"
".type CCMPI_T_pvar_handle_free,@function\n"
".text\n"
"CCMPI_T_pvar_handle_free:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
"mov %rsi, -0x10(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"mov -0x10(%rbp), %rsi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_T_pvar_handle_free\n"
"jmp *A_MPI_T_pvar_handle_free@GOTPCREL(%rip)\n"
"inwrap_MPI_T_pvar_handle_free:\n"
"jmp *R_MPI_T_pvar_handle_free@GOTPCREL(%rip)\n"


);

int A_MPI_T_pvar_handle_free(A_MPI_T_pvar_session session,A_MPI_T_pvar_handle * handle)
{
#ifdef DEBUG
printf("entre : A_MPI_T_pvar_handle_free\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_T_pvar_handle_free Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_T_pvar_handle_free\n");
#endif
return error_code_conv_r2a(ret_tmp);
}
int R_MPI_T_pvar_handle_free(R_MPI_T_pvar_session session,R_MPI_T_pvar_handle * handle)
{
#ifdef DEBUG
printf("entre : R_MPI_T_pvar_handle_free\n");
#endif
int ret_tmp= LOCAL_MPI_T_pvar_handle_free( session, handle);
#ifdef DEBUG
printf("sort : R_MPI_T_pvar_handle_free\n");
#endif
return ret_tmp;
}

#if defined(INTEL_OMPI) || defined (OMPI_OMPI)
__asm__(
".global CCMPI_Errhandler_f2c\n"
".weak MPI_Errhandler_f2c\n"
".set MPI_Errhandler_f2c,CCMPI_Errhandler_f2c\n"
".extern in_w\n"
".extern A_MPI_Errhandler_f2c\n"
".extern R_MPI_Errhandler_f2c\n"
".type CCMPI_Errhandler_f2c,@function\n"
".text\n"
"CCMPI_Errhandler_f2c:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_f2c\n"
"jmp *A_MPI_Errhandler_f2c@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_f2c:\n"
"jmp *R_MPI_Errhandler_f2c@GOTPCREL(%rip)\n"

);

R_MPI_Errhandler (*LOCAL_MPI_Errhandler_f2c)(R_MPI_Fint);
A_MPI_Errhandler A_MPI_Errhandler_f2c(A_MPI_Fint op)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_f2c\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_Errhandler_f2c Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_f2c\n");
#endif
return ret_tmp;
}


R_MPI_Errhandler R_MPI_Errhandler_f2c(R_MPI_Fint op)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_f2c\n");
#endif
R_MPI_Errhandler ret=LOCAL_MPI_Errhandler_f2c(op);
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_f2c\n");
#endif
return ret;
}

__asm__(
".global CCMPI_Errhandler_c2f\n"
".weak MPI_Errhandler_c2f\n"
".set MPI_Errhandler_c2f,CCMPI_Errhandler_c2f\n"
".extern in_w\n"
".extern A_MPI_Errhandler_c2f\n"
".extern R_MPI_Errhandler_c2f\n"
".type CCMPI_Errhandler_c2f,@function\n"
".text\n"
"CCMPI_Errhandler_c2f:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_c2f\n"
"jmp *A_MPI_Errhandler_c2f@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_c2f:\n"
"jmp *R_MPI_Errhandler_c2f@GOTPCREL(%rip)\n"

);

R_MPI_Fint (*LOCAL_MPI_Errhandler_c2f)(R_MPI_Errhandler);
A_MPI_Fint A_MPI_Errhandler_c2f(A_MPI_Errhandler op)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_c2f\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_Errhandler_c2f Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_c2f\n");
#endif
return ret_tmp;
}


R_MPI_Fint R_MPI_Errhandler_c2f(R_MPI_Errhandler op)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_c2f\n");
#endif
in_w=1;
R_MPI_Fint ret=LOCAL_MPI_Errhandler_c2f(op);
in_w=0;
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_c2f\n");
#endif
return ret;
}
#elif defined(OMPI_INTEL)
__asm__(
".global CCMPI_Errhandler_f2c\n"
".weak MPI_Errhandler_f2c\n"
".set MPI_Errhandler_f2c,CCMPI_Errhandler_f2c\n"
".extern in_w\n"
".extern A_MPI_Errhandler_f2c\n"
".extern R_MPI_Errhandler_f2c\n"
".type CCMPI_Errhandler_f2c,@function\n"
".text\n"
"CCMPI_Errhandler_f2c:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_f2c\n"
"jmp *A__MPI_Errhandler_f2c@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_f2c:\n"
"jmp *R__MPI_Errhandler_f2c@GOTPCREL(%rip)\n"

);

A_MPI_Errhandler A__MPI_Errhandler_f2c(A_MPI_Fint op)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_f2c\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_Errhandler_f2c Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_f2c\n");
#endif
return ret_tmp;
}


R_MPI_Errhandler R__MPI_Errhandler_f2c(R_MPI_Fint op)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_f2c\n");
#endif
//R_MPI_Errhandler ret=LOCAL_MPI_Errhandler_f2c(op);
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_f2c\n");
#endif
return op;
}

__asm__(
".global CCMPI_Errhandler_c2f\n"
".weak MPI_Errhandler_c2f\n"
".set MPI_Errhandler_c2f,CCMPI_Errhandler_c2f\n"
".extern in_w\n"
".extern A_MPI_Errhandler_c2f\n"
".extern R_MPI_Errhandler_c2f\n"
".type CCMPI_Errhandler_c2f,@function\n"
".text\n"
"CCMPI_Errhandler_c2f:\n"
"push %rbp\n"
"mov %rsp, %rbp\n"
"sub $0x10, %rsp\n"
"mov %rdi, -0x8(%rbp)\n"
".byte 0x66\n"
"leaq in_w@tlsgd(%rip), %rdi\n"
".value 0x6666\n"
"rex64\n"
"call __tls_get_addr@PLT\n"
"mov -0x8(%rbp), %rdi\n"
"leave\n"
"cmpl $0x0, 0x0(%rax)\n"
"jne inwrap_MPI_Errhandler_c2f\n"
"jmp *A__MPI_Errhandler_c2f@GOTPCREL(%rip)\n"
"inwrap_MPI_Errhandler_c2f:\n"
"jmp *R__MPI_Errhandler_c2f@GOTPCREL(%rip)\n"

);

int A__MPI_Errhandler_c2f(A_MPI_Errhandler op)
{
#ifdef DEBUG
printf("entre : A_MPI_Errhandler_c2f\n");
#endif
in_w=1;
fprintf(stderr, "A_MPI_Errhandler_c2f Not implemented yet\n");
int ret_tmp= LOCAL_MPI_Abort(R_MPI_COMM_WORLD,7);
in_w=0;
#ifdef DEBUG
printf("sort : A_MPI_Errhandler_c2f\n");
#endif
return ret_tmp;
}


int R__MPI_Errhandler_c2f(R_MPI_Errhandler op)
{
#ifdef DEBUG
printf("entre : R_MPI_Errhandler_c2f\n");
#endif
in_w=1;
//R_MPI_Fint ret=LOCAL_MPI_Errhandler_c2f(op);
in_w=0;
#ifdef DEBUG
printf("sort : R_MPI_Errhandler_c2f\n");
#endif
return op;
}
#endif
#ifdef OMPI_OMPI
#endif
__attribute__((constructor)) void wrapper_init(void) {
void *lib_handle=dlopen(getenv("TRUE_MPI_LIB"),RTLD_NOW|RTLD_GLOBAL);
#if defined(INTEL_OMPI) || defined (OMPI_OMPI)
LOCAL_MPI_Errhandler_f2c=dlsym(lib_handle,"PMPI_Errhandler_f2c");
LOCAL_MPI_Errhandler_c2f=dlsym(lib_handle,"PMPI_Errhandler_c2f");
#endif
/* ABI FIGE */
LOCAL_MPI_Pcontrol=dlsym(lib_handle,"PMPI_Pcontrol");
LOCAL_MPI_Win_create_errhandler=dlsym(lib_handle,"PMPI_Win_create_errhandler");
LOCAL_MPI_Win_call_errhandler=dlsym(lib_handle,"PMPI_Win_call_errhandler");
LOCAL_MPI_Win_set_errhandler=dlsym(lib_handle,"PMPI_Win_set_errhandler");
LOCAL_MPI_File_call_errhandler=dlsym(lib_handle,"PMPI_File_call_errhandler");
LOCAL_MPI_File_create_errhandler=dlsym(lib_handle,"PMPI_File_create_errhandler");
LOCAL_MPI_T_pvar_read=dlsym(lib_handle,"PMPI_T_pvar_read");
LOCAL_MPI_T_pvar_readreset=dlsym(lib_handle,"PMPI_T_pvar_readreset");
LOCAL_MPI_T_pvar_reset=dlsym(lib_handle,"PMPI_T_pvar_reset");
LOCAL_MPI_T_pvar_session_create=dlsym(lib_handle,"PMPI_T_pvar_session_create");
LOCAL_MPI_T_pvar_session_free=dlsym(lib_handle,"PMPI_T_pvar_session_free");
LOCAL_MPI_T_pvar_start=dlsym(lib_handle,"PMPI_T_pvar_start");
LOCAL_MPI_T_pvar_stop=dlsym(lib_handle,"PMPI_T_pvar_stop");
LOCAL_MPI_T_pvar_write=dlsym(lib_handle,"PMPI_T_pvar_write");
LOCAL_MPI_T_pvar_handle_alloc=dlsym(lib_handle,"PMPI_T_pvar_handle_alloc");
LOCAL_MPI_T_pvar_handle_free=dlsym(lib_handle,"PMPI_T_pvar_handle_free");
/* --- */
LOCAL_MPI_Keyval_create=dlsym(lib_handle,"PMPI_Keyval_create"); /* replaced by MPI_Comm_create_keyval */
LOCAL_MPI_Keyval_free=dlsym(lib_handle,"PMPI_Keyval_free"); /* replaced by MPI_Comm_free_keyval */
LOCAL_MPI_Comm_create_keyval=dlsym(lib_handle,"PMPI_Comm_create_keyval");
LOCAL_MPI_Comm_free_keyval=dlsym(lib_handle,"PMPI_Comm_free_keyval");
LOCAL_MPI_Win_get_attr=dlsym(lib_handle,"PMPI_Win_get_attr");
LOCAL_MPI_Win_set_attr=dlsym(lib_handle,"PMPI_Win_set_attr");
LOCAL_MPI_Send=dlsym(lib_handle,"PMPI_Send");
LOCAL_MPI_Recv=dlsym(lib_handle,"PMPI_Recv");
LOCAL_MPI_Get_count=dlsym(lib_handle,"PMPI_Get_count");
LOCAL_MPI_Bsend=dlsym(lib_handle,"PMPI_Bsend");
LOCAL_MPI_Ssend=dlsym(lib_handle,"PMPI_Ssend");
LOCAL_MPI_Rsend=dlsym(lib_handle,"PMPI_Rsend");
LOCAL_MPI_Buffer_attach=dlsym(lib_handle,"PMPI_Buffer_attach");
LOCAL_MPI_Buffer_detach=dlsym(lib_handle,"PMPI_Buffer_detach");
LOCAL_MPI_Isend=dlsym(lib_handle,"PMPI_Isend");
LOCAL_MPI_Ibsend=dlsym(lib_handle,"PMPI_Ibsend");
LOCAL_MPI_Issend=dlsym(lib_handle,"PMPI_Issend");
LOCAL_MPI_Irsend=dlsym(lib_handle,"PMPI_Irsend");
LOCAL_MPI_Irecv=dlsym(lib_handle,"PMPI_Irecv");
LOCAL_MPI_Wait=dlsym(lib_handle,"PMPI_Wait");
LOCAL_MPI_Test=dlsym(lib_handle,"PMPI_Test");
LOCAL_MPI_Request_free=dlsym(lib_handle,"PMPI_Request_free");
LOCAL_MPI_Iprobe=dlsym(lib_handle,"PMPI_Iprobe");
LOCAL_MPI_Probe=dlsym(lib_handle,"PMPI_Probe");
LOCAL_MPI_Cancel=dlsym(lib_handle,"PMPI_Cancel");
LOCAL_MPI_Test_cancelled=dlsym(lib_handle,"PMPI_Test_cancelled");
LOCAL_MPI_Send_init=dlsym(lib_handle,"PMPI_Send_init");
LOCAL_MPI_Bsend_init=dlsym(lib_handle,"PMPI_Bsend_init");
LOCAL_MPI_Ssend_init=dlsym(lib_handle,"PMPI_Ssend_init");
LOCAL_MPI_Rsend_init=dlsym(lib_handle,"PMPI_Rsend_init");
LOCAL_MPI_Recv_init=dlsym(lib_handle,"PMPI_Recv_init");
LOCAL_MPI_Start=dlsym(lib_handle,"PMPI_Start");
LOCAL_MPI_Sendrecv=dlsym(lib_handle,"PMPI_Sendrecv");
LOCAL_MPI_Sendrecv_replace=dlsym(lib_handle,"PMPI_Sendrecv_replace");
LOCAL_MPI_Type_contiguous=dlsym(lib_handle,"PMPI_Type_contiguous");
LOCAL_MPI_Type_vector=dlsym(lib_handle,"PMPI_Type_vector");
LOCAL_MPI_Type_hvector=dlsym(lib_handle,"PMPI_Type_hvector");
LOCAL_MPI_Type_indexed=dlsym(lib_handle,"PMPI_Type_indexed");
LOCAL_MPI_Type_hindexed=dlsym(lib_handle,"PMPI_Type_hindexed");
LOCAL_MPI_Type_struct=dlsym(lib_handle,"PMPI_Type_struct");
LOCAL_MPI_Address=dlsym(lib_handle,"PMPI_Address");
LOCAL_MPI_Type_extent=dlsym(lib_handle,"PMPI_Type_extent");
LOCAL_MPI_Type_size=dlsym(lib_handle,"PMPI_Type_size");
LOCAL_MPI_Type_lb=dlsym(lib_handle,"PMPI_Type_lb");
LOCAL_MPI_Type_ub=dlsym(lib_handle,"PMPI_Type_ub");
LOCAL_MPI_Type_commit=dlsym(lib_handle,"PMPI_Type_commit");
LOCAL_MPI_Type_free=dlsym(lib_handle,"PMPI_Type_free");
LOCAL_MPI_Get_elements=dlsym(lib_handle,"PMPI_Get_elements");
LOCAL_MPI_Pack=dlsym(lib_handle,"PMPI_Pack");
LOCAL_MPI_Unpack=dlsym(lib_handle,"PMPI_Unpack");
LOCAL_MPI_Pack_size=dlsym(lib_handle,"PMPI_Pack_size");
LOCAL_MPI_Barrier=dlsym(lib_handle,"PMPI_Barrier");
LOCAL_MPI_Bcast=dlsym(lib_handle,"PMPI_Bcast");
LOCAL_MPI_Gather=dlsym(lib_handle,"PMPI_Gather");
LOCAL_MPI_Gatherv=dlsym(lib_handle,"PMPI_Gatherv");
LOCAL_MPI_Scatter=dlsym(lib_handle,"PMPI_Scatter");
LOCAL_MPI_Scatterv=dlsym(lib_handle,"PMPI_Scatterv");
LOCAL_MPI_Allgather=dlsym(lib_handle,"PMPI_Allgather");
LOCAL_MPI_Allgatherv=dlsym(lib_handle,"PMPI_Allgatherv");
LOCAL_MPI_Alltoall=dlsym(lib_handle,"PMPI_Alltoall");
LOCAL_MPI_Alltoallv=dlsym(lib_handle,"PMPI_Alltoallv");
LOCAL_MPI_Exscan=dlsym(lib_handle,"PMPI_Exscan");
LOCAL_MPI_Reduce=dlsym(lib_handle,"PMPI_Reduce");
LOCAL_MPI_Op_create=dlsym(lib_handle,"PMPI_Op_create");
LOCAL_MPI_Op_free=dlsym(lib_handle,"PMPI_Op_free");
LOCAL_MPI_Allreduce=dlsym(lib_handle,"PMPI_Allreduce");
LOCAL_MPI_Scan=dlsym(lib_handle,"PMPI_Scan");
LOCAL_MPI_Group_size=dlsym(lib_handle,"PMPI_Group_size");
LOCAL_MPI_Group_rank=dlsym(lib_handle,"PMPI_Group_rank");
LOCAL_MPI_Group_compare=dlsym(lib_handle,"PMPI_Group_compare");
LOCAL_MPI_Comm_group=dlsym(lib_handle,"PMPI_Comm_group");
LOCAL_MPI_Group_union=dlsym(lib_handle,"PMPI_Group_union");
LOCAL_MPI_Group_intersection=dlsym(lib_handle,"PMPI_Group_intersection");
LOCAL_MPI_Group_difference=dlsym(lib_handle,"PMPI_Group_difference");
LOCAL_MPI_Group_free=dlsym(lib_handle,"PMPI_Group_free");
LOCAL_MPI_Comm_size=dlsym(lib_handle,"PMPI_Comm_size");
LOCAL_MPI_Comm_rank=dlsym(lib_handle,"PMPI_Comm_rank");
LOCAL_MPI_Comm_compare=dlsym(lib_handle,"PMPI_Comm_compare");
LOCAL_MPI_Comm_dup=dlsym(lib_handle,"PMPI_Comm_dup");
LOCAL_MPI_Comm_dup_with_info=dlsym(lib_handle,"PMPI_Comm_dup_with_info");
LOCAL_MPI_Comm_create=dlsym(lib_handle,"PMPI_Comm_create");
LOCAL_MPI_Comm_split=dlsym(lib_handle,"PMPI_Comm_split");
LOCAL_MPI_Comm_free=dlsym(lib_handle,"PMPI_Comm_free");
LOCAL_MPI_Comm_test_inter=dlsym(lib_handle,"PMPI_Comm_test_inter");
LOCAL_MPI_Comm_remote_size=dlsym(lib_handle,"PMPI_Comm_remote_size");
LOCAL_MPI_Comm_remote_group=dlsym(lib_handle,"PMPI_Comm_remote_group");
LOCAL_MPI_Intercomm_create=dlsym(lib_handle,"PMPI_Intercomm_create");
LOCAL_MPI_Intercomm_merge=dlsym(lib_handle,"PMPI_Intercomm_merge");
LOCAL_MPI_Attr_put=dlsym(lib_handle,"PMPI_Attr_put");
LOCAL_MPI_Attr_get=dlsym(lib_handle,"PMPI_Attr_get");
LOCAL_MPI_Attr_delete=dlsym(lib_handle,"PMPI_Attr_delete");
LOCAL_MPI_Topo_test=dlsym(lib_handle,"PMPI_Topo_test");
LOCAL_MPI_Graphdims_get=dlsym(lib_handle,"PMPI_Graphdims_get");
LOCAL_MPI_Cartdim_get=dlsym(lib_handle,"PMPI_Cartdim_get");
LOCAL_MPI_Graph_neighbors_count=dlsym(lib_handle,"PMPI_Graph_neighbors_count");
LOCAL_MPI_Cart_shift=dlsym(lib_handle,"PMPI_Cart_shift");
LOCAL_MPI_Get_processor_name=dlsym(lib_handle,"PMPI_Get_processor_name");
LOCAL_MPI_Get_version=dlsym(lib_handle,"PMPI_Get_version");
LOCAL_MPI_Get_library_version=dlsym(lib_handle,"PMPI_Get_library_version");
LOCAL_MPI_Errhandler_create=dlsym(lib_handle,"PMPI_Errhandler_create");
LOCAL_MPI_Errhandler_set=dlsym(lib_handle,"PMPI_Errhandler_set");
LOCAL_MPI_Errhandler_get=dlsym(lib_handle,"PMPI_Errhandler_get");
LOCAL_MPI_Errhandler_free=dlsym(lib_handle,"PMPI_Errhandler_free");
LOCAL_MPI_Error_string=dlsym(lib_handle,"PMPI_Error_string");
LOCAL_MPI_Error_class=dlsym(lib_handle,"PMPI_Error_class");
LOCAL_MPI_Initialized=dlsym(lib_handle,"PMPI_Initialized");
LOCAL_MPI_Abort=dlsym(lib_handle,"PMPI_Abort");
LOCAL_MPI_Init=dlsym(lib_handle,"PMPI_Init");
LOCAL_MPI_Close_port=dlsym(lib_handle,"PMPI_Close_port");
LOCAL_MPI_Comm_accept=dlsym(lib_handle,"PMPI_Comm_accept");
LOCAL_MPI_Comm_connect=dlsym(lib_handle,"PMPI_Comm_connect");
LOCAL_MPI_Comm_disconnect=dlsym(lib_handle,"PMPI_Comm_disconnect");
LOCAL_MPI_Comm_get_parent=dlsym(lib_handle,"PMPI_Comm_get_parent");
LOCAL_MPI_Comm_join=dlsym(lib_handle,"PMPI_Comm_join");
LOCAL_MPI_Lookup_name=dlsym(lib_handle,"PMPI_Lookup_name");
LOCAL_MPI_Open_port=dlsym(lib_handle,"PMPI_Open_port");
LOCAL_MPI_Publish_name=dlsym(lib_handle,"PMPI_Publish_name");
LOCAL_MPI_Unpublish_name=dlsym(lib_handle,"PMPI_Unpublish_name");
LOCAL_MPI_Comm_set_info=dlsym(lib_handle,"PMPI_Comm_set_info");
LOCAL_MPI_Comm_get_info=dlsym(lib_handle,"PMPI_Comm_get_info");
LOCAL_MPI_Accumulate=dlsym(lib_handle,"PMPI_Accumulate");
LOCAL_MPI_Get=dlsym(lib_handle,"PMPI_Get");
LOCAL_MPI_Put=dlsym(lib_handle,"PMPI_Put");
LOCAL_MPI_Win_complete=dlsym(lib_handle,"PMPI_Win_complete");
LOCAL_MPI_Win_create=dlsym(lib_handle,"PMPI_Win_create");
LOCAL_MPI_Win_fence=dlsym(lib_handle,"PMPI_Win_fence");
LOCAL_MPI_Win_free=dlsym(lib_handle,"PMPI_Win_free");
LOCAL_MPI_Win_get_group=dlsym(lib_handle,"PMPI_Win_get_group");
LOCAL_MPI_Win_lock=dlsym(lib_handle,"PMPI_Win_lock");
LOCAL_MPI_Win_post=dlsym(lib_handle,"PMPI_Win_post");
LOCAL_MPI_Win_start=dlsym(lib_handle,"PMPI_Win_start");
LOCAL_MPI_Win_test=dlsym(lib_handle,"PMPI_Win_test");
LOCAL_MPI_Win_unlock=dlsym(lib_handle,"PMPI_Win_unlock");
LOCAL_MPI_Win_wait=dlsym(lib_handle,"PMPI_Win_wait");
LOCAL_MPI_Win_allocate=dlsym(lib_handle,"PMPI_Win_allocate");
LOCAL_MPI_Win_allocate_shared=dlsym(lib_handle,"PMPI_Win_allocate_shared");
LOCAL_MPI_Win_shared_query=dlsym(lib_handle,"PMPI_Win_shared_query");
LOCAL_MPI_Win_create_dynamic=dlsym(lib_handle,"PMPI_Win_create_dynamic");
LOCAL_MPI_Win_attach=dlsym(lib_handle,"PMPI_Win_attach");
LOCAL_MPI_Win_detach=dlsym(lib_handle,"PMPI_Win_detach");
LOCAL_MPI_Win_get_info=dlsym(lib_handle,"PMPI_Win_get_info");
LOCAL_MPI_Win_set_info=dlsym(lib_handle,"PMPI_Win_set_info");
LOCAL_MPI_Get_accumulate=dlsym(lib_handle,"PMPI_Get_accumulate");
LOCAL_MPI_Fetch_and_op=dlsym(lib_handle,"PMPI_Fetch_and_op");
LOCAL_MPI_Compare_and_swap=dlsym(lib_handle,"PMPI_Compare_and_swap");
LOCAL_MPI_Rput=dlsym(lib_handle,"PMPI_Rput");
LOCAL_MPI_Rget=dlsym(lib_handle,"PMPI_Rget");
LOCAL_MPI_Raccumulate=dlsym(lib_handle,"PMPI_Raccumulate");
LOCAL_MPI_Rget_accumulate=dlsym(lib_handle,"PMPI_Rget_accumulate");
LOCAL_MPI_Win_lock_all=dlsym(lib_handle,"PMPI_Win_lock_all");
LOCAL_MPI_Win_unlock_all=dlsym(lib_handle,"PMPI_Win_unlock_all");
LOCAL_MPI_Win_flush=dlsym(lib_handle,"PMPI_Win_flush");
LOCAL_MPI_Win_flush_all=dlsym(lib_handle,"PMPI_Win_flush_all");
LOCAL_MPI_Win_flush_local=dlsym(lib_handle,"PMPI_Win_flush_local");
LOCAL_MPI_Win_flush_local_all=dlsym(lib_handle,"PMPI_Win_flush_local_all");
LOCAL_MPI_Win_sync=dlsym(lib_handle,"PMPI_Win_sync");
LOCAL_MPI_Add_error_class=dlsym(lib_handle,"PMPI_Add_error_class");
LOCAL_MPI_Add_error_code=dlsym(lib_handle,"PMPI_Add_error_code");
LOCAL_MPI_Add_error_string=dlsym(lib_handle,"PMPI_Add_error_string");
LOCAL_MPI_Comm_call_errhandler=dlsym(lib_handle,"PMPI_Comm_call_errhandler");
LOCAL_MPI_Comm_delete_attr=dlsym(lib_handle,"PMPI_Comm_delete_attr");
LOCAL_MPI_Comm_get_attr=dlsym(lib_handle,"PMPI_Comm_get_attr");
LOCAL_MPI_Comm_get_name=dlsym(lib_handle,"PMPI_Comm_get_name");
LOCAL_MPI_Comm_set_attr=dlsym(lib_handle,"PMPI_Comm_set_attr");
LOCAL_MPI_Comm_set_name=dlsym(lib_handle,"PMPI_Comm_set_name");
LOCAL_MPI_Grequest_complete=dlsym(lib_handle,"PMPI_Grequest_complete");
LOCAL_MPI_Grequest_start=dlsym(lib_handle,"PMPI_Grequest_start");
LOCAL_MPI_Init_thread=dlsym(lib_handle,"PMPI_Init_thread");
LOCAL_MPI_Is_thread_main=dlsym(lib_handle,"PMPI_Is_thread_main");
LOCAL_MPI_Query_thread=dlsym(lib_handle,"PMPI_Query_thread");
LOCAL_MPI_Status_set_cancelled=dlsym(lib_handle,"PMPI_Status_set_cancelled");
LOCAL_MPI_Status_set_elements=dlsym(lib_handle,"PMPI_Status_set_elements");
LOCAL_MPI_Type_create_keyval=dlsym(lib_handle,"PMPI_Type_create_keyval");
LOCAL_MPI_Type_delete_attr=dlsym(lib_handle,"PMPI_Type_delete_attr");
LOCAL_MPI_Type_dup=dlsym(lib_handle,"PMPI_Type_dup");
LOCAL_MPI_Type_free_keyval=dlsym(lib_handle,"PMPI_Type_free_keyval");
LOCAL_MPI_Type_get_attr=dlsym(lib_handle,"PMPI_Type_get_attr");
LOCAL_MPI_Type_get_envelope=dlsym(lib_handle,"PMPI_Type_get_envelope");
LOCAL_MPI_Type_get_name=dlsym(lib_handle,"PMPI_Type_get_name");
LOCAL_MPI_Type_set_attr=dlsym(lib_handle,"PMPI_Type_set_attr");
LOCAL_MPI_Type_set_name=dlsym(lib_handle,"PMPI_Type_set_name");
LOCAL_MPI_Type_match_size=dlsym(lib_handle,"PMPI_Type_match_size");
LOCAL_MPI_Win_create_keyval=dlsym(lib_handle,"PMPI_Win_create_keyval");
LOCAL_MPI_Win_delete_attr=dlsym(lib_handle,"PMPI_Win_delete_attr");
LOCAL_MPI_Win_free_keyval=dlsym(lib_handle,"PMPI_Win_free_keyval");
LOCAL_MPI_Win_get_name=dlsym(lib_handle,"PMPI_Win_get_name");
LOCAL_MPI_Win_set_name=dlsym(lib_handle,"PMPI_Win_set_name");
LOCAL_MPI_Alloc_mem=dlsym(lib_handle,"PMPI_Alloc_mem");
LOCAL_MPI_Comm_create_errhandler=dlsym(lib_handle,"PMPI_Comm_create_errhandler");
LOCAL_MPI_Comm_get_errhandler=dlsym(lib_handle,"PMPI_Comm_get_errhandler");
LOCAL_MPI_Comm_set_errhandler=dlsym(lib_handle,"PMPI_Comm_set_errhandler");
LOCAL_MPI_File_get_errhandler=dlsym(lib_handle,"PMPI_File_get_errhandler");
LOCAL_MPI_File_set_errhandler=dlsym(lib_handle,"PMPI_File_set_errhandler");
LOCAL_MPI_Finalized=dlsym(lib_handle,"PMPI_Finalized");
LOCAL_MPI_Free_mem=dlsym(lib_handle,"PMPI_Free_mem");
LOCAL_MPI_Get_address=dlsym(lib_handle,"PMPI_Get_address");
LOCAL_MPI_Info_create=dlsym(lib_handle,"PMPI_Info_create");
LOCAL_MPI_Info_delete=dlsym(lib_handle,"PMPI_Info_delete");
LOCAL_MPI_Info_dup=dlsym(lib_handle,"PMPI_Info_dup");
LOCAL_MPI_Info_free=dlsym(lib_handle,"PMPI_Info_free");
LOCAL_MPI_Info_get=dlsym(lib_handle,"PMPI_Info_get");
LOCAL_MPI_Info_get_nkeys=dlsym(lib_handle,"PMPI_Info_get_nkeys");
LOCAL_MPI_Info_get_nthkey=dlsym(lib_handle,"PMPI_Info_get_nthkey");
LOCAL_MPI_Info_get_valuelen=dlsym(lib_handle,"PMPI_Info_get_valuelen");
LOCAL_MPI_Info_set=dlsym(lib_handle,"PMPI_Info_set");
LOCAL_MPI_Request_get_status=dlsym(lib_handle,"PMPI_Request_get_status");
LOCAL_MPI_Type_create_hvector=dlsym(lib_handle,"PMPI_Type_create_hvector");
LOCAL_MPI_Type_create_resized=dlsym(lib_handle,"PMPI_Type_create_resized");
LOCAL_MPI_Type_get_extent=dlsym(lib_handle,"PMPI_Type_get_extent");
LOCAL_MPI_Type_get_true_extent=dlsym(lib_handle,"PMPI_Type_get_true_extent");
LOCAL_MPI_Win_get_errhandler=dlsym(lib_handle,"PMPI_Win_get_errhandler");
LOCAL_MPI_Type_create_f90_integer=dlsym(lib_handle,"PMPI_Type_create_f90_integer");
LOCAL_MPI_Type_create_f90_real=dlsym(lib_handle,"PMPI_Type_create_f90_real");
LOCAL_MPI_Type_create_f90_complex=dlsym(lib_handle,"PMPI_Type_create_f90_complex");
LOCAL_MPI_Reduce_local=dlsym(lib_handle,"PMPI_Reduce_local");
LOCAL_MPI_Op_commutative=dlsym(lib_handle,"PMPI_Op_commutative");
LOCAL_MPI_Dist_graph_neighbors_count=dlsym(lib_handle,"PMPI_Dist_graph_neighbors_count");
LOCAL_MPI_Improbe=dlsym(lib_handle,"PMPI_Improbe");
LOCAL_MPI_Imrecv=dlsym(lib_handle,"PMPI_Imrecv");
LOCAL_MPI_Mprobe=dlsym(lib_handle,"PMPI_Mprobe");
LOCAL_MPI_Mrecv=dlsym(lib_handle,"PMPI_Mrecv");
LOCAL_MPI_Comm_idup=dlsym(lib_handle,"PMPI_Comm_idup");
LOCAL_MPI_Ibarrier=dlsym(lib_handle,"PMPI_Ibarrier");
LOCAL_MPI_Ibcast=dlsym(lib_handle,"PMPI_Ibcast");
LOCAL_MPI_Igather=dlsym(lib_handle,"PMPI_Igather");
LOCAL_MPI_Iscatter=dlsym(lib_handle,"PMPI_Iscatter");
LOCAL_MPI_Iallgather=dlsym(lib_handle,"PMPI_Iallgather");
LOCAL_MPI_Ialltoall=dlsym(lib_handle,"PMPI_Ialltoall");
LOCAL_MPI_Ireduce=dlsym(lib_handle,"PMPI_Ireduce");
LOCAL_MPI_Iallreduce=dlsym(lib_handle,"PMPI_Iallreduce");
LOCAL_MPI_Ireduce_scatter_block=dlsym(lib_handle,"PMPI_Ireduce_scatter_block");
LOCAL_MPI_Iscan=dlsym(lib_handle,"PMPI_Iscan");
LOCAL_MPI_Iexscan=dlsym(lib_handle,"PMPI_Iexscan");
LOCAL_MPI_Ineighbor_allgather=dlsym(lib_handle,"PMPI_Ineighbor_allgather");
LOCAL_MPI_Ineighbor_alltoall=dlsym(lib_handle,"PMPI_Ineighbor_alltoall");
LOCAL_MPI_Neighbor_allgather=dlsym(lib_handle,"PMPI_Neighbor_allgather");
LOCAL_MPI_Neighbor_alltoall=dlsym(lib_handle,"PMPI_Neighbor_alltoall");
LOCAL_MPI_Comm_split_type=dlsym(lib_handle,"PMPI_Comm_split_type");
LOCAL_MPI_Get_elements_x=dlsym(lib_handle,"PMPI_Get_elements_x");
LOCAL_MPI_Status_set_elements_x=dlsym(lib_handle,"PMPI_Status_set_elements_x");
LOCAL_MPI_Type_get_extent_x=dlsym(lib_handle,"PMPI_Type_get_extent_x");
LOCAL_MPI_Type_get_true_extent_x=dlsym(lib_handle,"PMPI_Type_get_true_extent_x");
LOCAL_MPI_Type_size_x=dlsym(lib_handle,"PMPI_Type_size_x");
LOCAL_MPI_Comm_create_group=dlsym(lib_handle,"PMPI_Comm_create_group");
LOCAL_MPI_T_init_thread=dlsym(lib_handle,"PMPI_T_init_thread");
LOCAL_MPI_T_enum_get_info=dlsym(lib_handle,"PMPI_T_enum_get_info");
LOCAL_MPI_T_enum_get_item=dlsym(lib_handle,"PMPI_T_enum_get_item");
LOCAL_MPI_T_cvar_get_num=dlsym(lib_handle,"PMPI_T_cvar_get_num");
LOCAL_MPI_T_cvar_get_info=dlsym(lib_handle,"PMPI_T_cvar_get_info");
LOCAL_MPI_T_cvar_handle_alloc=dlsym(lib_handle,"PMPI_T_cvar_handle_alloc");
LOCAL_MPI_T_cvar_handle_free=dlsym(lib_handle,"PMPI_T_cvar_handle_free");
LOCAL_MPI_T_cvar_read=dlsym(lib_handle,"PMPI_T_cvar_read");
LOCAL_MPI_T_cvar_write=dlsym(lib_handle,"PMPI_T_cvar_write");
LOCAL_MPI_T_pvar_get_num=dlsym(lib_handle,"PMPI_T_pvar_get_num");
LOCAL_MPI_T_pvar_get_info=dlsym(lib_handle,"PMPI_T_pvar_get_info");
LOCAL_MPI_T_category_get_num=dlsym(lib_handle,"PMPI_T_category_get_num");
LOCAL_MPI_T_category_get_info=dlsym(lib_handle,"PMPI_T_category_get_info");
LOCAL_MPI_File_open=dlsym(lib_handle,"PMPI_File_open");
LOCAL_MPI_File_close=dlsym(lib_handle,"PMPI_File_close");
LOCAL_MPI_File_delete=dlsym(lib_handle,"PMPI_File_delete");
LOCAL_MPI_File_set_size=dlsym(lib_handle,"PMPI_File_set_size");
LOCAL_MPI_File_preallocate=dlsym(lib_handle,"PMPI_File_preallocate");
LOCAL_MPI_File_get_size=dlsym(lib_handle,"PMPI_File_get_size");
LOCAL_MPI_File_get_group=dlsym(lib_handle,"PMPI_File_get_group");
LOCAL_MPI_File_get_amode=dlsym(lib_handle,"PMPI_File_get_amode");
LOCAL_MPI_File_set_info=dlsym(lib_handle,"PMPI_File_set_info");
LOCAL_MPI_File_get_info=dlsym(lib_handle,"PMPI_File_get_info");
LOCAL_MPI_File_set_view=dlsym(lib_handle,"PMPI_File_set_view");
LOCAL_MPI_File_get_view=dlsym(lib_handle,"PMPI_File_get_view");
LOCAL_MPI_File_read_at=dlsym(lib_handle,"PMPI_File_read_at");
LOCAL_MPI_File_read_at_all=dlsym(lib_handle,"PMPI_File_read_at_all");
LOCAL_MPI_File_write_at=dlsym(lib_handle,"PMPI_File_write_at");
LOCAL_MPI_File_write_at_all=dlsym(lib_handle,"PMPI_File_write_at_all");
LOCAL_MPI_File_iread_at=dlsym(lib_handle,"PMPI_File_iread_at");
LOCAL_MPI_File_iwrite_at=dlsym(lib_handle,"PMPI_File_iwrite_at");
LOCAL_MPI_File_read=dlsym(lib_handle,"PMPI_File_read");
LOCAL_MPI_File_read_all=dlsym(lib_handle,"PMPI_File_read_all");
LOCAL_MPI_File_write=dlsym(lib_handle,"PMPI_File_write");
LOCAL_MPI_File_write_all=dlsym(lib_handle,"PMPI_File_write_all");
LOCAL_MPI_File_iread=dlsym(lib_handle,"PMPI_File_iread");
LOCAL_MPI_File_iwrite=dlsym(lib_handle,"PMPI_File_iwrite");
LOCAL_MPI_File_seek=dlsym(lib_handle,"PMPI_File_seek");
LOCAL_MPI_File_get_position=dlsym(lib_handle,"PMPI_File_get_position");
LOCAL_MPI_File_get_byte_offset=dlsym(lib_handle,"PMPI_File_get_byte_offset");
LOCAL_MPI_File_read_shared=dlsym(lib_handle,"PMPI_File_read_shared");
LOCAL_MPI_File_write_shared=dlsym(lib_handle,"PMPI_File_write_shared");
LOCAL_MPI_File_iread_shared=dlsym(lib_handle,"PMPI_File_iread_shared");
LOCAL_MPI_File_iwrite_shared=dlsym(lib_handle,"PMPI_File_iwrite_shared");
LOCAL_MPI_File_read_ordered=dlsym(lib_handle,"PMPI_File_read_ordered");
LOCAL_MPI_File_write_ordered=dlsym(lib_handle,"PMPI_File_write_ordered");
LOCAL_MPI_File_seek_shared=dlsym(lib_handle,"PMPI_File_seek_shared");
LOCAL_MPI_File_get_position_shared=dlsym(lib_handle,"PMPI_File_get_position_shared");
LOCAL_MPI_File_read_at_all_begin=dlsym(lib_handle,"PMPI_File_read_at_all_begin");
LOCAL_MPI_File_read_at_all_end=dlsym(lib_handle,"PMPI_File_read_at_all_end");
LOCAL_MPI_File_write_at_all_begin=dlsym(lib_handle,"PMPI_File_write_at_all_begin");
LOCAL_MPI_File_write_at_all_end=dlsym(lib_handle,"PMPI_File_write_at_all_end");
LOCAL_MPI_File_read_all_begin=dlsym(lib_handle,"PMPI_File_read_all_begin");
LOCAL_MPI_File_read_all_end=dlsym(lib_handle,"PMPI_File_read_all_end");
LOCAL_MPI_File_write_all_begin=dlsym(lib_handle,"PMPI_File_write_all_begin");
LOCAL_MPI_File_write_all_end=dlsym(lib_handle,"PMPI_File_write_all_end");
LOCAL_MPI_File_read_ordered_begin=dlsym(lib_handle,"PMPI_File_read_ordered_begin");
LOCAL_MPI_File_read_ordered_end=dlsym(lib_handle,"PMPI_File_read_ordered_end");
LOCAL_MPI_File_write_ordered_begin=dlsym(lib_handle,"PMPI_File_write_ordered_begin");
LOCAL_MPI_File_write_ordered_end=dlsym(lib_handle,"PMPI_File_write_ordered_end");
LOCAL_MPI_File_get_type_extent=dlsym(lib_handle,"PMPI_File_get_type_extent");
LOCAL_MPI_Register_datarep=dlsym(lib_handle,"PMPI_Register_datarep");
LOCAL_MPI_File_set_atomicity=dlsym(lib_handle,"PMPI_File_set_atomicity");
LOCAL_MPI_File_get_atomicity=dlsym(lib_handle,"PMPI_File_get_atomicity");
LOCAL_MPI_File_sync=dlsym(lib_handle,"PMPI_File_sync");
LOCAL_MPI_T_finalize=dlsym(lib_handle,"PMPI_T_finalize");
LOCAL_MPI_Wtime=dlsym(lib_handle,"PMPI_Wtime");
LOCAL_MPI_Wtick=dlsym(lib_handle,"PMPI_Wtick");
LOCAL_MPI_Finalize=dlsym(lib_handle,"PMPI_Finalize");
LOCAL_MPI_Waitany=dlsym(lib_handle,"PMPI_Waitany");
LOCAL_MPI_Testany=dlsym(lib_handle,"PMPI_Testany");
LOCAL_MPI_Waitall=dlsym(lib_handle,"PMPI_Waitall");
LOCAL_MPI_Testall=dlsym(lib_handle,"PMPI_Testall");
LOCAL_MPI_Waitsome=dlsym(lib_handle,"PMPI_Waitsome");
LOCAL_MPI_Testsome=dlsym(lib_handle,"PMPI_Testsome");
LOCAL_MPI_Startall=dlsym(lib_handle,"PMPI_Startall");
LOCAL_MPI_Alltoallw=dlsym(lib_handle,"PMPI_Alltoallw");
LOCAL_MPI_Reduce_scatter=dlsym(lib_handle,"PMPI_Reduce_scatter");
LOCAL_MPI_Group_translate_ranks=dlsym(lib_handle,"PMPI_Group_translate_ranks");
LOCAL_MPI_Group_incl=dlsym(lib_handle,"PMPI_Group_incl");
LOCAL_MPI_Group_excl=dlsym(lib_handle,"PMPI_Group_excl");
LOCAL_MPI_Group_range_incl=dlsym(lib_handle,"PMPI_Group_range_incl");
LOCAL_MPI_Group_range_excl=dlsym(lib_handle,"PMPI_Group_range_excl");
LOCAL_MPI_Cart_create=dlsym(lib_handle,"PMPI_Cart_create");
LOCAL_MPI_Dims_create=dlsym(lib_handle,"PMPI_Dims_create");
LOCAL_MPI_Graph_create=dlsym(lib_handle,"PMPI_Graph_create");
LOCAL_MPI_Graph_get=dlsym(lib_handle,"PMPI_Graph_get");
LOCAL_MPI_Cart_get=dlsym(lib_handle,"PMPI_Cart_get");
LOCAL_MPI_Cart_rank=dlsym(lib_handle,"PMPI_Cart_rank");
LOCAL_MPI_Cart_coords=dlsym(lib_handle,"PMPI_Cart_coords");
LOCAL_MPI_Graph_neighbors=dlsym(lib_handle,"PMPI_Graph_neighbors");
LOCAL_MPI_Cart_sub=dlsym(lib_handle,"PMPI_Cart_sub");
LOCAL_MPI_Cart_map=dlsym(lib_handle,"PMPI_Cart_map");
LOCAL_MPI_Graph_map=dlsym(lib_handle,"PMPI_Graph_map");
LOCAL_MPI_Comm_spawn=dlsym(lib_handle,"PMPI_Comm_spawn");
LOCAL_MPI_Comm_spawn_multiple=dlsym(lib_handle,"PMPI_Comm_spawn_multiple");
LOCAL_MPI_Type_get_contents=dlsym(lib_handle,"PMPI_Type_get_contents");
LOCAL_MPI_Pack_external=dlsym(lib_handle,"PMPI_Pack_external");
LOCAL_MPI_Pack_external_size=dlsym(lib_handle,"PMPI_Pack_external_size");
LOCAL_MPI_Type_create_darray=dlsym(lib_handle,"PMPI_Type_create_darray");
LOCAL_MPI_Type_create_hindexed=dlsym(lib_handle,"PMPI_Type_create_hindexed");
LOCAL_MPI_Type_create_indexed_block=dlsym(lib_handle,"PMPI_Type_create_indexed_block");
LOCAL_MPI_Type_create_hindexed_block=dlsym(lib_handle,"PMPI_Type_create_hindexed_block");
LOCAL_MPI_Type_create_struct=dlsym(lib_handle,"PMPI_Type_create_struct");
LOCAL_MPI_Type_create_subarray=dlsym(lib_handle,"PMPI_Type_create_subarray");
LOCAL_MPI_Unpack_external=dlsym(lib_handle,"PMPI_Unpack_external");
LOCAL_MPI_Dist_graph_create_adjacent=dlsym(lib_handle,"PMPI_Dist_graph_create_adjacent");
LOCAL_MPI_Dist_graph_create=dlsym(lib_handle,"PMPI_Dist_graph_create");
LOCAL_MPI_Dist_graph_neighbors=dlsym(lib_handle,"PMPI_Dist_graph_neighbors");
LOCAL_MPI_Igatherv=dlsym(lib_handle,"PMPI_Igatherv");
LOCAL_MPI_Iscatterv=dlsym(lib_handle,"PMPI_Iscatterv");
LOCAL_MPI_Iallgatherv=dlsym(lib_handle,"PMPI_Iallgatherv");
LOCAL_MPI_Ialltoallv=dlsym(lib_handle,"PMPI_Ialltoallv");
LOCAL_MPI_Ialltoallw=dlsym(lib_handle,"PMPI_Ialltoallw");
LOCAL_MPI_Ireduce_scatter=dlsym(lib_handle,"PMPI_Ireduce_scatter");
LOCAL_MPI_Ineighbor_allgatherv=dlsym(lib_handle,"PMPI_Ineighbor_allgatherv");
LOCAL_MPI_Ineighbor_alltoallv=dlsym(lib_handle,"PMPI_Ineighbor_alltoallv");
LOCAL_MPI_Ineighbor_alltoallw=dlsym(lib_handle,"PMPI_Ineighbor_alltoallw");
LOCAL_MPI_Neighbor_allgatherv=dlsym(lib_handle,"PMPI_Neighbor_allgatherv");
LOCAL_MPI_Neighbor_alltoallv=dlsym(lib_handle,"PMPI_Neighbor_alltoallv");
LOCAL_MPI_Neighbor_alltoallw=dlsym(lib_handle,"PMPI_Neighbor_alltoallw");
LOCAL_MPI_T_category_get_cvars=dlsym(lib_handle,"PMPI_T_category_get_cvars");
LOCAL_MPI_T_category_get_pvars=dlsym(lib_handle,"PMPI_T_category_get_pvars");
LOCAL_MPI_T_category_get_categories=dlsym(lib_handle,"PMPI_T_category_get_categories");
LOCAL_MPI_File_iwrite_all=dlsym(lib_handle,"PMPI_File_iwrite_all");
LOCAL_MPI_File_iwrite_at_all=dlsym(lib_handle,"PMPI_File_iwrite_at_all");
LOCAL_MPI_T_category_get_index=dlsym(lib_handle,"PMPI_T_category_get_index");
LOCAL_MPI_T_cvar_get_index=dlsym(lib_handle,"PMPI_T_cvar_get_index");
LOCAL_MPI_T_pvar_get_index=dlsym(lib_handle,"PMPI_T_pvar_get_index");
LOCAL_MPI_Aint_add=dlsym(lib_handle,"PMPI_Aint_add");
LOCAL_MPI_Aint_diff=dlsym(lib_handle,"PMPI_Aint_diff");
LOCAL_MPI_File_iread_all=dlsym(lib_handle,"PMPI_File_iread_all");
LOCAL_MPI_File_iread_at_all=dlsym(lib_handle,"PMPI_File_iread_at_all");
LOCAL_MPI_T_category_changed=dlsym(lib_handle,"PMPI_T_category_changed");
#if defined(INTEL_OMPI) || defined(OMPI_INTEL)
local_MPIR_Dup_fn=dlsym(lib_handle,"MPIR_Dup_fn");
#endif
#ifdef OMPI_OMPI
init_global(lib_handle);
#elif OMPI_INTEL
R_MPI_UNWEIGHTED=dlsym(lib_handle,"MPI_UNWEIGHTED");
R_MPI_WEIGHTS_EMPTY=dlsym(lib_handle,"MPI_WEIGHTS_EMPTY");
MPI_UNWEIGHTED=dlsym(lib_handle,"MPI_UNWEIGHTED");
MPI_WEIGHTS_EMPTY=dlsym(lib_handle,"MPI_WEIGHTS_EMPTY");
#endif
datatype_translation_init();
communicator_translation_init();
request_translation_init();
operation_translation_init();
group_translation_init();
errhandler_translation_init();
file_translation_init();
info_translation_init();
win_translation_init();
message_translation_init();
t_enum_translation_init();
cvar_handle_translation_init();
pvar_handle_translation_init();
//pvar_session_translation_init();
//DATATYPE
datatype_translation_add_const(A_MPI_DATATYPE_NULL, R_MPI_DATATYPE_NULL);
datatype_translation_add_const(A_MPI_CHAR, R_MPI_CHAR);
datatype_translation_add_const(A_MPI_SIGNED_CHAR, R_MPI_SIGNED_CHAR);
datatype_translation_add_const(A_MPI_UNSIGNED_CHAR, R_MPI_UNSIGNED_CHAR);
datatype_translation_add_const(A_MPI_BYTE, R_MPI_BYTE);
datatype_translation_add_const(A_MPI_WCHAR, R_MPI_WCHAR);
datatype_translation_add_const(A_MPI_SHORT, R_MPI_SHORT);
datatype_translation_add_const(A_MPI_UNSIGNED_SHORT, R_MPI_UNSIGNED_SHORT);
datatype_translation_add_const(A_MPI_INT, R_MPI_INT);
datatype_translation_add_const(A_MPI_UNSIGNED, R_MPI_UNSIGNED);
datatype_translation_add_const(A_MPI_LONG, R_MPI_LONG);
datatype_translation_add_const(A_MPI_UNSIGNED_LONG, R_MPI_UNSIGNED_LONG);
datatype_translation_add_const(A_MPI_FLOAT, R_MPI_FLOAT);
datatype_translation_add_const(A_MPI_DOUBLE, R_MPI_DOUBLE);
datatype_translation_add_const(A_MPI_LONG_DOUBLE, R_MPI_LONG_DOUBLE);
datatype_translation_add_const(A_MPI_LONG_LONG_INT, R_MPI_LONG_LONG_INT);
datatype_translation_add_const(A_MPI_UNSIGNED_LONG_LONG, R_MPI_UNSIGNED_LONG_LONG);
datatype_translation_add_const(A_MPI_LONG_LONG, R_MPI_LONG_LONG);
datatype_translation_add_const(A_MPI_UB, R_MPI_UB);
datatype_translation_add_const(A_MPI_LB, R_MPI_LB);
datatype_translation_add_const(A_MPI_PACKED, R_MPI_PACKED);
datatype_translation_add_const(A_MPI_2INT, R_MPI_2INT);
datatype_translation_add_const(A_MPI_LONG_INT, R_MPI_LONG_INT);
datatype_translation_add_const(A_MPI_SHORT_INT, R_MPI_SHORT_INT);
datatype_translation_add_const(A_MPI_DOUBLE_INT, R_MPI_DOUBLE_INT);
datatype_translation_add_const(A_MPI_FLOAT_INT, R_MPI_FLOAT_INT);
datatype_translation_add_const(A_MPI_LONG_DOUBLE_INT, R_MPI_LONG_DOUBLE_INT);
datatype_translation_add_const(A_MPI_CHARACTER, R_MPI_CHARACTER);
datatype_translation_add_const(A_MPI_LOGICAL, R_MPI_LOGICAL);
datatype_translation_add_const(A_MPI_DOUBLE_COMPLEX, R_MPI_DOUBLE_COMPLEX);
datatype_translation_add_const(A_MPI_COMPLEX, R_MPI_COMPLEX);
datatype_translation_add_const(A_MPI_INTEGER, R_MPI_INTEGER);
datatype_translation_add_const(A_MPI_REAL, R_MPI_REAL);
datatype_translation_add_const(A_MPI_DOUBLE_PRECISION,R_MPI_DOUBLE_PRECISION);
/*New datatypes from the MPI 2.2 standard*/
datatype_translation_add_const(A_MPI_INT8_T               ,R_MPI_INT8_T               );
datatype_translation_add_const(A_MPI_UINT8_T              ,R_MPI_UINT8_T              );
datatype_translation_add_const(A_MPI_INT16_T              ,R_MPI_INT16_T              );
datatype_translation_add_const(A_MPI_UINT16_T             ,R_MPI_UINT16_T             );
datatype_translation_add_const(A_MPI_INT32_T              ,R_MPI_INT32_T              );
datatype_translation_add_const(A_MPI_UINT32_T             ,R_MPI_UINT32_T             );
datatype_translation_add_const(A_MPI_INT64_T              ,R_MPI_INT64_T              );
datatype_translation_add_const(A_MPI_UINT64_T             ,R_MPI_UINT64_T             );
datatype_translation_add_const(A_MPI_AINT                 ,R_MPI_AINT                 );
datatype_translation_add_const(A_MPI_OFFSET               ,R_MPI_OFFSET               );
datatype_translation_add_const(A_MPI_C_BOOL               ,R_MPI_C_BOOL               );
datatype_translation_add_const(A_MPI_C_COMPLEX            ,R_MPI_C_COMPLEX            );
datatype_translation_add_const(A_MPI_C_FLOAT_COMPLEX      ,R_MPI_C_FLOAT_COMPLEX      );
datatype_translation_add_const(A_MPI_C_DOUBLE_COMPLEX     ,R_MPI_C_DOUBLE_COMPLEX     );
datatype_translation_add_const(A_MPI_C_LONG_DOUBLE_COMPLEX,R_MPI_C_LONG_DOUBLE_COMPLEX);
datatype_translation_add_const(A_MPI_CXX_BOOL             ,R_MPI_CXX_BOOL             );
datatype_translation_add_const(A_MPI_CXX_FLOAT_COMPLEX    ,R_MPI_CXX_FLOAT_COMPLEX    );
datatype_translation_add_const(A_MPI_CXX_DOUBLE_COMPLEX   ,R_MPI_CXX_DOUBLE_COMPLEX   );
datatype_translation_add_const(A_MPI_CXX_LONG_DOUBLE_COMPLEX,R_MPI_CXX_LONG_DOUBLE_COMPLEX);
/*New datatypes from the 3.0 standard*/
//datatype_translation_add_const(A_MPI_COUNT,R_MPI_COUNT);
//COMM
communicator_translation_add_const(A_MPI_COMM_WORLD, R_MPI_COMM_WORLD);
communicator_translation_add_const(A_MPI_COMM_SELF, R_MPI_COMM_SELF);
communicator_translation_add_const(A_MPI_COMM_NULL, R_MPI_COMM_NULL);
//REQUEST
request_translation_add_const(A_MPI_REQUEST_NULL, R_MPI_REQUEST_NULL);
//OP
operation_translation_add_const(A_MPI_OP_NULL, R_MPI_OP_NULL);
operation_translation_add_const(A_MPI_MAX, R_MPI_MAX);
operation_translation_add_const(A_MPI_MIN, R_MPI_MIN);
operation_translation_add_const(A_MPI_SUM, R_MPI_SUM);
operation_translation_add_const(A_MPI_PROD, R_MPI_PROD);
operation_translation_add_const(A_MPI_MAXLOC, R_MPI_MAXLOC);
operation_translation_add_const(A_MPI_MINLOC, R_MPI_MINLOC);
operation_translation_add_const(A_MPI_BAND, R_MPI_BAND);
operation_translation_add_const(A_MPI_BOR, R_MPI_BOR);
operation_translation_add_const(A_MPI_BXOR, R_MPI_BXOR);
operation_translation_add_const(A_MPI_LAND, R_MPI_LAND);
operation_translation_add_const(A_MPI_LOR, R_MPI_LOR);
operation_translation_add_const(A_MPI_LXOR, R_MPI_LXOR);
operation_translation_add_const(A_MPI_REPLACE, R_MPI_REPLACE);
//operation_translation_add_const(A_MPI_SAME_MODE, R_MPI_SAME_MODE);
//GROUP
group_translation_add_const(A_MPI_GROUP_NULL, R_MPI_GROUP_NULL);
group_translation_add_const(A_MPI_GROUP_EMPTY, R_MPI_GROUP_EMPTY);
//ERRHANDLER
errhandler_translation_add_const(A_MPI_ERRHANDLER_NULL,R_MPI_ERRHANDLER_NULL);
errhandler_translation_add_const(A_MPI_ERRORS_ARE_FATAL,R_MPI_ERRORS_ARE_FATAL);
errhandler_translation_add_const(A_MPI_ERRORS_RETURN, R_MPI_ERRORS_RETURN);
//FILE
file_translation_add_const(A_MPI_FILE_NULL, R_MPI_FILE_NULL);
//INFO
info_translation_add_const(A_MPI_INFO_NULL, R_MPI_INFO_NULL);
//WIN
win_translation_add_const(A_MPI_WIN_NULL, R_MPI_WIN_NULL);
//MESSAGE
message_translation_add_const(A_MPI_MESSAGE_NULL,R_MPI_MESSAGE_NULL);
message_translation_add_const(A_MPI_MESSAGE_NO_PROC,R_MPI_MESSAGE_NO_PROC);
//MPI_T
t_enum_translation_add_const(A_MPI_T_ENUM_NULL,R_MPI_T_ENUM_NULL);
cvar_handle_translation_add_const(A_MPI_T_CVAR_HANDLE_NULL,R_MPI_T_CVAR_HANDLE_NULL);
pvar_handle_translation_add_const(A_MPI_T_PVAR_HANDLE_NULL,R_MPI_T_PVAR_HANDLE_NULL);
//pvar_session_translation_add_const(A_MPI_T_PVAR_SESSION_NULL,R_MPI_T_PVAR_SESSION_NULL);
wrapper_init_f();

}
