// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XCTRunnerAutomationSession-Protocol.h"

@protocol XCUIApplicationAutomationSessionProviding <NSObject>
- (void)requestAutomationSessionBlacklist:(void (^)(NSSet *, NSError *))arg1;
- (void)requestAutomationSessionForTestTargetWithPID:(NSInteger)arg1 preferredBackendPath:(NSString *)arg2 reply:(void (^)(id <XCTRunnerAutomationSession>, NSError *))arg3;
@end

