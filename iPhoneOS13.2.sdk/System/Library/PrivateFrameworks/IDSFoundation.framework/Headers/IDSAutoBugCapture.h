//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IDSAutoBugCapture : NSObject
{
}

+ (void)triggerCaptureWithEvent:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)triggerCaptureWithEvent:(long long)arg1 destinations:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (BOOL)isSupported;

@end

