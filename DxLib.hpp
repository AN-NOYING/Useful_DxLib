#pragma once

// DxLib
#include <DxLib.h>

#define DXLIB_SUCCESS 0
#define DXLIB_FAILURE 1

/// @brief Get the type of the handle.
/// @param handle Handle
/// @return Types of the handle
static constexpr int GetHandleType(int handle) noexcept {
	return (handle >> 26);
}

/// @brief Radian to Degree
/// @param value Radian
/// @return Degree
static constexpr float ToDegreeF(float value) noexcept {
	return value * (DX_PI_F / 180.0F);
}

/// @brief Degree to Radian
/// @param value Degree
/// @return Radian
static constexpr float ToRadianF(float value) noexcept {
	return value * (180.0F / DX_PI_F);
}

/// @brief Radian to Degree
/// @param value Radian
/// @return Degree
static constexpr float operator""_DegF(long double value) noexcept {
	return value * (DX_PI / 180.0);
}

/// @brief Degree to Radian
/// @param value Degree
/// @return Radian
static constexpr float operator""_RadF(long double value) noexcept {
	return value * (180.0 / DX_PI);
}

constexpr auto COLOR_TRANSPARENT           = 0x00000000;
constexpr auto COLOR_ALICEBLUE             = 0xFFF0F8FF;
constexpr auto COLOR_ANTIQUEWHITE          = 0xFFFAEBD7;
constexpr auto COLOR_AQUA                  = 0xFF00FFFF;
constexpr auto COLOR_AQUAMARINE            = 0xFF7FFFD4;
constexpr auto COLOR_AZURE                 = 0xFFF0FFFF;
constexpr auto COLOR_BEIGE                 = 0xFFF5F5DC;
constexpr auto COLOR_BISQUE                = 0xFFFFE4C4;
constexpr auto COLOR_BLACK                 = 0xFF000000;
constexpr auto COLOR_BLANCHEDALMOND        = 0xFFFFEBCD;
constexpr auto COLOR_BLUE                  = 0xFF0000FF;
constexpr auto COLOR_BLUEVIOLET            = 0xFF8A2BE2;
constexpr auto COLOR_BROWN                 = 0xFFA52A2A;
constexpr auto COLOR_BURLYWOOD             = 0xFFDEB887;
constexpr auto COLOR_CADETBLUE             = 0xFF5F9EA0;
constexpr auto COLOR_CHARTREUSE            = 0xFF7FFF00;
constexpr auto COLOR_CHOCOLATE             = 0xFFD2691E;
constexpr auto COLOR_CORAL                 = 0xFFFF7F50;
constexpr auto COLOR_CORNFLOWERBLUE        = 0xFF6495ED;
constexpr auto COLOR_CORNSILK              = 0xFFFFF8DC;
constexpr auto COLOR_CRIMSON               = 0xFFDC143C;
constexpr auto COLOR_CYAN                  = 0xFF00FFFF;
constexpr auto COLOR_DARKBLUE              = 0xFF00008B;
constexpr auto COLOR_DARKCYAN              = 0xFF008B8B;
constexpr auto COLOR_DARKGOLDENROD         = 0xFFB8860B;
constexpr auto COLOR_DARKGRAY              = 0xFFA9A9A9;
constexpr auto COLOR_DARKGREEN             = 0xFF006400;
constexpr auto COLOR_DARKKHAKI             = 0xFFBDB76B;
constexpr auto COLOR_DARKMAGENTA           = 0xFF8B008B;
constexpr auto COLOR_DARKOLIVEGREEN        = 0xFF556B2F;
constexpr auto COLOR_DARKORANGE            = 0xFFFF8C00;
constexpr auto COLOR_DARKORCHID            = 0xFF9932CC;
constexpr auto COLOR_DARKRED               = 0xFF8B0000;
constexpr auto COLOR_DARKSALMON            = 0xFFE9967A;
constexpr auto COLOR_DARKSEAGREEN          = 0xFF8FBC8B;
constexpr auto COLOR_DARKSLATEBLUE         = 0xFF483D8B;
constexpr auto COLOR_DARKSLATEGRAY         = 0xFF2F4F4F;
constexpr auto COLOR_DARKTURQUOISE         = 0xFF00CED1;
constexpr auto COLOR_DARKVIOLET            = 0xFF9400D3;
constexpr auto COLOR_DEEPPINK              = 0xFFFF1493;
constexpr auto COLOR_DEEPSKYBLUE           = 0xFF00BFFF;
constexpr auto COLOR_DIMGRAY               = 0xFF696969;
constexpr auto COLOR_DODGERBLUE            = 0xFF1E90FF;
constexpr auto COLOR_FIREBRICK             = 0xFFB22222;
constexpr auto COLOR_FLORALWHITE           = 0xFFFFFAF0;
constexpr auto COLOR_FORESTGREEN           = 0xFF228B22;
constexpr auto COLOR_FUCHSIA               = 0xFFFF00FF;
constexpr auto COLOR_GAINSBORO             = 0xFFDCDCDC;
constexpr auto COLOR_GHOSTWHITE            = 0xFFF8F8FF;
constexpr auto COLOR_GOLD                  = 0xFFFFD700;
constexpr auto COLOR_GOLDENROD             = 0xFFDAA520;
constexpr auto COLOR_GRAY                  = 0xFF808080;
constexpr auto COLOR_GREEN                 = 0xFF008000;
constexpr auto COLOR_GREENYELLOW           = 0xFFADFF2F;
constexpr auto COLOR_HONEYDEW              = 0xFFF0FFF0;
constexpr auto COLOR_HOTPINK               = 0xFFFF69B4;
constexpr auto COLOR_INDIANRED             = 0xFFCD5C5C;
constexpr auto COLOR_INDIGO                = 0xFF4B0082;
constexpr auto COLOR_IVORY                 = 0xFFFFFFF0;
constexpr auto COLOR_KHAKI                 = 0xFFF0E68C;
constexpr auto COLOR_LAVENDER              = 0xFFE6E6FA;
constexpr auto COLOR_LAVENDERBLUSH         = 0xFFFFF0F5;
constexpr auto COLOR_LAWNGREEN             = 0xFF7CFC00;
constexpr auto COLOR_LEMONCHIFFON          = 0xFFFFFACD;
constexpr auto COLOR_LIGHTBLUE             = 0xFFADD8E6;
constexpr auto COLOR_LIGHTCORAL            = 0xFFF08080;
constexpr auto COLOR_LIGHTCYAN             = 0xFFE0FFFF;
constexpr auto COLOR_LIGHTGOLDENRODYELLOW  = 0xFFFAFAD2;
constexpr auto COLOR_LIGHTGRAY             = 0xFFD3D3D3;
constexpr auto COLOR_LIGHTGREEN            = 0xFF90EE90;
constexpr auto COLOR_LIGHTPINK             = 0xFFFFB6C1;
constexpr auto COLOR_LIGHTSALMON           = 0xFFFFA07A;
constexpr auto COLOR_LIGHTSEAGREEN         = 0xFF20B2AA;
constexpr auto COLOR_LIGHTSKYBLUE          = 0xFF87CEFA;
constexpr auto COLOR_LIGHTSLATEGRAY        = 0xFF778899;
constexpr auto COLOR_LIGHTSTEELBLUE        = 0xFFB0C4DE;
constexpr auto COLOR_LIGHTYELLOW           = 0xFFFFFFE0;
constexpr auto COLOR_LIME                  = 0xFF00FF00;
constexpr auto COLOR_LIMEGREEN             = 0xFF32CD32;
constexpr auto COLOR_LINEN                 = 0xFFFAF0E6;
constexpr auto COLOR_MAGENTA               = 0xFFFF00FF;
constexpr auto COLOR_MAROON                = 0xFF800000;
constexpr auto COLOR_MEDIUMAQUAMARINE      = 0xFF66CDAA;
constexpr auto COLOR_MEDIUMBLUE            = 0xFF0000CD;
constexpr auto COLOR_MEDIUMORCHID          = 0xFFBA55D3;
constexpr auto COLOR_MEDIUMPURPLE          = 0xFF9370DB;
constexpr auto COLOR_MEDIUMSEAGREEN        = 0xFF3CB371;
constexpr auto COLOR_MEDIUMSLATEBLUE       = 0xFF7B68EE;
constexpr auto COLOR_MEDIUMSPRINGGREEN     = 0xFF00FA9A;
constexpr auto COLOR_MEDIUMTURQUOISE       = 0xFF48D1CC;
constexpr auto COLOR_MEDIUMVUOLETRED       = 0xFFC71585;
constexpr auto COLOR_MIDNIGHTBLUE          = 0xFF191970;
constexpr auto COLOR_MINTCREAM             = 0xFFF5FFFA;
constexpr auto COLOR_MISTYROSE             = 0xFFFFE4E1;
constexpr auto COLOR_MOCCASIN              = 0xFFFFE4B5;
constexpr auto COLOR_NAVAHOWHITE           = 0xFFFFDEAD;
constexpr auto COLOR_NAVY                  = 0xFF000080;
constexpr auto COLOR_OLDLACE               = 0xFFFDF5E6;
constexpr auto COLOR_OLIVE                 = 0xFF808000;
constexpr auto COLOR_OLIVEDRAB             = 0xFF6B8E23;
constexpr auto COLOR_ORANGE                = 0xFFFFA500;
constexpr auto COLOR_ORANGERED             = 0xFFFF4500;
constexpr auto COLOR_ORCHID                = 0xFFDA70D6;
constexpr auto COLOR_PALEGOLDENROD         = 0xFFEEE8AA;
constexpr auto COLOR_PALEGREEN             = 0xFF98FB98;
constexpr auto COLOR_PALETURQUOISE         = 0xFFAFEEEE;
constexpr auto COLOR_PALEVIOLETRED         = 0xFFDB7093;
constexpr auto COLOR_PAPAYAWHIP            = 0xFFFFEFD5;
constexpr auto COLOR_PEACHPUFF             = 0xFFFFDAB9;
constexpr auto COLOR_PERU                  = 0xFFCD853F;
constexpr auto COLOR_PINK                  = 0xFFFFC0CB;
constexpr auto COLOR_PLUM                  = 0xFFDDA0DD;
constexpr auto COLOR_POWDERBLUE            = 0xFFB0E0E6;
constexpr auto COLOR_PURPLE                = 0xFF800080;
constexpr auto COLOR_REBECCAPURPLE         = 0xFF663399;
constexpr auto COLOR_RED                   = 0xFFFF0000;
constexpr auto COLOR_ROSYBROWN             = 0xFFBC8F8F;
constexpr auto COLOR_ROYALBLUE             = 0xFF4169E1;
constexpr auto COLOR_SADDLEBROWN           = 0xFF8B4513;
constexpr auto COLOR_SALMON                = 0xFFFA8072;
constexpr auto COLOR_SANDYBROWN            = 0xFFF4A460;
constexpr auto COLOR_SEAGREEN              = 0xFF2E8B57;
constexpr auto COLOR_SEASHELL              = 0xFFFFF5EE;
constexpr auto COLOR_SIENNA                = 0xFFA0522D;
constexpr auto COLOR_SILVER                = 0xFFC0C0C0;
constexpr auto COLOR_SKYBLUE               = 0xFF87CEEB;
constexpr auto COLOR_SLATEBLUE             = 0xFF6A5ACD;
constexpr auto COLOR_SLATEGRAY             = 0xFF708090;
constexpr auto COLOR_SNOW                  = 0xFFFFFAFA;
constexpr auto COLOR_SPRINGGREEN           = 0xFF00FF7F;
constexpr auto COLOR_STEELBLUE             = 0xFF4682B4;
constexpr auto COLOR_TAN                   = 0xFFD2B48C;
constexpr auto COLOR_TEAL                  = 0xFF008080;
constexpr auto COLOR_THISTEL               = 0xFFD8BFD8;
constexpr auto COLOR_TOMATO                = 0xFFFF6347;
constexpr auto COLOR_TURQUOISE             = 0xFF40E0D0;
constexpr auto COLOR_VIOLET                = 0xFFEE82EE;
constexpr auto COLOR_WHEAT                 = 0xFFF5DEB3;
constexpr auto COLOR_WHITE                 = 0xFFFFFFFF;
constexpr auto COLOR_WHITESMOKE            = 0xFFF5F5F5;
constexpr auto COLOR_YELLOW                = 0xFFFFFF00;
constexpr auto COLOR_YELLOWGREEN           = 0xFF9ACD32;

