//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <HomeKitDaemon/HMFPrivateDescriptionFormatter-Protocol.h>

@interface HMDAccountHandleFormatter : NSFormatter <HMFPrivateDescriptionFormatter>
{
}

+ (id)defaultFormatter;
- (id)privateStringForObjectValue:(id)arg1;
- (id)accountHandleFromString:(id)arg1;
- (BOOL)getObjectValue:(out id )arg1 forString:(id)arg2 errorDescription:(out id )arg3;
- (id)stringForObjectValue:(id)arg1;

@end

