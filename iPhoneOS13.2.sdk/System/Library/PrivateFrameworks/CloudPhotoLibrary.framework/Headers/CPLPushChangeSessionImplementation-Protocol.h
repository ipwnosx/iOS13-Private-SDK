//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSessionImplementation-Protocol.h>

@class CPLChangeBatch;

@protocol CPLPushChangeSessionImplementation <CPLChangeSessionImplementation>
- (void)commitChangeBatch:(CPLChangeBatch *)arg1 withCompletionHandler:(void (^)(NSError *, NSUInteger, CPLPushChangeTasks *, NSString *))arg2;
@end

