//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXWebContentMessage-Protocol.h>

@class NSDictionary, NSString;

@interface SXWebContentMessage : NSObject <SXWebContentMessage>
{
    NSString *_name;
    NSDictionary *_body;
}

@property(readonly, nonatomic) NSDictionary *body; // @synthesize body=_body;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

