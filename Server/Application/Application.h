
#import <Foundation/Foundation.h>
#import <UIKit/UIApplication.h>
#import "XCUIApplicationStateTypedef.h"

@class XCUIApplication;

/**
 DeviceAgent wrapper class for XCUIApplication
 */
@interface Application : NSObject
/**
 Convenience method to launch an app. Sets the launched app as the `currentApplication`

 @param bundlePath Optional bundle path for an application to launch. If specified,
 Xcode might install that app onto the device. Currently it only seems to work with bundles
 generated by Xcode. We have not determined a way to make this work with payloads from
 signed .ipas.

 @param bundleID The only necessary parameter. Please ensure this corresponds to an app that
 is currently installed on the device/sim, else undefined behavior will occur.
 is currently running on the device/sim, else undefined behavior will occur.

 @param launchArgs Arguments to pass to the application upon launch.
 @param environment Key-value dict of environment variables to pass to the app upon launch.
 @param terminateIfRunning If true and the application with bundle id is running,
 then DeviceAgent will terminate the app before relaunching.
 */
+ (void)launchBundlePath:(NSString *_Nullable)bundlePath
                bundleID:(NSString *_Nonnull)bundleID
              launchArgs:(NSArray *_Nullable)launchArgs
                     env:(NSDictionary *_Nullable)environment
      terminateIfRunning:(BOOL)terminateIfRunning;

/**A reference to the currently running application. */
+ (XCUIApplication *_Nonnull)currentApplication;

/**
 Attempt to terminate the current application.
 @return the XCUIApplicationState
 */
+ (XCUIApplicationState)terminateCurrentApplication;

/**
 Terminate the application with bundle identifier.

 @param bundleIdentifier app to terminate
 @return the XCUIApplicationState
 */
+ (XCUIApplicationState)terminateApplicationWithIdentifier:(NSString *_Nullable)bundleIdentifier;

/**
 Terminate the application.

 @param application The application to terminate
 @return the XCUIApplicationState
 */
+ (XCUIApplicationState)terminateApplication:(XCUIApplication *_Nullable)application;

/**
 Returns true if the current application has a session.
 */
+ (BOOL)hasSession;

@end
