
#include <iostream>
#include <fmt/core.h>
#include <version/version.h>

int main()
{
    fmt::print("Project: {}\n", projectName());

    fmt::print("Version: {}.{}.{}\n",
        major(), minor(), patch());

    fmt::print("Full: {}\n", fullVersion());

    return 0;
}
