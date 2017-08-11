.include "../asm_macros.inc"
	.globl _start
_start:
start_all_threads
add_i s1, s1, s0
add_i s1, s2, s0
getcr s1, CR_CURRENT_THREAD
bz s1, continue
halt_current_thread

continue:
add_i sp, sp, -128
movehi s0, 3
add_i s1, sp, 120
add_i s1, sp, 120
add_i s1, sp, 120
            halt_current_thread

    
