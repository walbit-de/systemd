/* SPDX-License-Identifier: LGPL-2.1-or-later */
#pragma once

typedef struct VLan VLan;

#include "netdev.h"

struct VLan {
        NetDev meta;

        uint16_t id;
        uint16_t protocol;

        int gvrp;
        int mvrp;
        int loose_binding;
        int reorder_hdr;
};

DEFINE_NETDEV_CAST(VLAN, VLan);
extern const NetDevVTable vlan_vtable;
