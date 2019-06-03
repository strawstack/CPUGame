# CPU

# TODO

- [ ] interface for a destination
    - check if busy
    - release what its holding
    - accept a new process

# Dev notes

# Time step

A time step means that every process will be told to go to its next destination if possible. Process controller is on its own loop and new processes will arrive if a spot is free when the time comes.

# Process Controller

Every so often a process is generated. A process steps forward once each time step until it finishes the entrance lane and gets to a CPU. At which point control is handed over to the CPU.

Get the time to the next process, and count down to that time. Keep is simple next process arrives as normal and time change takes effect on the next prediction. A process simply fails to arrive if there is one blocking it.


# CPU

A CPU knows its own location, and it knows when it contains a process. On the leading edge of a time step a CPU will tell its process where to go. The CPU will have a ref to the destination object. The CPU hands control of its process to the destination object. The process is told where specifically to go by the destination object. At the start, every CPU is *live* however if a CPU is not yet purchased then when a CPU hands over control to its sibling control is passed straight through. The effect is that after visiting the first CPU a process is routed directly to the exit lane

# Queues

When you buy a queue it automatically gets connected to the next queue and to the ALU
