/* DO NOT EDIT THIS FILE */
/* This file is autogenerated by the text-database code generator */

#ifndef APPLICATIONFONTPROVIDER_HPP
#define APPLICATIONFONTPROVIDER_HPP

#include <touchgfx/FontManager.hpp>

struct Typography
{
  static const touchgfx::FontId DEMOVIEW_MCULOAD_TEXT = 0;
  static const touchgfx::FontId DEMOVIEW_MCULOAD_TEXT_SMALL = 1;
  static const touchgfx::FontId POSTERTEXT = 2;
  static const touchgfx::FontId POSTERHEADLINE = 3;
  static const touchgfx::FontId POSTERTEXTJAPANESE = 4;
  static const touchgfx::FontId POSTERHEADLINEJAPANESE = 5;
  static const touchgfx::FontId POSTERTEXTUKR = 6;
  static const touchgfx::FontId POSTERHEADLINEUKR = 7;
  static const touchgfx::FontId THREEWAYPROGRESSBARPERCENTAGE = 8;
  static const touchgfx::FontId THREEWAYPROGRESSBARBUTTON = 9;
  static const touchgfx::FontId CUSTOMCONTROLSSTATUS = 10;
  static const touchgfx::FontId PERCENTAGEBARREADOUT = 11;
  static const touchgfx::FontId PERCENTAGEBARHEADLINE = 12;
  static const touchgfx::FontId DATEPICKER = 13;
  static const touchgfx::FontId EASINGEQUATION = 14;
  static const touchgfx::FontId EASINGEQUATIONBUTTON = 15;
  static const touchgfx::FontId GRAPH_Y_VALUE = 16;
  static const touchgfx::FontId GRAPH_LEGEND = 17;
  static const touchgfx::FontId GRAPH_LEGEND_VALUE = 18;
};

class ApplicationFontProvider : public touchgfx::FontProvider
{
public:
  virtual touchgfx::Font* getFont(touchgfx::FontId fontId);
};

#endif /* APPLICATIONFONTPROVIDER_HPP */
