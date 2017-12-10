#include <gtk/gtk.h>

int main (int argc, char *argv[]){

	GtkWidget *window, *label, *grid, *b1, *b2,*cb1, *cb2, *cb3, *cb4;
	
	gtk_init (&argc, &argv);
	
	//Se declara la ventana
	window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
	gtk_window_set_default_size (GTK_WINDOW (window),300,200);
	gtk_window_set_title (GTK_WINDOW (window), "My First Box");

	//label = gtk_label_new ("Welcome, Giohanny :) ");
	//gtk_container_add (GTK_CONTAINER (window), label);	
	//gtk_widget_set_halign (label, GTK_ALIGN_START);

	//Formato al grid
	gtk_container_set_border_width (GTK_CONTAINER (window),10);
	grid = gtk_grid_new();

	//Anhadiendo botones
	b1 = gtk_button_new_with_label ("Quit");
	b2 = gtk_button_new_with_label ("Learn");
	cb1 = gtk_check_button_new_with_label ("Java");
	cb2 = gtk_check_button_new_with_label ("C");
	cb3 = gtk_check_button_new_with_label ("Python");
	cb4 = gtk_check_button_new_with_label ("Javascript");



	//g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);
	g_signal_connect (b1, "clicked", G_CALLBACK (gtk_main_quit), NULL);


	gtk_grid_attach (GTK_GRID (grid), b1, 1, 7, 1, 1);
	gtk_grid_attach (GTK_GRID (grid), b2, 4, 7, 1, 1);
	gtk_grid_attach (GTK_GRID (grid), cb1, 1, 2, 1, 1);
	gtk_grid_attach (GTK_GRID (grid), cb2, 1, 4, 1, 1);
	gtk_grid_attach (GTK_GRID (grid), cb3, 2, 2, 1, 1);
	gtk_grid_attach (GTK_GRID (grid), cb4, 2, 4, 1, 1);



	//Anhadiendo el grid al Window
	gtk_container_add (GTK_CONTAINER (window), grid);
	gtk_widget_show_all (window);	
	gtk_main();
	return 0;

}


