window.addEventListener('load', () => {
    const loading = document.getElementById('loading');
    const progress = document.querySelector('.progress');
    const percentage = document.getElementById('percentage');
    const audio = document.getElementById('background-music');
    let width = 0;

    const loadingInterval = setInterval(() => {
        if (width >= 100) {
            clearInterval(loadingInterval); // Dừng khi đạt 100%
            loading.style.display = 'none'; // Ẩn phần tử loading
            
            // Tự động bật nhạc khi tải xong
            audio.play().catch(error => {
                console.log('Nhạc không thể tự động phát: ', error);
            });
        } else {
            width++;
            progress.style.width = width + '%'; // Cập nhật độ rộng thanh chạy
            percentage.innerText = width + '%'; // Cập nhật tỷ lệ phần trăm
        }
    }, 30); // Thay đổi thời gian để điều chỉnh tốc độ
});
