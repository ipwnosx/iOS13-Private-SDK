//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCFontName : NSObject
{
    NSString *_styleName;
    NSString *_fullName;
}

@property(readonly, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(readonly, nonatomic) NSString *styleName; // @synthesize styleName=_styleName;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)equivalentDictionary;
- (id)initWithStyleName:(id)arg1 fullName:(id)arg2;

@end

