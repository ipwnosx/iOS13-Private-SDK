//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/CKDBMessage.h>

@class NSString;

@interface CKIMDBMessage : CKDBMessage
{
    int _personID;
    NSString *_personName;
}

@property(nonatomic) int personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *personName; // @synthesize personName=_personName;
// - (void).cxx_destruct;
- (void)markAsRead;
- (void)resetIMPerson;
- (void)dealloc;
- (id)initWithRecordID:(long long)arg1;

@end

