#include "ogl_helper.h"
#include "init_ogl.h"
#include "math_tech.h"
#include "kaiser_window.h"
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
	char str[64] = "Kaiser Window Function";

	ogl_init(argc, argv, str);
	ogl_post_process(kaiser_window);

	return 0;
}
