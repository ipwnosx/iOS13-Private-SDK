//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFCharacteristicReadPolicy-Protocol.h>

@interface HFNotSupportedReadPolicy : NSObject <HFCharacteristicReadPolicy>
{
}

- (BOOL)_requiresNotificationsForCharacteristic:(id)arg1;
- (NSUInteger)evaluateWithCharacteristic:(id)arg1 traits:(out id )arg2;

@end

