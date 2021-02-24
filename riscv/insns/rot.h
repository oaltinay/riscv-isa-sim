reg_t x = RS1;
reg_t n = RS2;
reg_t out = (x >> n) | (x << (32 - n));
WRITE_RD(out);