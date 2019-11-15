﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/appmesh/model/GrpcRoute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppMesh
{
namespace Model
{

GrpcRoute::GrpcRoute() : 
    m_actionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_retryPolicyHasBeenSet(false)
{
}

GrpcRoute::GrpcRoute(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_matchHasBeenSet(false),
    m_retryPolicyHasBeenSet(false)
{
  *this = jsonValue;
}

GrpcRoute& GrpcRoute::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetObject("match");

    m_matchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retryPolicy"))
  {
    m_retryPolicy = jsonValue.GetObject("retryPolicy");

    m_retryPolicyHasBeenSet = true;
  }

  return *this;
}

JsonValue GrpcRoute::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_matchHasBeenSet)
  {
   payload.WithObject("match", m_match.Jsonize());

  }

  if(m_retryPolicyHasBeenSet)
  {
   payload.WithObject("retryPolicy", m_retryPolicy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace AppMesh
} // namespace Aws