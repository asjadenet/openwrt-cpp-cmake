#
# This software is licensed under the Public Domain.
#

include $(TOPDIR)/rules.mk

PKG_NAME:=hellocpp
PKG_VERSION:=0.1
PKG_RELEASE:=1

PKG_MAINTAINER:=Tiit Ülejõe <tiit@infokiir.ee>
PKG_LICENSE:=CC0-1.0


include $(INCLUDE_DIR)/package.mk
include $(INCLUDE_DIR)/cmake.mk

define Package/$(PKG_NAME)
	SECTION:=utils
	# Select package by default
	DEFAULT:=y
	CATEGORY:=Utilities
	TITLE:=C++ program $(PKG_NAME).
	DEPENDS:=$(DRV_DEPENDS) +libstdcpp
	URL:=https://www.infokiir.ee
endef

define Package/$(PKG_NAME)/description
	C++ program $(PKG_NAME).
endef

define Build/Prepare
	mkdir -p $(PKG_BUILD_DIR)
	$(CP) ./src/* $(PKG_BUILD_DIR)/
endef

define Package/$(PKG_NAME)/install
	$(INSTALL_DIR) $(1)/usr/bin
	$(INSTALL_BIN) $(PKG_BUILD_DIR)/$(PKG_NAME) $(1)/usr/bin/
endef

$(eval $(call BuildPackage,$(PKG_NAME)))
