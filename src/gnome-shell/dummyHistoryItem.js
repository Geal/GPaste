/*
 *      This file is part of GPaste.
 *
 *      Copyright 2014-2015 Marc-Antoine Perennou <Marc-Antoine@Perennou.com>
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
/* -*- mode: js2; js2-basic-offset: 4; indent-tabs-mode: nil -*- */

const Gettext = imports.gettext;
const Lang = imports.lang;

const PopupMenu = imports.ui.popupMenu;

const _ = Gettext.domain('GPaste').gettext;

const GPasteDummyHistoryItem = new Lang.Class({
    Name: 'GPasteDummyHistoryItem',
    Extends: PopupMenu.PopupMenuItem,

    _init: function() {
        this.parent(_("(Couldn't connect to GPaste daemon)"));
        this.setSensitive(false);
    },

    update: function() {
        this.label.text = _("(Empty)");
    }
});
