//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"\x01", "",	0,		0},
	{"\x02Mem: ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	1,		0},
	{"\x03爵 ", "$HOME/.scripts/networkstatus.sh",					1,		0},
	{"\x04 ", "$HOME/.scripts/battery.sh",					1,		0},
	{"\x05 ", "date '+%I:%M'",					1,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
