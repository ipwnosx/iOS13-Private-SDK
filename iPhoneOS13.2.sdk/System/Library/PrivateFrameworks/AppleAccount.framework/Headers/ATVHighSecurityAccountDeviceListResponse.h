//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSArray, NSDictionary, NSString;

@interface ATVHighSecurityAccountDeviceListResponse : AAResponse
{
}

@property(readonly, nonatomic) long long errorCode;
@property(readonly, nonatomic) NSString *errorMessage;
@property(readonly, nonatomic) NSString *errorTitle;
@property(readonly, nonatomic) NSDictionary *userDisplayStrings;
@property(readonly, nonatomic) NSArray *devices;

@end

