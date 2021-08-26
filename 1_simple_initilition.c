#include<stdio.h>
//#include<gstreamer-1.0/gst/gst.h>	
#include<gst/gst.h>

int main(int argc, char *argv[])
{
	const guchar *nano_str;
	guint major,minor,micro,nano;

	gst_init(&argc,&argv);

	gst_version(&major,&minor,&micro,&nano);

	if(nano == 1)
		nano_str = "(CVS)";
	else if(nano == 2)
		nano_str = "(prerelease)";
	else
		nano_str = "";

	printf("This programmer is linked against Gstreamner %d.%d.%d.%s\n",major,minor,micro,nano_str);
	
	return 0;
}
