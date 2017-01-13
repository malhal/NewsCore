//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCloudKitConnectionDelegate-Protocol.h>
#import <NewsCore/FCPrivateChannelMembershipObserving-Protocol.h>

@class FCAppConfiguration, FCArticleController, FCArticleListRecordSource, FCArticleRecordSource, FCChannelMembershipController, FCChannelMembershipRecordSource, FCClientEndpointConnection, FCCloudKitConnection, FCCommandQueue, FCFeedManager, FCFlintResourceManager, FCPersonalizationData, FCPrivateChannelMembershipController, FCPrivateDataStorage, FCPushNotificationCenter, FCReadingHistory, FCReadingList, FCResourceRecordSource, FCSubscriptionController, FCSubscriptionList, FCTagController, FCTagRecordSource, FCUserInfo, FCWebArchiveSource, NSString;
@protocol FCFlintHelper;

@interface FCCloudContext : NSObject <FCCloudKitConnectionDelegate, FCPrivateChannelMembershipObserving>
{
    _Bool _runningPPT;
    FCPrivateDataStorage *_privateDataStorage;
    FCSubscriptionController *_subscriptionController;
    FCSubscriptionList *_subscriptionList;
    FCReadingHistory *_readingHistory;
    FCReadingList *_readingList;
    FCPrivateChannelMembershipController *_privateChannelMembershipController;
    FCPersonalizationData *_personalizationData;
    FCUserInfo *_userInfo;
    FCFeedManager *_feedManager;
    FCArticleController *_articleController;
    FCTagController *_tagController;
    FCPushNotificationCenter *_pushNotificationCenter;
    FCFlintResourceManager *_flintResourceManager;
    FCAppConfiguration *_appConfiguration;
    id <FCFlintHelper> _flintHelper;
    FCCloudKitConnection *_cloudKitConnection;
    FCClientEndpointConnection *_endPointConnection;
    FCCommandQueue *_endPointCommandQueue;
    FCCommandQueue *_userInfoCommandQueue;
    FCArticleRecordSource *_articleRecordSource;
    FCTagRecordSource *_tagRecordSource;
    FCChannelMembershipController *_channelMembershipController;
    FCResourceRecordSource *_resourceRecordSource;
    FCWebArchiveSource *_webArchiveSource;
    FCArticleListRecordSource *_articleListRecordSource;
    FCChannelMembershipRecordSource *_channelMembershipRecordSource;
}

+ (id)testingContext;
@property(retain, nonatomic) FCChannelMembershipRecordSource *channelMembershipRecordSource; // @synthesize channelMembershipRecordSource=_channelMembershipRecordSource;
@property(readonly, nonatomic) FCArticleListRecordSource *articleListRecordSource; // @synthesize articleListRecordSource=_articleListRecordSource;
@property(readonly, nonatomic) FCWebArchiveSource *webArchiveSource; // @synthesize webArchiveSource=_webArchiveSource;
@property(readonly, nonatomic) FCResourceRecordSource *resourceRecordSource; // @synthesize resourceRecordSource=_resourceRecordSource;
@property(readonly, nonatomic) FCChannelMembershipController *channelMembershipController; // @synthesize channelMembershipController=_channelMembershipController;
@property(readonly, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(readonly, nonatomic) FCArticleRecordSource *articleRecordSource; // @synthesize articleRecordSource=_articleRecordSource;
@property(nonatomic, getter=isRunningPPT) _Bool runningPPT; // @synthesize runningPPT=_runningPPT;
@property(readonly, nonatomic) FCCommandQueue *userInfoCommandQueue; // @synthesize userInfoCommandQueue=_userInfoCommandQueue;
@property(readonly, nonatomic) FCCommandQueue *endPointCommandQueue; // @synthesize endPointCommandQueue=_endPointCommandQueue;
@property(readonly, nonatomic) FCClientEndpointConnection *endPointConnection; // @synthesize endPointConnection=_endPointConnection;
@property(readonly, nonatomic) FCCloudKitConnection *cloudKitConnection; // @synthesize cloudKitConnection=_cloudKitConnection;
@property(nonatomic) __weak id <FCFlintHelper> flintHelper; // @synthesize flintHelper=_flintHelper;
@property(retain, nonatomic) FCAppConfiguration *appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(readonly, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(readonly, nonatomic) FCPushNotificationCenter *pushNotificationCenter; // @synthesize pushNotificationCenter=_pushNotificationCenter;
@property(readonly, nonatomic) FCTagController *tagController; // @synthesize tagController=_tagController;
@property(readonly, nonatomic) FCArticleController *articleController; // @synthesize articleController=_articleController;
@property(readonly, nonatomic) FCFeedManager *feedManager; // @synthesize feedManager=_feedManager;
@property(readonly, nonatomic) FCUserInfo *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) FCPersonalizationData *personalizationData; // @synthesize personalizationData=_personalizationData;
@property(readonly, nonatomic) FCPrivateChannelMembershipController *privateChannelMembershipController; // @synthesize privateChannelMembershipController=_privateChannelMembershipController;
@property(readonly, nonatomic) FCReadingList *readingList; // @synthesize readingList=_readingList;
@property(readonly, nonatomic) FCReadingHistory *readingHistory; // @synthesize readingHistory=_readingHistory;
@property(readonly, nonatomic) FCSubscriptionList *subscriptionList; // @synthesize subscriptionList=_subscriptionList;
@property(readonly, nonatomic) FCSubscriptionController *subscriptionController; // @synthesize subscriptionController=_subscriptionController;
@property(retain, nonatomic) FCPrivateDataStorage *privateDataStorage; // @synthesize privateDataStorage=_privateDataStorage;
- (void).cxx_destruct;
- (void)_updateRequestAnonymity;
- (void)privateChannelMembershipControllerDidChange:(id)arg1;
@property(readonly, nonatomic) _Bool hasBeenRateLimited;
- (void)cloudKitConnectionPrivateDatabaseHasBeenRateLimited:(id)arg1;
- (void)cloudKitConnectionContentDatabaseHasBeenRateLimited:(id)arg1;
- (void)cloudKitConnection:(id)arg1 didDropRecordZonesWithIDs:(id)arg2;
- (id)fetchEndOfArticleDataForHeadline:(id)arg1 initialRelatedHeadlineCount:(unsigned long long)arg2 initialPublisherHeadlineCount:(unsigned long long)arg3 totalRelatedHeadlineCount:(unsigned long long)arg4 totalPublisherHeadlineCount:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getCoverImageForFeed:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enableFlushing;
- (id)initWithCloudKitConnection:(id)arg1 privateDataActionProvider:(id)arg2;
- (id)initWithContentContainerIdentifier:(id)arg1 privateContainerIdentifier:(id)arg2 environment:(long long)arg3 privateDataActionProvider:(id)arg4;
- (id)initWithUserDefaults:(id)arg1 privateDataActionProvider:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
