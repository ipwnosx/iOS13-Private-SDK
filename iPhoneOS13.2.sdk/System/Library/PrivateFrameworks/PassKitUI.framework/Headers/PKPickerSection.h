//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PKPickerSection : NSObject
{
    NSString *_title;
    NSString *_footer;
    NSMutableArray *_items;
}

+ (id)sectionWithTitle:(id)arg1 footer:(id)arg2;
+ (id)sectionWithTitle:(id)arg1;
@property(readonly, copy, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
// - (void).cxx_destruct;

@end

