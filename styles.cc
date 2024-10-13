.container {
    max-width: 600px;
    margin: auto;
    background: transparent; /* Nền trong suốt */
    padding: 40px;
    border-radius: 10px;
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.5);
    position: relative;
    top: 50%;
    transform: translateY(-50%);
    text-align: center;
}

nav ul li a {
    display: inline-block;
    text-decoration: none;
    color: black; /* Màu chữ đen */
    background-color: transparent; /* Xóa màu nền, để trong suốt */
    padding: 15px 25px;
    border-radius: 30px;
    font-weight: bold;
    transition: background-color 0.3s, transform 0.2s;
}

nav ul li a:hover {
    background-color: rgba(240, 240, 240, 0.9); /* Màu nền khi hover */
}
