//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@interface CEMDeviceWallpaperDeclaration_Status : CEMPayloadBase
{
}

+ (id)buildRequiredOnly;
+ (id)build;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id )arg2;

@end

