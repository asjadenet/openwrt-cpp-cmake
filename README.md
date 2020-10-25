# openwrt-cpp-cmake

```
cd
git clone https://github.com/openwrt/openwrt
cd openwrt

# Install packages from feeds
./scripts/feeds update -a
./scripts/feeds install -a

# Install the package manually
cd
git clone https://github.com/asjadenet/openwrt-cpp-cmake.git
cp -rf openwrt-cpp-cmake/package/cpp20features ~/openwrt/package/
cp -rf openwrt-cpp-cmake/package/cppfeatures ~/openwrt/package/
cp -rf openwrt-cpp-cmake/package/hellocpp ~/openwrt/package/
cp -rf openwrt-cpp-cmake/build* ~/openwrt/
cp -rf openwrt-cpp-cmake/Toolchain-mips.cmake ~/openwrt/

cd ~/openwrt
make defconfig
```

