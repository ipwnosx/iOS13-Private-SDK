//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlPanelRule-Protocol.h>

@interface HUControlPanelFilterRule : NSObject <HUControlPanelRule>
{
    double _priority;
    id /* CDUnknownBlockType */ _filter;
}

+ (id)ruleWithFilter:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) id /* CDUnknownBlockType */ filter; // @synthesize filter=_filter;
@property(nonatomic) double priority; // @synthesize priority=_priority;
// - (void).cxx_destruct;
- (BOOL)ruleMatchesItem:(id)arg1;
- (id)initWithFilter:(CDUnknownBlockType)arg1;

@end

