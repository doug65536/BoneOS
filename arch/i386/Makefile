BUILDROOT ?= ../..

NSRCS = \
	boot/boot.asm \
	io/io.asm \
	cpu/gdt/gdt-asm.asm \
	cpu/interrupts/irq.asm \
	cpu/interrupts/isr.asm \
	cpu/interrupts/interrupts-asm.asm \
	io/io.asm \
	boot/boot.asm

CSRCS = \
	kernel/kernel.c \
	cpu/gdt/gdt.c \
	cpu/interrupts/interrupts.c \
	cpu/interrupts/pic.c \
	cpu/interrupts/idt.c \
	cpu/interrupts/irq.c \
	drv/video/VGA/textmode/putch/putch.c \
	drv/video/VGA/textmode/putch/cls.c \
	misc/asm_util.c \
	drv/pit/pit.c \
	drv/ps2/kbd/kbd.c \
	cpu/interrupts/isr.c \
	drv/driver.c \
	drv/ps2/kbd/scancodes.c \
	drv/ps2/kbd/utils.c 

cpu/interrupts/interrupts-asm.o: NASMFLAGS += -i cpu/interrupts/


LIBNAME := arch

include $(BUILDROOT)/library.mk
