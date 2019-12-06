//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceMemos/RCKeyPathObservance-Protocol.h>

@class NSArray;
@protocol NSObject;

__attribute__((visibility("hidden")))
@interface __RCKeyPathObservance : NSObject <RCKeyPathObservance>
{
    id <NSObject> _object;
    NSArray *_keyPaths;
    id /* CDUnknownBlockType */ _observer;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
@property(nonatomic) __weak id <NSObject> object; // @synthesize object=_object;
// - (void).cxx_destruct;
- (void)dealloc;
- (void)remove;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;

@end

