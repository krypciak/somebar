// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include <optional>
#include <vector>
#include <wayland-client.h>
#include <QString>
#include <QFontMetrics>
#include <QPainter>
#include "wlr-layer-shell-unstable-v1-client-protocol.h"
#include "common.hpp"
#include "shm_buffer.hpp"

struct Tag {
    QString name;
    bool active;
};

class Bar {
    static const zwlr_layer_surface_v1_listener _layerSurfaceListener;

    wl_surface *_surface {nullptr};
    zwlr_layer_surface_v1 *_layerSurface {nullptr};
    QPainter *_painter {nullptr};
    QFont _font;
    QFontMetrics _fontMetrics;
    std::optional<ShmBuffer> _bufs;
    std::vector<Tag> _tags;
    int _textY;

    void layerSurfaceConfigure(uint32_t serial, uint32_t width, uint32_t height);
    void render();
    void renderTags(QPainter &painter);
    int textWidth(const QString &text);
    void setColorScheme(const ColorScheme &scheme);
public:
    explicit Bar(const wl_output *output);
    ~Bar();
};
