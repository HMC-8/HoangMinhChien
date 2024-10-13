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
    background: rgba(255, 255, 255, 0.9); /* Nền trắng trong suốt */
    padding: 40px;
    border-radius: 10px; /* Bo tròn góc */
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.5); /* Đổ bóng cho container */
    position: relative;
    top: 50%;
    transform: translateY(-50%); /* Căn giữa theo chiều dọc */
    text-align: center; /* Căn giữa tất cả văn bản */
}

header {
    margin-bottom: 20px;
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
    color: white; /* Màu chữ */
    background-color: #007BFF; /* Màu nền */
    padding: 15px 25px; /* Khoảng cách bên trong */
    border-radius: 30px; /* Bo tròn góc */
    font-weight: bold; /* Chữ đậm */
    transition: background-color 0.3s, transform 0.2s; /* Hiệu ứng chuyển màu và phóng to */
}

nav ul li a:hover {
    background-color: #0056b3; /* Màu nền khi hover */
    transform: scale(1.05); /* Tăng kích thước khi hover */
}

footer {
    text-align: center;
    margin-top: 20px;
    font-size: 12px;
    color: #777;
}
