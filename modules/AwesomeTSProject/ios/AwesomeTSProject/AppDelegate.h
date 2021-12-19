#import <React/RCTBridgeDelegate.h>
#import <UIKit/UIKit.h>

// Firebase用の設定
@import Firebase;

@interface AppDelegate : UIResponder <UIApplicationDelegate, RCTBridgeDelegate>

@property (nonatomic, strong) UIWindow *window;

@end