/// @brief + Operator Overloading
/// @param vec1 DxLib::VECTOR
/// @param vec2 DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR operator+(const DxLib::VECTOR& vec1, const DxLib::VECTOR& vec2) noexcept {
  return DxLib::VAdd(vec1, vec2);
}

/// @brief + Operator Overloading
/// @param vec DxLib::VECTOR
/// @param value Value
/// @return DxLib::VECTOR
static DxLib::VECTOR operator+(const DxLib::VECTOR& vec, float value) noexcept {
  return DxLib::VGet(vec.x + value, vec.y + value, vec.z + value);
}

/// @brief + Operator Overloading
/// @param value Value
/// @param vec DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR operator+(float value, const DxLib::VECTOR& vec) noexcept {
  return DxLib::VGet(vec.x + value, vec.y + value, vec.z + value);
}

/// @brief - Operator Overloading
/// @param vec1 DxLib::VECTOR
/// @param vec2 DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR operator-(const DxLib::VECTOR& vec1, const DxLib::VECTOR& vec2) noexcept {
  return DxLib::VSub(vec1, vec2);
}

/// @brief - Operator Overloading
/// @param vec DxLib::VECTOR
/// @param value Value
/// @return DxLib::VECTOR
static DxLib::VECTOR operator-(const DxLib::VECTOR& vec, float value) noexcept {
  return DxLib::VGet(vec.x - value, vec.y - value, vec.z - value);
}

