main:
    1000:	de 03 fe 05 	add_i sp, sp, -128
    1004:	fe f3 01 88 	store_32 ra, 124(sp)
    1008:	03 00 00 4f 	movehi s0, 3
    100c:	3e e0 01 05 	add_i s1, sp, 120
    1010:	00 54 79 00 	or s0, s0, 7765
    1014:	1e e0 01 88 	store_32 s0, 120(sp)
    1018:	00 00 00 4f 	movehi s0, 0
    101c:	3e 10 00 88 	store_32 s1, 4(sp)
    1020:	00 00 04 00 	or s0, s0, 256
    1024:	1e 00 00 88 	store_32 s0, (sp)
    1028:	05 00 00 f8 	call 20 <printf>
    102c:	00 00 00 0f 	move s0, 0
    1030:	fe f3 01 a8 	load_32 ra, 124(sp)
    1034:	de 03 02 05 	add_i sp, sp, 128
    1038:	1f 00 00 f0 	ret

printf:
    103c:	de 03 ff 05 	add_i sp, sp, -64
    1040:	fe f3 00 88 	store_32 ra, 60(sp)
    1044:	04 00 00 4f 	movehi s0, 4
    1048:	3e 00 01 a8 	load_32 s1, 64(sp)
    104c:	5e 10 01 05 	add_i s2, sp, 68
    1050:	5e e0 00 88 	store_32 s2, 56(sp)
    1054:	00 00 00 00 	nop
    1058:	00 00 00 a8 	load_32 s0, (s0)
    105c:	d5 13 00 f8 	call 20308 <vfprintf>
    1060:	00 00 00 0f 	move s0, 0
    1064:	fe f3 00 a8 	load_32 ra, 60(sp)
    1068:	de 03 01 05 	add_i sp, sp, 64
    106c:	1f 00 00 f0 	ret


