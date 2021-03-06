//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAsyncSerialQueue, FCCloudKitConnection, NSMapTable, NSMutableDictionary;

@interface FCPushNotificationCenter : NSObject
{
    FCCloudKitConnection *_connection;
    FCAsyncSerialQueue *_fetchQueue;
    NSMutableDictionary *_subscriptionsByID;
    NSMapTable *_recordZoneObservers;
}

@property(retain, nonatomic) NSMapTable *recordZoneObservers; // @synthesize recordZoneObservers=_recordZoneObservers;
@property(retain, nonatomic) NSMutableDictionary *subscriptionsByID; // @synthesize subscriptionsByID=_subscriptionsByID;
@property(retain, nonatomic) FCAsyncSerialQueue *fetchQueue; // @synthesize fetchQueue=_fetchQueue;
@property(retain, nonatomic) FCCloudKitConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)deleteSubscriptionWithID:(id)arg1 inDatabase:(id)arg2;
- (void)ensureSubscriptionExistsWithID:(id)arg1 database:(id)arg2 recordZone:(id)arg3 createBlock:(CDUnknownBlockType)arg4;
- (void)fetchAllSubscriptionsInDatabase:(id)arg1;
- (id)subscriptionIDForRecordZoneWithName:(id)arg1;
- (id)_handleRecordZoneNotification:(id)arg1;
- (id)handleRemoteNotification:(id)arg1;
- (void)removeSubscriptionForChangesToRecordZone:(id)arg1;
- (void)removeRecordZoneObserver:(id)arg1;
- (void)addObserver:(id)arg1 forChangesToRecordZone:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)initWithCloudKitConnection:(id)arg1;

@end

