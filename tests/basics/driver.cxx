#include <cassert>
#include <sstream>
#include <stdexcept>

#include <libcrow/version.hxx>
#include <libcrow/crow.hxx>

int main ()
{
  using namespace std;
  using namespace crow;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
