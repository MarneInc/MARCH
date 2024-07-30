#include <stdio.h>
#include "cpu.h"
#include "alu.h"
#include "dmis.h"
#include "iois.h"
#include "fcis.h"
#include "ram.h"
#include "ccu.h"

int main() {
	start_reg();
	start_ram();
	decode();
	while (1) {
		fetch();
		run();
	}
	return 0;
}
