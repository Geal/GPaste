/*
 *      This file is part of GPaste.
 *
 *      Copyright 2011-2015 Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
 *
 *      GPaste is free software: you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation, either version 3 of the License, or
 *      (at your option) any later version.
 *
 *      GPaste is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with GPaste.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined (__G_PASTE_H_INSIDE__) && !defined (G_PASTE_COMPILATION)
#error "Only <gpaste.h> can be included directly."
#endif

#ifndef __G_PASTE_SETTINGS_H__
#define __G_PASTE_SETTINGS_H__

#include <gpaste-config.h>
#include <gpaste-macros.h>

G_BEGIN_DECLS

#define G_PASTE_TYPE_SETTINGS (g_paste_settings_get_type ())

G_PASTE_FINAL_TYPE (Settings, settings, SETTINGS, GObject)

guint32      g_paste_settings_get_element_size               (const GPasteSettings *self);
gboolean     g_paste_settings_get_growing_lines              (const GPasteSettings *self);
const gchar *g_paste_settings_get_history_name               (const GPasteSettings *self);
gboolean     g_paste_settings_get_images_support             (const GPasteSettings *self);
const gchar *g_paste_settings_get_make_password              (const GPasteSettings *self);
guint32      g_paste_settings_get_max_displayed_history_size (const GPasteSettings *self);
guint32      g_paste_settings_get_max_history_size           (const GPasteSettings *self);
guint32      g_paste_settings_get_max_memory_usage           (const GPasteSettings *self);
guint32      g_paste_settings_get_max_text_item_size         (const GPasteSettings *self);
guint32      g_paste_settings_get_min_text_item_size         (const GPasteSettings *self);
const gchar *g_paste_settings_get_pop                        (const GPasteSettings *self);
gboolean     g_paste_settings_get_primary_to_history         (const GPasteSettings *self);
gboolean     g_paste_settings_get_save_history               (const GPasteSettings *self);
const gchar *g_paste_settings_get_show_history               (const GPasteSettings *self);
const gchar *g_paste_settings_get_sync_clipboard_to_primary  (const GPasteSettings *self);
const gchar *g_paste_settings_get_sync_primary_to_clipboard  (const GPasteSettings *self);
gboolean     g_paste_settings_get_synchronize_clipboards     (const GPasteSettings *self);
gboolean     g_paste_settings_get_track_changes              (const GPasteSettings *self);
gboolean     g_paste_settings_get_track_extension_state      (const GPasteSettings *self);
gboolean     g_paste_settings_get_trim_items                 (const GPasteSettings *self);
const gchar *g_paste_settings_get_upload                     (const GPasteSettings *self);

void g_paste_settings_reset_element_size               (GPasteSettings *self);
void g_paste_settings_reset_growing_lines              (GPasteSettings *self);
void g_paste_settings_reset_history_name               (GPasteSettings *self);
void g_paste_settings_reset_images_support             (GPasteSettings *self);
void g_paste_settings_reset_make_password              (GPasteSettings *self);
void g_paste_settings_reset_max_displayed_history_size (GPasteSettings *self);
void g_paste_settings_reset_max_history_size           (GPasteSettings *self);
void g_paste_settings_reset_max_memory_usage           (GPasteSettings *self);
void g_paste_settings_reset_max_text_item_size         (GPasteSettings *self);
void g_paste_settings_reset_min_text_item_size         (GPasteSettings *self);
void g_paste_settings_reset_pop                        (GPasteSettings *self);
void g_paste_settings_reset_primary_to_history         (GPasteSettings *self);
void g_paste_settings_reset_save_history               (GPasteSettings *self);
void g_paste_settings_reset_show_history               (GPasteSettings *self);
void g_paste_settings_reset_sync_clipboard_to_primary  (GPasteSettings *self);
void g_paste_settings_reset_sync_primary_to_clipboard  (GPasteSettings *self);
void g_paste_settings_reset_synchronize_clipboards     (GPasteSettings *self);
void g_paste_settings_reset_track_changes              (GPasteSettings *self);
void g_paste_settings_reset_track_extension_state      (GPasteSettings *self);
void g_paste_settings_reset_trim_items                 (GPasteSettings *self);
void g_paste_settings_reset_upload                     (GPasteSettings *self);

void g_paste_settings_set_element_size               (GPasteSettings *self,
                                                      guint32         value);
void g_paste_settings_set_growing_lines              (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_history_name               (GPasteSettings *self,
                                                      const gchar    *value);
void g_paste_settings_set_images_support             (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_make_password              (GPasteSettings *self,
                                                      const gchar    *value);
void g_paste_settings_set_max_displayed_history_size (GPasteSettings *self,
                                                      guint32         value);
void g_paste_settings_set_max_history_size           (GPasteSettings *self,
                                                      guint32         value);
void g_paste_settings_set_max_memory_usage           (GPasteSettings *self,
                                                      guint32         value);
void g_paste_settings_set_max_text_item_size         (GPasteSettings *self,
                                                      guint32         value);
void g_paste_settings_set_min_text_item_size         (GPasteSettings *self,
                                                      guint32         value);
void g_paste_settings_set_pop                        (GPasteSettings *self,
                                                      const gchar    *value);
void g_paste_settings_set_primary_to_history         (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_save_history               (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_show_history               (GPasteSettings *self,
                                                      const gchar    *value);
void g_paste_settings_set_sync_clipboard_to_primary  (GPasteSettings *self,
                                                      const gchar    *value);
void g_paste_settings_set_sync_primary_to_clipboard  (GPasteSettings *self,
                                                      const gchar    *value);
void g_paste_settings_set_synchronize_clipboards     (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_track_changes              (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_track_extension_state      (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_trim_items                 (GPasteSettings *self,
                                                      gboolean        value);
void g_paste_settings_set_upload                     (GPasteSettings *self,
                                                      const gchar    *value);

#if G_PASTE_CONFIG_ENABLE_EXTENSION
gboolean g_paste_settings_get_extension_enabled (const GPasteSettings *self);
void     g_paste_settings_set_extension_enabled (GPasteSettings *self,
                                                 gboolean        value);
#endif

GPasteSettings *g_paste_settings_new (void);

G_END_DECLS

#endif /*__G_PASTE_SETTINGS_H__*/
