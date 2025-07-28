/*
ESP32-S3 memory map
*/

MEMORY
{
  /* IRAM */
  iram0_0_seg (RX) : org = 0x4037C000, len = 0x4000
  iram0_2_seg (RX) : org = 0x40380000, len = 0x80000
  /* DRAM */
  dram0_0_seg (RW) : org = 0x3FC88000, len = 0x88000
  /* Flash */
  flash_text (RX) : org = 0x42000020, len = 0x100000
  flash_rodata (R) : org = 0x3C000020, len = 0x100000
}

ENTRY(main)

SECTIONS
{
  .iram0.text :
  {
    . = ALIGN(4);
    _stext = .;
    *(.entry)
    *(.iram1 .iram1.*)
    _etext = .;
  } > iram0_2_seg

  .dram0.data :
  {
    . = ALIGN(4);
    _sdata = .;
    *(.data .data.*)
    _edata = .;
  } > dram0_0_seg

  .dram0.bss :
  {
    . = ALIGN(4);
    _sbss = .;
    *(.bss .bss.*)
    _ebss = .;
  } > dram0_0_seg

  .flash.text :
  {
    . = ALIGN(4);
    *(.text .text.*)
  } > flash_text

  .flash.rodata :
  {
    . = ALIGN(4);
    *(.rodata .rodata.*)
  } > flash_rodata

  .stack (NOLOAD) :
  {
    . = ALIGN(16);
    _stack_end = .;
    . = . + _stack_size;
    _stack_start = .;
  } > dram0_0_seg

  _stack_size = DEFINED(_stack_size) ? _stack_size : 20k;
}
