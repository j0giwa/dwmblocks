//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"‌", "", 0, 0}, // USELESS - just decoration 
	{"\x01", "wm-mpd", 5, 0},
	{"\x02", "wm-memorystatus", 10, 0},
	{"\x03", "wm-networkstatus", 15, 0},
	{"\x04", "wm-battery", 60, 0},
	{"\x05", "wm-clock", 60, 0},
	{"‌", "", 0, 0}, // USELESS - just decoration 
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
