//------------------------------------------------------------------------------
// nesci -- neuronal simulator conan interface
//
// Copyright (c) 2018 RWTH Aachen University, Germany,
// Virtual Reality & Immersive Visualization Group.
//------------------------------------------------------------------------------
//                                  License
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//------------------------------------------------------------------------------

#ifndef LAYOUT_INCLUDE_NESCI_LAYOUT_MULTIMETER_HPP_
#define LAYOUT_INCLUDE_NESCI_LAYOUT_MULTIMETER_HPP_

#include <string>

#include "nesci/layout/device.hpp"

namespace nesci {
namespace layout {

class Multimeter : public Device {
 public:
  Multimeter() = delete;
  explicit Multimeter(const std::string& name);
  Multimeter(const Multimeter&) = default;
  explicit Multimeter(const Device& device);
  Multimeter(Multimeter&&) = default;
  explicit Multimeter(Device&& device);
  ~Multimeter() override = default;

  Multimeter& operator=(const Multimeter&) = default;
  Multimeter& operator=(Multimeter&&) = default;

  std::string GetPath() const override;

  void SetAttribute(const std::string& attribute);
  void SetNeuronId(const std::string& neuron_id);

 private:
  std::string attribute_{""};
  std::string neuron_id_{""};
};

}  // namespace layout
}  // namespace nesci

#endif  // LAYOUT_INCLUDE_NESCI_LAYOUT_MULTIMETER_HPP_
