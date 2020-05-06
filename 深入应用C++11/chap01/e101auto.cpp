// auto基本用法
auto x = 5;
auto pi = new auto(1); // pi被推导为int*   【lionel，可以new auto，那auto到底占几位呢？】
const auto *v = &x, u = 6;
