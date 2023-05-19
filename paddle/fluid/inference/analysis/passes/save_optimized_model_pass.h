/* Copyright (c) 2023 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#include <string>

#include "paddle/fluid/inference/analysis/analysis_pass.h"

namespace paddle {
namespace inference {
namespace analysis {

/*
 * Save model optimized by ir pass
 */
class SaveOptimizedModelPass : public AnalysisPass {
 public:
  void RunImpl(Argument *argument) override;
  std::string repr() const override;

 private:
  void SaveOptimizedModel(Argument *argument);
};

}  // namespace analysis
}  // namespace inference
}  // namespace paddle
