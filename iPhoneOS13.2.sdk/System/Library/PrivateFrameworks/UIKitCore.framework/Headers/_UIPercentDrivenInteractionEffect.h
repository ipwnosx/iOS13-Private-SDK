//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@interface _UIPercentDrivenInteractionEffect : NSObject <UIInteractionEffect>
{
    id /* CDUnknownBlockType */ _progressBlock;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ progressBlock; // @synthesize progressBlock=_progressBlock;
// - (void).cxx_destruct;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (id)initWithProgressBlock:(CDUnknownBlockType)arg1;

@end

