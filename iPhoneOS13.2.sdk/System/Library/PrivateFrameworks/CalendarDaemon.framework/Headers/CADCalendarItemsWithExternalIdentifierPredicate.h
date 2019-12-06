//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADEventPredicate.h>


@class NSString;

@interface CADCalendarItemsWithExternalIdentifierPredicate : CADEventPredicate <NSSecureCoding>
{
    int _entityType;
    NSString *_externalIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) NSString *externalIdentifier; // @synthesize externalIdentifier=_externalIdentifier;
// - (void).cxx_destruct;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithExternalIdentifier:(id)arg1;
- (id)initWithExternalIdentifier:(id)arg1 entityType:(int)arg2;
// - (id)copyMatchingItemsWithDatabase:(struct CalDatabase )arg1;

@end

