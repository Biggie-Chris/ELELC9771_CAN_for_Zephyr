/*
 * Copyright (c) 2017 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr/display/mb_display.h>

#include "mb_font.h"

const struct mb_image mb_font[MB_FONT_COUNT] = {
	/* ' ' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '!' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* '"' */
	MB_IMAGE({ 0, 1, 0, 1, 0 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '#' */
	MB_IMAGE({ 0, 1, 0, 1, 0 },
		 { 1, 1, 1, 1, 1 },
		 { 0, 1, 0, 1, 0 },
		 { 1, 1, 1, 1, 1 },
		 { 0, 1, 0, 1, 0 }),
	/* '$' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 1, 0, 0, 1 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 1, 1 },
		 { 0, 1, 1, 1, 0 }),
	/* '%' */
	MB_IMAGE({ 1, 1, 0, 0, 1 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 1 },
		 { 1, 0, 0, 1, 1 }),
	/* '&' */
	MB_IMAGE({ 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 1 }),
	/* ''' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '(' */
	MB_IMAGE({ 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 }),
	/* ')' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* '*' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '+' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* ',' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* '-' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '.' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '/' */
	MB_IMAGE({ 0, 0, 0, 0, 1 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 }),
	/* '0' */
	MB_IMAGE({ 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* '1' */
	MB_IMAGE({ 0, 0, 1, 0, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 1, 1, 0 }),
	/* '2' */
	MB_IMAGE({ 1, 1, 1, 0, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 1, 0 }),
	/* '3' */
	MB_IMAGE({ 1, 1, 1, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* '4' */
	MB_IMAGE({ 0, 0, 1, 1, 0 },
		 { 0, 1, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 1, 1 },
		 { 0, 0, 0, 1, 0 }),
	/* '5' */
	MB_IMAGE({ 1, 1, 1, 1, 1 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 1, 0 },
		 { 0, 0, 0, 0, 1 },
		 { 1, 1, 1, 1, 0 }),
	/* '6' */
	MB_IMAGE({ 0, 0, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 1, 1, 0 }),
	/* '7' */
	MB_IMAGE({ 1, 1, 1, 1, 1 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 }),
	/* '8' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 1, 1, 0 }),
	/* '9' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* ':' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* ';' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* '<' */
	MB_IMAGE({ 0, 0, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 0, 1, 0 }),
	/* '=' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '>' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* '?' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 0, 1, 1, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 }),
	/* '@' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 1, 0, 1 },
		 { 1, 0, 0, 1, 1 },
		 { 0, 1, 1, 0, 0 }),
	/* 'A' */
	MB_IMAGE({ 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'B' */
	MB_IMAGE({ 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 }),
	/* 'C' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 }),
	/* 'D' */
	MB_IMAGE({ 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 }),
	/* 'E' */
	MB_IMAGE({ 1, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 1, 0 }),
	/* 'F' */
	MB_IMAGE({ 1, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 }),
	/* 'G' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 1, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 1, 1, 0 }),
	/* 'H' */
	MB_IMAGE({ 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'I' */
	MB_IMAGE({ 1, 1, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 }),
	/* 'J' */
	MB_IMAGE({ 1, 1, 1, 1, 1 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* 'K' */
	MB_IMAGE({ 1, 0, 0, 1, 0 },
		 { 1, 0, 1, 0, 0 },
		 { 1, 1, 0, 0, 0 },
		 { 1, 0, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'L' */
	MB_IMAGE({ 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 1, 0 }),
	/* 'M' */
	MB_IMAGE({ 1, 0, 0, 0, 1 },
		 { 1, 1, 0, 1, 1 },
		 { 1, 0, 1, 0, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 0, 0, 1 }),
	/* 'N' */
	MB_IMAGE({ 1, 0, 0, 0, 1 },
		 { 1, 1, 0, 0, 1 },
		 { 1, 0, 1, 0, 1 },
		 { 1, 0, 0, 1, 1 },
		 { 1, 0, 0, 0, 1 }),
	/* 'O' */
	MB_IMAGE({ 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* 'P' */
	MB_IMAGE({ 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 }),
	/* 'Q' */
	MB_IMAGE({ 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 0, 0, 1, 1, 0 }),
	/* 'R' */
	MB_IMAGE({ 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 0, 1 }),
	/* 'S' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 }),
	/* 'T' */
	MB_IMAGE({ 1, 1, 1, 1, 1 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 }),
	/* 'U' */
	MB_IMAGE({ 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* 'V' */
	MB_IMAGE({ 1, 0, 0, 0, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 }),
	/* 'W' */
	MB_IMAGE({ 1, 0, 0, 0, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 1, 0, 1 },
		 { 1, 1, 0, 1, 1 },
		 { 1, 0, 0, 0, 1 }),
	/* 'X' */
	MB_IMAGE({ 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'Y' */
	MB_IMAGE({ 1, 0, 0, 0, 1 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 }),
	/* 'Z' */
	MB_IMAGE({ 1, 1, 1, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 1, 0 }),
	/* '[' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 }),
	/* '\' */
	MB_IMAGE({ 1, 0, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 0, 0, 1 }),
	/* ']' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 1, 1, 1, 0 }),
	/* '^' */
	MB_IMAGE({ 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* '_' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 1, 1, 1, 1, 1 }),
	/* '`' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 }),
	/* 'a' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 1, 1 }),
	/* 'b' */
	MB_IMAGE({ 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 }),
	/* 'c' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 }),
	/* 'd' */
	MB_IMAGE({ 0, 0, 0, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 1, 0 }),
	/* 'e' */
	MB_IMAGE({ 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 }),
	/* 'f' */
	MB_IMAGE({ 0, 0, 1, 1, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* 'g' */
	MB_IMAGE({ 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* 'h' */
	MB_IMAGE({ 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'i' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* 'j' */
	MB_IMAGE({ 0, 0, 0, 1, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* 'k' */
	MB_IMAGE({ 1, 0, 0, 0, 0 },
		 { 1, 0, 1, 0, 0 },
		 { 1, 1, 0, 0, 0 },
		 { 1, 0, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'l' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 1, 0 }),
	/* 'm' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 1, 0, 1, 1 },
		 { 1, 0, 1, 0, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 0, 0, 1 }),
	/* 'n' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'o' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 }),
	/* 'p' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 1, 1, 0, 0 },
		 { 1, 0, 0, 0, 0 }),
	/* 'q' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 0, 0, 1, 0 }),
	/* 'r' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 0 }),
	/* 's' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 1, 1, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 1, 1, 0, 0, 0 }),
	/* 't' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 1, 1, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 0, 1, 1, 1 }),
	/* 'u' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 1, 1 }),
	/* 'v' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 }),
	/* 'w' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 0, 0, 1 },
		 { 1, 0, 1, 0, 1 },
		 { 1, 1, 0, 1, 1 }),
	/* 'x' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 0, 0, 1, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 1, 0, 0, 1, 0 }),
	/* 'y' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 0, 0, 0, 1 },
		 { 0, 1, 0, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 1, 1, 0, 0, 0 }),
	/* 'z' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 1, 1, 1, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 1, 1, 1, 1, 0 }),
	/* '{' */
	MB_IMAGE({ 0, 0, 1, 1, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 0, 0, 1, 0, 0 },
		 { 0, 0, 1, 1, 0 }),
	/* '|' */
	MB_IMAGE({ 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 }),
	/* '}' */
	MB_IMAGE({ 1, 1, 0, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 0, 1, 0, 0, 0 },
		 { 1, 1, 0, 0, 0 }),
	/* '~' */
	MB_IMAGE({ 0, 0, 0, 0, 0 },
		 { 0, 0, 0, 0, 0 },
		 { 0, 1, 1, 0, 0 },
		 { 0, 0, 0, 1, 1 },
		 { 0, 0, 0, 0, 0 }),
};
