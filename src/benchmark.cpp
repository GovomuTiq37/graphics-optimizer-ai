// benchmark.cpp — part of graphics-optimizer-ai.

#include "graphicsoptimizerai/benchmark.h"

#include <cstdio>

namespace graphicsoptimizerai {

Benchmark::Benchmark(const std::string& config_path)
    : config_path_(config_path) {}

void Benchmark::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Benchmark::run() {
    if (verbose_) std::fprintf(stderr, "[graphics-optimizer-ai] benchmark: run\n");
    // core logic lives here
    return true;
}

}  // namespace graphicsoptimizerai
