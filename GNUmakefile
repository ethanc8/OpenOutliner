include $(GNUSTEP_MAKEFILES)/common.make

APP_NAME = OpenOutliner
OpenOutliner_OBJC_FILES = AppDelegate.m main.m NSData+GZIP.m NSXMLElement+OO.m OOOutlineWindowController.m
OpenOutliner_OBJCC_FILES = NSAttributedString+OO3.mm NSColor+OO3.mm NSString+MissingCasts.mm OOColumnInspectorController.mm OOOutlineColumn.mm OOOutlineDataSource.mm OOOutlineDocument.mm OOOutlineRow.mm OOOutlineTableRowView.mm OOOutlineValue.mm OOOutlineView.mm OOStyleRegistry.mm OOUNIXDateFormatter.mm 

# FIXME-GNUstep: requires pasteboard
#  OOOutlineRow+Pasteboard.mm

# FIXME-GNUstep: We need to link to zlib

OpenOutliner_OBJCFLAGS += -fobjc-arc
OpenOutliner_OBJCCFLAGS += -fobjc-arc
OpenOutliner_CCFLAGS += -DOO_HAS_PASTEBOARD=0
OpenOutliner_GUI_LIBS += -lz 

# libbsd
OpenOutliner_GUI_LIBS += $(shell pkg-config --libs libbsd-overlay)
OpenOutliner_INCLUDE_DIRS += $(shell pkg-config --cflags-only-I libbsd-overlay)
OpenOutliner_OBJCFLAGS += $(shell pkg-config --cflags-only-other libbsd-overlay)
OpenOutliner_OBJCCFLAGS += $(shell pkg-config --cflags-only-other libbsd-overlay)

OpenOutliner_RESOURCE_FILES = Icon/DocIcon.icns \
	Icon/OpenOutliner.icns \
	Assets.xcassets \
	Base.lproj/OutlineDocumentWindow.xib \
	Base.lproj/Main.storyboard \
	ColumnInspector.xib
# OpenOutlinerInfo.plist

OpenOutliner_MAIN_STORYBOARD_FILE = Main.storyboard

include $(GNUSTEP_MAKEFILES)/application.make
