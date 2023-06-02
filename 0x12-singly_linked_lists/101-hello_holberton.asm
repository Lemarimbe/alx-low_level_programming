section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    sub rsp, 8        ; align stack pointer

    mov rdi, hello    ; load the address of the hello string
    mov rax, 0        ; clear rax register (format string is not needed)
    call printf       ; call the printf function

    add rsp, 8        ; restore stack pointer
    mov eax, 0        ; exit with code 0
    ret

