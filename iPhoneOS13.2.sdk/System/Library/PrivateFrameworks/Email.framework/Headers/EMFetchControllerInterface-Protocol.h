//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSSet, NSString;

@protocol EMFetchControllerInterface <NSObject>
- (NSString *)diagnosticInformation;
- (void)setCurrentSuppressionContexts:(NSSet *)arg1 suppressedContexts:(NSSet *)arg2;
- (void)resetPushStateWithCompletion:(void (^)(BOOL, BOOL, int, NSError *))arg1;
- (void)downloadMessageBodiesWithCompletion:(void (^)(NSError *))arg1;
- (void)performFetchOfType:(int)arg1 mailboxName:(NSString *)arg2 completion:(void (^)(NSUInteger, NSError *))arg3;
- (void)performFetchOfType:(int)arg1 mailboxObjectIds:(NSArray *)arg2;
- (void)performFetchOfType:(int)arg1 accountIds:(NSArray *)arg2;
- (void)performFetchOfType:(int)arg1;
@end