/// @brief - Operator Overloading
/// @param value Value
/// @param vec DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR operator-(float value, const DxLib::VECTOR& vec) noexcept {
  return DxLib::VGet(vec.x - value, vec.y - value, vec.z - value);
}

/// @brief * Operator Overloading
/// @param vec1 DxLib::VECTOR
/// @param vec2 DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR operator*(const DxLib::VECTOR& vec1, const DxLib::VECTOR& vec2) noexcept {
  return DxLib::VCross(vec1, vec2);
}

/// @brief * Operator Overloading
/// @param vec DxLib::VECTOR
/// @param value Value
/// @return DxLib::VECTOR
static DxLib::VECTOR operator*(const DxLib::VECTOR& vec, float value) noexcept {
  return DxLib::VGet(vec.x * value, vec.y * value, vec.z * value);
}

/// @brief * Operator Overloading
/// @param value Value
/// @param vec DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR operator*(float value, const DxLib::VECTOR& vec) noexcept {
  return DxLib::VGet(vec.x * value, vec.y * value, vec.z * value);
}

/// @brief += Operator Overloading
/// @param vec1 DxLib::VECTOR
/// @param vec2 DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator+=(DxLib::VECTOR& vec1, const DxLib::VECTOR& vec2) noexcept {
  vec1 += vec2;
  return vec1;
}

