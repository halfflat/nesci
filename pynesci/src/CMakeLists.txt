# -------------------------------------------------------------------------------
# nesci -- neuronal simulator conan interface
#
# Copyright (c) 2018 RWTH Aachen University, Germany,
# Virtual Reality & Immersive Visualization Group.
# -------------------------------------------------------------------------------
#                                  License
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
# -------------------------------------------------------------------------------

file(GLOB SOURCES *.cpp)
file(GLOB HEADERS *.hpp)
file(GLOB PYTHON_SOURCES *.py)

set(PYNESCI_OUTPUT_DIR
  ${CMAKE_CURRENT_BINARY_DIR}/../pynesci
  CACHE PATH "Output path for pynesci python module"
  )

add_python_module(
  NAME _pynesci
  SOURCES ${SOURCES}
  HEADERS ${HEADERS}
  PYTHON_SOURCES ${PYTHON_SOURCES}
  INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}
  LINK_LIBRARIES ${boost_python_target} ${conduit_target}
  OUTPUT_DIRECTORY ${PYNESCI_OUTPUT_DIR}
  )

add_subdirectory(consumer)
