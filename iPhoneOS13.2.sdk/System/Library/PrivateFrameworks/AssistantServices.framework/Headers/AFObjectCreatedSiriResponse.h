//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/AFSiriResponse.h>

@class NSURL;

@interface AFObjectCreatedSiriResponse : AFSiriResponse
{
    NSURL *_objectIdentifier;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_objectIdentifier;
- (id)_initWithRequest:(id)arg1 objectIdentifier:(id)arg2;

@end