/// @brief += Operator Overloading
/// @param vec DxLib::VECTOR
/// @param value Value
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator+=(DxLib::VECTOR& vec, float value) noexcept {
  vec += value;
  return vec;
}

/// @brief += Operator Overloading
/// @param value Value
/// @param vec DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator+=(float value, DxLib::VECTOR& vec) noexcept {
  vec += value;
  return vec;
}

/// @brief -= Operator Overloading
/// @param vec1 DxLib::VECTOR
/// @param vec2 DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator-=(DxLib::VECTOR& vec1, const DxLib::VECTOR& vec2) noexcept {
  vec1 -= vec2;
  return vec1;
}

/// @brief -= Operator Overloading
/// @param vec DxLib::VECTOR
/// @param value Value
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator-=(DxLib::VECTOR& vec, float value) noexcept {
  vec -= value;
  return vec;
}

/// @brief -= Operator Overloading
/// @param value Value
/// @param vec DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator-=(float value, DxLib::VECTOR& vec) noexcept {
  vec -= value;
  return vec;
}

/// @brief *= Operator Overloading
/// @param vec1 DxLib::VECTOR
/// @param vec2 DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator*=(DxLib::VECTOR& vec1, const DxLib::VECTOR& vec2) noexcept {
  vec1 *= vec2;
  return vec1;
}

/// @brief *= Operator Overloading
/// @param vec DxLib::VECTOR
/// @param value Value
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator*=(DxLib::VECTOR& vec, float value) noexcept {
  vec *= value;
  return vec;
}

/// @brief *= Operator Overloading
/// @param value Value
/// @param vec DxLib::VECTOR
/// @return DxLib::VECTOR
static DxLib::VECTOR& operator*=(float value, DxLib::VECTOR& vec) noexcept {
  vec *= value;
  return vec;
}
