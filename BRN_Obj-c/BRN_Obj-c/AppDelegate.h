//
//  AppDelegate.h
//  BRN_Obj-c
//
//  Created by student on 9/9/17.
//  Copyright © 2017 RGV. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

