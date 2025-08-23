┌───────────────────────────────┐
│           main()              │
└──────────────┬────────────────┘
               │  while (isRunning)
               ▼
     ┌───────────────────────┐
     │ LoginUI::dangNhap()   │  ← Nhập username/password
     └──────────┬────────────┘
                │  gọi
                ▼
       ┌─────────────────┐
       │ AuthService     │  ← Kiểm tra nghiệp vụ
       └───────┬─────────┘
               │  gọi
               ▼
        ┌───────────────┐
        │ UserRepo      │  ← Đọc users.txt, tìm user
        └──────┬────────┘
               │  trả User (có/không)
               ▼
       ┌─────────────────┐
       │ AuthService     │  ← So khớp mật khẩu, trả User hợp lệ
       └───────┬─────────┘
               │  trả User cho UI
               ▼
     ┌───────────────────────┐
     │ LoginUI::dangNhap()   │  ← In kết quả, return User
     └──────────┬────────────┘
                │
                ├── Nếu User rỗng → isRunning=false → Thoát
                │
                └── Nếu User hợp lệ:
                      ├─ role=="student" → StudentUI.showMenu()
                      └─ role=="manager" → ManagerUI.showMenu()
                             │
                             └─ Người dùng chọn “Đăng xuất”
                                   → return về main → vòng lặp lặp lại
