find_package(OpenCV REQUIRED)

target_link_libraries(
    cuda_image_processing
    ${OpenCV_LIBS}
)
