//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@interface TLKTableColumnAlignment : TLKObject
{
    BOOL _isEqualWidth;
    NSUInteger _columnAlignment;
    long long _dataAlignment;
}

@property(nonatomic) BOOL isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) long long dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) NSUInteger columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)description;
- (long long)textAlignment;

@end

