//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BrightnessSystem : NSObject
{
    BOOL _initializationComplete;
}

- (void)registerNotificationBlock:(CDUnknownBlockType)arg1;
- (BOOL)isAlsSupported;
- (id)copyPropertyForKey:(id)arg1;
- (BOOL)setProperty:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

