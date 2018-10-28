/*
 * Copyright Tobias Waldekranz <tobias@waldekranz.com>
 *
 * SPDX-License-Identifier: GPL-2.0
 */

#ifndef _PLY_PERF_EVENT_H
#define _PLY_PERF_EVENT_H

#define TRACEPATH "/sys/kernel/debug/tracing/"

struct ply_probe;

int perf_event_attach(struct ply_probe *pb, const char *name);

int perf_event_enable (int group_fd);
int perf_event_disable(int group_fd);

#endif	/* _PLY_PERF_EVENT_H */