#import <Foundation/Foundation.h>

@interface MJUpdate : NSObject

@property NSString* newerVersion;
@property NSString* yourVersion;
@property BOOL canAutoInstall;

+ (void) checkForUpdate:(void(^)(MJUpdate* updater, NSError* connError))handler;
- (void) install:(void(^)(NSString* error, NSString* reason))handler;

@end
