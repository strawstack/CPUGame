# CPU

# Dev notes

# Process Controller

Every so often a process is generated. A process steps forward once each time step until it finishes the entrance lane and gets to a CPU. At which point control is handed over to the CPU.

# Process

# CPU

A CPU knows its own location, and it knows when it contains a process. On the leading edge of a time step a CPU will tell its process where to go. The CPU will have a ref to the destination object. The CPU hands control of its process to the destination object. The process is told where specifically to go by the destination object. At the start, every CPU is *live* however if a CPU is not yet purchased then when a CPU hands over control to its sibling control is passed straight through. The effect is that after visiting the first CPU a process is routed directly to the exit lane

# Queues

When you buy a queue it automatically gets connected to the next queue and to the ALU
