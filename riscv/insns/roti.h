reg_t x = RS1;
reg_t n = insn.i_imm();
reg_t out = (x >> n) | (x << (32 - n));
WRITE_RD(out);