// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 10;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "Sans 12";

constexpr ColorScheme colorInactive = {
    /* tag_fg:      */ Color(0xbb, 0xbb, 0xbb),
    /* tag_bg:      */ Color(0x22, 0x22, 0x22),
    /* titlebar_fg: */ Color(0xbb, 0xbb, 0xbb),
    /* titlebar_bg: */ Color(0x22, 0x22, 0x22),
    /* layout_fg:   */ Color(0xbb, 0xbb, 0xbb),
    /* layout_bg:   */ Color(0x22, 0x22, 0x22),
    /* status_fg:   */ Color(0x22, 0x22, 0x22),
    /* status_bg:   */ Color(0x22, 0x22, 0x22),
};
constexpr ColorScheme colorActive = {
    /* tag_fg:      */ Color(0xee, 0xee, 0xee),
    /* tag_bg:      */ Color(0x00, 0x55, 0x77),
    /* titlebar_fg: */ Color(0xdd, 0xdd, 0xdd),
    /* titlebar_bg: */ Color(0x22, 0x22, 0x22),
    /* layout_fg:   */ Color(0xbb, 0xbb, 0xbb),
    /* layout_bg:   */ Color(0x22, 0x22, 0x22),
    /* status_fg:   */ Color(0x22, 0x22, 0x22),
    /* status_bg:   */ Color(0x22, 0x22, 0x22),
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
