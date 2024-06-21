# Tên của dự án và yêu cầu phiên bản CMake
cmake_minimum_required(VERSION 3.5)
project(TourBookingApp)

# Thiết lập các biến
set(CMAKE_CXX_STANDARD 11)
set(SOURCES 
    Services/NecessaryLib.h 
    HomeView.h
    Services/OSConfig.h
    View/CustomerView/CustomerView_Home.h
    View/AdminView/AdminView_Home.h
)
set(SOURCES 
    TourBookingApp.cpp 
    HomeView.cpp
    Services/OSConfig.cpp
    View/CustomerView/CustomerView_Home.cpp
    View/AdminView/AdminView_Home.cpp
)
# Danh sách các file nguồn của dự án

# Tạo target cho file thực thi
add_executable(TourBookingApp ${SOURCES})
