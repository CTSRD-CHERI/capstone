//===- Morello.h - Morello-specific utility functions for capabilities ----===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements various Morello-specific utilities for handling
// capabilities.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_SUPPORT_MORELLO_H
#define LLVM_SUPPORT_MORELLO_H

#include <stdint.h>

namespace llvm {

uint64_t getMorelloRequiredAlignment(uint64_t length);

}
#endif
