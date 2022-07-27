# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtest_aes_128.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Threaded output mode?  0/1/N threads (from --threads)
VM_THREADS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0
# Tracing threaded output mode?  0/1/N threads (from --threads/--trace-thread)
VM_TRACE_THREADS = 0
# Separate FST writer thread? 0/1 (from --trace-fst with --trace-thread > 0)
VM_TRACE_FST_WRITER_THREAD = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtest_aes_128 \
	Vtest_aes_128___024root__DepSet_hb30f3369__0 \
	Vtest_aes_128___024root__DepSet_h525c4dd3__0 \
	Vtest_aes_128_one_round__DepSet_h93979d76__0 \
	Vtest_aes_128_T__DepSet_h07b466c9__0 \
	Vtest_aes_128_T__DepSet_ha8ff4ea2__0 \
	Vtest_aes_128_T__DepSet_he5d824d5__0 \
	Vtest_aes_128_S__DepSet_h5ddfc6b4__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtest_aes_128__ConstPool_0 \
	Vtest_aes_128___024root__Slow \
	Vtest_aes_128___024root__DepSet_hb30f3369__0__Slow \
	Vtest_aes_128___024root__DepSet_h525c4dd3__0__Slow \
	Vtest_aes_128_one_round__Slow \
	Vtest_aes_128_one_round__DepSet_hc6d07b2e__0__Slow \
	Vtest_aes_128_T__Slow \
	Vtest_aes_128_T__DepSet_h07b466c9__0__Slow \
	Vtest_aes_128_T__DepSet_ha8ff4ea2__0__Slow \
	Vtest_aes_128_S__Slow \
	Vtest_aes_128_S__DepSet_h931ba623__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtest_aes_128__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
