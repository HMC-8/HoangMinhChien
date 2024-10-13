window.addEventListener('load', () => {
    const loading = document.getElementById('loading');
    const audio = document.getElementById('background-music');

    // Tự động bật nhạc khi tải trang
    audio.play().catch(error => {
        console.log('Nhạc không thể tự động phát: ', error);
    });

    // Giữ vòng xoay trong 3 giây trước khi chuyển vào trang
    setTimeout(() => {
        loading.style.opacity = '0'; // Đưa loading vào trạng thái trong suốt
        setTimeout(() => {
            loading.style.display = 'none'; // Ẩn phần tử loading sau khi hiệu ứng
        }, 500); // Thời gian chờ để hiệu ứng hoàn tất
    }, 3000); // Thời gian giữ vòng xoay (3 giây)
});
