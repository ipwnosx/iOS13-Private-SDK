//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _ICQPageSpecification : NSObject
{
    BOOL _hasCancelButtonForBack;
    NSString *_pageIdentifier;
    NSString *_pageTitle;
    NSString *_pageClassIdentifier;
}

@property(retain, nonatomic) NSString *pageClassIdentifier; // @synthesize pageClassIdentifier=_pageClassIdentifier;
@property(nonatomic) BOOL hasCancelButtonForBack; // @synthesize hasCancelButtonForBack=_hasCancelButtonForBack;
@property(retain, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(retain, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
// - (void).cxx_destruct;
- (id)copyWithBindings:(id)arg1;
- (id)debugDescription;

@end

