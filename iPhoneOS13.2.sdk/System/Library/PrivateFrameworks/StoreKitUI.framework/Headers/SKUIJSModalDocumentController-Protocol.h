//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class IKDOMDocument, NSArray, NSDictionary;

@protocol SKUIJSModalDocumentController <JSExport>
@property(readonly, retain, nonatomic) NSArray *documents;
- (void)replaceDocument:(IKDOMDocument *)arg1:(IKDOMDocument *)arg2:(NSDictionary *)arg3;
- (void)pushDocument:(IKDOMDocument *)arg1:(NSDictionary *)arg2;
- (void)popToDocument:(IKDOMDocument *)arg1;
- (void)popDocument;
@end

