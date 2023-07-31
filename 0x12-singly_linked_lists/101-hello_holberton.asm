section .data
    hello_msg db 'Hello, Holberton', 0
    new_line db 10, 0

section .text
    global main
    extern printf

main:
    ; Calling printf with the hello_msg
    mov rdi, hello_msg
    call printf

    ; Calling printf with the new_line
    mov rdi, new_line
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status 0
    syscall

    ret

