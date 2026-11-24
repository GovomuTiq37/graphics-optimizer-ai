// suggest.cpp — part of graphics-optimizer-ai.

#include "graphicsoptimizerai/suggest.h"

#include <cstdio>

namespace graphicsoptimizerai {

Suggest::Suggest(const std::string& config_path)
    : config_path_(config_path) {}

void Suggest::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Suggest::run() {
    if (verbose_) std::fprintf(stderr, "[graphics-optimizer-ai] suggest: run\n");
    // core logic lives here
    return true;
}

}  // namespace graphicsoptimizerai
