//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol SFNewNavigationControllerDelegate;

@interface SFNewNavigationController : UINavigationController
{
    id <SFNewNavigationControllerDelegate> _sfDelegate;
}

@property(nonatomic) __weak id <SFNewNavigationControllerDelegate> sfDelegate; // @synthesize sfDelegate=_sfDelegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)backDidClicked;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;

@end
