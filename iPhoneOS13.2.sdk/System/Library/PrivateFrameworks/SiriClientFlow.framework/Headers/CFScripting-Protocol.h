//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AFPeerInfo, NSArray, NSString, SACFAbstractClientCommand, SACFClientFlowScript, SACFSignal;

@protocol CFScripting
- (void)resetScriptExecutorCache;
- (void)sendClientFlowState;
- (void)killScripter;
- (void)removeScripts:(NSArray *)arg1 completion:(void (^)(BOOL))arg2;
- (void)updateScriptArchiveAtPath:(NSString *)arg1 completion:(void (^)(BOOL))arg2;
- (void)updateScriptCacheForFlowScript:(SACFClientFlowScript *)arg1 completion:(void (^)(BOOL))arg2;
- (void)performCommandExecutionForCommand:(SACFAbstractClientCommand *)arg1 peerInfo:(AFPeerInfo *)arg2 completion:(void (^)(SABaseCommand *))arg3;
- (void)cancelOperationsForRequestID:(NSString *)arg1;
- (void)runBootMaintenanceWithCompletion:(void (^)(BOOL))arg1;
- (void)warmUpWithSignal:(SACFSignal *)arg1 completion:(void (^)(BOOL))arg2;
- (void)scriptCheckSumDictionaryWithCompletion:(void (^)(NSDictionary *))arg1;
- (void)scriptCachePathWithCompletion:(void (^)(NSString *))arg1;
@end

