
#include <string.h>
#include <gtk/gtk.h>

#include "interface.h"
#include "support.h"

int main (int argc, char *argv[])
{
#ifdef __linux__
	GtkWidget *cfg_dialog;
	GtkWidget *abt_dialog;

	gtk_set_locale ();
	gtk_init (&argc, &argv);

	if (argc != 2) return 0;

	if (!strcmp(argv[1], "configure")) {
		cfg_dialog = create_cfg_dialog ();
		gtk_widget_show (cfg_dialog);
		gtk_main ();
	} else {
		abt_dialog = create_abt_dialog ();
		gtk_widget_show (abt_dialog);
		gtk_main ();
	}
#endif
	return 0;
}

