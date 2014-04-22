
/* This file is generated by gen_blas.py in the root of the distribution */
#ifndef GPUARRAY_BLAS_H
#define GPUARRAY_BLAS_H

#include <gpuarray/buffer_blas.h>
#include <gpuarray/array.h>

#ifdef __cplusplus
extern "C" {
#endif

GPUARRAY_PUBLIC int GpuArray_rgemv(cb_transpose transA, double alpha, GpuArray *A, GpuArray *X, double beta, GpuArray *Y,
                                        int nocopy);
#define GpuArray_sgemv GpuArray_rgemv
#define GpuArray_dgemv GpuArray_rgemv
GPUARRAY_PUBLIC int GpuArray_rgemm(cb_transpose transA, cb_transpose transB, double alpha, GpuArray *A, GpuArray *B, double beta, GpuArray *C,
                                        int nocopy);
#define GpuArray_sgemm GpuArray_rgemm
#define GpuArray_dgemm GpuArray_rgemm
GPUARRAY_PUBLIC int GpuArray_rger(double alpha, GpuArray *X, GpuArray *Y, GpuArray *A,
                                        int nocopy);
#define GpuArray_sger GpuArray_rger
#define GpuArray_dger GpuArray_rger

#ifdef __cplusplus
}
#endif

#endif