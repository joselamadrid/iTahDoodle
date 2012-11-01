//
//  AppDelegate.h
//  iTahDoodle
//
//  Created by Josemac on 01.11.12.
//  Copyright (c) 2012 Jose. All rights reserved.
//

#import <UIKit/UIKit.h>

NSString* docPath();

@interface AppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource>
{
    UITableView *taskTable;
    UITextField *taskField;
    UIButton *insertButton;    
    NSMutableArray *tasks;
}

- (void) addTask:(id)sender;

@property (strong, nonatomic) UIWindow *window;

@end
