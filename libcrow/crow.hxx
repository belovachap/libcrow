#pragma once

#include <iosfwd>
#include <string>

#include <libcrow/export.hxx>

namespace crow
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  LIBCROW_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
