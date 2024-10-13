body {
    font-family: Arial, sans-serif;
    margin: 0;
    padding: 0;
    background-image: url('https://i.imgur.com/fFLOlXU.jpeg'); /* Hình nền */
    background-size: cover; /* Phủ kín hình nền */
    background-position: center; /* Căn giữa hình nền */
    height: 100vh; /* Chiều cao toàn bộ viewport */
}

.container {
    max-width: 600px;
    margin: auto;
    position: relative;
    top: 50%;
    transform: translateY(-50%); /* Căn giữa theo chiều dọc */
    text-align: center; /* Căn giữa tất cả văn bản */
}

.bio-section {
    background: rgba(255, 255, 255, 0.9); /* Nền trắng nhạt */
    padding: 40px;
    border-radius: 10px; /* Bo tròn góc */
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.5); /* Đổ bóng cho container */
    margin-bottom: 20px; /* Khoảng cách dưới phần trắng */
}

header {
    margin-bottom: 20px;
}

.profile-img {
    width: 100px; /* Đặt chiều rộng cho ảnh */
    height: 100px; /* Đặt chiều cao cho ảnh */
    border-radius: 50%; /* Cắt ảnh thành hình tròn */
    object-fit: cover; /* Đảm bảo ảnh không bị biến dạng */
    margin-bottom: 10px; /* Khoảng cách giữa ảnh và tên */
}

h1 {
    font-size: 32px;
    margin: 10px 0;
}

nav {
    text-align: center; /* Căn giữa các liên kết */
}

nav ul {
    list-style: none; /* Bỏ dấu đầu dòng */
    padding: 0; /* Bỏ khoảng cách padding */
}

nav ul li {
    margin: 15px 0; /* Khoảng cách giữa các liên kết */
}

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

footer {
    text-align: center;
    margin-top: 20px;
    font-size: 12px;
    color: #777;
}

/* Nút tắt/mở nhạc */
.toggle-music {
    margin-top: 20px; /* Khoảng cách trên nút */
    padding: 10px 20px; /* Padding cho nút */
    border: none; /* Bỏ viền */
    background-color: rgba(255, 255, 255, 0.8); /* Nền trắng nhạt */
    border-radius: 30px; /* Bo tròn góc */
    cursor: pointer; /* Hiệu ứng con trỏ khi hover */
    font-weight: bold; /* Chữ đậm */
    transition: background-color 0.3s; /* Hiệu ứng chuyển màu */
}

.toggle-music:hover {
    background-color: rgba(240, 240, 240, 0.9); /* Màu nền khi hover */
}
