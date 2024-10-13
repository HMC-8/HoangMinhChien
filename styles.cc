.bio-section {
    background: rgba(255, 255, 255, 0.5); /* Nền trắng siêu nhạt */
    padding: 10px; /* Padding nhỏ hơn */
    border-radius: 10px; /* Bo tròn góc */
    box-shadow: 0 0 10px rgba(0, 0, 0, 0.3); /* Đổ bóng cho container */
    margin-bottom: 20px; /* Khoảng cách dưới phần trắng */
}
#loading {
    position: fixed;
    top: 0;
    left: 0;
    width: 100%;
    height: 100%;
    background-color: rgba(255, 255, 255, 0.8);
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    z-index: 1000;
}

.progress-container {
    width: 80%;
    background: #e0e0e0;
    border-radius: 20px;
    overflow: hidden;
    margin: 20px 0;
}

.progress {
    height: 20px;
    width: 0;
    background: green; /* Màu xanh lá */
    transition: width 0.3s; /* Thêm hiệu ứng chuyển động */
}

#percentage {
    font-size: 20px;
    color: green; /* Màu chữ của phần trăm */
}
