sreg_t r = sext32(RS1);
sreg_t NEWHOPE_Q = sext32(RS2);
r = r - NEWHOPE_Q / 2;
sreg_t m = r >> 15;
WRITE_RD(sext_xlen((r + m) ^ m));