//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolbox/AUAudioUnit.h>

@class AUAudioUnitBus, AUAudioUnitBusArray;

__attribute__((visibility("hidden")))
@interface REAUHostAudioUnit : AUAudioUnit
{
    AUAudioUnitBus *_inputBus;
    AUAudioUnitBusArray *_inputBusArray;
    AUAudioUnitBus *_outputBus;
    AUAudioUnitBusArray *_outputBusArray;
    id /* CDUnknownBlockType */ _cachedRenderBlock;
//     struct atomic<bool> _running;
    BOOL _prepared;
    BOOL _shouldPrepareTargetOnAllocate;
//     struct mutex _targetPreparationMutex;
    double _currentHostingSampleRate;
    unsigned int _currentHostingMaxFramesToRender;
//     struct AudioBufferList _abl;
    float _buffer;
//     struct atomic<float> _signalPresent;
    double _signalPresentDecayPerSample;
//     struct shared_ptr<AudioStreamRecordingManager::StreamWriter> _recordingStreamWriter;
    unsigned int _desiredLayoutTag;
    AUAudioUnit *_target;
}

@property(retain, nonatomic) AUAudioUnit *target; // @synthesize target=_target;
@property(nonatomic) unsigned int desiredLayoutTag; // @synthesize desiredLayoutTag=_desiredLayoutTag;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (id)outputBusses;
- (id)inputBusses;
- (id)channelCapabilities;
- (CDUnknownBlockType)internalRenderBlock;
- (void)prepareTargetAU;
@property(nonatomic) float signalPresent; // @dynamic signalPresent;
@property(nonatomic, getter=isRunning) BOOL running;
@property(nonatomic, getter=isPrepared) BOOL prepared;
- (void)deallocateRenderResources;
- (BOOL)allocateRenderResourcesAndReturnError:(id )arg1;
- (void)dealloc;
// - (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id )arg3;

@end

