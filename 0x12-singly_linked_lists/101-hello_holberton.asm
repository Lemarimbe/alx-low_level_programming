section .data
    format db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    mov edi, format    ; load the address of the format string
    xor eax, eax       ; clear eax register (format string is not needed)
    call printf        ; call the printf function

    xor eax, eax       ; exit with code 0
    ret

