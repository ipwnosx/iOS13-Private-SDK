//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGThreadParser : NSObject
{
}

+ (id)ipsosMessageWithSearchableItem:(id)arg1;
+ (void)enumeratePreviousMessages:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)enumeratePreviousMessages:(id)arg1 inEntity:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (id)nextMessage:(id)arg1;
+ (id)nextMessage:(id)arg1 entity:(id)arg2;
+ (id)emailFrom:(id)arg1;
+ (id)emailFrom:(id)arg1 entity:(id)arg2;
+ (id)stripChevrons:(id)arg1;

@end

