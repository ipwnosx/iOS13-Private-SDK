//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPNamedEntityClientProtocol <PPFeedbackAccepting>
- (void)namedEntityRecordBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(NSUInteger)arg4 completion:(void (^)(BOOL))arg5;
- (void)namedEntityBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(NSUInteger)arg4 completion:(void (^)(BOOL))arg5;
@end

