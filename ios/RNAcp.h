
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNRNAcpSpec.h"

@interface RNAcp : NSObject <NativeRNAcpSpec>
#else
#import <React/RCTBridgeModule.h>

@interface RNAcp : NSObject <RCTBridgeModule>
#endif

@end
