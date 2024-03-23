#pragma once
#include <xxhash.h>

enum class GameVersion : XXH64_hash_t {
	UNKNOWN     = 0,
	JP_NOV_2020 = 0x67C0F3042746D488,
	JP_APR_2023 = 0x49F643ADB6B18705,
	CN_JUN_2023 = 0xA7EE39F2CC2C57C8,
};