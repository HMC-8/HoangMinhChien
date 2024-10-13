.container {
    max-width: 600px;
    margin: auto;
    background: rgba(255, 255, 255, 0.9); /* Nền trắng nhạt */
    padding: 40px;
    border-radius: 10px; /* Bo tròn góc */
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.5); /* Đổ bóng cho container */
    position: relative;
    top: 50%;
    transform: translateY(-50%); /* Căn giữa theo chiều dọc */
    text-align: center; /* Căn giữa tất cả văn bản */
}

nav ul li a {
    display: inline-block; /* Hiển thị dưới dạng khối để dễ đóng khung */
    text-decoration: none; /* Bỏ gạch chân */
    color: black; /* Màu chữ đen */
    background-color: rgba(255, 255, 255, 0.8); /* Màu nền trắng nhạt cho các liên kết */
    padding: 15px 25px; /* Khoảng cách bên trong */
    border-radius: 30px; /* Bo tròn góc */
    font-weight: bold; /* Chữ đậm */
    transition: background-color 0.3s, transform 0.2s; /* Hiệu ứng chuyển màu và phóng to */
}

nav ul li a:hover {
    background-color: rgba(240, 240, 240, 0.9); /* Màu nền khi hover */
}
