window.addEventListener('load', () => {
    const loading = document.getElementById('loading');
    const progress = document.querySelector('.progress');
    const percentage = document.getElementById('percentage');
    const audio = document.getElementById('background-music');
    let width = 0;

    // Tự động bật nhạc khi tải trang
    audio.play().catch(error => {
        console.log('Nhạc không thể tự động phát: ', error);
    });

    // Tạo một interval để cập nhật thanh tiến độ
    const loadingInterval = setInterval(() => {
        if (width >= 100) {
            clearInterval(loadingInterval); // Dừng khi đạt 100%
            loading.style.opacity = '0'; // Đưa loading vào trạng thái trong suốt
            setTimeout(() => {
                loading.style.display = 'none'; // Ẩn phần tử loading sau khi hiệu ứng
            }, 500); // Thời gian chờ để hiệu ứng hoàn tất
        } else {
            width++;
            progress.style.width = width + '%'; // Cập
