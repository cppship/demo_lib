#include "simple_lib/lib.h"

#include <fmt/core.h>
#include <scn/scn.h>
#include <header_only/lib.h>

std::string simple_lib::add(std::string_view str1, std::string_view str2)
{
    int x = 0;
    int y = 0;

    auto result = scn::scan(str1, "{}", x);
    if (!result) {
        return "";
    }

    result = scn::scan(str2, "{}", y);
    if (!result) {
        return "";
    }

    return header_only::concat("ans", fmt::format("{}", x + y));
}