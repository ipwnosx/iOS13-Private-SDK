//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface ICTextStyle : NSObject
{
    unsigned int _ttStyle;
    NSDictionary *_attributes;
    NSString *_name;
}

+ (BOOL)autoListInsertionEnabled;
+ (void)setAutoListInsertionEnabled:(BOOL)arg1;
+ (id)styleForNamedStyle:(unsigned int)arg1;
+ (id)settingsDescriptionForNamedStyle:(unsigned int)arg1;
+ (id)icaxStyleDescriptionForNamedStyle:(unsigned int)arg1;
+ (id)titleForNamedStyle:(unsigned int)arg1;
+ (void)setNoteDefaultNamedStyle:(unsigned int)arg1;
+ (unsigned int)noteDefaultNamedStyle;
+ (unsigned int)validatedNamedStyle:(unsigned int)arg1;
+ (id)numberedStyle;
+ (id)dashStyle;
+ (id)bulletStyle;
+ (id)fixedWidthStyle;
+ (id)bodyStyle;
+ (id)subheadingStyle;
+ (id)headingStyle;
+ (id)titleStyle;
+ (id)defaultTextStyles;
@property unsigned int ttStyle; // @synthesize ttStyle=_ttStyle;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSDictionary *attributes; // @synthesize attributes=_attributes;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSString *icaxStyleDescription;
@property(readonly) BOOL isTextList;

@end

