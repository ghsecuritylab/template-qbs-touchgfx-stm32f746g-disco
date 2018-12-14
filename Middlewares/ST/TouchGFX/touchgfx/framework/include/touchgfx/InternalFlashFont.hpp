/**
  ******************************************************************************
  * This file is part of the TouchGFX 4.10.0 distribution.
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#ifndef INTERNALFLASHFONT_HPP
#define INTERNALFLASHFONT_HPP

#include <touchgfx/ConstFont.hpp>

namespace touchgfx
{
/**
 * @class InternalFlashFont InternalFlashFont.hpp touchgfx/InternalFlashFont.hpp
 *
 * @brief An InternalFlashFont has both glyph table and glyph data placed in a flash which supports
 *        random access read (i.e. not a NAND flash).
 *
 *        An InternalFlashFont has both glyph table and glyph data placed in a flash which
 *        supports random access read (i.e. not a NAND flash)
 *
 * @see ConstFont
 */
class InternalFlashFont : public ConstFont
{
public:

    /**
     * @fn InternalFlashFont::InternalFlashFont(const GlyphNode* list, uint16_t size, uint16_t height, uint8_t pixBelowBase, uint8_t bitsPerPixel, uint8_t maxLeft, uint8_t maxRight, const uint8_t* glyphDataInternalFlash, const KerningNode* kerningList, const Unicode::UnicodeChar fallbackChar, const Unicode::UnicodeChar ellipsisChar);
     *
     * @brief Constructor.
     *
     *        Construct the InternalFlashFont.
     *
     * @param list                   The array of glyphs known to this font.
     * @param size                   The number of glyphs in list.
     * @param height                 The height in pixels of the highest character in this font.
     * @param pixBelowBase           The maximum number of pixels that can be drawn below the
     *                               baseline in this font.
     * @param bitsPerPixel           The number of bits per pixel in this font.
     * @param maxLeft                The maximum a character extends to the left.
     * @param maxRight               The maximum a character extends to the right.
     * @param glyphDataInternalFlash Pointer to the glyph data for the font, placed in internal
     *                               flash.
     * @param kerningList            pointer to the kerning data for the font, placed in internal
     *                               flash.
     * @param fallbackChar           The fallback character for the typography in case no glyph is
     *                               available.
     * @param ellipsisChar           The ellipsis character used for truncating long texts.
     */
    InternalFlashFont(const GlyphNode* list, uint16_t size, uint16_t height, uint8_t pixBelowBase, uint8_t bitsPerPixel, uint8_t maxLeft, uint8_t maxRight, const uint8_t* glyphDataInternalFlash, const KerningNode* kerningList, const Unicode::UnicodeChar fallbackChar, const Unicode::UnicodeChar ellipsisChar);

    /**
     * @fn virtual const uint8_t* InternalFlashFont::getPixelData(const GlyphNode* glyph) const;
     *
     * @brief Obtains a RAM-based pointer to the pixel data for the specified glyph.
     *
     *        Obtains a RAM-based pointer to the pixel data for the specified glyph.
     *
     * @param glyph The glyph to get the pixels data of.
     *
     * @return The pixel data of the glyph.
     */
    virtual const uint8_t* getPixelData(const GlyphNode* glyph) const;

    /**
     * @fn virtual int8_t InternalFlashFont::getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const;
     *
     * @brief Gets the kerning distance between two characters.
     *
     *        Gets the kerning distance between two characters.
     *
     * @param prevChar The unicode value of the previous character.
     * @param glyph    the glyph object for the current character.
     *
     * @return The kerning distance between prevChar and glyph char.
     */
    virtual int8_t getKerning(Unicode::UnicodeChar prevChar, const GlyphNode* glyph) const;

private:
    InternalFlashFont() : ConstFont(0, 0, 0, 0, 0, 0, 0, 0, 0) { }
    const uint8_t* glyphData;       ///< Information describing the glyph
    const KerningNode* kerningData; ///< Information describing the kerning
};
} // namespace touchgfx

#endif // INTERNALFLASHFONT_HPP
