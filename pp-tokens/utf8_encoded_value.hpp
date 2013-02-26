/*
  * Copyright (c) 2013 Benjamin Adamson
  *
  * Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"),
  * to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense,
  * and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
  *
  * The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
  * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
  * IN THE SOFTWARE.
*/
#pragma once
#include <cstdint>
#include "octet.hpp"
//
// namespace declarations
namespace psychic
{
  //
  // structure declarations
  struct utf8_encoded_value
  {
    //
    // members
    std::uint32_t octet_count;
    std::uint32_t value;

  public:
    //
    // constructors
    explicit utf8_encoded_value(void) : value(0U), octet_count(0U) { }
    explicit utf8_encoded_value(const std::uint32_t value, const std::uint32_t octet_count);
    explicit utf8_encoded_value(const octet octet);
    explicit utf8_encoded_value(const octet octet1, const octet octet2);
    explicit utf8_encoded_value(const octet octet1, const octet octet2, const octet octet3);
    explicit utf8_encoded_value(const octet octet1, const octet octet2, const octet octet3, const octet octet4);
  };
}