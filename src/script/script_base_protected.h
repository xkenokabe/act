﻿// Copyright(c) 2020 Ken Okabe
// This software is released under the MIT License, see LICENSE.
#ifndef SRC_SCRIPT_SCRIPT_BASE_PROTECTED_H_
#define SRC_SCRIPT_SCRIPT_BASE_PROTECTED_H_

#include "script_base.h"

typedef struct {
  CommandInterfaceStruct impl;
  ActiveObjectEngine engine;
  Command notification_command;
  const char *name;
  int error_code;
} ScriptBaseStruct, *ScriptBase;

#endif  // SRC_SCRIPT_SCRIPT_BASE_PROTECTED_H_
