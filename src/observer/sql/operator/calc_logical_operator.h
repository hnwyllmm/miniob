/* Copyright (c) 2021 OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

//
// Created by Wangyunlai on 2022/12/07.
//

#pragma once

#include <vector>

#include "sql/operator/logical_operator.h"

/**
 * @brief CALC逻辑算子
 */
class CalcLogicalOperator : public LogicalOperator
{
public:
  CalcLogicalOperator(std::vector<std::unique_ptr<Expression>> &&expressions) { expressions_.swap(expressions); }
  virtual ~CalcLogicalOperator() = default;

  LogicalOperatorType type() const override { return LogicalOperatorType::CALC; }
};
