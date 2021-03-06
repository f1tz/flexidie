/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

//#import "CBLRemoteModelObject.h"

@class NSDate, CBLRemoteModelCollection, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CBLUser : NSObject { //CBLRemoteModelObject {
	BOOL _isDomainVerified;
	BOOL _blockedByMe;
	BOOL _isExplicitlyFollowedByMe;
	BOOL _isImplicitlyFollowedByMe;
	BOOL _isPartner;
	CBLRemoteModelCollection* _boards;
	CBLRemoteModelCollection* _secretBoards;
	CBLRemoteModelCollection* _allBoards;
	CBLRemoteModelCollection* _pins;
	CBLRemoteModelCollection* _likes;
	CBLRemoteModelCollection* _followers;
	CBLRemoteModelCollection* _following;
	CBLRemoteModelCollection* _boardsFollowing;
	NSDate* _createdAt;
	NSString* _username;
	NSString* _fullName;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _email;
	NSString* _tag;
	NSString* _location;
	NSString* _about;
	NSArray* _repinsFrom;
	NSString* _imageSmallURL;
	NSString* _imageMediumURL;
	NSString* _imageLargeURL;
	NSString* _websiteURL;
	NSString* _facebookURL;
	NSString* _twitterURL;
	NSArray* _pinThumbnailURLs;
	int _followerCount;
	int _followingCount;
	int _boardCount;
	int _pinCount;
	int _likeCount;
}
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* boardsFollowing;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* following;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* followers;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* likes;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* pins;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* allBoards;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* secretBoards;
@property(readonly, assign, nonatomic) CBLRemoteModelCollection* boards;
@property(readonly, assign, nonatomic) BOOL isActiveUser;
@property(readonly, assign, nonatomic) BOOL isPartner;
@property(readonly, assign, nonatomic) BOOL isImplicitlyFollowedByMe;
@property(readonly, assign, nonatomic) BOOL isExplicitlyFollowedByMe;
@property(assign, nonatomic, getter=isFollowedByMe) BOOL followedByMe;
@property(assign, nonatomic, getter=isBlockedByMe) BOOL blockedByMe;
@property(assign, nonatomic) int likeCount;
@property(assign, nonatomic) int pinCount;
@property(assign, nonatomic) int boardCount;
@property(assign, nonatomic) int followingCount;
@property(assign, nonatomic) int followerCount;
@property(readonly, assign, nonatomic) NSString* websiteDisplay;
@property(readonly, assign, nonatomic) BOOL isDomainVerified;
@property(retain, nonatomic) NSArray* pinThumbnailURLs;
@property(retain, nonatomic) NSString* twitterURL;
@property(retain, nonatomic) NSString* facebookURL;
@property(retain, nonatomic) NSString* websiteURL;
@property(retain, nonatomic) NSString* imageLargeURL;
@property(retain, nonatomic) NSString* imageMediumURL;
@property(retain, nonatomic) NSString* imageSmallURL;
@property(retain, nonatomic) NSArray* repinsFrom;
@property(retain, nonatomic) NSString* about;
@property(retain, nonatomic) NSString* location;
@property(retain, nonatomic) NSString* tag;
@property(retain, nonatomic) NSString* email;
@property(retain, nonatomic) NSString* lastName;
@property(retain, nonatomic) NSString* firstName;
@property(retain, nonatomic) NSString* fullName;
@property(retain, nonatomic) NSString* username;
@property(retain, nonatomic) NSDate* createdAt;
+(id)additionalDetailFields;
+(id)propertyArrayElementClasses;
+(id)propertyTransformerClasses;
+(id)propertyAliases;
+(id)remoteEntityName;
//-(void).cxx_destruct;
-(void)reportWithReasonKey:(id)reasonKey explanation:(id)explanation success:(id)success andFailure:(id)failure;
-(id)resourceURL;
-(id)description;
@end

