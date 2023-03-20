// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 8;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "Sans 11";

constexpr ColorScheme colors = {
    /* tag_fg_active:               */ Color(0xcc, 0xcc, 0xcc),
    /* tag_bg_active:               */ Color(0x00, 0x55, 0x77),
    /* tag_fg_inactive:             */ Color(0xbb, 0xbb, 0xbb),
    /* tag_bg_inactive:             */ Color(0x22, 0x22, 0x22),
    /* tag_bg_inactive_unselected:  */ Color(0x22, 0x22, 0x22),
    /* tag_fg_urgent:               */ Color(0x00, 0x55, 0x77),
    /* tag_bg_urgent:               */ Color(0xcc, 0xcc, 0xcc),

    /* titlebar_fg:                 */ Color(0xcc, 0xcc, 0xcc),
    /* titlebar_bg:                 */ Color(0x22, 0x22, 0x22),
    /* titlebar_bg_unselected:      */ Color(0x22, 0x22, 0x22),
    /* layout_fg:                   */ Color(0xbb, 0xbb, 0xbb),
    /* layout_bg:                   */ Color(0x22, 0x22, 0x22),
    /* layout_bg_unselected:        */ Color(0xff, 0xff, 0xff),
    /* status_fg:                   */ Color(0xee, 0xee, 0xee),
    /* status_bg:                   */ Color(0x22, 0x22, 0x22),
    /* status_bg_unselected:        */ Color(0x22, 0x22, 0x22),

};

constexpr const char* termcmd[] = {"alacritty", nullptr};

static std::vector<std::string> tagNames = {
    "T", "q", "w", "n", "d", "s", "a", "z",
    "t", "f", "c", "g", "v", "h"
};

static std::vector<bool> defaultTagVisibility = {
    true, true, true, false, false, false, false,
    false, false, false, false, false, false, false
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
