#ifndef CCU_H
#define CCU_H

#include <stdlib.h>
#include "cpu.h"
#include "ram.h"
#include "alu.h"
#include "dmis.h"
#include "iois.h"
#include "fcis.h"
#include "code.h"

void decode();
void fetch();
void run();

#endif
