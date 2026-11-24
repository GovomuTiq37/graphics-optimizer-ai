// apply.cpp — part of graphics-optimizer-ai.

#include "graphicsoptimizerai/apply.h"

#include <cstdio>

namespace graphicsoptimizerai {

Apply::Apply(const std::string& config_path)
    : config_path_(config_path) {}

void Apply::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Apply::run() {
    if (verbose_) std::fprintf(stderr, "[graphics-optimizer-ai] apply: run\n");
    // core logic lives here
    return true;
}

}  // namespace graphicsoptimizerai
