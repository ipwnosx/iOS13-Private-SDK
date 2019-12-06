//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioToolboxCore/_AURemoteParameterSynchronization-Protocol.h>

@class AUAudioUnitPreset, AUAudioUnitProperty, AUAudioUnitViewConfiguration, AVAudioFormat, CAXPCObject, MIDICIProfile, NSArray, NSData, NSDictionary, NSObject, NSString;
@protocol OS_xpc_object;

@protocol AUAudioUnitXPCProtocol <_AURemoteParameterSynchronization>
- (void)presetStateFor:(AUAudioUnitPreset *)arg1 reply:(void (^)(NSError *, NSDictionary *))arg2;
- (void)deleteUserPreset:(AUAudioUnitPreset *)arg1 reply:(void (^)(NSError *))arg2;
- (void)saveUserPreset:(AUAudioUnitPreset *)arg1 state:(NSDictionary *)arg2 reply:(void (^)(NSError *))arg3;
- (void)loadUserPresets:(void (^)(NSError *, NSArray *))arg1;
- (void)disableProfile:(MIDICIProfile *)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(void (^)(NSError *))arg4;
- (void)enableProfile:(MIDICIProfile *)arg1 cable:(unsigned char)arg2 onChannel:(unsigned char)arg3 reply:(void (^)(NSError *))arg4;
- (void)profileStateForCable:(unsigned char)arg1 channel:(unsigned char)arg2 reply:(void (^)(NSError *, MIDICIProfileState *))arg3;
- (void)selectViewConfiguration:(AUAudioUnitViewConfiguration *)arg1 reply:(void (^)(NSError *))arg2;
- (void)supportedViewConfigurations:(NSArray *)arg1 reply:(void (^)(NSError *, NSIndexSet *))arg2;
- (void)parametersForOverviewWithCount:(long long)arg1 reply:(void (^)(NSError *, NSArray *))arg2;
- (void)parameterNode:(NSString *)arg1 displayNameWithLength:(long long)arg2 reply:(void (^)(NSError *, NSString *))arg3;
- (void)parameterValueFromString:(NSString *)arg1 address:(NSUInteger)arg2 reply:(void (^)(NSError *, float))arg3;
- (void)parameterStringFromValue:(float)arg1 currentValue:(BOOL)arg2 address:(NSUInteger)arg3 reply:(void (^)(NSError *, NSString *))arg4;
- (void)getParameter:(NSUInteger)arg1 reply:(void (^)(NSError *, float))arg2;
- (void)getParameterTree:(void (^)(NSError *, AUParameterTree *))arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2 reply:(void (^)(NSError *, NSArray *))arg3;
- (void)valueForKey:(NSString *)arg1 reply:(void (^)(NSError *, id))arg2;
- (void)removePropertyObserver:(AUAudioUnitProperty *)arg1 context:(NSUInteger)arg2 reply:(void (^)(NSError *))arg3;
- (void)addPropertyObserver:(AUAudioUnitProperty *)arg1 context:(NSUInteger)arg2 reply:(void (^)(NSError *))arg3;
- (void)setValue:(id)arg1 forProperty:(AUAudioUnitProperty *)arg2 reply:(void (^)(NSError *, NSArray *))arg3;
- (void)valueForProperty:(AUAudioUnitProperty *)arg1 reply:(void (^)(NSError *, id))arg2;
- (void)setBusCount:(NSUInteger)arg1 scope:(unsigned int)arg2 reply:(void (^)(NSError *, NSArray *))arg3;
- (void)setBusFormat:(unsigned int)arg1 scope:(unsigned int)arg2 format:(AVAudioFormat *)arg3 reply:(void (^)(NSError *, NSArray *))arg4;
- (void)reset:(void (^)(NSError *))arg1;
- (void)uninitialize:(void (^)(NSError *))arg1;
- (void)setWorkIntervalPort:(NSObject<OS_xpc_object> *)arg1 reply:(void (^)(NSError *))arg2;
- (void)initialize2:(int)arg1 formats:(NSData *)arg2 maxFrames:(NSUInteger)arg3 buffer:(CAXPCObject *)arg4 bufferSize:(unsigned int)arg5 beginSem:(CAXPCObject *)arg6 endSem:(CAXPCObject *)arg7 reply:(void (^)(NSError *))arg8;
- (void)initialize:(NSUInteger)arg1 reply:(void (^)(NSError *, NSUInteger, NSUInteger, NSUInteger, NSData *, BOOL))arg2;
- (void)getBusses:(unsigned int)arg1 reply:(void (^)(NSError *, NSArray *))arg2;
- (void)close:(void (^)(NSError *))arg1;
- (void)open:(void (^)(NSError *, BOOL, BOOL, NSArray *, NSArray *, BOOL, BOOL, int))arg1;
@end

