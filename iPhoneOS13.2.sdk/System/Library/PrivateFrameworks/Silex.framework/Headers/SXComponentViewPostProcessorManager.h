//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewPostProcessorManager-Protocol.h>

@class NSMutableArray;

@interface SXComponentViewPostProcessorManager : NSObject <SXComponentViewPostProcessorManager>
{
    NSMutableArray *_processors;
}

@property(readonly, nonatomic) NSMutableArray *processors; // @synthesize processors=_processors;
// - (void).cxx_destruct;
- (void)removeProcessor:(id)arg1;
- (void)addProcessor:(id)arg1;
- (void)processComponent:(id)arg1 view:(id)arg2;
- (id)init;

@end

