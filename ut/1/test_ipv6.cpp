
/*
 * Copyright (c) 2005, Swedish Institute of Computer Science
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of the Institute nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE INSTITUTE AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE INSTITUTE OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * This file is part of the Contiki operating system.
 *
 */

/**
 * \file
 *      Ipv6 test using cpputest framework  
 * \author
 * 	Wu
 */


/**
 * \defgroup UT ContikiTest
 * @{
 */

/**
 * \defgroup IPV6 IPV6 TEST
 * \ingroup UT
 * The IPV6 TEST define a set of functions that test ipv6 mechanism in contiki
 * system.
 *
 * @{
 */

#include <stdio.h>
#include "CppUTest/CommandLineTestRunner.h"


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#include "broadcast-example.c"

#include "simple-udp.c"
#include "uip6.c"
#include "uip-ds6.c"
#include "uip-ds6-route.c"
#include "uip-ds6-nbr.c"
#include "uip-packetqueue.c"
#include "uip-icmp6.c"
#include "uip-udp-packet.c"
#include "tcpip.c"
#include "nbr-table.c"
#include "packetbuf.c"
#include "linkaddr.c"
#include "rpl.c"
#include "rpl-dag.c"
#include "rpl-ext-header.c"
#include "rpl-icmp6.c"
#include "rpl-timers.c"
#include "rpl-mrhof.c"
#include "uip-nd6.c"
#include "uip-debug.c"

#include "stimer.c"
#include "etimer.c"
#include "ctimer.c"
#include "timer.c"
#include "clock.c"
#include "process.c"

#include "list.c"
#include "memb.c"
#include "random.c"

#ifdef __cplusplus
}
#endif /* __cplusplus */



/**
 * This is the test group function for framework
 */
TEST_GROUP(FirstTestGroup)
{
};

/**
 * This is a simple test function for framework
 */
TEST(FirstTestGroup, FirstTest)
{
    STRCMP_EQUAL("hello", "hello");
}



/**
 * This is the main function 
 */
int main(int ac, char** av)
{
    return CommandLineTestRunner::RunAllTests(ac, av);
}

/** @} */
/** @} */



