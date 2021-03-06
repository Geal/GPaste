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

#ifndef __G_PASTE_ITEM_H__
#define __G_PASTE_ITEM_H__

#include <gpaste-macros.h>

G_BEGIN_DECLS

typedef enum {
    G_PASTE_ITEM_STATE_IDLE,
    G_PASTE_ITEM_STATE_ACTIVE
} GPasteItemState;

#define G_PASTE_TYPE_ITEM (g_paste_item_get_type ())

G_PASTE_DERIVABLE_TYPE (Item, item, ITEM, GObject)

struct _GPasteItemClass
{
    GObjectClass parent_class;

    /*< virtual >*/
    const gchar * (*get_value) (const GPasteItem *self);
    gboolean      (*equals)    (const GPasteItem *self,
                                const GPasteItem *other);
    void          (*set_state) (GPasteItem     *self,
                                GPasteItemState state);

    /*< pure virtual >*/
    const gchar *(*get_kind) (const GPasteItem *self);
};

const gchar *g_paste_item_get_value          (const GPasteItem *self);
const gchar *g_paste_item_get_real_value     (const GPasteItem *self);
const gchar *g_paste_item_get_display_string (const GPasteItem *self);
gboolean     g_paste_item_equals             (const GPasteItem *self,
                                              const GPasteItem *other);
const gchar *g_paste_item_get_kind           (const GPasteItem *self);
gsize        g_paste_item_get_size           (const GPasteItem *self);

void g_paste_item_set_state (GPasteItem     *self,
                             GPasteItemState state);

G_END_DECLS

#endif /*__G_PASTE_ITEM_H__*/
