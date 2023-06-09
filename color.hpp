#pragma once

#include <iostream>

#include "vec.hpp"

/// @brief Write 0 - 255 integer value of each color component to an output stream
/// @param out Output stream
/// @param pixel_color Color
void write_color(std::ostream& out, color pixel_color) {
    out << static_cast<int>(255.999 * pixel_color.x()) << ' '
        << static_cast<int>(255.999 * pixel_color.y()) << ' '
        << static_cast<int>(255.999 * pixel_color.z()) << ' ';
}