/*
 * Copyright (c) 2014 Jason L. Wright <jason@thought.net>
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
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

	{ 0,	0,	sys_restart_syscall,	"restart_syscall" }, /* 0 */
	{ 1,    TP,	cgcos_terminate,	"_terminate",	1 }, /* 1 */
	{ 4,	TD,	cgcos_transmit,		"transmit",	2 }, /* 2 */
	{ 4,	TD,	cgcos_receive,		"receive",	3 }, /* 3 */
	{ 5,	TD,	cgcos_fdwait,		"fdwait",	4 }, /* 4 */
	{ 3,	TD,	cgcos_allocate,		"allocate",	5 }, /* 5 */
	{ 2,	TD,	cgcos_deallocate,	"deallocate",	6 }, /* 6 */
	{ 3,	TD,	cgcos_random,		"random",	7 }, /* 7 */