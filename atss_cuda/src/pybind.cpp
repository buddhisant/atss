#include <torch/extension.h>
#include <vector>

using namespace at;

Tensor nms(Tensor boxes, Tensor scores, float iou_threshold);

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m)
{
    m.def("nms", &nms, "nms (CPU/CUDA) ", py::arg("boxes"), py::arg("scores"), py::arg("iou_threshold"));
}