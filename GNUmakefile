include $(GNUSTEP_MAKEFILES)/common.make

APP_NAME = OpenOutliner
OpenOutliner_OBJC_FILES = AppDelegate.m main.m NSData+GZIP.m NSXMLElement+OO.m OOOutlineWindowController.m
OpenOutliner_OBJCC_FILES = NSAttributedString+OO3.mm NSColor+OO3.mm NSString+MissingCasts.mm OOColumnInspectorController.mm OOOutlineColumn.mm  OOOutlineDocument.mm OOOutlineRow.mm OOOutlineTableRowView.mm OOOutlineValue.mm OOStyleRegistry.mm OOUNIXDateFormatter.mm

# FIXME-GNUstep: requires pasteboard
# OOOutlineDataSource.mm OOOutlineRow+Pasteboard.mm OOOutlineView.mm

# FIXME-GNUstep: We need to link to zlib

OpenOutliner_OBJCFLAGS = -fobjc-arc
OpenOutliner_OBJCCFLAGS = -fobjc-arc

OpenOutliner_HAS_RESOURCE_BUNDLE = yes
OpenOutliner_RESOURCE_FILES = Main.storyboard OutlineDocumentWindow.xib
OpenOutliner_RESOURCE_FILES_DIR = Base.lproj

include $(GNUSTEP_MAKEFILES)/application.make
