const audio = document.getElementById('background-music');
        const toggleButton = document.getElementById('toggle-music-button');
        const nameElement = document.getElementById('name');
        const avatarElement = document.getElementById('avatar');
        let isPlaying = false;

        toggleButton.addEventListener('click', function() {
            if (isPlaying) {
                audio.pause();
                toggleButton.textContent = 'Bật nhạc Chill . . .';
                nameElement.classList.remove('glow');
                avatarElement.classList.remove('glow-avatar');
            } else {
                audio.play();
                toggleButton.textContent = 'Tắt nhạc Chill . . .';
                nameElement.classList.add('glow');
                avatarElement.classList.add('glow-avatar');
            }
            isPlaying = !isPlaying;
        });

        // Hiệu ứng chói sáng dựa trên âm thanh (có thể thêm thêm hiệu ứng như nhịp điệu nhạc)
        audio.addEventListener('playing', function() {
            const interval = setInterval(() => {
                if (isPlaying) {
                    nameElement.classList.toggle('glow');
                    avatarElement.classList.toggle('glow-avatar');
                } else {
                    clearInterval(interval);
                }
            }, 500); // Thay đổi 500ms cho nhịp độ sáng
        });
    </script>
</body>
</html>
