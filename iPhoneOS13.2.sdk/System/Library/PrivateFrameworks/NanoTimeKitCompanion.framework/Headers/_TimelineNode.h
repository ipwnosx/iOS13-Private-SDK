//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _TimelineEntryNode;

@interface _TimelineNode : NSObject
{
    _TimelineNode *_rightNode;
    _TimelineNode *_leftNode;
}

@property(retain, nonatomic) _TimelineNode *leftNode; // @synthesize leftNode=_leftNode;
@property(retain, nonatomic) _TimelineNode *rightNode; // @synthesize rightNode=_rightNode;
// - (void).cxx_destruct;
@property(readonly, nonatomic) _TimelineEntryNode *leftEntryNode;
@property(readonly, nonatomic) _TimelineEntryNode *rightEntryNode;

@end

