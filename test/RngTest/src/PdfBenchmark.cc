#include "PdfBenchmarker.h"
#include <iostream>

using namespace vecrng;

int main(int argc, char *argv[]) {
  // default run
  int nsample = 1000000;
  int nrepetition = 100;

  if (argc >= 2)
    nsample = atoi(argv[1]);
  if (argc >= 3)
    nrepetition = atoi(argv[2]);

  PdfBenchmarker tester;
  tester.SetNSample(nsample);
  tester.SetRepetition(nrepetition);

  int status = tester.RunBenchmark();

  if (status == 1)
    std::cout << "Run PdfBenchmark Failed" << std::endl;

  return status;
}
