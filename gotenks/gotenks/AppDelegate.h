//
//  AppDelegate.h
//  gotenks
//
//  Created by Mariano Abdala on 2/8/15.
//  Copyright (c) 2015 Mariano Abdala. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *serviceManagedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectContext *fetchManagedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectContext *saveManagedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;


@end

