//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, UITextPosition;

__attribute__((visibility("hidden")))
@interface _UIPositionedAttributedString : NSObject
{
    NSAttributedString *_string;
    UITextPosition *_position;
}

+ (id)attributedString:(id)arg1 atPosition:(id)arg2;
@property(readonly, nonatomic) UITextPosition *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSAttributedString *string; // @synthesize string=_string;
// - (void).cxx_destruct;
- (id)description;

@end

