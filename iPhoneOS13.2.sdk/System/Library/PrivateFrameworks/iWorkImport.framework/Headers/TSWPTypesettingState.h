//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface TSWPTypesettingState : NSObject
{
    BOOL _oikomiSquish;
    unsigned int _hyphenationChar;
    double _startPos;
    double _endPos;
    NSDictionary *_hyphenationAttr;
}

@property(nonatomic) BOOL oikomiSquish; // @synthesize oikomiSquish=_oikomiSquish;
@property(retain, nonatomic) NSDictionary *hyphenationAttr; // @synthesize hyphenationAttr=_hyphenationAttr;
@property(nonatomic) unsigned int hyphenationChar; // @synthesize hyphenationChar=_hyphenationChar;
@property(nonatomic) double endPos; // @synthesize endPos=_endPos;
@property(nonatomic) double startPos; // @synthesize startPos=_startPos;
// - (void).cxx_destruct;
- (void)clear;

@end

