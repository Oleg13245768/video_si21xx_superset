/*************************************************************************************************************
Copyright 2015-2019, Silicon Laboratories, Inc.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
 *************************************************************************************************************/
/*************************************************************************************
                  Silicon Laboratories Broadcast Si2158B Layer 1 API


   API functions prototypes used by commands and properties
   FILE: Si2158B_L1_API.h
   Supported IC : Si2158B
   Compiled for ROM 51 firmware 4_1_build_3
   Revision: 0.1
   Date: June 23 2016
**************************************************************************************/
#ifndef    _Si2158B_L1_API_H_
#define    _Si2158B_L1_API_H_

#include "Silabs_L0_API.h"


#include "Si2158B_Commands.h"
#include "Si2158B_Properties.h"
#include "Si2158B_typedefs.h"
#include "Si2158B_Commands_Prototypes.h"
#include "Si2158B_Properties_Functions.h"

#define NO_Si2158B_ERROR                     0x00
#define ERROR_Si2158B_PARAMETER_OUT_OF_RANGE 0x01
#define ERROR_Si2158B_ALLOCATING_CONTEXT     0x02
#define ERROR_Si2158B_SENDING_COMMAND        0x03
#define ERROR_Si2158B_CTS_TIMEOUT            0x04
#define ERROR_Si2158B_ERR                    0x05
#define ERROR_Si2158B_POLLING_CTS            0x06
#define ERROR_Si2158B_POLLING_RESPONSE       0x07
#define ERROR_Si2158B_LOADING_FIRMWARE       0x08
#define ERROR_Si2158B_LOADING_BOOTBLOCK      0x09
#define ERROR_Si2158B_STARTING_FIRMWARE      0x0a
#define ERROR_Si2158B_SW_RESET               0x0b
#define ERROR_Si2158B_INCOMPATIBLE_PART      0x0c
#define ERROR_Si2158B_TUNINT_TIMEOUT         0x0d
#define ERROR_Si2158B_xTVINT_TIMEOUT         0x0e
#define ERROR_Si2158B_UNKNOWN_COMMAND        0xf0
#define ERROR_Si2158B_UNKNOWN_PROPERTY       0xf1


unsigned char Si2158B_L1_API_Init    (L1_Si2158B_Context *api, int add);
unsigned char Si2158B_L1_API_Patch   (L1_Si2158B_Context *api, int iNbBytes, unsigned char *pucDataBuffer);
unsigned char Si2158B_L1_CheckStatus (L1_Si2158B_Context *api);
char*         Si2158B_L1_API_ERROR_TEXT(int error_code);
char*         Si2158B_L1_API_TAG_TEXT  (void);

#define Si2158B_TAG Si2158B_L1_API_TAG_TEXT


#ifdef    Si2158B_GET_PROPERTY_STRING
void Si2158B_L1_FillPropertyStringText(L1_Si2158B_Context *api, unsigned int prop_code, const char *separator, char *msg);
#endif /* Si2158B_GET_PROPERTY_STRING */

#endif /* _Si2158B_L1_API_H_ */








