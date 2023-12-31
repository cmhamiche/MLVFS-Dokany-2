/*
 * Copyright (C) 2014 The Magic Lantern Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the
 * Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 */

#ifndef mlvfs_chroma_smooth_h
#define mlvfs_chroma_smooth_h

#include <stdio.h>
#include "dng.h"

void chroma_smooth(struct frame_headers * frame_headers, uint16_t * image_data, int method);
void fix_bad_pixels(struct frame_headers * frame_headers, uint16_t * image_data, int aggressive, int dual_iso);
void fix_focus_pixels(struct frame_headers * frame_headers, uint16_t * image_data, int dual_iso);
void free_focus_pixel_maps();

#endif
