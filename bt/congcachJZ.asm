start:
mov 40h,p2
mov a,p2
anl 40h,#0fh
anl a,#0F0h
swap a
add a,40h

subb a, #00h
jz in0
subb a, #01h
jz in1
add a, #01h
subb a, #02h
jz in2
add a, #02h
subb a, #03h
jz in3
add a, #03h
subb a, #04h
jz in4
add a, #04h
subb a, #05h
jz in5
add a, #05h
subb a, #06h
jz in6
add a, #06h
subb a, #07h
jz in7
add a, #07h
subb a, #08h
jz in8
mov p1,#90h
jmp start
in8:
mov p1,#80h
jmp start
in7:
mov p1,#0f8h
jmp start
in6:
mov p1,#82h
jmp start
in5:
mov p1,#92h
jmp start
in4:
mov p1,#99h
jmp start
in3:
mov p1,#0b0h
jmp start
in2:
mov p1,#0a4h
jmp start
in1:
mov p1,#0f9h
jmp start
in0:
mov p1,#0c0h
jmp start