//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;
@protocol WDUserActivityResponder;

__attribute__((visibility("hidden")))
@interface _WDActivityNode : NSObject
{
    NSMutableDictionary *_responderActivity;
    NSDictionary *_nextResponderActivity;
    NSMapTable *_responderTable;
    id <WDUserActivityResponder> _responder;
    id <WDUserActivityResponder> _nextResponder;
}

@property(nonatomic) __weak id <WDUserActivityResponder> nextResponder; // @synthesize nextResponder=_nextResponder;
@property(nonatomic) __weak id <WDUserActivityResponder> responder; // @synthesize responder=_responder;
// - (void).cxx_destruct;
- (id)_nextNode;
- (void)addActivitiesToArray:(id)arg1 currentNode:(id)arg2;
- (id)transitionActivityForResponder:(id)arg1 newResponder:(id)arg2 transitionDictionary:(id)arg3;
- (id)changeActivityForResponder:(id)arg1 activityDictionary:(id)arg2;
- (id)initWithResponder:(id)arg1;
- (id)description;

@end

