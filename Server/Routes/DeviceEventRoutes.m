
#import "DeviceEventRoutes.h"
#import "XCDeviceEvent.h"
#import "Testmanagerd.h"
#import "CBXMacros.h"

/*
    TODO:
 
    Study the internals of
        http://www.opensource.apple.com/source/IOHIDFamily/IOHIDFamily-421.6/IOHIDFamily/IOHIDUsageTables.h
    and
        http://www.opensource.apple.com/source/IOHIDFamily/IOHIDFamily-421.6/IOHIDFamily/AppleHIDUsageTables.h
 
    These two tables seem to define what values are possible for XCDeviceEvent page and usage. However,
    the meanings are pretty non-obvious...
 */

#define HOME_BUTTON_PAGE 0x0C //not entirely accurate description
#define PRESS 0x40 //not entirely accurate description, but I don't have a better one

@implementation DeviceEventRoutes
+ (NSArray <CBXRoute *> *)getRoutes {
    return @[
             [CBXRoute post:endpoint(@"/home", 1.0) withBlock:^(RouteRequest *request, NSDictionary *data, RouteResponse *response) {
                 int page = HOME_BUTTON_PAGE;
                 int usage = PRESS;
                 int duration = 1;
                 XCDeviceEvent *event = [XCDeviceEvent deviceEventWithPage:page usage:usage duration:duration];
                 
                 [[Testmanagerd get] _XCT_performDeviceEvent:event completion:^(NSError *e) {
                     if (e) {
                         NSLog(@"%@", e);
                     }
                 }];
             }],
             [CBXRoute post:endpoint(@"/siri", 1.0) withBlock:^(RouteRequest *request, NSDictionary *data, RouteResponse *response) {
                 int page = HOME_BUTTON_PAGE;
                 int usage = PRESS;
                 int duration = 5;
                 XCDeviceEvent *event = [XCDeviceEvent deviceEventWithPage:page usage:usage duration:duration];
                 
                 [[Testmanagerd get] _XCT_performDeviceEvent:event completion:^(NSError *e) {
                     if (e) {
                         NSLog(@"%@", e);
                     }
                 }];
             }],
             [CBXRoute post:endpoint(@"/orientation", 1.0) withBlock:^(RouteRequest *request, NSDictionary *data, RouteResponse *response) {
                 long long orientation = [data[@"orientation"] longLongValue];
                 
                 [[Testmanagerd get] _XCT_updateDeviceOrientation:orientation completion:^(NSError *e) {
                     if (e) {
                         NSLog(@"%@", e);
                     }
                 }];
             }]
             ];
}
@end