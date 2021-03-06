//############################# Wi4MPI License ###########################
//# `04/04/2016`                                                         #
//# Copyright or (C) or Copr. Commissariat a l'Energie Atomique          #
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


#ifndef THREAD_SAFETY_H
#define THREAD_SAFETY_H

#include <pthread.h>

#define lock_dest(a) pthread_spin_destroy(a)
#define lock_init(a) pthread_spin_init(a,PTHREAD_PROCESS_PRIVATE)
#define lock(a)  pthread_spin_lock(a)
#define unlock(a) pthread_spin_unlock(a)
typedef  pthread_spinlock_t *table_lock_t;

//#define lock_dest(a) 
//#define lock_init(a) 
//#define lock(a)  
//#define unlock(a) 
//typedef  pthread_spinlock_t *table_lock_t;


#endif
