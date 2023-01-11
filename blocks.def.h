//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"\x01", "echo Disp",	0,		0},
	{"\x02", "echo Mem: $(free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g)",	10,		0},
	{"\x03", "$HOME/.scripts/networkstatus.sh",	    30,		0},
	{"\x04", "$HOME/.scripts/battery.sh",			60,		0},
	{"\x05", "date '+%I:%M'",					    60,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
