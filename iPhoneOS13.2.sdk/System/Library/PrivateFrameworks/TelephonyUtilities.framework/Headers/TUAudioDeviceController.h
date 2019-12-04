//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUAudioDeviceControllerActions-Protocol.h>

@class AVAudioClient, AVAudioDevice, NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions>
{
    AVAudioClient *_audioClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSHashTable *_delegates;
    id <TUAudioDeviceControllerActions> _actionsDelegate;
}

@property(nonatomic) __weak id <TUAudioDeviceControllerActions> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) AVAudioClient *audioClient; // @synthesize audioClient=_audioClient;
@property(readonly, nonatomic) NSArray *outputDevices;
@property(readonly, nonatomic) NSArray *inputDevices;
@property(readonly, nonatomic) NSArray *devices;
- (oneway void)setCurrentAudioOutputDeviceToDeviceWithUID:(id)arg1;
@property(retain, nonatomic) AVAudioDevice *currentOutputDevice;
- (oneway void)setCurrentAudioInputDeviceToDeviceWithUID:(id)arg1;
@property(retain, nonatomic) AVAudioDevice *currentInputDevice;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)choosePreferredDeviceIfNecessary;
@property(readonly, copy) NSString *debugDescription;
- (id)init;
- (id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
