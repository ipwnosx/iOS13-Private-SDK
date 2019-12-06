//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WebUIAlert : NSObject
{
    int _otherAction;
    long long _indexOfSelectedIdentity;
    int _type;
    int _defaultAction;
    int _tableAction;
    int _hideAction;
    id /* CDUnknownBlockType */ _actionHandler;
    NSString *_title;
    NSString *_bodyText;
    id _context;
    NSArray *_identities;
    NSArray *_titles;
}

@property(readonly, copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSArray *identities; // @synthesize identities=_identities;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) int hideAction; // @synthesize hideAction=_hideAction;
@property(readonly, nonatomic) int tableAction; // @synthesize tableAction=_tableAction;
@property(readonly, nonatomic) int defaultAction; // @synthesize defaultAction=_defaultAction;
@property(readonly, copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) id /* CDUnknownBlockType */ actionHandler; // @synthesize actionHandler=_actionHandler;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id selectedIdentity;
- (void)setSelectedTableItemIndex:(long long)arg1;
- (int)actionForButtonTag:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *buttonTitles;
- (id)_buttonTitleForAction:(int)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 defaultAction:(int)arg3 otherAction:(int)arg4 tableAction:(int)arg5;
- (id)initWithType:(int)arg1 title:(id)arg2 bodyText:(id)arg3 defaultAction:(int)arg4 otherAction:(int)arg5 tableAction:(int)arg6;

@end

