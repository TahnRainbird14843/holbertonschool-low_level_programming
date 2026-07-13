GREEN EFFICIANCY ANALYSIS - Report by Tahn Rainbird for Holberton School

This reports aims to analyse and discuss algorithmic efficency and it's 
implications for minimising energy use of algorithms. All algorithms that were
used can be found at: 
https://github.com/TahnRainbird14843/holbertonschool-low_level_programming.git

Measurement Methodology:
For this report, clock_t and clock() from time.h were used to measure
algorithmic efficiency. This allows measurement of the computers internal
timing before and after an algorithm is run, which allows us to deduce how long
the algorithm took to run. This experiment compares two different algorithms:
Naive, and single-pass algorithms. The implementation of both of these can be
found in comparison_algorithms.c. To compare these two algorithms, there
execution times were measured using the previously outlined benchmarking
process. The average over 3 runs was taken to reduce the variance between runs.

Observed Performance Differences:
As outlined in comparison_algorithms-metrics.md, the Naive algorithm performed
~26 000 times slower than the single-pass algorithm. This is an improvement by
5 orders of magnitude, which is considered significant. For the implementation
and hardware used, this corresponds to the Naive algorithm taking ~2.7 seconds,
while the single-pass algorithm took only ~0.001 seconds. While the explicit
run-times is expected to vary between hardware, the relative efficiencies of 
the algorithms is expected to stay roughly constant. This is because the
measurements were taken relative to the computers internal clock, which is an
inherent restriction on how fast each computation is done. Thus a faster
internal clock will produce faster absolute run-times, but similar relative
run-times.

Relation Between Runtime and Energy Consumption:
Running computations requires energy. While the energy required for a single
computation is small, it adds up significantly in complex algorithms. At max
loads, CPU's can consume up to 300W. Thus, at max load, the Naive algorithm
would expend ~800W while the single-pass algorithm would expend only ~0.3W.
While 800W is still relatively low, this has significant implications for
algorithmic efficiency at the scales used for modern computations, such as in
AI algorithms. In such programs, training can occur over multiple hours. On
this scale, small changes in algorithmic efficiency can have massive
implications on run-time and energy consumption. For instance, if the Naive
algorithm were needed to be run 1 million times it would consume over 800MW, 
which is equivalent to the energy supply of 800 000 typical homes. Meanwhile a 
more efficient algorithm such as the single-pass algorithm would only consume 
300 000W, which is less than the consumption of only 1000 homes.

Limitations of the Experiment:
While this experiment did demonstrate significant run-time differences, this
only compared two small-scale algorithms, and was only peformed on one machine.
Therefore, the results and only applicable within a small set of conditions,
although it does demonstrate the need for a focus on efficiency in all coding
applications.

Practical Engineering Takeaway:
Speed of execution of code is extremely important. While modern technology is
still rapidly improving, factors such as energy consumption are still important
to bare in mind. This report demonstrates the importance of writing efficient
algorithms, and shows one way in which this can be measured and compared.
