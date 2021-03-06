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

#ifndef LAYOUT_INCLUDE_NESCI_LAYOUT_DEVICE_HPP_
#define LAYOUT_INCLUDE_NESCI_LAYOUT_DEVICE_HPP_

#include <string>

namespace nesci {
namespace layout {

class Device {
 public:
  Device() = delete;
  explicit Device(const std::string& name);
  Device(const Device&) = default;
  Device(Device&&) = default;
  virtual ~Device() = default;

  Device& operator=(const Device&) = default;
  Device& operator=(Device&&) = default;

  virtual std::string GetPath() const;

  void SetTime(const std::string& time);
  void SetTime(double time);

 protected:
  static std::string SuffixIfNotEmpty(const std::string& suffix);

 private:
  std::string name_{""};
  std::string time_{""};
};

}  // namespace layout
}  // namespace nesci

#endif  // LAYOUT_INCLUDE_NESCI_LAYOUT_DEVICE_HPP_
