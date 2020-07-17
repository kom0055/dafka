/*  =========================================================================
    dafka_private_selftest.c - run private classes selftests

    Runs all private classes selftests.

    -------------------------------------------------------------------------
    Copyright (c) the Contributors as noted in the AUTHORS file. This
    file is part of DAFKA, a decentralized distributed streaming
    platform: http://zeromq.org.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#include "dafka_classes.h"


//  -------------------------------------------------------------------------
//  Run all private classes tests.
//

void
dafka_private_selftest (bool verbose, const char *subtest)
{
// Tests for stable private classes:
    if (streq (subtest, "$ALL") || streq (subtest, "dafka_unacked_list_test"))
        dafka_unacked_list_test (verbose);
    if (streq (subtest, "$ALL") || streq (subtest, "dafka_util_test"))
        dafka_util_test (verbose);
    if (streq (subtest, "$ALL") || streq (subtest, "dafka_test_peer_test"))
        dafka_test_peer_test (verbose);
}
/*
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
*/
