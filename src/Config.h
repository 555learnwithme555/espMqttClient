/*
Copyright (c) 2022 Bert Melis. All rights reserved.

This work is licensed under the terms of the MIT license.  
For a copy, see <https://opensource.org/licenses/MIT> or
the LICENSE file.
*/

#pragma once

#ifndef EMC_TX_TIMEOUT
#define EMC_TX_TIMEOUT 5000
#endif

#ifndef EMC_RX_BUFFER_SIZE
#define EMC_RX_BUFFER_SIZE 1440
#endif

#ifndef EMC_MAX_TOPIC_LENGTH
#define EMC_MAX_TOPIC_LENGTH 128
#endif

#ifndef EMC_PAYLOAD_BUFFER_SIZE
#define EMC_PAYLOAD_BUFFER_SIZE 32
#endif

#ifndef EMC_MIN_FREE_MEMORY
#define EMC_MIN_FREE_MEMORY 4096
#endif

#ifndef EMC_ESP8266_MULTITHREADING
#define EMC_ESP8266_MULTITHREADING 0
#endif

#ifndef EMC_CLIENTID_LENGTH
// esp8266-abc123 and esp32-abcdef123456
#define EMC_CLIENTID_LENGTH 18 + 1
#endif

#ifndef EMC_TASK_STACK_SIZE
#define EMC_TASK_STACK_SIZE 10000
#endif
