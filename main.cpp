#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("images/input.jpg");

    if (image.empty()) {
        std::cout << "Failed to load image!" << std::endl;
        return -1;
    }

    std::cout << "Image loaded successfully." << std::endl;

    cv::imwrite("results/output.jpg", image);

    return 0;
}
