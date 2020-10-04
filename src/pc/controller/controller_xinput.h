#ifndef CONTROLLER_XINPUT_H
#define CONTROLLER_XINPUT_H

#if !defined(TARGET_XBOX) && (defined(_WIN32) || defined(_WIN64))

#include "controller_api.h"

extern struct ControllerAPI controller_xinput;

#endif

#endif
