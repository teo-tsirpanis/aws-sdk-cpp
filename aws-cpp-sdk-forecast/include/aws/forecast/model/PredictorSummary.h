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

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides a summary of the predictor properties used in the
   * <a>ListPredictors</a> operation. To get the complete set of properties, call the
   * <a>DescribePredictor</a> operation, and provide the listed
   * <code>PredictorArn</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorSummary">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API PredictorSummary
  {
  public:
    PredictorSummary();
    PredictorSummary(Aws::Utils::Json::JsonView jsonValue);
    PredictorSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the predictor.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline bool PredictorArnHasBeenSet() const { return m_predictorArnHasBeenSet; }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArnHasBeenSet = true; m_predictorArn = value; }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArnHasBeenSet = true; m_predictorArn = std::move(value); }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline void SetPredictorArn(const char* value) { m_predictorArnHasBeenSet = true; m_predictorArn.assign(value); }

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline PredictorSummary& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline PredictorSummary& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the predictor.</p>
     */
    inline PredictorSummary& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}


    /**
     * <p>The name of the predictor.</p>
     */
    inline const Aws::String& GetPredictorName() const{ return m_predictorName; }

    /**
     * <p>The name of the predictor.</p>
     */
    inline bool PredictorNameHasBeenSet() const { return m_predictorNameHasBeenSet; }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(const Aws::String& value) { m_predictorNameHasBeenSet = true; m_predictorName = value; }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(Aws::String&& value) { m_predictorNameHasBeenSet = true; m_predictorName = std::move(value); }

    /**
     * <p>The name of the predictor.</p>
     */
    inline void SetPredictorName(const char* value) { m_predictorNameHasBeenSet = true; m_predictorName.assign(value); }

    /**
     * <p>The name of the predictor.</p>
     */
    inline PredictorSummary& WithPredictorName(const Aws::String& value) { SetPredictorName(value); return *this;}

    /**
     * <p>The name of the predictor.</p>
     */
    inline PredictorSummary& WithPredictorName(Aws::String&& value) { SetPredictorName(std::move(value)); return *this;}

    /**
     * <p>The name of the predictor.</p>
     */
    inline PredictorSummary& WithPredictorName(const char* value) { SetPredictorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline bool DatasetGroupArnHasBeenSet() const { return m_datasetGroupArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArnHasBeenSet = true; m_datasetGroupArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline PredictorSummary& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline PredictorSummary& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the dataset group that contains the data
     * used to train the predictor.</p>
     */
    inline PredictorSummary& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}


    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline PredictorSummary& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline PredictorSummary& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the predictor. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> <li> <p> <code>UPDATE_PENDING</code>,
     * <code>UPDATE_IN_PROGRESS</code>, <code>UPDATE_FAILED</code> </p> </li> </ul>
     * <note> <p>The <code>Status</code> of the predictor must be <code>ACTIVE</code>
     * before using the predictor to create a forecast.</p> </note>
     */
    inline PredictorSummary& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline PredictorSummary& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline PredictorSummary& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline PredictorSummary& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the model training task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the model training task was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>When the model training task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>When the model training task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>When the model training task was created.</p>
     */
    inline PredictorSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the model training task was created.</p>
     */
    inline PredictorSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when training starts (status changed to
     * <code>CREATE_IN_PROGRESS</code>), and when training is complete (status changed
     * to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when training starts (status changed to
     * <code>CREATE_IN_PROGRESS</code>), and when training is complete (status changed
     * to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline bool LastModificationTimeHasBeenSet() const { return m_lastModificationTimeHasBeenSet; }

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when training starts (status changed to
     * <code>CREATE_IN_PROGRESS</code>), and when training is complete (status changed
     * to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = value; }

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when training starts (status changed to
     * <code>CREATE_IN_PROGRESS</code>), and when training is complete (status changed
     * to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::move(value); }

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when training starts (status changed to
     * <code>CREATE_IN_PROGRESS</code>), and when training is complete (status changed
     * to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline PredictorSummary& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>Initially, the same as <code>CreationTime</code> (status is
     * <code>CREATE_PENDING</code>). Updated when training starts (status changed to
     * <code>CREATE_IN_PROGRESS</code>), and when training is complete (status changed
     * to <code>ACTIVE</code>) or fails (status changed to
     * <code>CREATE_FAILED</code>).</p>
     */
    inline PredictorSummary& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}

  private:

    Aws::String m_predictorArn;
    bool m_predictorArnHasBeenSet;

    Aws::String m_predictorName;
    bool m_predictorNameHasBeenSet;

    Aws::String m_datasetGroupArn;
    bool m_datasetGroupArnHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModificationTime;
    bool m_lastModificationTimeHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws