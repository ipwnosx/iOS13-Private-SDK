//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPBody, CPZone;

__attribute__((visibility("hidden")))
@interface CPTextBoxMaker : NSObject
{
    CPBody *bodyZone;
    CPZone *mainZone;
}

+ (void)boxLayoutsIn:(id)arg1;
+ (void)promoteLayoutsIn:(id)arg1;
- (void)boxLayoutsIn:(id)arg1;
- (void)boxLayout:(id)arg1;
- (void)promoteLayoutsIn:(id)arg1;
- (void)promoteLayoutsInCertainRegions:(id)arg1;
- (BOOL)layoutIsSliced:(id)arg1;
- (void)rotate:(id)arg1;
- (void)rotateTextBox:(id)arg1;
- (void)makeBoxesWith:(id)arg1 parent:(id)arg2;

@end

