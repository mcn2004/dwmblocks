//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
  {"", "sh $XDG_DATA_HOME/dwmblocks_wrappers/get_connection.sh", 60, 0},

  {"  : ", "python3 $XDG_DATA_HOME/dwmblocks_wrappers/get_volume.py", 5, 0},

  {" : ", "sh $XDG_DATA_HOME/dwmblocks_wrappers/get_cpu.sh", 1, 0},

	{" : ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

  {" : ", "df -h /home | grep /dev | awk '{print $5}'", 480, 0},

  {"    : ", "sh $XDG_DATA_HOME/dwmblocks_wrappers/get_batt.sh", 60, 0},

	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
