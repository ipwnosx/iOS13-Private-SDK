//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolboxCore/AUAudioUnitV2Bridge.h>

__attribute__((visibility("hidden")))
@interface AUHALOutputUnit : AUAudioUnitV2Bridge
{
    id /* CDUnknownBlockType */ _outputProvider;
    id /* CDUnknownBlockType */ _inputHandler;
    BOOL _inputWasEnabled;
    BOOL _outputWasEnabled;
    BOOL _inputBusEnabled;
    int _renderObserverToken;
//     struct unordered_map<long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long), std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, void (^)(unsigned int, const AudioTimeStamp *, unsigned int, long)>>> _renderObservers;
}

- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)stopHardware;
- (BOOL)startHardwareAndReturnError:(id )arg1;
- (BOOL)isRunning;
@property(nonatomic, getter=isOutputEnabled) BOOL outputEnabled;
@property(nonatomic, getter=isInputEnabled) BOOL inputEnabled;
- (BOOL)canPerformOutput;
- (BOOL)canPerformInput;
- (void)setInputHandler:(CDUnknownBlockType)arg1;
- (void)setOutputProvider:(CDUnknownBlockType)arg1;
- (int)enableBus:(unsigned int)arg1 scope:(unsigned int)arg2 enable:(BOOL)arg3;
- (CDUnknownBlockType)_inputHandler;
- (CDUnknownBlockType)outputProvider;
- (void)removeRenderObserver:(/* void * CDUnknownFunctionPointerType */)arg1 userData:(void )arg2;
- (void)addRenderObserver:(/* void * CDUnknownFunctionPointerType */)arg1 userData:(void )arg2;
- (void)removeRenderObserver:(long long)arg1;
- (long long)tokenByAddingRenderObserver:(CDUnknownBlockType)arg1;
- (void)initAUHALOutputUnit;
- (void)dealloc;
// - (id)initWithAudioUnit:(struct OpaqueAudioComponentInstance )arg1 description:(struct AudioComponentDescription)arg2;
// - (id)initWithComponentDescription:(struct AudioComponentDescription)arg1 options:(unsigned int)arg2 error:(id )arg3;

@end

