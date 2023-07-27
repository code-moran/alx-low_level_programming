section .data
    hello_msg db 'Hello, Holberton', 0

section .text
    global main

extern printf   ; Declare the external printf function

main:
    ; Set up the stack frame
    push rbp
    mov rbp, rsp

    ; Call the printf function
    mov rdi, hello_msg ; Set the format string pointer
    call printf       ; Call the printf function

    ; Clean up the stack frame and exit the program
    mov rsp, rbp
    pop rbp
    ret

