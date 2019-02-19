// -*- c++ -*-

// Copyright (c) 2019, FlightAware LLC.
// All rights reserved.
// Licensed under the 2-clause BSD license; see the LICENSE file

#ifndef UAT_PROTOCOL_H
#define UAT_PROTOCOL_H

namespace uat {
    enum class MessageType {
        DOWNLINK_SHORT,
        DOWNLINK_LONG,
        UPLINK,
        INVALID
    };

    const unsigned SYNC_BITS = 36;
    const std::uint64_t DOWNLINK_SYNC_WORD = 0xEACDDA4E2UL;
    const std::uint64_t UPLINK_SYNC_WORD = 0x153225B1DUL;

    const unsigned DOWNLINK_SHORT_DATA_BITS = 144;
    const unsigned DOWNLINK_SHORT_DATA_BYTES = DOWNLINK_SHORT_DATA_BITS / 8;
    const unsigned DOWNLINK_SHORT_BITS = DOWNLINK_SHORT_DATA_BITS + 96;
    const unsigned DOWNLINK_SHORT_BYTES = DOWNLINK_SHORT_BITS / 8;

    const unsigned DOWNLINK_LONG_DATA_BITS = 272;
    const unsigned DOWNLINK_LONG_DATA_BYTES = DOWNLINK_LONG_DATA_BITS / 8;
    const unsigned DOWNLINK_LONG_BITS = 272 + 112;
    const unsigned DOWNLINK_LONG_BYTES = DOWNLINK_LONG_BITS / 8;    

    const unsigned UPLINK_BLOCK_DATA_BITS = 576;
    const unsigned UPLINK_BLOCK_DATA_BYTES = UPLINK_BLOCK_DATA_BITS / 8;
    const unsigned UPLINK_BLOCK_BITS = UPLINK_BLOCK_DATA_BITS + 160;
    const unsigned UPLINK_BLOCK_BYTES = UPLINK_BLOCK_BITS / 8;

    const unsigned UPLINK_BLOCKS_PER_FRAME = 6;
    const unsigned UPLINK_DATA_BITS = UPLINK_BLOCK_DATA_BITS * UPLINK_BLOCKS_PER_FRAME;
    const unsigned UPLINK_DATA_BYTES = UPLINK_DATA_BITS / 8;
    const unsigned UPLINK_BITS = UPLINK_BLOCK_BITS * UPLINK_BLOCKS_PER_FRAME;
    const unsigned UPLINK_BYTES = UPLINK_BITS / 8;

    const unsigned UPLINK_POLY = 0x187;
    const unsigned DOWNLINK_POLY = 0x187;
};

#endif
