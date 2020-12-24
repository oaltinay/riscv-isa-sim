sreg_t r = sext32(RS1);
sreg_t NEWHOPE_Q = sext32(RS2);
sreg_t m = r - NEWHOPE_Q;
sreg_t c = m;
c >>=15;

WRITE_RD(sext_xlen(m ^ ((r ^ m) & c)));