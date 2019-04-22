//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UITableView;
@protocol SFReimbursementTypeVCDelegate;

@interface SFReimbursementTypeVC : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id <SFReimbursementTypeVCDelegate> _delegate;
    NSArray *_defaultArray;
    UITableView *_myTabelView;
    NSMutableArray *_dataSourceArray;
}

@property(retain, nonatomic) NSMutableArray *dataSourceArray; // @synthesize dataSourceArray=_dataSourceArray;
@property(retain, nonatomic) UITableView *myTabelView; // @synthesize myTabelView=_myTabelView;
@property(retain, nonatomic) NSArray *defaultArray; // @synthesize defaultArray=_defaultArray;
@property(nonatomic) __weak id <SFReimbursementTypeVCDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)initViews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

