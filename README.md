# CPU

Play [live demo](https://strawstack.github.io/CPU_Game/web/index.html)

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
- [x] On halt, check if any colored cells are fulfilled, and add money
- [x] On halt, if cells partially filled, remove money
- [x] On halt, colored blocks of cells fail, remain untouched, or succeed
- [x] On halt, green flash for success, and money
- [x] On halt, red flash for incomplete, and lose money
- [x] Add colors to JobController
- [x] Start button in bottom left
- [x] Changes to End on press
- [x] Click event places initial colored squares
- [x] Halt button in bottom right
- [x] Free play prior to start button press
- [x] Halt button only active when program running
- [x] Halt fee is a percentage of your current money. Free if negative
- [x] Locked cells
- [x] Manual write to locked cell should fail (no write to colored cell)
- [x] Prevent edit of cells during execution
- [x] Remove selected cell highlight during execution
- [x] Pause menu "p" to show instructions
- [x] Show player score on End
- [x] FIX: disable pressing end when process is executing
- [x] FIX: disable controls when in the ending state
- [x] Spark effect when colored cells appear
- [x] White flash on cell edit
- [x] cash_pos
- [x] cash_neg
- [x] Halt
- [x] Win
- [x] Tock
- [x] Random program button in free play
- [x] FIX: Bug on instruction wrap-around from last index
- [x] FIX: index out of range on load, store, etc...
- [x] left/right arrow sound
- [x] consider light background soundtrack
- [x] length-four color block that gains in value

- [ ] Put enter key to run program in help menu
