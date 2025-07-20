# HỆ THỐNG QUẢN LÝ TUYỂN SINH SINH VIÊN - C++

## Giới thiệu

Dự án mô phỏng hệ thống quản lý tuyển sinh đại học, sử dụng ngôn ngữ C++. Áp
dụng kiến thức về cấu trúc dữ liệu, giải thuật và Git nâng cao trong quy trình phát triển

## Thành viên nhóm - Đức An - Phạm Cường - Đăng Dương

## Mục tiêu chức năng - Thêm/xoá/sửa sinh viên - Quản lý dữ liệu bằng file - Hiển thị danh sách sinh viên - Tìm kiếm theo mã/tên - Sắp xếp theo tên hoặc điểm - Làm việc nhóm qua GitHub + Git Flow

## Cấu trúc thư mục

```
student-admission/
├── include/
│   ├── student-struct.h        # Định nghĩa cấu trúc dữ liệu sinh viên
│   ├── majors.h
             #
Map các ngành học
│   └── constants.h             # Hằng số và cấu hình hệ thống
├── src/
│   └── student-management/
│       ├── quicksort.cpp       # Sắp xếp sinh viên
│       ├── display.cpp         # Hiển thị danh sách sinh viên
│       ├── insert-student.cpp  # Thêm sinh viên mới
│       ├── edit-student.cpp    # Chỉnh sửa thông tin sinh viên
│       ├── delete-student.cpp  # Xoá sinh viên
│       ├── student-search.cpp  # Tìm kiếm sinh viên
│       ├── file-handler.cpp    # Đọc/ghi file
│       └── main.cpp            # Tập tin chính
├── data/
│   └── students.txt            # Dữ liệu sinh viên
├── README.md
└── .gitignore
```
