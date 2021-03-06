/*  
 *  Copyright (c) 2012 - 2014, Adrian M. Partl <apartl@aip.de>, 
 *                      eScience team AIP Potsdam
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  See the NOTICE file distributed with this work for additional
 *  information regarding copyright ownership. You may obtain a copy
 *  of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#include "DBAbstractor.h"

using namespace DBServer;

DBAbstractor::DBAbstractor() {
	supportsSchemaRetrieval = true;
    isConnected = false;
    resumeMode = false;
}

DBAbstractor::~DBAbstractor() {
    
}

bool DBAbstractor::getIsConnected() {
    return isConnected;
}

bool DBAbstractor::getResumeMode() {
	return resumeMode;
}

bool DBAbstractor::getSupportsSchemaRetrieval() {
	return supportsSchemaRetrieval;
}

void DBAbstractor::setResumeMode(bool newResumeMode) {
	resumeMode = newResumeMode;
}


void * DBAbstractor::initGetCompleteTable(DBDataSchema::Schema * thisSchema) {
    throw "Not yet implemented";
}

int DBAbstractor::getNextRow(DBDataSchema::Schema * thisSchema, void* thisData, void * preparedStatement) {
    throw "Not yet implemented";
}