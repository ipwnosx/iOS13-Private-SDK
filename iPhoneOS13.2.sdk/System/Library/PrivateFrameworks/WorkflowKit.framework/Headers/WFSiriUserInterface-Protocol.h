//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFUserInterface-Protocol.h>

@class INIntent, INInteraction, NSArray, NSString, NSURL, NSUserActivity;

@protocol WFSiriUserInterface <WFUserInterface>
@property(readonly, nonatomic) long long executionContext;
@property(readonly, copy, nonatomic) NSArray *airPlayRouteIDs;
- (void)configureIntent:(INIntent *)arg1;
- (BOOL)executeIntent:(INIntent *)arg1 completionHandler:(void (^)(INInteraction *, NSError *))arg2;
- (void)openUserActivity:(NSUserActivity *)arg1 bundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)openURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (void)openInteractionInApp:(INInteraction *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)showInteractionIfNeeded:(INInteraction *)arg1 requiringConfirmation:(BOOL)arg2 requiringAuthentication:(BOOL)arg3 executionStage:(long long)arg4 completionHandler:(void (^)(BOOL, NSError *))arg5;
- (void)speakText:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
@end

