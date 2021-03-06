/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSSecureCoding, NSCopying> {

	double _duration;
	SUDOMElement* _sourceElement;
	long long _type;

}

@property (assign,nonatomic) double duration;                           //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) SUDOMElement * sourceElement;              //@synthesize sourceElement=_sourceElement - In the implementation block
@property (assign,nonatomic) long long type;                            //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(long long)transitionTypeFromString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(SUDOMElement *)sourceElement;
-(void)setSourceElement:(SUDOMElement *)arg1 ;
@end

