//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNTask : NSObject
{
    BOOL _cancelled;
    NSString *_name;
}

+ (id)taskWithName:(id)arg1 error:(id)arg2;
+ (id)taskWithError:(id)arg1;
+ (id)taskWithName:(id)arg1 result:(id)arg2;
+ (id)taskWithResult:(id)arg1;
+ (id)taskWithName:(id)arg1 subtasks:(id)arg2;
+ (id)taskWithName:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)taskWithBlock:(CDUnknownBlockType)arg1;
@property(copy) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)description;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)run;
- (id)run:(id )arg1;
- (BOOL)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (id)initWithName:(id)arg1;
- (id)init;

@end

