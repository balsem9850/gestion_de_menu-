/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_acceuilw (void)
{
  GtkWidget *acceuilw;
  GtkWidget *fixed1;
  GtkWidget *button1;
  GtkWidget *alignment1;
  GtkWidget *hbox1;
  GtkWidget *image1;
  GtkWidget *label1;
  GtkWidget *button2;
  GtkWidget *alignment2;
  GtkWidget *hbox2;
  GtkWidget *image2;
  GtkWidget *label2;

  acceuilw = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (acceuilw, 1043, 807);
  gtk_window_set_title (GTK_WINDOW (acceuilw), _("acceuil"));
  gtk_window_set_position (GTK_WINDOW (acceuilw), GTK_WIN_POS_CENTER);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (acceuilw), fixed1);

  button1 = gtk_button_new ();
  gtk_widget_show (button1);
  gtk_fixed_put (GTK_FIXED (fixed1), button1, 936, 8);
  gtk_widget_set_size_request (button1, 104, 37);

  alignment1 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (button1), alignment1);

  hbox1 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox1);
  gtk_container_add (GTK_CONTAINER (alignment1), hbox1);

  image1 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image1);
  gtk_box_pack_start (GTK_BOX (hbox1), image1, FALSE, FALSE, 0);

  label1 = gtk_label_new_with_mnemonic (_("Quitter"));
  gtk_widget_show (label1);
  gtk_box_pack_start (GTK_BOX (hbox1), label1, FALSE, FALSE, 0);

  button2 = gtk_button_new ();
  gtk_widget_show (button2);
  gtk_fixed_put (GTK_FIXED (fixed1), button2, 424, 344);
  gtk_widget_set_size_request (button2, 208, 62);

  alignment2 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment2);
  gtk_container_add (GTK_CONTAINER (button2), alignment2);

  hbox2 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox2);
  gtk_container_add (GTK_CONTAINER (alignment2), hbox2);

  image2 = gtk_image_new_from_stock ("gtk-media-play", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image2);
  gtk_box_pack_start (GTK_BOX (hbox2), image2, FALSE, FALSE, 0);

  label2 = gtk_label_new_with_mnemonic (_("<span foreground=\"black\" ><b>Gestion menu </b></span>"));
  gtk_widget_show (label2);
  gtk_box_pack_start (GTK_BOX (hbox2), label2, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label2), TRUE);

  g_signal_connect ((gpointer) button1, "clicked",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) button2, "clicked",
                    G_CALLBACK (on_AcceuilGestionw_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (acceuilw, acceuilw, "acceuilw");
  GLADE_HOOKUP_OBJECT (acceuilw, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (acceuilw, button1, "button1");
  GLADE_HOOKUP_OBJECT (acceuilw, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (acceuilw, hbox1, "hbox1");
  GLADE_HOOKUP_OBJECT (acceuilw, image1, "image1");
  GLADE_HOOKUP_OBJECT (acceuilw, label1, "label1");
  GLADE_HOOKUP_OBJECT (acceuilw, button2, "button2");
  GLADE_HOOKUP_OBJECT (acceuilw, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (acceuilw, hbox2, "hbox2");
  GLADE_HOOKUP_OBJECT (acceuilw, image2, "image2");
  GLADE_HOOKUP_OBJECT (acceuilw, label2, "label2");

  return acceuilw;
}

GtkWidget*
create_gestionw (void)
{
  GtkWidget *gestionw;
  GtkWidget *fixed2;
  GtkWidget *button7w;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label32;
  GtkWidget *button8;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label33;
  GtkWidget *notebook1w;
  GtkWidget *fixed3;
  GtkWidget *entry3w;
  GtkWidget *entry5w;
  GtkWidget *entrymenu;
  GtkWidget *entrydessert;
  GtkObject *spinbuttonjour_adj;
  GtkWidget *spinbuttonjour;
  GtkObject *spinbuttonmois_adj;
  GtkWidget *spinbuttonmois;
  GtkObject *spinbuttonannee_adj;
  GtkWidget *spinbuttonannee;
  GtkWidget *entry2;
  GtkWidget *label68;
  GtkWidget *label35w;
  GtkWidget *label34w;
  GtkWidget *label13w;
  GtkWidget *label58;
  GtkWidget *label7w;
  GtkWidget *label10w;
  GtkWidget *labellabel;
  GtkWidget *labelreclamation;
  GtkWidget *label69;
  GtkWidget *label11w;
  GtkWidget *label62;
  GtkWidget *label67;
  GtkWidget *label66;
  GtkWidget *label6w;
  GtkWidget *combobox1w;
  GtkWidget *label65;
  GtkWidget *label3w;
  GtkWidget *label12w;
  GtkWidget *button3;
  GtkWidget *alignment3;
  GtkWidget *hbox3;
  GtkWidget *image3;
  GtkWidget *label14;
  GtkWidget *label15w;
  GtkWidget *fixed4;
  GtkWidget *entry8w;
  GtkWidget *entryrec;
  GtkWidget *entrydes;
  GtkWidget *label71;
  GtkWidget *label72;
  GtkWidget *label73;
  GtkObject *spinbuttonjour1_adj;
  GtkWidget *spinbuttonjour1;
  GtkObject *spinbuttonmois1_adj;
  GtkWidget *spinbuttonmois1;
  GtkObject *spinbuttonannee1_adj;
  GtkWidget *spinbuttonannee1;
  GtkWidget *label19w;
  GtkWidget *label70;
  GtkWidget *label16w;
  GtkWidget *labelrec;
  GtkWidget *label60;
  GtkWidget *combobox3w;
  GtkWidget *label36w;
  GtkWidget *label20w;
  GtkWidget *button4w;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label21;
  GtkWidget *label37w;
  GtkWidget *label22w;
  GtkWidget *fixed6;
  GtkWidget *entry10w;
  GtkWidget *label26w;
  GtkWidget *bmodifier;
  GtkWidget *alignment14;
  GtkWidget *hbox14;
  GtkWidget *image14;
  GtkWidget *label49;
  GtkWidget *button6;
  GtkWidget *alignment6;
  GtkWidget *hbox6;
  GtkWidget *image6;
  GtkWidget *label30;
  GtkWidget *bsupprimer;
  GtkWidget *alignment15;
  GtkWidget *hbox15;
  GtkWidget *image15;
  GtkWidget *label50;
  GtkWidget *bafficher12;
  GtkWidget *alignment16;
  GtkWidget *hbox16;
  GtkWidget *image16;
  GtkWidget *label51;
  GtkWidget *label28w;
  GtkWidget *label29w;
  GtkWidget *label27;
  GtkWidget *scrolledwindow2;
  GtkWidget *treeview2w;
  GtkWidget *label31w;

  gestionw = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_widget_set_size_request (gestionw, 1043, 814);
  GTK_WIDGET_SET_FLAGS (gestionw, GTK_CAN_FOCUS);
  gtk_window_set_title (GTK_WINDOW (gestionw), _("gestion Reclamation"));
  gtk_window_set_position (GTK_WINDOW (gestionw), GTK_WIN_POS_CENTER);

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (gestionw), fixed2);

  button7w = gtk_button_new ();
  gtk_widget_show (button7w);
  gtk_fixed_put (GTK_FIXED (fixed2), button7w, 946, 8);
  gtk_widget_set_size_request (button7w, 80, 48);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (button7w), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-quit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label32 = gtk_label_new_with_mnemonic (_("<span foreground=\"red\"><b>Quitter</b></span>"));
  gtk_widget_show (label32);
  gtk_box_pack_start (GTK_BOX (hbox7), label32, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label32), TRUE);

  button8 = gtk_button_new ();
  gtk_widget_show (button8);
  gtk_fixed_put (GTK_FIXED (fixed2), button8, 861, 8);
  gtk_widget_set_size_request (button8, 80, 48);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (button8), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-go-back", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label33 = gtk_label_new_with_mnemonic (_("<span foreground=\"purple\"><b>Retour</b></span>"));
  gtk_widget_show (label33);
  gtk_box_pack_start (GTK_BOX (hbox8), label33, FALSE, FALSE, 0);
  gtk_label_set_use_markup (GTK_LABEL (label33), TRUE);

  notebook1w = gtk_notebook_new ();
  gtk_widget_show (notebook1w);
  gtk_fixed_put (GTK_FIXED (fixed2), notebook1w, 24, 72);
  gtk_widget_set_size_request (notebook1w, 995, 668);

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (notebook1w), fixed3);

  entry3w = gtk_entry_new ();
  gtk_widget_show (entry3w);
  gtk_fixed_put (GTK_FIXED (fixed3), entry3w, 220, 200);
  gtk_widget_set_size_request (entry3w, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry3w), 8226);

  entry5w = gtk_entry_new ();
  gtk_widget_show (entry5w);
  gtk_fixed_put (GTK_FIXED (fixed3), entry5w, 220, 104);
  gtk_widget_set_size_request (entry5w, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5w), 8226);

  entrymenu = gtk_entry_new ();
  gtk_widget_show (entrymenu);
  gtk_fixed_put (GTK_FIXED (fixed3), entrymenu, 220, 250);
  gtk_widget_set_size_request (entrymenu, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrymenu), 8226);

  entrydessert = gtk_entry_new ();
  gtk_widget_show (entrydessert);
  gtk_fixed_put (GTK_FIXED (fixed3), entrydessert, 220, 300);
  gtk_widget_set_size_request (entrydessert, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrydessert), 8226);

  spinbuttonjour_adj = gtk_adjustment_new (1, 1, 31, 1, 1, 0);
  spinbuttonjour = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonjour_adj), 1, 0);
  gtk_widget_show (spinbuttonjour);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbuttonjour, 220, 400);
  gtk_widget_set_size_request (spinbuttonjour, 42, 30);

  spinbuttonmois_adj = gtk_adjustment_new (1, 1, 12, 1, 1, 0);
  spinbuttonmois = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonmois_adj), 1, 0);
  gtk_widget_show (spinbuttonmois);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbuttonmois, 304, 400);
  gtk_widget_set_size_request (spinbuttonmois, 42, 30);

  spinbuttonannee_adj = gtk_adjustment_new (2021, 2021, 2100, 1, 1, 0);
  spinbuttonannee = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonannee_adj), 1, 0);
  gtk_widget_show (spinbuttonannee);
  gtk_fixed_put (GTK_FIXED (fixed3), spinbuttonannee, 398, 400);
  gtk_widget_set_size_request (spinbuttonannee, 59, 27);

  entry2 = gtk_entry_new ();
  gtk_widget_show (entry2);
  gtk_fixed_put (GTK_FIXED (fixed3), entry2, 550, 250);
  gtk_widget_set_size_request (entry2, 432, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry2), 8226);

  label68 = gtk_label_new (_("<span foreground=\"green\" ><b>Saisir  dessert!</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label68, 372, 300);
  gtk_widget_set_size_request (label68, 112, 30);
  gtk_label_set_use_markup (GTK_LABEL (label68), TRUE);

  label35w = gtk_label_new (_("<span foreground=\"green\" ><b> menu ajout\303\251e avec succes !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label35w, 664, 396);
  gtk_widget_set_size_request (label35w, 200, 30);
  gtk_label_set_use_markup (GTK_LABEL (label35w), TRUE);

  label34w = gtk_label_new (_("<span foreground=\"black\" ><b>  menu existant !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label34w, 520, 440);
  gtk_widget_set_size_request (label34w, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (label34w), TRUE);

  label13w = gtk_label_new (_("<span foreground=\"green\" ><b>Saisir  jour!</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label13w, 379, 98);
  gtk_widget_set_size_request (label13w, 112, 38);
  gtk_label_set_use_markup (GTK_LABEL (label13w), TRUE);
  gtk_label_set_line_wrap (GTK_LABEL (label13w), TRUE);

  label58 = gtk_label_new (_("Dessert:"));
  gtk_widget_show (label58);
  gtk_fixed_put (GTK_FIXED (fixed3), label58, 100, 300);
  gtk_widget_set_size_request (label58, 120, 30);
  gtk_label_set_line_wrap (GTK_LABEL (label58), TRUE);

  label7w = gtk_label_new (_("<span foreground=\"green\" ><b>Saisir  temps!</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label7w, 372, 150);
  gtk_widget_set_size_request (label7w, 112, 30);
  gtk_label_set_use_markup (GTK_LABEL (label7w), TRUE);

  label10w = gtk_label_new (_("<span foreground=\"green\" ><b>Saisir entr\303\251e!</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), label10w, 372, 200);
  gtk_widget_set_size_request (label10w, 112, 38);
  gtk_label_set_use_markup (GTK_LABEL (label10w), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label10w), 0.47, 0.5);

  labellabel = gtk_label_new (_("<span foreground=\"green\" ><b> Saisir menu\n principale !!</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed3), labellabel, 372, 250);
  gtk_widget_set_size_request (labellabel, 96, 40);
  gtk_label_set_use_markup (GTK_LABEL (labellabel), TRUE);

  labelreclamation = gtk_label_new (_("Menu principale:"));
  gtk_widget_show (labelreclamation);
  gtk_fixed_put (GTK_FIXED (fixed3), labelreclamation, 100, 250);
  gtk_widget_set_size_request (labelreclamation, 120, 30);
  gtk_label_set_line_wrap (GTK_LABEL (labelreclamation), TRUE);

  label69 = gtk_label_new (_("<span foreground=\"black\" ><b>MEILLEUR MENU:</b></span>"));
  gtk_widget_show (label69);
  gtk_fixed_put (GTK_FIXED (fixed3), label69, 552, 216);
  gtk_widget_set_size_request (label69, 128, 35);
  gtk_label_set_use_markup (GTK_LABEL (label69), TRUE);
  gtk_label_set_line_wrap (GTK_LABEL (label69), TRUE);

  label11w = gtk_label_new (_("<span foreground=\"red\" ><b>Ajouter  menu :</b></span>"));
  gtk_widget_show (label11w);
  gtk_fixed_put (GTK_FIXED (fixed3), label11w, 100, 44);
  gtk_widget_set_size_request (label11w, 150, 30);
  gtk_label_set_use_markup (GTK_LABEL (label11w), TRUE);
  gtk_label_set_line_wrap (GTK_LABEL (label11w), TRUE);

  label62 = gtk_label_new (_("jour"));
  gtk_widget_show (label62);
  gtk_fixed_put (GTK_FIXED (fixed3), label62, 187, 400);
  gtk_widget_set_size_request (label62, 35, 30);

  label67 = gtk_label_new (_("mois"));
  gtk_widget_show (label67);
  gtk_fixed_put (GTK_FIXED (fixed3), label67, 269, 400);
  gtk_widget_set_size_request (label67, 35, 30);

  label66 = gtk_label_new (_("ann\303\251e"));
  gtk_widget_show (label66);
  gtk_fixed_put (GTK_FIXED (fixed3), label66, 353, 400);
  gtk_widget_set_size_request (label66, 43, 30);

  label6w = gtk_label_new (_("Temps :"));
  gtk_widget_show (label6w);
  gtk_fixed_put (GTK_FIXED (fixed3), label6w, 100, 150);
  gtk_widget_set_size_request (label6w, 120, 30);
  gtk_label_set_use_markup (GTK_LABEL (label6w), TRUE);
  gtk_label_set_line_wrap (GTK_LABEL (label6w), TRUE);

  combobox1w = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1w);
  gtk_fixed_put (GTK_FIXED (fixed3), combobox1w, 220, 150);
  gtk_widget_set_size_request (combobox1w, 150, 30);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1w), _("petit_dejeuner"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1w), _("repas_midi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1w), _("dinner"));

  label65 = gtk_label_new (_("Date:"));
  gtk_widget_show (label65);
  gtk_fixed_put (GTK_FIXED (fixed3), label65, 100, 400);
  gtk_widget_set_size_request (label65, 50, 30);

  label3w = gtk_label_new (_("Entr\303\251e:"));
  gtk_widget_show (label3w);
  gtk_fixed_put (GTK_FIXED (fixed3), label3w, 100, 200);
  gtk_widget_set_size_request (label3w, 120, 30);
  gtk_label_set_line_wrap (GTK_LABEL (label3w), TRUE);

  label12w = gtk_label_new (_("Jour: "));
  gtk_widget_show (label12w);
  gtk_fixed_put (GTK_FIXED (fixed3), label12w, 100, 104);
  gtk_widget_set_size_request (label12w, 120, 30);
  gtk_label_set_line_wrap (GTK_LABEL (label12w), TRUE);

  button3 = gtk_button_new ();
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed3), button3, 550, 384);
  gtk_widget_set_size_request (button3, 100, 50);

  alignment3 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment3);
  gtk_container_add (GTK_CONTAINER (button3), alignment3);

  hbox3 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox3);
  gtk_container_add (GTK_CONTAINER (alignment3), hbox3);

  image3 = gtk_image_new_from_stock ("gtk-add", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image3);
  gtk_box_pack_start (GTK_BOX (hbox3), image3, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Ajouter"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox3), label14, FALSE, FALSE, 0);

  label15w = gtk_label_new (_("<span foreground=\"black\"><b>Ajouter</b></span>"));
  gtk_widget_show (label15w);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1w), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1w), 0), label15w);
  gtk_label_set_use_markup (GTK_LABEL (label15w), TRUE);

  fixed4 = gtk_fixed_new ();
  gtk_widget_show (fixed4);
  gtk_container_add (GTK_CONTAINER (notebook1w), fixed4);

  entry8w = gtk_entry_new ();
  gtk_widget_show (entry8w);
  gtk_fixed_put (GTK_FIXED (fixed4), entry8w, 220, 200);
  gtk_widget_set_size_request (entry8w, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8w), 8226);

  entryrec = gtk_entry_new ();
  gtk_widget_show (entryrec);
  gtk_fixed_put (GTK_FIXED (fixed4), entryrec, 220, 250);
  gtk_widget_set_size_request (entryrec, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entryrec), 8226);

  entrydes = gtk_entry_new ();
  gtk_widget_show (entrydes);
  gtk_fixed_put (GTK_FIXED (fixed4), entrydes, 220, 300);
  gtk_widget_set_size_request (entrydes, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entrydes), 8226);

  label71 = gtk_label_new (_("jour"));
  gtk_widget_show (label71);
  gtk_fixed_put (GTK_FIXED (fixed4), label71, 187, 400);
  gtk_widget_set_size_request (label71, 35, 30);

  label72 = gtk_label_new (_("mois"));
  gtk_widget_show (label72);
  gtk_fixed_put (GTK_FIXED (fixed4), label72, 269, 400);
  gtk_widget_set_size_request (label72, 35, 30);

  label73 = gtk_label_new (_("ann\303\251e"));
  gtk_widget_show (label73);
  gtk_fixed_put (GTK_FIXED (fixed4), label73, 353, 400);
  gtk_widget_set_size_request (label73, 43, 30);

  spinbuttonjour1_adj = gtk_adjustment_new (1, 1, 31, 1, 1, 0);
  spinbuttonjour1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonjour1_adj), 1, 0);
  gtk_widget_show (spinbuttonjour1);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbuttonjour1, 220, 400);
  gtk_widget_set_size_request (spinbuttonjour1, 42, 30);

  spinbuttonmois1_adj = gtk_adjustment_new (1, 1, 12, 1, 1, 0);
  spinbuttonmois1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonmois1_adj), 1, 0);
  gtk_widget_show (spinbuttonmois1);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbuttonmois1, 304, 400);
  gtk_widget_set_size_request (spinbuttonmois1, 42, 30);

  spinbuttonannee1_adj = gtk_adjustment_new (2021, 2021, 2100, 1, 1, 0);
  spinbuttonannee1 = gtk_spin_button_new (GTK_ADJUSTMENT (spinbuttonannee1_adj), 1, 0);
  gtk_widget_show (spinbuttonannee1);
  gtk_fixed_put (GTK_FIXED (fixed4), spinbuttonannee1, 398, 400);
  gtk_widget_set_size_request (spinbuttonannee1, 59, 27);

  label19w = gtk_label_new (_("Temps:"));
  gtk_widget_show (label19w);
  gtk_fixed_put (GTK_FIXED (fixed4), label19w, 100, 150);
  gtk_widget_set_size_request (label19w, 120, 30);
  gtk_label_set_line_wrap (GTK_LABEL (label19w), TRUE);

  label70 = gtk_label_new (_("Date:"));
  gtk_widget_show (label70);
  gtk_fixed_put (GTK_FIXED (fixed4), label70, 100, 400);
  gtk_widget_set_size_request (label70, 50, 30);

  label16w = gtk_label_new (_("entree"));
  gtk_widget_show (label16w);
  gtk_fixed_put (GTK_FIXED (fixed4), label16w, 100, 200);
  gtk_widget_set_size_request (label16w, 120, 30);
  gtk_label_set_line_wrap (GTK_LABEL (label16w), TRUE);

  labelrec = gtk_label_new (_("menu principale"));
  gtk_widget_show (labelrec);
  gtk_fixed_put (GTK_FIXED (fixed4), labelrec, 100, 250);
  gtk_widget_set_size_request (labelrec, 150, 30);
  gtk_label_set_line_wrap (GTK_LABEL (labelrec), TRUE);

  label60 = gtk_label_new (_("dessert"));
  gtk_widget_show (label60);
  gtk_fixed_put (GTK_FIXED (fixed4), label60, 100, 300);
  gtk_widget_set_size_request (label60, 150, 30);
  gtk_label_set_line_wrap (GTK_LABEL (label60), TRUE);

  combobox3w = gtk_combo_box_new_text ();
  gtk_widget_show (combobox3w);
  gtk_fixed_put (GTK_FIXED (fixed4), combobox3w, 220, 150);
  gtk_widget_set_size_request (combobox3w, 150, 30);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3w), _("petit_dejeuner"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3w), _("repas_midi"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox3w), _("dinner"));

  label36w = gtk_label_new (_("<span foreground=\"black\" ><b>Modifier menu de jour :</b></span>"));
  gtk_widget_show (label36w);
  gtk_fixed_put (GTK_FIXED (fixed4), label36w, 100, 104);
  gtk_widget_set_size_request (label36w, 182, 30);
  gtk_label_set_use_markup (GTK_LABEL (label36w), TRUE);
  gtk_label_set_line_wrap (GTK_LABEL (label36w), TRUE);

  label20w = gtk_label_new ("");
  gtk_widget_show (label20w);
  gtk_fixed_put (GTK_FIXED (fixed4), label20w, 268, 104);
  gtk_widget_set_size_request (label20w, 136, 30);

  button4w = gtk_button_new ();
  gtk_fixed_put (GTK_FIXED (fixed4), button4w, 550, 384);
  gtk_widget_set_size_request (button4w, 100, 50);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (button4w), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-index", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label21 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label21);
  gtk_box_pack_start (GTK_BOX (hbox4), label21, FALSE, FALSE, 0);

  label37w = gtk_label_new (_("<span foreground=\"green\" ><b>menu Modifi\303\251 avec succes </b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed4), label37w, 656, 393);
  gtk_widget_set_size_request (label37w, 200, 35);
  gtk_label_set_use_markup (GTK_LABEL (label37w), TRUE);
  gtk_label_set_line_wrap (GTK_LABEL (label37w), TRUE);

  label22w = gtk_label_new (_("<span foreground=\"black\"><b>Modifier</b></span>"));
  gtk_widget_show (label22w);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1w), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1w), 1), label22w);
  gtk_label_set_use_markup (GTK_LABEL (label22w), TRUE);

  fixed6 = gtk_fixed_new ();
  gtk_widget_show (fixed6);
  gtk_container_add (GTK_CONTAINER (notebook1w), fixed6);

  entry10w = gtk_entry_new ();
  gtk_widget_show (entry10w);
  gtk_fixed_put (GTK_FIXED (fixed6), entry10w, 688, 160);
  gtk_widget_set_size_request (entry10w, 150, 30);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry10w), 8226);

  label26w = gtk_label_new (_("<span foreground=\"blue\" ><b>Resultat(s) obtenu(s)</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed6), label26w, 784, 200);
  gtk_widget_set_size_request (label26w, 216, 72);
  gtk_label_set_use_markup (GTK_LABEL (label26w), TRUE);

  bmodifier = gtk_button_new ();
  gtk_widget_show (bmodifier);
  gtk_fixed_put (GTK_FIXED (fixed6), bmodifier, 872, 288);
  gtk_widget_set_size_request (bmodifier, 112, 48);

  alignment14 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment14);
  gtk_container_add (GTK_CONTAINER (bmodifier), alignment14);

  hbox14 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox14);
  gtk_container_add (GTK_CONTAINER (alignment14), hbox14);

  image14 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image14);
  gtk_box_pack_start (GTK_BOX (hbox14), image14, FALSE, FALSE, 0);

  label49 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label49);
  gtk_box_pack_start (GTK_BOX (hbox14), label49, FALSE, FALSE, 0);

  button6 = gtk_button_new ();
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed6), button6, 872, 152);
  gtk_widget_set_size_request (button6, 112, 48);

  alignment6 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment6);
  gtk_container_add (GTK_CONTAINER (button6), alignment6);

  hbox6 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox6);
  gtk_container_add (GTK_CONTAINER (alignment6), hbox6);

  image6 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image6);
  gtk_box_pack_start (GTK_BOX (hbox6), image6, FALSE, FALSE, 0);

  label30 = gtk_label_new_with_mnemonic (_("Chercher"));
  gtk_widget_show (label30);
  gtk_box_pack_start (GTK_BOX (hbox6), label30, FALSE, FALSE, 0);

  bsupprimer = gtk_button_new ();
  gtk_widget_show (bsupprimer);
  gtk_fixed_put (GTK_FIXED (fixed6), bsupprimer, 872, 368);
  gtk_widget_set_size_request (bsupprimer, 112, 48);

  alignment15 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment15);
  gtk_container_add (GTK_CONTAINER (bsupprimer), alignment15);

  hbox15 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox15);
  gtk_container_add (GTK_CONTAINER (alignment15), hbox15);

  image15 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image15);
  gtk_box_pack_start (GTK_BOX (hbox15), image15, FALSE, FALSE, 0);

  label50 = gtk_label_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (label50);
  gtk_box_pack_start (GTK_BOX (hbox15), label50, FALSE, FALSE, 0);

  bafficher12 = gtk_button_new ();
  gtk_widget_show (bafficher12);
  gtk_fixed_put (GTK_FIXED (fixed6), bafficher12, 872, 448);
  gtk_widget_set_size_request (bafficher12, 112, 48);

  alignment16 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment16);
  gtk_container_add (GTK_CONTAINER (bafficher12), alignment16);

  hbox16 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox16);
  gtk_container_add (GTK_CONTAINER (alignment16), hbox16);

  image16 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image16);
  gtk_box_pack_start (GTK_BOX (hbox16), image16, FALSE, FALSE, 0);

  label51 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label51);
  gtk_box_pack_start (GTK_BOX (hbox16), label51, FALSE, FALSE, 0);

  label28w = gtk_label_new (_("<span foreground=\"green\" ><b>Saisir jour !</b></span>"));
  gtk_fixed_put (GTK_FIXED (fixed6), label28w, 704, 64);
  gtk_widget_set_size_request (label28w, 216, 64);
  gtk_label_set_use_markup (GTK_LABEL (label28w), TRUE);

  label29w = gtk_label_new (_("jour"));
  gtk_widget_show (label29w);
  gtk_fixed_put (GTK_FIXED (fixed6), label29w, 575, 160);
  gtk_widget_set_size_request (label29w, 150, 30);

  label27 = gtk_label_new ("");
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed6), label27, 720, 208);
  gtk_widget_set_size_request (label27, 48, 56);

  scrolledwindow2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow2);
  gtk_fixed_put (GTK_FIXED (fixed6), scrolledwindow2, 8, 112);
  gtk_widget_set_size_request (scrolledwindow2, 490, 424);

  treeview2w = gtk_tree_view_new ();
  gtk_widget_show (treeview2w);
  gtk_container_add (GTK_CONTAINER (scrolledwindow2), treeview2w);
  gtk_widget_set_size_request (treeview2w, 592, 456);

  label31w = gtk_label_new (_("<span foreground=\"black\"><b>Rechercher-Afficher-Supprimer</b></span>"));
  gtk_widget_show (label31w);
  gtk_notebook_set_tab_label (GTK_NOTEBOOK (notebook1w), gtk_notebook_get_nth_page (GTK_NOTEBOOK (notebook1w), 2), label31w);
  gtk_label_set_use_markup (GTK_LABEL (label31w), TRUE);
  gtk_misc_set_alignment (GTK_MISC (label31w), 0.54, 0.5);

  g_signal_connect ((gpointer) button7w, "clicked",
                    G_CALLBACK (gtk_main_quit),
                    NULL);
  g_signal_connect ((gpointer) button8, "clicked",
                    G_CALLBACK (on_GestionAcceuilw_clicked),
                    NULL);
  g_signal_connect ((gpointer) button3, "clicked",
                    G_CALLBACK (on_Ajoutermenu_clicked),
                    NULL);
  g_signal_connect ((gpointer) button4w, "clicked",
                    G_CALLBACK (on_Modifiermenu_clicked),
                    NULL);
  g_signal_connect ((gpointer) bmodifier, "clicked",
                    G_CALLBACK (on_bmodifier_clickedw),
                    NULL);
  g_signal_connect ((gpointer) button6, "clicked",
                    G_CALLBACK (on_cherchermenu_clicked),
                    NULL);
  g_signal_connect ((gpointer) bsupprimer, "clicked",
                    G_CALLBACK (on_bsupprimer_clickedw),
                    NULL);
  g_signal_connect ((gpointer) bafficher12, "clicked",
                    G_CALLBACK (on_bafficher12w_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (gestionw, gestionw, "gestionw");
  GLADE_HOOKUP_OBJECT (gestionw, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (gestionw, button7w, "button7w");
  GLADE_HOOKUP_OBJECT (gestionw, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (gestionw, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (gestionw, image7, "image7");
  GLADE_HOOKUP_OBJECT (gestionw, label32, "label32");
  GLADE_HOOKUP_OBJECT (gestionw, button8, "button8");
  GLADE_HOOKUP_OBJECT (gestionw, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (gestionw, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (gestionw, image8, "image8");
  GLADE_HOOKUP_OBJECT (gestionw, label33, "label33");
  GLADE_HOOKUP_OBJECT (gestionw, notebook1w, "notebook1w");
  GLADE_HOOKUP_OBJECT (gestionw, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (gestionw, entry3w, "entry3w");
  GLADE_HOOKUP_OBJECT (gestionw, entry5w, "entry5w");
  GLADE_HOOKUP_OBJECT (gestionw, entrymenu, "entrymenu");
  GLADE_HOOKUP_OBJECT (gestionw, entrydessert, "entrydessert");
  GLADE_HOOKUP_OBJECT (gestionw, spinbuttonjour, "spinbuttonjour");
  GLADE_HOOKUP_OBJECT (gestionw, spinbuttonmois, "spinbuttonmois");
  GLADE_HOOKUP_OBJECT (gestionw, spinbuttonannee, "spinbuttonannee");
  GLADE_HOOKUP_OBJECT (gestionw, entry2, "entry2");
  GLADE_HOOKUP_OBJECT (gestionw, label68, "label68");
  GLADE_HOOKUP_OBJECT (gestionw, label35w, "label35w");
  GLADE_HOOKUP_OBJECT (gestionw, label34w, "label34w");
  GLADE_HOOKUP_OBJECT (gestionw, label13w, "label13w");
  GLADE_HOOKUP_OBJECT (gestionw, label58, "label58");
  GLADE_HOOKUP_OBJECT (gestionw, label7w, "label7w");
  GLADE_HOOKUP_OBJECT (gestionw, label10w, "label10w");
  GLADE_HOOKUP_OBJECT (gestionw, labellabel, "labellabel");
  GLADE_HOOKUP_OBJECT (gestionw, labelreclamation, "labelreclamation");
  GLADE_HOOKUP_OBJECT (gestionw, label69, "label69");
  GLADE_HOOKUP_OBJECT (gestionw, label11w, "label11w");
  GLADE_HOOKUP_OBJECT (gestionw, label62, "label62");
  GLADE_HOOKUP_OBJECT (gestionw, label67, "label67");
  GLADE_HOOKUP_OBJECT (gestionw, label66, "label66");
  GLADE_HOOKUP_OBJECT (gestionw, label6w, "label6w");
  GLADE_HOOKUP_OBJECT (gestionw, combobox1w, "combobox1w");
  GLADE_HOOKUP_OBJECT (gestionw, label65, "label65");
  GLADE_HOOKUP_OBJECT (gestionw, label3w, "label3w");
  GLADE_HOOKUP_OBJECT (gestionw, label12w, "label12w");
  GLADE_HOOKUP_OBJECT (gestionw, button3, "button3");
  GLADE_HOOKUP_OBJECT (gestionw, alignment3, "alignment3");
  GLADE_HOOKUP_OBJECT (gestionw, hbox3, "hbox3");
  GLADE_HOOKUP_OBJECT (gestionw, image3, "image3");
  GLADE_HOOKUP_OBJECT (gestionw, label14, "label14");
  GLADE_HOOKUP_OBJECT (gestionw, label15w, "label15w");
  GLADE_HOOKUP_OBJECT (gestionw, fixed4, "fixed4");
  GLADE_HOOKUP_OBJECT (gestionw, entry8w, "entry8w");
  GLADE_HOOKUP_OBJECT (gestionw, entryrec, "entryrec");
  GLADE_HOOKUP_OBJECT (gestionw, entrydes, "entrydes");
  GLADE_HOOKUP_OBJECT (gestionw, label71, "label71");
  GLADE_HOOKUP_OBJECT (gestionw, label72, "label72");
  GLADE_HOOKUP_OBJECT (gestionw, label73, "label73");
  GLADE_HOOKUP_OBJECT (gestionw, spinbuttonjour1, "spinbuttonjour1");
  GLADE_HOOKUP_OBJECT (gestionw, spinbuttonmois1, "spinbuttonmois1");
  GLADE_HOOKUP_OBJECT (gestionw, spinbuttonannee1, "spinbuttonannee1");
  GLADE_HOOKUP_OBJECT (gestionw, label19w, "label19w");
  GLADE_HOOKUP_OBJECT (gestionw, label70, "label70");
  GLADE_HOOKUP_OBJECT (gestionw, label16w, "label16w");
  GLADE_HOOKUP_OBJECT (gestionw, labelrec, "labelrec");
  GLADE_HOOKUP_OBJECT (gestionw, label60, "label60");
  GLADE_HOOKUP_OBJECT (gestionw, combobox3w, "combobox3w");
  GLADE_HOOKUP_OBJECT (gestionw, label36w, "label36w");
  GLADE_HOOKUP_OBJECT (gestionw, label20w, "label20w");
  GLADE_HOOKUP_OBJECT (gestionw, button4w, "button4w");
  GLADE_HOOKUP_OBJECT (gestionw, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (gestionw, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (gestionw, image4, "image4");
  GLADE_HOOKUP_OBJECT (gestionw, label21, "label21");
  GLADE_HOOKUP_OBJECT (gestionw, label37w, "label37w");
  GLADE_HOOKUP_OBJECT (gestionw, label22w, "label22w");
  GLADE_HOOKUP_OBJECT (gestionw, fixed6, "fixed6");
  GLADE_HOOKUP_OBJECT (gestionw, entry10w, "entry10w");
  GLADE_HOOKUP_OBJECT (gestionw, label26w, "label26w");
  GLADE_HOOKUP_OBJECT (gestionw, bmodifier, "bmodifier");
  GLADE_HOOKUP_OBJECT (gestionw, alignment14, "alignment14");
  GLADE_HOOKUP_OBJECT (gestionw, hbox14, "hbox14");
  GLADE_HOOKUP_OBJECT (gestionw, image14, "image14");
  GLADE_HOOKUP_OBJECT (gestionw, label49, "label49");
  GLADE_HOOKUP_OBJECT (gestionw, button6, "button6");
  GLADE_HOOKUP_OBJECT (gestionw, alignment6, "alignment6");
  GLADE_HOOKUP_OBJECT (gestionw, hbox6, "hbox6");
  GLADE_HOOKUP_OBJECT (gestionw, image6, "image6");
  GLADE_HOOKUP_OBJECT (gestionw, label30, "label30");
  GLADE_HOOKUP_OBJECT (gestionw, bsupprimer, "bsupprimer");
  GLADE_HOOKUP_OBJECT (gestionw, alignment15, "alignment15");
  GLADE_HOOKUP_OBJECT (gestionw, hbox15, "hbox15");
  GLADE_HOOKUP_OBJECT (gestionw, image15, "image15");
  GLADE_HOOKUP_OBJECT (gestionw, label50, "label50");
  GLADE_HOOKUP_OBJECT (gestionw, bafficher12, "bafficher12");
  GLADE_HOOKUP_OBJECT (gestionw, alignment16, "alignment16");
  GLADE_HOOKUP_OBJECT (gestionw, hbox16, "hbox16");
  GLADE_HOOKUP_OBJECT (gestionw, image16, "image16");
  GLADE_HOOKUP_OBJECT (gestionw, label51, "label51");
  GLADE_HOOKUP_OBJECT (gestionw, label28w, "label28w");
  GLADE_HOOKUP_OBJECT (gestionw, label29w, "label29w");
  GLADE_HOOKUP_OBJECT (gestionw, label27, "label27");
  GLADE_HOOKUP_OBJECT (gestionw, scrolledwindow2, "scrolledwindow2");
  GLADE_HOOKUP_OBJECT (gestionw, treeview2w, "treeview2w");
  GLADE_HOOKUP_OBJECT (gestionw, label31w, "label31w");

  return gestionw;
}

