//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSDictionary, NSString;

@interface NSError (CPSafeDescription)
+ (id)errorWithSYError:(long long)arg1 userInfo:(id)arg2;
+ (id)errorFromSYErrorInfo:(id)arg1;
@property(readonly, nonatomic) NSString *CPSafeDescription;
- (id)initWithSYError:(long long)arg1 userInfo:(id)arg2;
@property(readonly, nonatomic, getter=isFromRequest) BOOL fromRequest;
@property(readonly, nonatomic) NSDictionary *persistentUserInfo;
@property(readonly, nonatomic) NSDate *messageSent;
@property(readonly, nonatomic) NSString *idsIdentifier;
@property(readonly, nonatomic) unsigned short messageID;
@end

