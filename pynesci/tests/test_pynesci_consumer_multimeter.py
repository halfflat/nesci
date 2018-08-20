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

import pynesci


def test_pynesci_consumer_multimeter():
    multimeter = pynesci.consumer.Multimeter("SomeMultimeterName")


def test_pynesci_consumer_multimeter_get_attributes():
    multimeter = pynesci.consumer.Multimeter("SomeMultimeterName")
    some_node = pynesci.Node()
    multimeter.SetNode(some_node)
    assert len(multimeter.GetAttributes("0.0")) == 0


def test_pynesci_consumer_multimeter_get_neuron_ids():
    multimeter = pynesci.consumer.Multimeter("SomeMultimeterName")
    some_node = pynesci.Node()
    multimeter.SetNode(some_node)
    assert len(multimeter.GetNeuronIds("0.0", "Attribute1")) == 0
