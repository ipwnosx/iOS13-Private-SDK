//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/DOMObject.h>

@class DOMMediaList, DOMNode, NSString;

@interface DOMStyleSheet : DOMObject
{
}

@property(readonly) DOMMediaList *media;
@property(readonly, copy) NSString *title;
@property(readonly, copy) NSString *href;
@property(readonly) DOMStyleSheet *parentStyleSheet;
@property(readonly) DOMNode *ownerNode;
@property BOOL disabled;
@property(readonly, copy) NSString *type;
- (void)dealloc;

@end

