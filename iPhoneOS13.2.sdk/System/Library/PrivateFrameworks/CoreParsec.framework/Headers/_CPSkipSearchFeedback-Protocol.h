//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSString;

@protocol _CPSkipSearchFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int triggerEvent;
@property(copy, nonatomic) NSString *input;
@property(nonatomic) NSUInteger timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

