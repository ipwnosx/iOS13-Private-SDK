//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class KSXMLWriter;

@interface KSXMLElementContentsProxy : NSProxy
{
    id _target;
    KSXMLWriter *_XMLWriter;
    NSUInteger _elementsCount;
}

// - (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)ks_prepareWithTarget:(id)arg1 XMLWriter:(id)arg2;

@end

