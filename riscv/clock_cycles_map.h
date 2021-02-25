#pragma once

#include <map>
#include <string>

const std::map <std::string, uint64_t> clock_cycles = {
// M Extension
{"mul",   2},
{"mulh",  2},
{"mulhsu",2},
{"mulhu", 2},
{"div",   4},
{"div",   4},
{"divu",  4},
{"rem",   4},
{"remu",  4},
{"sbox", 11},
{"sboxi",11}
};