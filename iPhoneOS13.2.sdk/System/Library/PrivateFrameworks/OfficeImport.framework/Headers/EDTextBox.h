//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDAlignmentInfo, EDProtection, EDString;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject
{
    EDString *mText;
    EDAlignmentInfo *mAlignmentInfo;
    EDProtection *mProtection;
}

+ (id)textBox;
// - (void).cxx_destruct;
- (id)description;
- (void)setProtection:(id)arg1;
- (id)protection;
- (void)setAlignmentInfo:(id)arg1;
- (id)alignmentInfo;
- (void)setText:(id)arg1;
- (id)text;

@end

