static const char *colorname[NUMCOLS] = {
  [BG] =     "black",     /* background */
  [INIT] =   "#4f525c",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[INPUT_ALT] = "#227799", /* during input, second color */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* size of square in px */
static const int squaresize = 50;

/* time in seconds to cancel lock with mouse movement */
static const int timetocancel = 10;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;
