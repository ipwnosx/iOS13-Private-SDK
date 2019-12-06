//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSUUID;

@interface TITypologyRecord : NSObject <NSSecureCoding>
{
    double _timestamp;
    NSUUID *_recordID;
}

+ (id)recordClasses;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSUUID *recordID; // @synthesize recordID=_recordID;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
// - (void).cxx_destruct;
- (id)textSummaryForAutocorrection:(id)arg1;
- (void)replaceDocumentState:(id)arg1;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (id)changedText;
- (id)shortDescription;
- (id)textSummary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)applyToStatistic:(id)arg1;

@end

