//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDTableUpgradeStep-Protocol.h>

@interface EDAddThreadTablesUpgradeStep : NSObject <EDTableUpgradeStep>
{
}

+ (int)runWithConnection:(id)arg1;
+ (id)threadRecipientsTableSchema;
+ (id)threadSendersTableSchema;
+ (id)threadMailboxesTableSchema;
+ (id)threadsTableSchema;
+ (id)threadScopesTableSchema;
+ (id)_schemaWithMessagesTable:(id)arg1 mailboxesTable:(id)arg2 conversationsTable:(id)arg3;

@end

