#import <inttypes.h>
#import <AppKit/NSColorSpace.h>
#import <Foundation/NSAttributedString.h>

typedef uint8_t UInt8;
typedef uint32_t UInt32;

#ifdef GNUSTEP
enum {
  NSColorSpaceModelUnknown = NSUnknownColorSpaceModel,
  NSColorSpaceModelGray = NSGrayColorSpaceModel,
  NSColorSpaceModelRGB = NSRGBColorSpaceModel,
  NSColorSpaceModelCMYK = NSCMYKColorSpaceModel,
  NSColorSpaceModelLAB = NSLABColorSpaceModel,
  NSColorSpaceModelDeviceN = NSDeviceNColorSpaceModel
};

typedef enum _NSUnderlineStyle NSUnderlineStyle;

typedef NSString * NSKeyValueChangeKey;
#endif
