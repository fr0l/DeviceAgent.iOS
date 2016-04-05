//
//  CBDragCoordinate.m
//  CBXDriver
//
//  Created by Chris Fuentes on 3/20/16.
//  Copyright © 2016 Calabash. All rights reserved.
//

#import "CBDragCoordinates.h"

@implementation CBDragCoordinates
+ (NSString *)name { return @"drag_coordinates"; }
- (NSArray <NSString *> *)requiredOptions { return @[ CB_COORDINATES_KEY ]; }

- (void)validate {
    if (![self.query coordinates] || [self.query coordinates].count < 2) {
        NSString *msg = @"DragCoordinates requires at least 2 coordinates. Coordinate syntax is [ x, y ] or { x : #, y : # }.";
        @throw [CBInvalidArgumentException withFormat:@"[%@] %@ Query: %@", self.class.name, msg, [self.query toJSONString]];
    }
    for (id coordJSON in [self.query coordinates]) {
        [JSONUtils validatePointJSON:coordJSON];
    }
}

- (XCSynthesizedEventRecord *)event {
    XCSynthesizedEventRecord *event = [[XCSynthesizedEventRecord alloc] initWithName:self.class.name
                                                                interfaceOrientation:0];
    float duration = self.query[CB_DURATION_KEY] ?
        [self.query[CB_DURATION_KEY] floatValue] :
        CB_DEFAULT_DURATION;
    
    CGPoint coordinate = [JSONUtils pointFromCoordinateJSON:[self.query coordinates].firstObject];
    XCPointerEventPath *path = [[XCPointerEventPath alloc] initForTouchAtPoint:coordinate
                                                                        offset:0];
    
    for (id coordinateJSON in [self.query coordinates]) {
        if (coordinateJSON == [self.query coordinates].firstObject) { continue; }
        duration += duration;
        coordinate = [JSONUtils pointFromCoordinateJSON:coordinateJSON];
        [path moveToPoint:coordinate atOffset:duration];
    }
    
    [path liftUpAtOffset:duration];
    [event addPointerEventPath:path];
    
    return event;
}

- (XCTouchGesture *)gesture {
    XCTouchGesture *gesture = [[XCTouchGesture alloc] initWithName:self.class.name];
    
    CGPoint coordinate = [JSONUtils pointFromCoordinateJSON:[self.query coordinates].firstObject];
    float duration = self.query[CB_DURATION_KEY] ?
        [self.query[CB_DURATION_KEY] floatValue] :
        CB_DEFAULT_DURATION;
    
    XCTouchPath *path = [[XCTouchPath alloc] initWithTouchDown:coordinate
                                                   orientation:0
                                                        offset:0];
    for (id coordinateJSON in [self.query coordinates]) {
        if (coordinateJSON == [self.query coordinates].firstObject) { continue; }
        duration += duration;
        coordinate = [JSONUtils pointFromCoordinateJSON:coordinateJSON];
        [path moveToPoint:coordinate atOffset:duration];
    }
    duration += CB_GESTURE_EPSILON;
    
    [path liftUpAtPoint:coordinate
                 offset:duration];
    [gesture addTouchPath:path];
    return gesture;
}
@end
