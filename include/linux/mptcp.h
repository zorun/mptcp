/*
 *		MPTCP API implementation
 *
 * Author:	Lavkesh Lahngir, <lavkesh51@gmail.com>
 *
 *		This program is free software; you can redistribute it and/or
 *		modify it under the terms of the GNU General Public License
 *		as published by the Free Software Foundation; either version
 *		2 of the License, or (at your option) any later version.
 */

#ifndef _LINUX_MPTCP_H
#define _LINUX_MPTCP_H

#include <linux/types.h>
#include <linux/tcp.h>
#include <linux/in.h>
#include <linux/in6.h>

/* struct for storing one subflow */
struct mptcp_subflow {
	int family;
	int state;
	__be16 sport;
	__be16 dport;
	union {
		struct in_addr addr4;
		struct in6_addr addr6;
	} saddr;
	union {
		struct in_addr addr4;
		struct in6_addr addr6;
	} daddr;
};

#endif
