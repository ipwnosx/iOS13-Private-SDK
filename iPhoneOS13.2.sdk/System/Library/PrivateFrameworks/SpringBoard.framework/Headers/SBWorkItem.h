//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SBWorkItem : NSObject
{
    id /* CDUnknownBlockType */ _workBlock;
    NSDate *_creationDate;
}

@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ work; // @synthesize work=_workBlock;
// - (void).cxx_destruct;
- (id)initWithWork:(CDUnknownBlockType)arg1;

@end

