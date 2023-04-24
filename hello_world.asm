section .data
    str db "Hello, world!", 0xA
    section .text
    global _start

    _start:
        mov eax, 4
        mov ebx, 1
        mov ecx, str
        mov edx, 13
        int 0x80

        mov eax, 1
        mov ebx, 0
        int 0x80