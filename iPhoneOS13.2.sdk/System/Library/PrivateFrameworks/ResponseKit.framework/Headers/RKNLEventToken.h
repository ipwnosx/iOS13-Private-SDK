//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RKNLEventToken : NSObject
{
    unsigned int _tokenID;
    NSString *_string;
    long long _location;
    long long _length;
}

@property long long length; // @synthesize length=_length;
@property long long location; // @synthesize location=_location;
@property unsigned int tokenID; // @synthesize tokenID=_tokenID;
@property(retain) NSString *string; // @synthesize string=_string;
// - (void).cxx_destruct;
- (id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3;

@end

