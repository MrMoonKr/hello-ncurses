# Dan Gookin's Guide to Ncurses Programming  

WIP ( Work in Progrss )  
학생들을 위한 c++ 직무 교육( OJT, On the job Training )을 위해서 생성 하였습니다.  
최신 버전 네이티브 개발 환경으로 프로젝트를 재구성 하였습니다.  


## 책 관련 링크  

- [Dan Gookin's Guide to Ncurses Programming [ 원서 ]](https://amzn.to/43K8oev)  

- [저자 홈페이지](https://c-for-dummies.com/ncurses/)  


## 개발 및 테스트 환경

유닉스 환경에서 출발한 ncurses 라이브러리 사용을 위해 윈도우에서 MinGW 환경으로 구성합니다  

- [개발 환경 구축](https://code.visualstudio.com/docs/cpp/config-mingw)  

- Windows 11 64bit  

- MinGW-w64 via MSYS2
  ```
  $ pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
  ```
  ```
  // 시스템 환경 변수 'PATH' 에 추가 등록  
  C:\msys64\ucrt64\bin
  ```
  ```
  $ gcc --version
  $ g++ --version
  $ gdb --version
  ```

- ncurses 라이브러리 설치
  ```
  $ pacman -S mingw-w64-ucrt-x86_64-ncurses  
  ```

- VS Code  

  - C/C++ Extension for VS Code
    - c_cpp_properties.json ( compiler path and IntelliSense settings )  
    - tasks.json ( build instructions )  
    - launch.json ( debugger settings )  
    - ...

- CMake  
  ```
  $ cmake --version
  ```

- vcpkg  
  ```
  $ vcpkg --version
  $ vcpkg new --application
  ```
- ...


## ...

---
---
---
