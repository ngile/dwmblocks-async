#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "|"

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 45

// Control whether blocks are clickable.
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "xkbgroup get symbol", 3, 17) \
    X("", "sb-memory", 10, 4) \
    X("", "sb-disk", 1800, 5) \
    X("", "sb-volume", 0, 8)  \
    X("", "sb-battery", 5, 9) \
    X("", "sb-network", 5, 7) \
    X("", "sb-weather", 3600, 11) \
    X("", "date '+%b %d (%a) %I:%M%p'", 1, 10) \

#endif  // CONFIG_H
