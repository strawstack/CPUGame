# CPU

# TODO

- [x] Make register retriever
- [x] Make memory retriever
- [x] Memory retriever must take arg of how many values to read
- [x] Write address value to instruction register
- [x] Fire *load a* instruction
- [x] Fire *load b* instruction
- [x] Fire *add* instruction
- [x] ProgramCounter dot
- [x] Money display
- [x] MoneyController
- [x] Memory reads cause a loss of money
- [x] Red flash / green flash
- [x] Static colored cell
- [x] Rework program execution
- [x] Enter press queues halt if pressed while running
- [x] small preview for requested number

- [ ] On halt, check if any colored cells are fulfilled, and add money
    - [] On halt, if cells partially filled, remove money
- [ ] Add colors to ColorController
- [ ] Locked cells
    - [ ] Manual write to locked cell should fail
- [ ] Prevent edit during running program
- [ ] On halt, colored blocks of cells fail, remain untouched, or succeed
    - [ ] On halt, green flash for success, and money
    - [ ] On halt, red flash for incomplete, and lose money
- [ ] Run button
- [ ] Halt button and charge money
