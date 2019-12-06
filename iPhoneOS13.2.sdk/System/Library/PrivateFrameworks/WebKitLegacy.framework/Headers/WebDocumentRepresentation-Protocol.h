//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSError, NSString, WebDataSource;

@protocol WebDocumentRepresentation <NSObject>
- (NSString *)title;
- (NSString *)documentSource;
- (BOOL)canProvideDocumentSource;
- (void)finishedLoadingWithDataSource:(WebDataSource *)arg1;
- (void)receivedError:(NSError *)arg1 withDataSource:(WebDataSource *)arg2;
- (void)receivedData:(NSData *)arg1 withDataSource:(WebDataSource *)arg2;
- (void)setDataSource:(WebDataSource *)arg1;
@end

