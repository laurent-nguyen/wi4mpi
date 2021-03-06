#!/bin/bash
############################# Wi4MPI License ###########################
# `04/04/2016`                                                         #
# Copyright or (C) or Copr. Commissariat a l'Energie Atomique          #
#                                                                      #
# IDDN.FR.001.210022.000.S.P.2014.000.10800                            #
# This file is part of the Wi4MPI library.                             #
#                                                                      #
# This software is governed by the CeCILL-C license under French law   #
# and abiding by the rules of distribution of free software. You can   #
# use, modify and/ or redistribute the software under the terms of     #
# the CeCILL-C license as circulated by CEA, CNRS and INRIA at the     #
# following URL http://www.cecill.info.                                #
#                                                                      #
# The fact that you are presently reading this means that you have     #
# had knowledge of the CeCILL-C license and that you accept its        #
# terms.                                                               #
#                                                                      #
# Authors:                                                             #
#   - Delforge Tony <tony.delforge.tgccAcea.fr>                        #
#   - Ducrot Vincent <vincent.ducrot.tgccAcea.fr>                      #
#                                                                      #
########################################################################

cat $1/include/mpif* |grep -i 'common\ */' |sed /\\,/s//\\//g |awk -F '/' -v prefix=$2 'begin{gsub(/ /,"",prefix)}{ i=3;if ($4!="") {while($i!="") {gsub(/ /,"",$i);print "#define "prefix$i" (((int*)&"tolower($2)"_["i-3"]))";i=i+1 }}else {gsub(/ /,"",$3);print "#define "prefix$3" (((int*)&"tolower($2)"_))";} gsub(/[ \t]/,"",$2);if ($2!="") {if (prefix!="A_f_") {if (i!=3) print "extern int "tolower($2)"_["i-3"];";else print "extern int "tolower($2)"_;";}else {if (i!=3) print str"int "tolower($2)"_["i-3"];";else print str"int "tolower($2)"_;";}}}'
