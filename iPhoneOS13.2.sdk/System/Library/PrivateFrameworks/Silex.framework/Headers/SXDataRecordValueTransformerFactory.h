//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataRecordValueTransformerFactory-Protocol.h>

@protocol SXDOMObjectProviding;

@interface SXDataRecordValueTransformerFactory : NSObject <SXDataRecordValueTransformerFactory>
{
    id <SXDOMObjectProviding> _DOMObjectProvider;
}

@property(readonly, nonatomic) id <SXDOMObjectProviding> DOMObjectProvider; // @synthesize DOMObjectProvider=_DOMObjectProvider;
// - (void).cxx_destruct;
- (id)recordValueTransformerForDataDescriptor:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1;

@end

