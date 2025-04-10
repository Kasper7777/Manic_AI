Features
1. Time & Scheduling
•	Clock & Timetable
o	UManicClockPluginBPLibrary: Set or advance in-game time (SetInGameClockTime, TickManicClockAndGet).
o	FManicTime: Defines day/hour/minute/second slots.
o	UManicTimetableNodeBPLibrary: Finds the active timetable slot for a given time.
o	UManicServiceSetTimeKey (BT Service): Updates Blackboard keys with the current time or an active slot name.
•	Day of the Week
o	UManicDayOfWeekBPLibrary: Converts day numbers into weekday strings (e.g. 1 → “Monday”).
•	Time Events
o	UManicTimeEventBPLibrary: Detect if current time has reached a target (daily or once-only triggers).
________________________________________
2. AI Behaviour Tasks
•	Find & Move
o	UManicFindActorInRegion: Searches a radius for an actor of a specific class, checking a boolean property (e.g. bIsFree).
o	UManicTaskFindSpotInArea: Randomly picks a reachable point within a radius.
o	UManicTaskGoToLocation: Finds a random spot and moves there, re-trying if it times out.
o	UManicTaskMoveToTarget: Moves AI to a Blackboard actor or location, with obstacle checks.
•	Obstacle Avoidance & Stuck Detection
o	UManicObsAvoidance: Offsets the AI’s goal if blocked, detects if it’s stuck, and fails if movement is impossible.
•	Actor Finding Variants
o	UManicTaskFindActor: Finds the closest actor of a given class.
o	UManicTaskFindFreeActor: Similar to above, but ensures no other AI is targeting that actor.
•	Interaction
o	UManicInteract: Executes a custom “PerformGenericAction” on the AI Controller and optionally waits.
________________________________________
3. Dynamic Needs System
•	UDynamicManicNeedsComponent
o	Tracks multiple “needs” (e.g. hunger), each ticking up or down at a chosen rate.
o	Fires OnAnyNeedThresholdCrossed when a threshold is reached and OnAllNeedsUpdated every tick call.
o	Add/remove or adjust needs at runtime (AddNeed, RemoveNeedAtIndex, etc.).
________________________________________
4. AI Controller
•	AManicAiController
o	Holds a ControllerTimetable array (alternative to the service’s internal timetable).
o	ActivityMap (string → soft object pointers).
o	SetActivityKeyOnBlackboard: Loads an actor from the map and sets it in a Blackboard key.
o	PerformGenericAction: A Blueprint event for AI-specific actions.



