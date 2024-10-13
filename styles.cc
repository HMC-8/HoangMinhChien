nav ul li a {
    display: inline-block; /* Hiển thị dưới dạng khối để dễ đóng khung */
    text-decoration: none; /* Bỏ gạch chân */
    color: black; /* Màu chữ đen */
    background-color: rgba(255, 255, 255, 0.8); /* Màu nền trắng nhạt */
    padding: 15px 25px; /* Khoảng cách bên trong */
    border-radius: 30px; /* Bo tròn góc */
    border: 2px solid white; /* Viền trắng đậm */
    font-weight: bold; /* Chữ đậm */
    transition: background-color 0.3s, transform 0.2s; /* Hiệu ứng chuyển màu và phóng to */
}

nav ul li a:hover {
    background-color: rgba(240, 240, 240, 0.9); /* Màu nền khi hover */
    transform: scale(1.05); /* Tăng kích thước khi hover */
}
