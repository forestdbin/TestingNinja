#include <benchmark/benchmark.h>

void SomeFunction() {
  for (int i = 0; i < 1000; i++) {
    benchmark::DoNotOptimize(i);
  }
}

static void BM_SomeFunction(benchmark::State& state) {
  for (auto _ : state) {
    SomeFunction();
  }
}

BENCHMARK(BM_SomeFunction);

BENCHMARK_MAIN();
