//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVInternalDeviceList;

@interface AVAudioDeviceList : NSObject
{
    AVInternalDeviceList *_internalList;
}

+ (id)deviceForUID:(id)arg1;
+ (BOOL)setInputDevice:(id)arg1;
+ (id)currentInputDevice;
+ (id)defaultOutputDevice;
+ (id)defaultInputDevice;
- (id)outputDevices;
- (id)inputDevices;
- (id)devices;
@property(copy, nonatomic) id /* CDUnknownBlockType */ changeListener;
- (void)dealloc;
- (id)init;

@end

