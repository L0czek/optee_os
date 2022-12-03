#define SIGSEGV 11

inline void fuzzer_send_signal(int signal) {
    asm volatile (
        "mov x0, %0\n"
        "udf 142"
        : : "r"(signal) : "x0"
    );
}
