//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMDocument, IKDOMElement, IKJSObject, NSDictionary;

@protocol IKJSMenuBarDocument <JSExport>
- (void)setSelectedItem:(IKJSObject *)arg1:(NSDictionary *)arg2;
- (IKDOMElement *)getSelectedItem;
- (void)setDocument:(IKDOMDocument *)arg1:(IKJSObject *)arg2:(NSDictionary *)arg3;
- (IKDOMDocument *)getDocument:(IKJSObject *)arg1;
@end
