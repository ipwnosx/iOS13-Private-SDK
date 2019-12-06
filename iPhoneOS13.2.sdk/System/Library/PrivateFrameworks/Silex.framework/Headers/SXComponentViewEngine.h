//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentViewEngine-Protocol.h>

@class SXComponentTypeMatching;
@protocol SXComponentViewPostProcessorManager;

@interface SXComponentViewEngine : NSObject <SXComponentViewEngine>
{
    SXComponentTypeMatching *_factoryMatching;
    id <SXComponentViewPostProcessorManager> _postProcessorManager;
}

@property(readonly, nonatomic) id <SXComponentViewPostProcessorManager> postProcessorManager; // @synthesize postProcessorManager=_postProcessorManager;
@property(readonly, nonatomic) SXComponentTypeMatching *factoryMatching; // @synthesize factoryMatching=_factoryMatching;
// - (void).cxx_destruct;
- (void)removeFactory:(id)arg1;
- (void)addFactory:(id)arg1;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithPostProcessorManager:(id)arg1;

@end

