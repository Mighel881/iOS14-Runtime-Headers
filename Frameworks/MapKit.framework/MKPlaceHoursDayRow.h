/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>
#import <libobjc.A.dylib/MKPlaceHoursViewDelegate.h>

@class MKPlaceHoursView, NSLayoutConstraint, NSString;

@interface MKPlaceHoursDayRow : MKPlaceSectionRowView <MKPlaceHoursViewDelegate> {

	MKPlaceHoursView* _hoursView;
	NSLayoutConstraint* _topAnchorToTopLabelBaseline;

}

@property (nonatomic,retain) MKPlaceHoursView * hoursView;                                  //@synthesize hoursView=_hoursView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topAnchorToTopLabelBaseline;              //@synthesize topAnchorToTopLabelBaseline=_topAnchorToTopLabelBaseline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBusinessHours:(id)arg1 frame:(CGRect)arg2 ;
-(void)_setUpViewsForPlaceHoursDayRow;
-(void)hoursViewDidUpdate:(id)arg1 ;
-(void)setHoursView:(MKPlaceHoursView *)arg1 ;
-(NSLayoutConstraint *)topAnchorToTopLabelBaseline;
-(void)setTopAnchorToTopLabelBaseline:(NSLayoutConstraint *)arg1 ;
-(MKPlaceHoursView *)hoursView;
-(void)_setUpConstraints;
@end
