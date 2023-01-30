/*
 * Copyright (C) 2010 Nick Schermer <nick@xfce.org>
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef __XFCE_APPLICATIONS_MENU_PLUGIN_H__
#define __XFCE_APPLICATIONS_MENU_PLUGIN_H__

#include <libxfce4panel/libxfce4panel.h>

G_BEGIN_DECLS

#define XFCE_TYPE_APPLICATIONS_MENU_PLUGIN (applications_menu_plugin_get_type ())
G_DECLARE_FINAL_TYPE (ApplicationsMenuPlugin, applications_menu_plugin, XFCE, APPLICATIONS_MENU_PLUGIN, XfcePanelPlugin)

void applications_menu_plugin_register_type (XfcePanelTypeModule *type_module);

G_END_DECLS

#endif /* !__XFCE_APPLICATIONS_MENU_PLUGIN_H__ */
