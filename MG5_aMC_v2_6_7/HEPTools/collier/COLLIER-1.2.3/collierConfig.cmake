# File: collierConfig.cmake.in
# Author: Jean-Nicolas Lang
# Description: Config file for creating the collier library package
# Last Modified: March 02, 2018

# It defines the following variables
#  COLLIER_LIBRARY_DIR - include directories for project library
#  COLLIER_INCLUDE_DIR - include directories for project headers
#  COLLIER_LIBRARY_PATH - path to the collier library file

set(COLLIER_LIBRARY_DIR "/afs/cern.ch/work/b/bkailasa/MCGens/madgraph/MG5_aMC_v2_6_7/HEPTools/collier/COLLIER-1.2.3")
set(COLLIER_INCLUDE_DIR "/afs/cern.ch/work/b/bkailasa/MCGens/madgraph/MG5_aMC_v2_6_7/HEPTools/collier/COLLIER-1.2.3/modules")
add_library(collier SHARED IMPORTED)
find_library(COLLIER_LIBRARY_PATH collier HINTS "${COLLIER_LIBRARY_DIR}")
set_target_properties(collier PROPERTIES IMPORTED_LOCATION "${COLLIER_LIBRARY_PATH}")
include_directories(${COLLIER_INCLUDE_DIR})
