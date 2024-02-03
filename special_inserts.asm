.equ NEW_MOVES_COUNT, 740

@ Constante dans GetMonData
.org 0x040110, 0xFF
.word NEW_MOVES_COUNT

@ Constante quelque part dans pokemon_storage_system_data.c
.org 0x0935C0, 0xFF
.word NEW_MOVES_COUNT

@ Limiteurs qui dictent les textes 'Pokemon a utilisé une capacité de type Type'
.org 0x0D787C, 0xFF
mov r0, #185
lsl r0, r0, #2

@ Même chose qu'en dessus
.org 0x0D816A, 0xFF
mov r6, #185
lsl r6, r6, #2
