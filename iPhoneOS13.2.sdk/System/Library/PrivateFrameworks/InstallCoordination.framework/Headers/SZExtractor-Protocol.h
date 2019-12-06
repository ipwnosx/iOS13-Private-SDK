//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSError, NSString;
@protocol SZExtractorDelegate;

@protocol SZExtractor <NSObject, NSSecureCoding>
@property(nonatomic) __weak id <SZExtractorDelegate> extractorDelegate;
- (void)terminateStreamWithError:(NSError *)arg1 completionBlock:(void (^)(NSError *))arg2;
- (void)finishStreamWithCompletionBlock:(void (^)(NSError *))arg1;
- (void)suspendStreamWithCompletionBlock:(void (^)(NSUInteger, NSError *))arg1;
- (void)supplyBytes:(NSData *)arg1 withCompletionBlock:(void (^)(NSError *, BOOL))arg2;
- (void)prepareForExtraction:(void (^)(NSUInteger, NSError *))arg1;

@optional
@property(readonly, nonatomic) BOOL doesConsumeExtractedData;
- (void)prepareForExtractionToPath:(NSString *)arg1 completionBlock:(void (^)(NSUInteger, NSError *))arg2;
- (BOOL)consumeExtractedDataIfNeeded;
@end

