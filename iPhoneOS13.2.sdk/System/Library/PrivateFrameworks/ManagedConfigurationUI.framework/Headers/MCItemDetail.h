//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface MCItemDetail : NSObject
{
    BOOL _showCheckmarkView;
    BOOL _showCheckmark;
    NSString *_detailTitle;
    NSString *_detail;
    UIColor *_detailHighlightColor;
    NSString *_checkmarkText;
    UIColor *_checkmarkHighlightColor;
}

+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3;
+ (id)itemDetailWithDetailTitle:(id)arg1 detail:(id)arg2;
@property(nonatomic) BOOL showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(retain, nonatomic) UIColor *checkmarkHighlightColor; // @synthesize checkmarkHighlightColor=_checkmarkHighlightColor;
@property(retain, nonatomic) NSString *checkmarkText; // @synthesize checkmarkText=_checkmarkText;
@property(nonatomic) BOOL showCheckmarkView; // @synthesize showCheckmarkView=_showCheckmarkView;
@property(retain, nonatomic) UIColor *detailHighlightColor; // @synthesize detailHighlightColor=_detailHighlightColor;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
// - (void).cxx_destruct;
- (id)initWithDetailTitle:(id)arg1 detail:(id)arg2 detailHighlightColor:(id)arg3 showCheckmarkView:(BOOL)arg4 checkmarkText:(id)arg5 checkmarkHighlightColor:(id)arg6 showCheckmark:(BOOL)arg7;

@end

