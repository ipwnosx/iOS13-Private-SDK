//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSString;
@protocol HMBQueryableModelFieldCoder;

@protocol HMBQueryableModelFieldCoder <NSObject>
+ (id <HMBQueryableModelFieldCoder>)hmbDecodeQueryableParameter:(NSData *)arg1;
+ (NSData *)hmbEncodeQueryableParameter:(id <HMBQueryableModelFieldCoder>)arg1;

@optional
+ (NSString *)hmbDescriptionForEncodedQueryableVariable:(NSData *)arg1;
@end

